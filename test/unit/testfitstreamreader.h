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
