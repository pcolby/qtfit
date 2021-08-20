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

/// \todo Generate test classes too.
int Generator::processMessages(Grantlee::Context &context)
{
    Q_UNUSED(context)

    QFile file(QSL(":/fit-sdk/ProfileMessages.tsv"));
    if (!file.open(QFile::ReadOnly)) {
        qWarning() << "failed to open internal resource" << file.fileName();
        return -1;
    }
    const QList<QByteArray> lines = file.readAll().split('\n').mid(1);
    if (!lines.last().isEmpty()) {
        qWarning() << "trailing non-LF-terminated line in" << file.fileName();
        return -1;
    }

    // Generate class files for each of the FIT message types.
    QStringList classNames;
    QString messageName;
    QVariantList fields;
    int fileCount=0;
    for (const QByteArray &line: lines) {
        const QList<QByteArray> columns = line.split('\t');
        if ((columns.size() != 16) && (!line.isEmpty())) {
            qWarning() << "line with unexpected" << columns.size() << "columns" << line;
            return -1;
        }

        // If we're starting a new message.
        if (((line.isEmpty()) || (!columns.at(0).isEmpty())) && (!messageName.isEmpty())) {
            const QString className = toCamelCase(messageName) + QSL("Message");
            classNames.append(className);
            context.push();
            context.insert(QSL("fields"), fields);
            context.insert(QSL("MesgNumLabel"), toCamelCase(messageName));
            const bool result = renderClassFiles(QSL("src/datamessage"), context,
                                                 outputDir.absoluteFilePath(QSL("src")), className);
            context.pop();
            messageName.clear();
            fields.clear();
            if (result) fileCount+=3; else return -1;
        }

        if (line.isEmpty()) continue; // Skip empty lines (usually just the final trailing line).
        if (!columns.at(0).isEmpty()) {
            messageName = QString::fromUtf8(columns.at(0));
        }
        if (!columns.at(2).isEmpty()) { // Field Name is not empty.
            bool ok;
            QVector<quint8> failures;
            QVariantMap field;
            const QByteArray fieldNumber = columns.at(1);
            if (!fieldNumber.isEmpty()) {
                bool ok;
                field.insert(QSL("number"), columns.at(1).toInt(&ok));
                if (!ok) {
                    qWarning() << "failed to convert field number to integer" << fieldNumber;
                    return -1;
                }
            }
            field.insert(QSL("name"), toCamelCase(QString::fromUtf8(columns.at(2)), true));
            field.insert(QSL("type"), toFitType(QString::fromUtf8(columns.at(3))));
            field.insert(QSL("defaultValue"), invalidValue(field.value(QSL("type")).toString()));
            const QByteArray isArray = columns.at(4);        ///< \a todo
          //const QByteArray components = columns.at(5);     ///< \a todo
            const QByteArray scale = columns.at(6);          ///< \a todo
            const int offset = columns.at(7).toInt(&ok); if (!ok) failures << 8; ///< \a todo
            const QByteArray units = columns.at(8);          ///< \a todo
            const QByteArray bits = columns.at(9);           ///< \a todo
            const QByteArray accumulate = columns.at(10);    ///< \a todo
            const QByteArray refFieldName = columns.at(11);  ///< \a todo
            const QByteArray refFieldValue = columns.at(12); ///< \a todo
            if (fieldNumber.isEmpty()) {
                if (refFieldName.isEmpty() || refFieldValue.isEmpty()) {
                    qWarning() << "missing both field number and ref fields";
                    return -1;
                }
                qDebug() << "dynamic reference fields not implemented yet"; ///< \todo
                continue;
            } else if ((!refFieldName.isEmpty()) || (!refFieldValue.isEmpty())) {
                qWarning() << "have both field number and ref field" << fieldNumber << refFieldName << refFieldValue;
                return -1;
            }
            field.insert(QSL("comment"), QString::fromUtf8(columns.at(13)));
            const QByteArray products = columns.at(14);
            if (!products.isEmpty()) {
                qWarning() << "column 14 (Products) is not empty" << products;
            }
            field.insert(QSL("example"), columns.at(15));
            qDebug() << field << isArray << scale << offset << units << bits << accumulate << refFieldName << refFieldValue << products;
//            if (!failures.isEmpty()) {
//                qWarning() << "Some fields failed conversion" << failures;
//                return -1;
//            }
            /// \todo Lots more properties to consider here.
            fields.append(field);
        }
    }

    // Add the generated classed to the CMake targets.
    classNames.sort(Qt::CaseInsensitive);
    context.push();
    context.insert(QSL("TargetName"), context.lookup(QSL("ProjectName")));
    context.insert(QSL("classNames"), classNames);
    render(QSL("src/fitdatamessages.cmake"), context, outputDir.absoluteFilePath(QSL("src/fitdatamessages.cmake")));
    context.pop();
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
        if (line.isEmpty()) continue; // Skip empty lines (usually just the final trailing line).
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

bool Generator::renderClassFiles(const QString &templateBaseName, Grantlee::Context &context,
                                 const QString &outputPathName, const QString className)
{
    context.push();
    context.insert(QSL("ClassName"), className);
    foreach (const QString &extension, QStringList() << QSL(".cpp") << QSL(".h") << QSL("_p.h")) {
        if (!render(templateBaseName + extension, context, outputPathName, className.toLower() + extension)) {
            return false;
        }
    }
    context.pop();
    return true;
}

// See FIT SDK Table 7. FIT Base Types and Invalid Values
// See https://developer.garmin.com/fit/protocol/#basetype
QString Generator::invalidValue(const QString &type)
{
    if (type == QSL(   "qint8")) return QSL("0x7F");
    if (type == QSL(  "quint8")) return QSL("0xFF");
    if (type == QSL(  "qint16")) return QSL("0x7FFF");
    if (type == QSL( "quint16")) return QSL("0xFFFF");
    if (type == QSL(  "qint32")) return QSL("0x7FFFFFFF");
    if (type == QSL( "quint32")) return QSL("0xFFFFFFFF");
    if (type == QSL( "float32")) return QSL("static_cast<float>(0xFFFFFFFF)");
    if (type == QSL( "float64")) return QSL("static_cast<double>(0xFFFFFFFFFFFFFFFF)");
    if (type == QSL("quint16z")) return QSL("0");
    if (type == QSL("quint32z")) return QSL("0");
    if (type == QSL(  "qint64")) return QSL("0x7FFFFFFFFFFFFFFF");
    if (type == QSL( "quint64")) return QSL("0xFFFFFFFFFFFFFFFF");
    if (type == QSL("quint64z")) return QSL("0");
    if (type == QSL("QString"))  return QString(); // No initialisation necessary.
    return QString::fromLatin1("static_cast<%1>(-1)").arg(type);
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

QString Generator::toCamelCase(const QString &string, const bool camelCase)
{
    QString result;
    for (const QString &fragment: string.split(QRegularExpression(QSL("[\\W_]+")))) {
        result += fragment.at(0).toUpper() + fragment.mid(1).toLower();
    }
    return camelCase ? result.at(0).toLower() + result.mid(1) : result;
}

QString Generator::toFitType(const QString &string)
{
    if (string == QSL("bool"))    return string; // ie don't CamelCase it below.
    if (string == QSL("byte"))    return QSL("quint8");
    if (string == QSL("float32")) return QSL("float");
    if (string == QSL("string"))  return QSL("QString");
    if (string.startsWith(QSL("sint"))) return QSL("q") + string.mid(1);
    if (string.startsWith(QSL("uint"))) return QSL("q") + string;
    return toCamelCase(string);
}

