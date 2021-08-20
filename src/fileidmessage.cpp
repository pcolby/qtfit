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

/// @todo Generate implementation.
bool FileIdMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE
