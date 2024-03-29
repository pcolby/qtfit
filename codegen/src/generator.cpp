// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

    // Process the Types list first, because it builds the baseTypes list as a side-effect.
    const int typesFileCount = processTypes(context);
    if (typesFileCount < 0) return -1;

    const int messagesFileCount = processMessages(context);
    if (messagesFileCount < 0) return -1;

    return typesFileCount + messagesFileCount;
}

/// \todo Generate test classes too.
int Generator::processMessages(Grantlee::Context &context)
{
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
            context.insert(QSL("messageName"), messageName);
            context.insert(QSL("fields"), fields);
            context.insert(QSL("MesgNumLabel"), toCamelCase(messageName));
            context.insert(QSL("ClassName"), className);
            bool result = render(QSL("include/qtfit/datamessage.h"), context,
                                 outputDir.absoluteFilePath(QSL("include/qtfit")),
                                 className.toLower() + QSL(".h"));
            foreach (const QString &extension, QStringList() << QSL(".cpp") << QSL("_p.h")) {
                if (!render(QSL("src/datamessage") + extension, context,
                            outputDir.absoluteFilePath(QSL("src")),
                            className.toLower() + extension)) {
                    result = false;
                }
            }
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
            const QString fitType = QString::fromUtf8(columns.at(3));
            const QString cppType = toCppType(fitType);
            field.insert(QSL("cppType"), cppType);
            field.insert(QSL("defaultValue"), invalidValue(cppType));
            const QByteArray isArray = columns.at(4);        ///< \a todo
          //const QByteArray components = columns.at(5);     ///< \a todo
            const QByteArray scale = columns.at(6);          ///< \a todo
            const int offset = columns.at(7).toInt();        ///< \a todo
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
            const QString comment = QString::fromUtf8(columns.at(13));
            if (!comment.isEmpty()) {
                field.insert(QSL("comment"), comment);
                field.insert(QSL("commentLines"), wrapLines(comment));
            }
            const QByteArray products = columns.at(14);
            if (!products.isEmpty()) {
                qWarning() << "column 14 (Products) is not empty" << products;
            }
            field.insert(QSL("example"), columns.at(15));
            qDebug() << field << isArray << scale << offset << units << bits << accumulate << refFieldName << refFieldValue << products;
            /// \todo Lots more properties to consider here.

            const QString baseType = baseTypes.value(fitType, fitType);
            if (baseType == fitType) {
                qDebug() << "assuming" << fitType << "is a base type";
            }

            /// Note, 'bool' is not a valid FIT type, yet the Profiles.xlsx::Message sheet contains
            /// some fields with Field Type 'bool'. \d todo Check what base type FIT files really use.
            const QString baseTypeEnumLabel = safeEnumLabel(toCamelCase(
                (baseType == QSL("bool")) ? QSL("byte") : baseType));

            field.insert(QSL("baseType"), baseType); ///< \todo Do we need this sperately?
            field.insert(QSL("baseTypeEnumLabel"), baseTypeEnumLabel);
            field.insert(QSL("baseTypeSize"), baseTypeSize(baseType));
            field.insert(QSL("endianAbility"), endianAbility(baseType));
            fields.append(field);
        }
    }

    // Add the generated classed to the CMake targets.
    classNames.sort(Qt::CaseInsensitive);
    context.push();
    context.insert(QSL("TargetName"), context.lookup(QSL("ProjectName")));
    context.insert(QSL("classNames"), classNames);
    const bool result = render(QSL("src/fitdatamessages.cmake"), context,
                               outputDir.absoluteFilePath(QSL("src/fitdatamessages.cmake")));
    if (result) fileCount++;
    context.pop();
    if (!result) return -1;
    return fileCount;
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
    QVariantList types;  // Full set of types we'll expose to the Grantless context below.
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
            types.append(type);
            type.clear();
            values.clear();
            maxValueNameLength = maxValueValueLength = 0;
        }
        if (line.isEmpty()) continue; // Skip empty lines (usually just the final trailing line).
        if (!columns.at(0).isEmpty()) {
            const QString typeName = QString::fromUtf8(columns.at(0));
            const QString baseType = QString::fromUtf8(columns.at(1));
            type.insert(QSL("typeName"), toCamelCase(typeName));
            type.insert(QSL("baseType"), baseType);
            type.insert(QSL("comment"), QString::fromUtf8(columns.at(4)));
            baseTypes.insert(typeName, baseType);
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
    context.insert(QSL("types"), types);
    const QStringList fileNames { QSL("fitdatamessages.cpp"), QSL("types.cpp"), QSL("types.h")};
    for (const QString &fileName: fileNames) {
        const QString dirName = (fileName == QSL("types.h")) ? QSL("include/qtfit/") : QSL("src/");
        if (!render(dirName + fileName, context, outputDir.absoluteFilePath(dirName + fileName)))
            return -1;
    }
    return fileNames.size();
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

// See FIT SDK Table 7. FIT Base Types and Invalid Values
// See https://developer.garmin.com/fit/protocol/#basetype
int Generator::baseTypeSize(const QString &fitBaseType)
{
    if (fitBaseType == QSL("byte"))   return 1;
    if (fitBaseType == QSL("enum"))   return 1;
    if (fitBaseType == QSL("string")) return 1; ///< \todo Understand the semantics of this one.
    if (fitBaseType.endsWith(QSL("8" ))||fitBaseType.endsWith(QSL("8z" ))) return 1;
    if (fitBaseType.endsWith(QSL("16"))||fitBaseType.endsWith(QSL("16z"))) return 2;
    if (fitBaseType.endsWith(QSL("32"))||fitBaseType.endsWith(QSL("32z"))) return 4;
    if (fitBaseType.endsWith(QSL("64"))||fitBaseType.endsWith(QSL("64z"))) return 8;
    qWarning() << "no way to know size of unknown FIT base type" << fitBaseType;
    return 0;
}

// See FIT SDK Table 7. FIT Base Types and Invalid Values
// See https://developer.garmin.com/fit/protocol/#basetype
QString Generator::endianAbility(const QString &fitBaseType)
{
    if (fitBaseType == QSL("sint16" )) return QSL(" qint16");
    if (fitBaseType == QSL("uint16" )) return QSL("quint16");
    if (fitBaseType == QSL("uint16z")) return QSL("quint16");
    if (fitBaseType == QSL("sint32" )) return QSL(" qint32");
    if (fitBaseType == QSL("uint32" )) return QSL("quint32");
    if (fitBaseType == QSL("uint32z")) return QSL("quint32");
    if (fitBaseType == QSL("sint64" )) return QSL(" qint64");
    if (fitBaseType == QSL("uint64" )) return QSL("quint64");
    if (fitBaseType == QSL("uint64z")) return QSL("quint64");
    if (fitBaseType == QSL("float32")) return QSL("float");
    if (fitBaseType == QSL("float64")) return QSL("double");
    return QString(); // Type has no endian ability (as defined by Table 7).
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

QString Generator::toCppType(const QString &fitType)
{
    if (fitType == QSL("bool"))    return fitType; // ie don't CamelCase it below.
    if (fitType == QSL("byte"))    return QSL("quint8");
    if (fitType == QSL("float32")) return QSL("float");
    if (fitType == QSL("string"))  return QSL("QString");
    if (fitType.startsWith(QSL("sint"))) return QSL("q") + fitType.mid(1);
    if (fitType.startsWith(QSL("uint"))) return QSL("q") + fitType;
    return toCamelCase(fitType);
}

QStringList Generator::wrapLines(QString string, const int atColumn, const int minColumn) {
    QStringList lines;
    while (!string.isEmpty()) {
        int pos = string.lastIndexOf(QLatin1Char(' '), atColumn-1);
        if (pos < minColumn) pos = string.indexOf(QLatin1Char(' '), atColumn);
        lines += string.mid(0, pos);
        if (pos < 0) string.clear(); else string = string.mid(pos+1);
    }
    return lines;
}
