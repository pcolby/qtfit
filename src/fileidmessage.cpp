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

bool FileIdMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:file_id.type
        if (!verify(data, baseType, 1, FitBaseType::Enum, "file_id.type")) return false;
        this->type = static_cast<File>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:file_id.manufacturer
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "file_id.manufacturer")) return false;
        this->manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:file_id.product
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "file_id.product")) return false;
        this->product = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:file_id.serialNumber
        if (!verify(data, baseType, 4, FitBaseType::Uint32z, "file_id.serialNumber")) return false;
        this->serialNumber = static_cast<quint32z>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:file_id.timeCreated
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "file_id.timeCreated")) return false;
        this->timeCreated = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:file_id.number
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "file_id.number")) return false;
        this->number = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:file_id.productName
        if (!verify(data, baseType, 1, FitBaseType::String, "file_id.productName")) return false;
        this->productName = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "unknown file_id message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
