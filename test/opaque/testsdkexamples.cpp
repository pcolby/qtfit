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

#include "testsdkexamples.h"

#include "fitstreamreader.h"
#include "fitstreamreader_p.h"

void TestSdkExamples::parseFitFile_data()
{
    QTest::addColumn<QByteArray>("fitData");
    QTest::addColumn<QByteArray>("csvData");

    #define LOAD_TEST_DATA(name) { \
        QFile fitFile(QFINDTESTDATA("fit-sdk-examples/" name ".fit")); \
        fitFile.open(QIODevice::ReadOnly); \
        QFile csvFile(QFINDTESTDATA("fit-sdk-examples/" name ".csv")); \
        csvFile.open(QIODevice::ReadOnly); \
        QTest::newRow(name) << fitFile.readAll() << csvFile.readAll(); \
    }

    LOAD_TEST_DATA("Activity")
    LOAD_TEST_DATA("activity_developerdata")
    LOAD_TEST_DATA("activity_lowbattery")
    LOAD_TEST_DATA("activity_multisport")
    LOAD_TEST_DATA("activity_poolswim")
    LOAD_TEST_DATA("activity_poolswim_with_hr")
    LOAD_TEST_DATA("activity_truncated")
    LOAD_TEST_DATA("DeveloperData")
    LOAD_TEST_DATA("MonitoringFile")
    LOAD_TEST_DATA("Settings")
    LOAD_TEST_DATA("WeightScaleMultiUser")
    LOAD_TEST_DATA("WeightScaleSingleUser")
    LOAD_TEST_DATA("WorkoutCustomTargetValues")
    LOAD_TEST_DATA("WorkoutIndividualSteps")
    LOAD_TEST_DATA("WorkoutRepeatGreaterThanStep")
    LOAD_TEST_DATA("WorkoutRepeatSteps")

    #undef LOAD_TEST_DATA
}

void TestSdkExamples::parseFitFile()
{
    QFETCH(QByteArray, fitData);
    QFETCH(QByteArray, csvData);

    /// @todo Parse fitData and convert to CSV.
    fit::FitStreamReader reader;
    QVERIFY(reader.parse(fitData));
    const QByteArray result(csvData);

//    fit::FitStreamReaderPrivate p;

    QCOMPARE(result, csvData);
}

QTEST_MAIN(TestSdkExamples)
