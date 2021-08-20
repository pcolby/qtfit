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

    bool renderClassFiles(const QString &templateBaseName, Grantlee::Context &context,
                          const QString &outputPathName, const QString className);

    static QString invalidValue(const QString &type);
    static QString safeEnumLabel(const QString &string);
    static QString toCamelCase(const QString &string, const bool camelCase=false);
    static QString toFitType(const QString &string);

private:
    const QDir outputDir;
    Grantlee::Engine engine;
    QMap<QString, Grantlee::Template> templates;
    QStringList headers, modules, sources;
};
