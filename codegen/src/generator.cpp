/*
    Copyright 2021 Paul Colby

    This file is part of QtFit.

    QtFit is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtFit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtFit.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "generator.h"

#include <QDebug>
#include <QDirIterator>
#include <QJsonParseError>
#include <QRegularExpression>

#include <grantlee/templateloader.h>

#define QSL(str) QStringLiteral(str) // Shorten the QStringLiteral macro for readability.

Generator::Generator(const QDir &outputDir)
    : outputDir(outputDir)
{
    Q_ASSERT(outputDir.exists());

    auto loader = QSharedPointer<Grantlee::FileSystemTemplateLoader>::create();
    loader->setTemplateDirs(QStringList() << QSL(":/templates"));
    engine.addTemplateLoader(loader);
    engine.setSmartTrimEnabled(true);

    QDirIterator dir(QSL(":/templates"), QDir::Files|QDir::Readable, QDirIterator::Subdirectories);
    while (dir.hasNext()) {
        const QString name = dir.next().mid(dir.path().size()+1);
        qInfo() << "loading template" << name;
        const auto tmplate = engine.loadByName(name);
        if (tmplate->error()) {
            qWarning() << "error loading template" << name << tmplate->errorString();
            continue;
        }
        templates.insert(name, tmplate);
    }
}

int Generator::generate()
{
    Grantlee::Context context;
    context.insert(QSL("ProjectName"), QSL("QtFit"));
    int counts[2];
    if ((counts[0] = processMessages(context)) < 0) return counts[0];
    if ((counts[1] = processTypes(context)) < 0) return counts[1];
    return counts[0] + counts[1];
}

int Generator::processMessages(Grantlee::Context &context)
{
    Q_UNUSED(context)

    QFile file(QSL(":/fit-sdk/ProfileMessages.tsv"));
    if (!file.open(QFile::ReadOnly)) {
        qWarning() << "failed to open internal resource" << file.fileName();
        return -1;
    }
    const QList<QByteArray> lines = file.readAll().split('\n');
    if (!lines.last().isEmpty()) {
        qWarning() << "trailing non-LF-terminated line in" << file.fileName();
        return -1;
    }

    qWarning() << "processMessages() not implemented";
    return 0;//-1;
}

int Generator::processTypes(Grantlee::Context &context)
{
    // Read all the lines of the Profile.xlsx Types tab.
    QFile file(QSL(":/fit-sdk/ProfileTypes.tsv"));
    if (!file.open(QFile::ReadOnly)) {
        qWarning() << "failed to open internal resource" << file.fileName();
        return -1;
    }
    const QList<QByteArray> lines = file.readAll().split('\n').mid(1);
    if (!lines.last().isEmpty()) {
        qWarning() << "trailing non-LF-terminated line in" << file.fileName();
        return -1;
    }

    // Build a list of enums from the TSV file.
    QVariantList enums;  // Full set of enums we'll expose to the Grantless context below.
    QVariantMap type;    // The current enum type being built in the loop, then added to enums.
    QVariantList values; // The set of values for the current type.
    int maxValueNameLength=0, maxValueValueLength=0;
    for (const QByteArray &line: lines) {
        const QList<QByteArray> columns = line.split('\t');
        if ((columns.size() != 5) && (!line.isEmpty())) {
            qWarning() << "line with unexpected" << columns.size() << "columns" << line;
            return -1;
        }
        if (((line.isEmpty()) || (!columns.at(0).isEmpty())) && (!type.isEmpty())) {
            type.insert(QSL("values"), values);
            type.insert(QSL("maxValueNameLength"), maxValueNameLength);
            type.insert(QSL("maxValueValueLength"), maxValueValueLength);
            enums.append(type);
            type.clear();
            values.clear();
            maxValueNameLength = maxValueValueLength = 0;
        }
        if (line.isEmpty()) continue;
        if (!columns.at(0).isEmpty()) {
            type.insert(QSL("typeName"), toCamelCase(QString::fromUtf8(columns.at(0))));
            type.insert(QSL("baseType"), QString::fromUtf8(columns.at(1)));
            type.insert(QSL("comment"), QString::fromUtf8(columns.at(4)));
        }
        if ((columns.size() >= 4) && (!columns.at(2).isEmpty())) {
            const QString valueName = safeEnumLabel(toCamelCase(QString::fromUtf8(columns.at(2))));
            const QString valueValue = QString::fromUtf8(columns.at(3));
            if (valueName.length() > maxValueNameLength) maxValueNameLength=valueName.length();
            if (valueValue.length() > maxValueValueLength) maxValueValueLength=valueValue.length();
            QVariantMap enumValue{
                { QSL("valueName"), valueName },
                { QSL("value"    ), valueValue },
                { QSL("comment"  ), QString::fromUtf8(columns.at(4)) },
            };
            values.append(enumValue);
        }
    }

    // Generate the types header.
    context.push();
    context.insert(QSL("enums"), enums);
    const bool result =
        render(QSL("src/fitdatamessages.cpp"), context, outputDir.absoluteFilePath(QSL("src/fitdatamessages.cpp")))
     && render(QSL("src/types.h"), context, outputDir.absoluteFilePath(QSL("src/types.h")));
    context.pop();
    return result ? 2 : -1;
}

// Grantlee output stream that does *no* content escaping.
class NoEscapeStream : public Grantlee::OutputStream {
public:
    explicit NoEscapeStream(QTextStream * stream) : Grantlee::OutputStream(stream) { }

    virtual QString escape(const QString &input) const { return input; }

    virtual QSharedPointer<OutputStream> clone( QTextStream *stream ) const {
        return QSharedPointer<OutputStream>(new NoEscapeStream(stream));
    }
};

bool Generator::render(const QString &templateName, Grantlee::Context &context,
                       const QString &outputFileName) const
{
    if (!templates.contains(templateName)) {
        qWarning() << "template does not exist" << templateName;
        return false;
    }

    QFile file(outputFileName);
    if (!file.open(QFile::WriteOnly)) {
        qWarning() << "failed to open file for writing" << outputFileName;
        return false;
    }

    context.push();
    context.insert(QSL("FileName"), QFileInfo(outputFileName).baseName());
    QTextStream textStream(&file);
    NoEscapeStream noEscapeStream(&textStream);
    templates[templateName]->render(&noEscapeStream, &context);
    context.pop();
    if (templates[templateName]->error()) {
        qInfo() << "failed to generate" << outputFileName << templates[templateName]->errorString();
        return false;
    }
    return true;
}

bool Generator::render(const QString &templateName, Grantlee::Context &context,
                       const QString &outputDirName, const QString &outputFileName) const
{
    return render(templateName, context, outputDirName + QLatin1Char('/') + outputFileName);
}

QString Generator::safeEnumLabel(const QString &string)
{
    // We could do a lot more here, but for now just handle the known cases.
    return QString(string)
        .replace(QRegularExpression(QSL("^30")), QSL("Thirty"))
        .replace(QRegularExpression(QSL("^45")), QSL("FortyFive"))
        .replace(QRegularExpression(QSL("^90")), QSL("Ninety"))
        .replace(QRegularExpression(QSL("^1")), QSL("One"))
        .replace(QRegularExpression(QSL("^3")), QSL("Three"))
        .replace(QRegularExpression(QSL("^4")), QSL("Four"));
}

QString Generator::toCamelCase(const QString &string)
{
    QString result;
    for (const QString &fragment: string.split(QRegularExpression(QSL("[\\W_]+")))) {
        result += fragment.at(0).toUpper() + fragment.mid(1).toLower();
    }
    return result;
}
