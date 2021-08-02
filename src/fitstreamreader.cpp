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

#include <QDebug>
#include <QBitArray>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

FitStreamReader::FitStreamReader() : d_ptr(new FitStreamReaderPrivate(this))
{

}

FitStreamReader::FitStreamReader(QByteArray &data) : d_ptr(new FitStreamReaderPrivate(this))
{
    Q_D(FitStreamReader);
    d->data = data;
    d->parseFileHeader<QByteArray>();
}

FitStreamReader::FitStreamReader(const char *data, const qsizetype length)
    : d_ptr(new FitStreamReaderPrivate(this))
{
    Q_D(FitStreamReader);
    d->data = QByteArray(data, length);
    d->parseFileHeader<QByteArray>();
}

FitStreamReader::FitStreamReader(QIODevice *device) : d_ptr(new FitStreamReaderPrivate(this))
{
    Q_D(FitStreamReader);
    d->device = device;
    d->parseFileHeader<QIODevice>();
}

FitStreamReader::~FitStreamReader()
{
    delete d_ptr;
}

void FitStreamReader::addData(const QByteArray &data)
{
    Q_D(FitStreamReader);
    if (d->device != nullptr) {
        qWarning("FitStreamReader: addData() with device()");
        Q_ASSERT(d->device != nullptr);
        return;
    }
    d->data += data;
}

void FitStreamReader::addData(const char *data, const qsizetype length)
{
    addData(QByteArray(data, length));
}

bool FitStreamReader::atEnd() const
{
    return false; ///< @todo
}

void FitStreamReader::clear()
{
    Q_D(FitStreamReader);
    d->data.clear();
    d->dataOffset = 0;
    d->device = nullptr;
//    d->headerSize = 0;
//    d->expectedChecksum = 0;
    d->expectedDataSize = 0;
    d->protocolVersion = QVersionNumber();
    d->profileVersion = QVersionNumber();
    d->dataDefinitions.clear();
    d->recordSizes.clear();
}

QIODevice * FitStreamReader::device() const
{
    Q_D(const FitStreamReader);
    return d->device;
}

// [enum] Error error() const; or lastError?
// QString errorString() const;

