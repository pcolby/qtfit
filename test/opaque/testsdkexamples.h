// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QtTest>

class TestSdkExamples: public QObject {
    Q_OBJECT

private slots:
    void parseFitFile_data();
    void parseFitFile();
};
