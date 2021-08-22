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

#include "abstractdatamessage.h"
#include "fitstreamreader.h"
#include "fitstreamreader_p.h"

#include <QDebug>
#include <QBitArray>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class FitStreamReader
 *
 * The FitStreamReader class provides a streaming parser for reading Garmin FIT files.
 *
 * \todo Mention that this is a lower-level class, a users should probably use some yet-to-be
 * FitFile class, that wraps up the calls to this one.
 *
 * \sa https://developer.garmin.com/fit/protocol/
 */

/*!
 * Constructs a FIT stream reader with no initial data.
 *
 * Use addData() or setDevice() to provide data when ready.
 *
 * \sa addData
 * \sa setDevice
 */
FitStreamReader::FitStreamReader() : d_ptr(new FitStreamReaderPrivate(this))
{

}

/*!
 * Constructs a FIT stream reader that reads from \a data.
 *
 * \c data may be empty or incomplete, in which case more data can be added later via addData().
 *
 * \param data FIT data to begin reading.
 *
 * \sa addData
 */
FitStreamReader::FitStreamReader(const QByteArray &data) : d_ptr(new FitStreamReaderPrivate(this))
{
    Q_D(FitStreamReader);
    d->data = data;
    d->parseFileHeader<QByteArray>();
}

/*!
 * Constructs a FIT stream reader that reads from \c device.
 *
 * \c device must be open for reading, but does not need to have any bytes available yet.
 *
 * \note The caller is responsible for ensuring that \c device remains valid for the lifetime of the
 * constructed reader, or until clear() or setDevice() is used to clear or replace the device.
 *
 * \param device Device to to begin reading.
 *
 * \sa clear
 * \sa setDevice
 */
FitStreamReader::FitStreamReader(QIODevice *device) : d_ptr(new FitStreamReaderPrivate(this))
{
    Q_D(FitStreamReader);
    d->device = device;
    d->parseFileHeader<QIODevice>();
}

/*!
 * Destroys the FIT stream reader.
 */
FitStreamReader::~FitStreamReader()
{
    delete d_ptr;
}

/*!
 * Adds more data to read.
 *
 * \note It is not valid to use this function if a device has been assigned, ie via either the
 * FitStreamReader(QIODevice *device) constructor, or setDevice().
 *
 * \param data Additonal data to read.
 */
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

/*!
 * Returns \c true if the reader has reached the end of the underlying data or device, or an error
 * has occurred.
 *
 * \todo Implement this method.
 *
 * \return \c true if the reader has reached the end of the underlying data or device.
 */
bool FitStreamReader::atEnd() const
{
    return false; /// @todo Implement this method.
}

/*!
 * Clears the FIT stream reader.
 *
 * This returns the reader to a state equivalent to having just been default-constructed.
 *
 * \sa FitStreamReader()
 */
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

/*!
 * Returns the current device associated with the reader, or \c nullptr if no device is assigned.
 *
 * \return the current device associated with the reader, or \c nullptr if no device is assigned.
 *
 * \sa setDevice
 */
QIODevice * FitStreamReader::device() const
{
    Q_D(const FitStreamReader);
    return d->device;
}

// [enum] Error error() const; or lastError?
// QString errorString() const;

/*!
 * Sets the current device to \c device, and resets the stream to its initial state.
 *
 * \c device must be open for reading, but does not need to have any bytes available yet.
 *
 * \note The caller is responsible for ensuring that \c device remains valid for the lifetime of the
 * constructed reader, or until clear() or setDevice() is used to clear or replace the device.
 *
 * \param device IO device to read from.
 *
 * \sa device
 */
void FitStreamReader::setDevice(QIODevice *device)
{
    Q_D(FitStreamReader);
    if (device) clear();
    d->device = device;
    if (device) d->parseFileHeader<QIODevice>();
}

/*!
 * \internal
 *
 * Calculates a checksum, as per the algorithm used by FIT file headers.
 *
 * \todo Move this somewhere appropriate (probably FitStreamReaderPrivate).
 *
 * \param data FIT file header to calculate the checksum for.
 *
 * \return 16-bit checksum for \a data.
 */
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

/*!
 * Returns the profile version read from the FIT file header, otherwise a null QVersionNumber.
 *
 * FIT profile versions have only two components - major and minor. Both have a maximum value of
 * 15, as the underlying format uses 4-bits for each component.
 *
 * \return the profile version read from the FIT file header, otherwise a null QVersionNumber.
 */
QVersionNumber FitStreamReader::profileVersion() const
{
    Q_D(const FitStreamReader);
    return d->profileVersion;
}

/*!
 * Returns the protocol version read from the FIT file header, otherwise a null QVersionNumber.
 *
 * FIT protocol versions have only two components - major and minor. The minor component is limited
 * to the range 0 to 100, whereas the major component may be (theoreticlly) 0 to 655.
 *
 * \return the protocol version read from the FIT file header, otherwise a null QVersionNumber.
 */
QVersionNumber FitStreamReader::protocolVersion() const
{
    Q_D(const FitStreamReader);
    return d->protocolVersion;
}

