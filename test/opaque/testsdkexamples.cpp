// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testsdkexamples.h"

#include <qtfit/fitstreamreader.h>
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

    fit::FitStreamReader reader(fitData);
    QVERIFY(!reader.protocolVersion().isNull());
    QVERIFY(!reader.profileVersion().isNull());

    /// @todo Convert to CSV, and compare.
    reader.readNext();
    const QByteArray result(csvData);
    QCOMPARE(result, csvData);
}

QTEST_MAIN(TestSdkExamples)
