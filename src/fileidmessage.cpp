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

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

#include "fileidmessage.h"
#include "fileidmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

FileIdMessage::FileIdMessage() : FitDataMessage(new FileIdMessagePrivate(this))
{

}

File FileIdMessage::type() const
{
    Q_D(const FileIdMessage);
    return d->type;
}

Manufacturer FileIdMessage::manufacturer() const
{
    Q_D(const FileIdMessage);
    return d->manufacturer;
}

quint16 FileIdMessage::product() const
{
    Q_D(const FileIdMessage);
    return d->product;
}

quint32z FileIdMessage::serialNumber() const
{
    Q_D(const FileIdMessage);
    return d->serialNumber;
}

DateTime FileIdMessage::timeCreated() const
{
    Q_D(const FileIdMessage);
    return d->timeCreated;
}

quint16 FileIdMessage::number() const
{
    Q_D(const FileIdMessage);
    return d->number;
}

QString FileIdMessage::productName() const
{
    Q_D(const FileIdMessage);
    return d->productName;
}

void FileIdMessage::setType(const File type)
{
    Q_D(FileIdMessage);
    d->type = type;
}
void FileIdMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(FileIdMessage);
    d->manufacturer = manufacturer;
}
void FileIdMessage::setProduct(const quint16 product)
{
    Q_D(FileIdMessage);
    d->product = product;
}
void FileIdMessage::setSerialNumber(const quint32z serialNumber)
{
    Q_D(FileIdMessage);
    d->serialNumber = serialNumber;
}
void FileIdMessage::setTimeCreated(const DateTime timeCreated)
{
    Q_D(FileIdMessage);
    d->timeCreated = timeCreated;
}
void FileIdMessage::setNumber(const quint16 number)
{
    Q_D(FileIdMessage);
    d->number = number;
}
void FileIdMessage::setProductName(const QString productName)
{
    Q_D(FileIdMessage);
    d->productName = productName;
}

FileIdMessagePrivate::FileIdMessagePrivate(FileIdMessage * const q)
  : FitDataMessagePrivate(q)
  , type(static_cast<File>(-1))
  , manufacturer(static_cast<Manufacturer>(-1))
  , product(0xFFFF)
  , serialNumber(0)
  , timeCreated(static_cast<DateTime>(-1))
  , number(0xFFFF)
{
    globalMessageNumber = MesgNum::FileId;
}

FileIdMessagePrivate::~FileIdMessagePrivate()
{

}

bool FileIdMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:file_id.type
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_id.type has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "file_id.type size is" << data.size() << "but should be" << 1;
            return false;
        }
        type = static_cast<File>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:file_id.manufacturer
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_id.manufacturer has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "file_id.manufacturer size is" << data.size() << "but should be" << 2;
            return false;
        }
        manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<Manufacturer>(data) : qFromLittleEndian<Manufacturer>(data));
        break;
    case 2: // See Profile.xlsx::Messages:file_id.product
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_id.product has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "file_id.product size is" << data.size() << "but should be" << 2;
            return false;
        }
        product = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:file_id.serialNumber
        if (baseType != FitBaseType::Uint32z) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_id.serialNumber has base type" << static_cast<int>(baseType) << "but should be Uint32z";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "file_id.serialNumber size is" << data.size() << "but should be" << 4;
            return false;
        }
        serialNumber = static_cast<quint32z>(bigEndian ? qFromBigEndian<quint32z>(data) : qFromLittleEndian<quint32z>(data));
        break;
    case 4: // See Profile.xlsx::Messages:file_id.timeCreated
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_id.timeCreated has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "file_id.timeCreated size is" << data.size() << "but should be" << 4;
            return false;
        }
        timeCreated = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 5: // See Profile.xlsx::Messages:file_id.number
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_id.number has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "file_id.number size is" << data.size() << "but should be" << 2;
            return false;
        }
        number = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:file_id.productName
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_id.productName has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "file_id.productName size is" << data.size() << "but should be" << 1;
            return false;
        }
        productName = static_cast<QString>(data.at(0));
        break;
    default:
        qWarning() << "unknown file_id message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
