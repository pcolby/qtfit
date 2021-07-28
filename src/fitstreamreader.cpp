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

#include "fitstreamreader.h"
#include "fitstreamreader_p.h"

#include <QtEndian>

#include <QDebug>

QTFIT_BEGIN_NAMESPACE

FitStreamReader::FitStreamReader()
{
}

FitStreamReader::~FitStreamReader()
{
}

QString protocolVersionString(const quint8 major, const quint8 minor)
{
    return QStringLiteral("%1.%2").arg(major).arg(minor);
}

QString protocolVersionString(const quint8 version)
{
    return protocolVersionString(version >> 4, version & 0x0F);
}

QString profileVersionString(const quint16 major, const quint8 minor) {
    return QStringLiteral("%1.%2").arg(major).arg(minor);
}

QString profileVersionString(const quint16 version) {
    return profileVersionString(version/100, version%100);
}

quint16 fitChecksum(const QByteArray &data) {
    quint16 checksum=0;
    for (const auto &byte: data) {
        static const quint16 crcTable[16] = {
            0x0000, 0xCC01, 0xD801, 0x1400, 0xF001, 0x3C00, 0x2800, 0xE401,
            0xA001, 0x6C00, 0x7800, 0xB401, 0x5000, 0x9C01, 0x8801, 0x4400
        };
        for (int byteShift=0; byteShift<=4; byteShift+=4) {
            const quint16 tmp = crcTable[checksum & 0xF];
            checksum = (checksum >> 4) & 0x0FFF;
            checksum = checksum ^ tmp ^ crcTable[(byte >> byteShift) & 0xF];
        }
    }
    return checksum;
}

bool FitStreamReader::parse(const QByteArray &data) const
{
    const quint8 headerSize = data.at(0);

    // Protocol version is split into two parts: high 4 bits major, a low 4 bits minor.
    const quint8 protocolVersion = data.at(1);
    const quint8 protocolVersionMajor = protocolVersion >> 4;
    const quint8 protocolVersionMinor = protocolVersion & 0x0F;

    // Profile version is major*100 + minor (ie minor could not be more than 99).
    const quint16 profileVersion = qFromLittleEndian<quint16>(data.mid(2,2).data());
    const quint16 profileVersionMajor = profileVersion/100;
    const quint8 profileVersionMinor = profileVersion%100;

    const quint32 dataSize = qFromLittleEndian<quint32>(data.mid(4,4).data());
    const QString dataType = QString::fromLocal8Bit(data.mid(8,4)); // ".FIT"

    qDebug() << headerSize << protocolVersion << protocolVersionMajor << protocolVersionMinor
             << profileVersion<< profileVersionMajor << profileVersionMinor << data.mid(0,headerSize);

    if (headerSize >= 14) {
        const quint16 crc = qFromLittleEndian<quint16>(data.mid(12,2).data());
        const quint16 calculated = (crc == 0) ? 0 : fitChecksum(data.mid(0,12));
        qDebug() << "CRC:" << crc << calculated;
        if (crc != calculated) {
            qWarning() << "Checksum failure:" << crc << "!=" << calculated;
        }
    }

    /// @todo
    qDebug() << "Header size:" << headerSize << "bytes";
    qDebug() << "Protocol version:" << protocolVersionString(protocolVersion);
    qDebug() << "Profile version:" << profileVersionString(profileVersion);
    qDebug() << "Data size:" << dataSize << "bytes";
    qDebug() << "Data type:" << dataType;
//    qDebug() << "CRC:" << crc;
    return true;
}

//FitStreamReaderPrivate::FitStreamReaderPrivate() {
//    qDebug() << __FUNCTION__;
//}

QTFIT_END_NAMESPACE
