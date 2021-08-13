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

#include <QCommandLineParser>
#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QLoggingCategory>

#include "generator.h"

void configureLogging(const QCommandLineParser &parser)
{
    // Start with the Qt default message pattern (see qtbase:::qlogging.cpp:defaultPattern)
    QString messagePattern = QStringLiteral("%{if-category}%{category}: %{endif}%{message}");

    if (parser.isSet(QStringLiteral("debug"))) {
        messagePattern.prepend(QStringLiteral("%{time process} %{type} %{function} "));
        QLoggingCategory::defaultCategory()->setEnabled(QtDebugMsg, true);
    }

    if (!parser.isSet(QStringLiteral("no-color"))) {
        messagePattern.prepend(QStringLiteral(
      //"%{if-debug}D%{endif}"
      //"%{if-info}\x1b[32m%{endif}"
        "%{if-warning}\x1b[35m%{endif}" // Magenta
        "%{if-critical}\x1b31m%{endif}" // Red
        "%{if-fatal}31;1%{endif}"));    // Red and bold
        messagePattern.append(QStringLiteral("\x1b[0m"));
    }

    qSetMessagePattern(messagePattern);
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    // Set default paths relative to the codegen project's directory.
    const QString defaultOutputPath = QDir::cleanPath(QStringLiteral(CODEGEN_DEFAULT_OUTPUT_DIR));

    // Parse the command line options.
    QCommandLineParser parser;
    parser.setApplicationDescription(QStringLiteral("Generate code for the QtFit project."));
    parser.addHelpOption();
    parser.addOptions({
        {{QStringLiteral("d"), QStringLiteral("debug")}, QStringLiteral("Enable debug output")},
        {{QStringLiteral("f"), QStringLiteral("force")},
          QStringLiteral("Dont prompt before generating files")},
        { QStringLiteral("no-color"), QStringLiteral("Do not color the output")},
        {{QStringLiteral("o"), QStringLiteral("output")},
          QStringLiteral("Write output to dir (default is %1)").arg(defaultOutputPath),
          QStringLiteral("dir"), defaultOutputPath},
    });
    parser.process(app);
    configureLogging(parser);

    // Verify that the output directory exists.
    const QFileInfo outputDir(QDir::cleanPath(parser.value(QStringLiteral("output"))));
    if ((!outputDir.exists()) || (!outputDir.isDir()) || (!outputDir.isWritable())) {
        qWarning() << "output directory does not exist, is not a directory, or is not writeable"
                   << outputDir.absoluteFilePath();
        return 2;
    }

    // Let the user know we're about to generate a lot of files.
    if (!parser.isSet(QStringLiteral("force"))) {
        qWarning() << "About to generate a lot of files in" << outputDir.absoluteFilePath();
        qInfo() << "Press Enter to contine";
        QTextStream stream(stdin);
        stream.readLine();
    }

    // Generate code.
    Generator generator(outputDir.absoluteFilePath());
    const int count = generator.generate();
    if (count >= 0) {
        qInfo() << "Generated" << count << "files in" << outputDir.absoluteFilePath();
    }
    return (count > 0) ? 0 : 4;
}