/*!
 * Returns the next FIT data message from the underlying stream, or a null data message if none
 * could be read.
 *
 * If FIT header has not been read yet, it will be read first. If any FIT definition messages are
 * found, they will be parsed, and kept in a dictionary, to used for interpretation of subsequent
 * data messages. Reading will continue until the next FIT data message is found, or no more bytes
 * are available for reading.
 *
 * \todo Document how the caller should distinguish errors, from more-data-needed.
 *
 * \return the next FIT data message, or a null data message.
 *
 * \sa addData
 */
AbstractDataMessage * FitStreamReader::readNext()
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

template<> FitStreamReaderPrivate::size_t FitStreamReaderPrivate::bytesAvailable<QByteArray>() const
{
    Q_ASSERT(device == nullptr);
    return data.size() - dataOffset;
}

template<> FitStreamReaderPrivate::size_t FitStreamReaderPrivate::bytesAvailable<QIODevice>() const
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
    // Parse the record header.
    qDebug() << "parsing definition message";
    Q_ASSERT(bytesAvailable<T>());
    const quint8 recordHeader = peekByte<T>();
    qDebug() << __func__ << "recordHeader" << recordHeader;
    Q_ASSERT_X(isDefinitionMessage(recordHeader), "parseDefinitionMessage",
               "FIT record header does not indiciate a definition message");
    const bool hasDevFields = (recordHeader & (1 << 5));
    qDebug() << __func__ << "has dev fields" << hasDevFields;
    qDebug() << __func__ << "reserved" << (recordHeader & (1 << 4));
    const quint8 localMessageType = (recordHeader & 0xF); // Least significant 4 bits.
    qDebug() << __func__ << "local message type" << localMessageType;

    // Read the completed definition record (if available).
    if (bytesAvailable<T>() < 6) {
        return false; // Not enough bytes.
    }
    const quint8 numberOfFields = peekByte<T>(5);
    qDebug() << __func__ << "number of fields" << numberOfFields;
    int numberOfDevFields = 0;
    if (hasDevFields) {
        const int offsetToNumberOfDevFields = 6 + (numberOfFields * 3);
        qDebug() << __func__ << "offset to number of dev fields" << offsetToNumberOfDevFields;
        if (bytesAvailable<T>() < offsetToNumberOfDevFields) {
            return false; // Not enough bytes.
        }
        numberOfDevFields = peekByte<T>(offsetToNumberOfDevFields);
    }
    const int recordSize = 6 + (numberOfFields * 3) + (hasDevFields ? 1 + (numberOfDevFields * 3) : 0);
    qDebug() << __func__ << "number of dev fields" << numberOfDevFields;
    qDebug() << __func__ << "record size" << recordSize;
    const QByteArray record = readBytes<T>(recordSize);
    if (record.isEmpty()) {
        return false; // Not enough bytes.
    }

    // Parse the rest of the definition record.
    DataDefinition defn;
    defn.recordSize = 0;
    defn.architecture = static_cast<Architecture>(record.at(2));
    qDebug() << __func__ << "architecture" << (int)defn.architecture;
    qDebug() << record.mid(3,2);
    defn.globalMessageNumber = static_cast<MesgNum>((defn.architecture == Architecture::BigEndian)
        ? qFromBigEndian<quint16>(record.mid(3,2))
        : qFromLittleEndian<quint16>(record.mid(3,2)));
    qDebug() << __func__ << "header" << (quint8)record.at(0);
    qDebug() << __func__ << "reserved" << (quint8)record.at(1);
    qDebug() << __func__ << "msgNum" << (int)defn.globalMessageNumber;

    // Parse the definition fields.
    for (int i=0; i < numberOfFields; ++i) {
        const int pos = 6 + (i * 3);
        FieldDefinition field;
        field.number = record.at(pos);
        field.size = record.at(pos+1);
        field.baseType = static_cast<FitBaseType>(record.at(pos+2));
        qDebug() << __func__ << "field" << i << "number" << field.number;
        qDebug() << __func__ << "field" << i << "size" << field.size;
        qDebug() << __func__ << "field" << i << "type" << static_cast<quint8>(field.baseType);
        defn.fieldDefinitions.append(field);
        defn.recordSize += field.size;
    }
    Q_ASSERT(defn.fieldDefinitions.size() == numberOfFields);
    qDebug() << __func__ << "defn record size" << defn.recordSize;

    // Parse the definition fields.
    Q_ASSERT(hasDevFields || (numberOfDevFields == 0));
    for (int i=0; i < numberOfDevFields; ++i) {
        const int pos = 6 + (numberOfFields * 3) + 1 + (i * 3);
        DeveloperFieldDefinition field;
        field.fieldNumber = record.at(pos);
        field.size = record.at(pos+1);
        field.devDataIndex = record.at(pos+2);
        qDebug() << __func__ << "dev field" << i << "number" << field.fieldNumber;
        qDebug() << __func__ << "dev field" << i << "size" << field.size;
        qDebug() << __func__ << "dev field" << i << "dataIndex" << field.devDataIndex;
        defn.developerFieldDefinitions.append(field);
        defn.recordSize += field.size;
    }
    Q_ASSERT(defn.developerFieldDefinitions.size() == numberOfDevFields);
    qDebug() << __func__ << "defn record size" << defn.recordSize;
    if (defn.recordSize == 0) {
        qWarning() << "defintion record size is zero";
    }

    // Record the definition data for future Data Messages.
    dataDefinitions.insert(localMessageType, defn);
    return true;
}

