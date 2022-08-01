// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testfitstreamreader.h"

#include <qtfit/fitstreamreader.h>
//#include "fitstreamreader_p.h"

//void TestFitStreamReader::parseFitFile_data()
//{
//    QTest::addColumn<QByteArray>("fitData");
//    QTest::addColumn<QByteArray>("csvData");

//    #undef LOAD_TEST_DATA
//}

//void TestFitStreamReader::parseFitFile()
//{
//    QFETCH(QByteArray, fitData);
//    QFETCH(QByteArray, csvData);

//    fit::FitStreamReader reader(fitData);
//    QVERIFY(!reader.protocolVersion().isNull());
//    QVERIFY(!reader.profileVersion().isNull());

//    /// @todo Convert to CSV, and compare.
//    const QByteArray result(csvData);
//    QCOMPARE(result, csvData);
//}

//void TestFitStreamReader::addData_data()
//{

//}

void TestFitStreamReader::addData()
{
    /// @todo
}

//void TestFitStreamReader::atEnd_data()
//{

//}

void TestFitStreamReader::atEnd()
{
    /// @todo
}

void TestFitStreamReader::clear_data()
{
    QTest::addColumn<QByteArray>("header");
    QTest::addRow("null-12") << QByteArray("\x0C\x00\x00\x00\x00\x00\x00\x00.FIT", 12);
    QTest::addRow("ffff-12") << QByteArray("\x0C\xFF\xFF\xFF\xFF\xFF\xFF\xFF.FIT", 12);
    QTest::addRow("null-14") << QByteArray("\x0E\x00\x00\x00\x00\x00\x00\x00.FIT\x00\x00", 14);
    QTest::addRow("ffff-14") << QByteArray("\x0E\xFF\xFF\xFF\xFF\xFF\xFF\xFF.FIT\x00\x00", 14);
}

void TestFitStreamReader::clear()
{
    QFETCH(QByteArray, header);

    // Setup a non-cleared reader.
    fit::FitStreamReader reader(header);
    QCOMPARE(reader.device(), nullptr);
    QVERIFY(!reader.protocolVersion().isNull());
    QVERIFY(!reader.profileVersion().isNull());

    // Verify that clearing, really does.
    reader.clear();
    QCOMPARE(reader.device(), nullptr);
    QVERIFY(reader.protocolVersion().isNull());
    QVERIFY(reader.profileVersion().isNull());

    // Set an IO device.
    QBuffer buffer(&header);
    buffer.open(QIODevice::ReadOnly);
    reader.setDevice(&buffer);
    QCOMPARE(reader.device(), &buffer);
    QVERIFY(!reader.protocolVersion().isNull());
    QVERIFY(!reader.profileVersion().isNull());

    // Verify that clearing, really does.
    reader.clear();
    QCOMPARE(reader.device(), nullptr);
    QVERIFY(reader.protocolVersion().isNull());
    QVERIFY(reader.profileVersion().isNull());
}

void TestFitStreamReader::device()
{
    // Default constructed reader has no IO device.
    fit::FitStreamReader reader;
    QCOMPARE(reader.device(), nullptr);

    // But we can assign an IO device.
    QBuffer buffer;
    reader.setDevice(&buffer);
    QCOMPARE(reader.device(), &buffer);

    // And we can clear the IO device.
    reader.clear();
    QCOMPARE(reader.device(), nullptr);

    // It's also safe to clear the device by setting a nullptr.
    reader.setDevice(&buffer);
    QCOMPARE(reader.device(), &buffer);
    reader.setDevice(nullptr);
    QCOMPARE(reader.device(), nullptr);
}

