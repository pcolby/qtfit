// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QtTest>

class TestFitStreamReader: public QObject {
    Q_OBJECT

private slots:
//    void addData_data();
    void addData();
//    void atEnd_data();
    void atEnd();
    void clear_data();
    void clear();
    void device();
    void protocolVersion_data();
    void protocolVersion();
    void profileVersion_data();
    void profileVersion();
};
