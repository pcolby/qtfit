// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QDir>
#include <QJsonObject>

#include <grantlee/engine.h>

class Generator {

public:
    explicit Generator(const QDir &outputDir);

    int generate();

protected:
    int processMessages(Grantlee::Context &context);
    int processTypes(Grantlee::Context &context);

    bool render(const QString &templateName, Grantlee::Context &context,
                const QString &outputPathName) const;

    bool render(const QString &templateName, Grantlee::Context &context,
                const QString &outputDirName, const QString &outputFileName) const;

    static int baseTypeSize(const QString &fitBaseType);
    static QString endianAbility(const QString &fitBaseType);
    static QString invalidValue(const QString &type);
    static QString safeEnumLabel(const QString &string);
    static QString toCamelCase(const QString &string, const bool camelCase=false);
    static QString toCppType(const QString &fitType);
    static QStringList wrapLines(QString string, const int atColumn=94, const int minColumn=20);

private:
    const QDir outputDir;
    Grantlee::Engine engine;
    QMap<QString, Grantlee::Template> templates;
    QHash<QString,QString> baseTypes; /// Maps FIT type names to FIT base types.
};