void TestFitStreamReader::protocolVersion_data()
{
    QTest::addColumn<QByteArray>("header");
    QTest::addColumn<QVersionNumber>("version");
    QTest::addRow("v0.0:12"  ) << QByteArray("\x0C\x00\x00\x00\x00\x00\x00\x00.FIT", 12) << QVersionNumber(0,0);
    QTest::addRow("v1.2:12"  ) << QByteArray("\x0C\x12\x00\x00\x00\x00\x00\x00.FIT", 12) << QVersionNumber(1,2);
    QTest::addRow("v2.1:12"  ) << QByteArray("\x0C\x21\x00\x00\x00\x00\x00\x00.FIT", 12) << QVersionNumber(2,1);
    QTest::addRow("v0.15:12" ) << QByteArray("\x0C\x0F\x00\x00\x00\x00\x00\x00.FIT", 12) << QVersionNumber(0,15);
    QTest::addRow("v15.0:12" ) << QByteArray("\x0C\xF0\x00\x00\x00\x00\x00\x00.FIT", 12) << QVersionNumber(15,0);
    QTest::addRow("v15.15:12") << QByteArray("\x0C\xFF\x00\x00\x00\x00\x00\x00.FIT", 12) << QVersionNumber(15,15);
    QTest::addRow("v0.0:14"  ) << QByteArray("\x0E\x00\x00\x00\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(0,0);
    QTest::addRow("v1.2:14"  ) << QByteArray("\x0E\x12\x00\x00\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(1,2);
    QTest::addRow("v2.1:14"  ) << QByteArray("\x0E\x21\x00\x00\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(2,1);
    QTest::addRow("v0.15:14" ) << QByteArray("\x0E\x0F\x00\x00\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(0,15);
    QTest::addRow("v15.0:14" ) << QByteArray("\x0E\xF0\x00\x00\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(15,0);
    QTest::addRow("v15.15:14") << QByteArray("\x0E\xFF\x00\x00\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(15,15);
}

void TestFitStreamReader::protocolVersion()
{
    QFETCH(QByteArray, header);
    QFETCH(QVersionNumber, version);
    fit::FitStreamReader reader(header);
    QCOMPARE(reader.protocolVersion().toString(), version.toString()); // Nicer failure output.
    QCOMPARE(reader.protocolVersion(), version);                       // The *real* test.
}

void TestFitStreamReader::profileVersion_data()
{
    QTest::addColumn<QByteArray>("header");
    QTest::addColumn<QVersionNumber>("version");
    QTest::addRow("v0.0:12"   ) << QByteArray("\x0C\x00\x00\x00\x00\x00\x00\x00.FIT", 12) << QVersionNumber(0,0);
    QTest::addRow("v1.2:12"   ) << QByteArray("\x0C\x00\x66\x00\x00\x00\x00\x00.FIT", 12) << QVersionNumber(1,2);
    QTest::addRow("v1.1:12"   ) << QByteArray("\x0C\x21\xC9\x00\x00\x00\x00\x00.FIT", 12) << QVersionNumber(2,1);
    QTest::addRow("v123.45:12") << QByteArray("\x0C\x21\x39\x30\x00\x00\x00\x00.FIT", 12) << QVersionNumber(123,45);
    QTest::addRow("v567.99:12") << QByteArray("\x0C\x21\xDF\xDD\x00\x00\x00\x00.FIT", 12) << QVersionNumber(567,99);
    QTest::addRow("v655.35:12") << QByteArray("\x0C\x00\xFF\xFF\x00\x00\x00\x00.FIT", 12) << QVersionNumber(655,35);
    QTest::addRow("v0.0:14"   ) << QByteArray("\x0C\x00\x00\x00\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(0,0);
    QTest::addRow("v1.2:14"   ) << QByteArray("\x0C\x00\x66\x00\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(1,2);
    QTest::addRow("v1.1:14"   ) << QByteArray("\x0C\x21\xC9\x00\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(2,1);
    QTest::addRow("v123.45:14") << QByteArray("\x0C\x21\x39\x30\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(123,45);
    QTest::addRow("v567.99:14") << QByteArray("\x0C\x21\xDF\xDD\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(567,99);
    QTest::addRow("v655.35:14") << QByteArray("\x0C\x00\xFF\xFF\x00\x00\x00\x00.FIT\x00\x00", 14) << QVersionNumber(655,35);
}

void TestFitStreamReader::profileVersion()
{
    QFETCH(QByteArray, header);
    QFETCH(QVersionNumber, version);
    fit::FitStreamReader reader(header);
    QCOMPARE(reader.profileVersion().toString(), version.toString()); // Nicer failure output.
    QCOMPARE(reader.profileVersion(), version);                       // The *real* test.
}

QTEST_MAIN(TestFitStreamReader)