template<class T> AbstractDataMessage * FitStreamReaderPrivate::parseDataMessage()
{
    Q_ASSERT(bytesAvailable<T>());
    qDebug() << "parsing data message";
    const quint8 recordHeader = peekByte<T>();
    qDebug() << __func__ << "recordHeader" << recordHeader;
    Q_ASSERT_X(!isDefinitionMessage(recordHeader), "parseDataMessage",
               "FIT record header does not indiciate a data message");

    // Parse the record header.
    quint8 localMessageType;
    if (recordHeader & (1 << 7)) { // Compressed Timestamp Header.
        qDebug() << __func__ << "Compressed Timestamp Header";
        localMessageType = ((recordHeader >> 4) & 0x7);
        const quint8 timeOffset = (recordHeader & 0xF);
        qDebug() << "time offset" << timeOffset;
        /// \todo Process timeOffset.
    } else { // Normal (Data Message) Header
        qDebug() << __func__ << "Normal (Data Message) Header";
        qDebug() << __func__ << "reserved5" << (recordHeader & (1 << 5));
        qDebug() << __func__ << "reserved4" << (recordHeader & (1 << 4));
        localMessageType = (recordHeader & 0xF); // Least significant 4 bits.
    }
    qDebug() << __func__ << "local message type" << localMessageType;

    // Lookup the record's field definitions.
    if (!dataDefinitions.contains(localMessageType)) {
        qWarning() << "No definition for local message type" << localMessageType;
        /// \todo Set error code.
        return nullptr; // FIT data is corrupt; we cannot safely continue parsing.
    }
    const DataDefinition defn = dataDefinitions.value(localMessageType);

    // Parse record's Data Fields.
    qDebug() << __func__ << "record size" << defn.recordSize;
    if (defn.recordSize == 0) {
        qWarning() << "record size is zero"; // Not really sure what to do here.
        return nullptr;
    }
    const QByteArray record = readBytes<T>(defn.recordSize+1);
    if (record.isEmpty()) {
        return nullptr; // Not enough bytes.
    }
    qDebug() << "record" << record.mid(1);
    return AbstractDataMessage::fromData(&defn, record.mid(1));
}

template<> quint8 FitStreamReaderPrivate::peekByte<QByteArray>(const int pos) const
{
    Q_ASSERT(device == nullptr);
    return (data.size() > (dataOffset + pos)) ? data.at(dataOffset+pos) : 0;
}

template<> quint8 FitStreamReaderPrivate::peekByte<QIODevice>(const int pos) const
{
    Q_ASSERT(device != nullptr);
    const QByteArray bytes = device->peek(1+pos);
    return (bytes.size() > pos) ? bytes.at(pos) : 0;
}

template<> QByteArray FitStreamReaderPrivate::readBytes<QByteArray>(const size_t size)
{
    Q_ASSERT(device == nullptr);
    return ((data.size() - dataOffset) < size) ? QByteArray() : data.mid((dataOffset+=size)-size, size);
}

template<> QByteArray FitStreamReaderPrivate::readBytes<QIODevice>(const size_t size)
{
    Q_ASSERT(device != nullptr);
    return (device->bytesAvailable() < size) ? QByteArray() : device->read(size);
}

template<class T> QByteArray FitStreamReaderPrivate::readFileHeader()
{
    // Return `n` bytes, where `n` is given by the first byte (ie a length-prefixed buffer).
    return (bytesAvailable<T>()) ? readBytes<T>(peekByte<T>()) : QByteArray();
}

template<class T> AbstractDataMessage * FitStreamReaderPrivate::readNextDataMessage()
{
    // If we haven't parsed the FIT File Header yet, do so now.
    if ((protocolVersion.isNull() && (!parseFileHeader<T>()))) {
        return nullptr;
    }

    // Process all FIT Data Records until we get a FIT Data Message (or run out of bytes).
    while (bytesAvailable<T>()) { // At least one byte, for the next data record header byte.
        const quint8 recordHeader = peekByte<T>();
        if (isDefinitionMessage(recordHeader)) {
            if (!parseDefinitionMessage<T>()) return nullptr;
            // Not returning here; we'll continue processing until we get a FIT Data Message.
        } else return parseDataMessage<T>();
    }
    return nullptr;
}

bool FitStreamReaderPrivate::isDefinitionMessage(const quint8 recordHeader)
{
    // For definition messages, bit 7 must be off (bit 7 on would indicate a Compressed Timestamp
    // Data Message, which cannot be a Definition Message), and bit 6 must be on (otherwise this
    // woud be a Normal Data Message, not a Definition Message).
    return ((recordHeader >> 6) == 1); // Match bit 7 on and 6 off; ie 01xxxxxx.
}

QTFIT_END_NAMESPACE