void FitStreamReader::setDevice(QIODevice *device)
{
    Q_D(FitStreamReader);
    if (device) clear();
    d->device = device;
    if (device) d->parseFileHeader<QIODevice>();
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

QVersionNumber FitStreamReader::profileVersion() const
{
    Q_D(const FitStreamReader);
    return d->profileVersion;
}

QVersionNumber FitStreamReader::protocolVersion() const
{
    Q_D(const FitStreamReader);
    return d->protocolVersion;
}

FitDataMessage FitStreamReader::readNext()
{
    Q_D(FitStreamReader);
    return (d->device == nullptr)
        ? d->readNextDataMessage<QByteArray>() : d->readNextDataMessage<QIODevice>();
}

FitStreamReaderPrivate::FitStreamReaderPrivate(FitStreamReader * const q)
    : dataOffset(0), device(nullptr), q_ptr(q)
{

}

FitStreamReaderPrivate::~FitStreamReaderPrivate()
{

}

template<> qsizetype FitStreamReaderPrivate::bytesAvailable<QByteArray>() const
{
    Q_ASSERT(device == nullptr);
    return data.size() - dataOffset;
}

template<> qsizetype FitStreamReaderPrivate::bytesAvailable<QIODevice>() const
{
    Q_ASSERT(device != nullptr);
    return device->bytesAvailable();
}

template<class T> bool FitStreamReaderPrivate::parseFileHeader()
{
    Q_ASSERT(protocolVersion.isNull());
    Q_ASSERT(profileVersion.isNull());

    // Read the header bytes.
    const QByteArray header = readFileHeader<T>();
    qDebug() << "Header size" << header.size() << "bytes";
    if (header.isEmpty()) {
        /// @todo set not-enough-bytes; ie might need to wait for more bytes.
        qDebug() << "not enough bytes for header";
        return false;
    }
    if (header.size() < 12) {
        /// @todo set invalid header size error; ie FIT stream is corrupt / invalid.
        qDebug() << "invalid header size";
        return false;
    }

    {   // Protocol version is split into two parts: high 4 bits major, a low 4 bits minor.
        const quint8 version = header.at(1);
        protocolVersion = QVersionNumber(version >> 4, version & 0x0F);
        qDebug() << "Protocol version" << protocolVersion;
    }

    {   // Profile version is major*100 + minor (ie minor could not be more than 99).
        const quint16 version = qFromLittleEndian<quint16>(header.mid(2,2).data());
        profileVersion = QVersionNumber(version/100, version%100);
        qDebug() << "Profile version" << profileVersion;
    }

    expectedDataSize = qFromLittleEndian<quint32>(header.mid(4,4).data());
    qDebug() << "Data size" << expectedDataSize << "bytes";

    const QByteArray dataType = header.mid(8,4);
    qDebug() << "Data type" << dataType;
    if (dataType != QByteArray(".FIT")) {
        /// @todo set invalid header data type (must be ".FIT").
        return false;
    }

    // Check the header's checksum (only present in 14+ byte headers, and even then may be 0x0000).
    if (header.size() >= 14) {
        const quint16 expectedChecksum = qFromLittleEndian<quint16>(data.mid(12,2).data());
        if (expectedChecksum == 0x0000) {
            qDebug() << "FIT file has (optional) checksum 0x0000; ignoring.";
        } else {
            const quint16 calculatedChecksum = fitChecksum(header.mid(0,12));
            qDebug() << "Header checksum" << expectedChecksum << calculatedChecksum;
            if (calculatedChecksum != expectedChecksum) {
                qWarning() << "Checksum failure:" << calculatedChecksum << "!=" << expectedChecksum;
                /// @todo set error, and return false here?
            } else {
                qDebug() << "Checkums match";
            }
        }
    }
    return true;
}

template<class T> bool FitStreamReaderPrivate::parseDefinitionMessage()
{
    Q_ASSERT(bytesAvailable<T>());
    return false; /// @todo Implement!
}

template<class T> FitDataMessage FitStreamReaderPrivate::parseDataMessage()
{
    Q_ASSERT(bytesAvailable<T>());
    return FitDataMessage(); /// @todo Implement!
}

template<> quint8 FitStreamReaderPrivate::peekByte<QByteArray>() const
{
    Q_ASSERT(device == nullptr);
    return (data.size() > dataOffset) ? data.at(dataOffset) : 0;
}

template<> quint8 FitStreamReaderPrivate::peekByte<QIODevice>() const
{
    Q_ASSERT(device != nullptr);
    const QByteArray byte = device->peek(1);
    return byte.isEmpty() ? 0 : byte.front();
}

template<> QByteArray FitStreamReaderPrivate::readBytes<QByteArray>(const qsizetype size)
{
    Q_ASSERT(device == nullptr);
    return ((data.size() - dataOffset) < size) ? QByteArray() : data.mid(dataOffset, size);
}

template<> QByteArray FitStreamReaderPrivate::readBytes<QIODevice>(const qsizetype size)
{
    Q_ASSERT(device != nullptr);
    return (device->bytesAvailable() < size) ? QByteArray() : device->read(size);
}

template<class T> QByteArray FitStreamReaderPrivate::readFileHeader()
{
    // Return `n` bytes, where `n` is given by the first byte (ie a length-prefixed buffer).
    return (bytesAvailable<T>()) ? readBytes<T>(peekByte<T>()) : QByteArray();
}

template<class T> FitDataMessage FitStreamReaderPrivate::readNextDataMessage()
{
    // If we haven't parsed the FIT File Header yet, do so now.
    if ((protocolVersion.isNull() && (!parseFileHeader<T>()))) {
        return FitDataMessage(); // Need a way to return a null message.
    }

    // Process all FIT Data Records until we get a FIT Data Message (or run out of bytes).
    while (bytesAvailable<T>()) { // At least one byte, for the next data record header byte.
        const quint8 recordHeader = peekByte<T>();
        if (recordHeader & (1 << 6)) { // Bit 6 indicates a Definition Message.
            if (!parseDefinitionMessage<T>()) return FitDataMessage();
            // Not returning here; we'll continue processing until we get a FIT Data Message.
        } else return parseDataMessage<T>();
    }
    return FitDataMessage();
}

QTFIT_END_NAMESPACE
