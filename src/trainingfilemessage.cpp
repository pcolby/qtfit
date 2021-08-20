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

#include "trainingfilemessage.h"
#include "trainingfilemessage_p.h"

QTFIT_BEGIN_NAMESPACE

TrainingFileMessage::TrainingFileMessage() : FitDataMessage(new TrainingFileMessagePrivate(this))
{

}

DateTime TrainingFileMessage::timestamp() const
{
    Q_D(const TrainingFileMessage);
    return d->timestamp;
}

File TrainingFileMessage::type() const
{
    Q_D(const TrainingFileMessage);
    return d->type;
}

Manufacturer TrainingFileMessage::manufacturer() const
{
    Q_D(const TrainingFileMessage);
    return d->manufacturer;
}

quint16 TrainingFileMessage::product() const
{
    Q_D(const TrainingFileMessage);
    return d->product;
}

quint32z TrainingFileMessage::serialNumber() const
{
    Q_D(const TrainingFileMessage);
    return d->serialNumber;
}

DateTime TrainingFileMessage::timeCreated() const
{
    Q_D(const TrainingFileMessage);
    return d->timeCreated;
}

void TrainingFileMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(TrainingFileMessage);
    d->timestamp = timestamp;
}
void TrainingFileMessage::setType(const File type)
{
    Q_D(TrainingFileMessage);
    d->type = type;
}
void TrainingFileMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(TrainingFileMessage);
    d->manufacturer = manufacturer;
}
void TrainingFileMessage::setProduct(const quint16 product)
{
    Q_D(TrainingFileMessage);
    d->product = product;
}
void TrainingFileMessage::setSerialNumber(const quint32z serialNumber)
{
    Q_D(TrainingFileMessage);
    d->serialNumber = serialNumber;
}
void TrainingFileMessage::setTimeCreated(const DateTime timeCreated)
{
    Q_D(TrainingFileMessage);
    d->timeCreated = timeCreated;
}

TrainingFileMessagePrivate::TrainingFileMessagePrivate(TrainingFileMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , type(static_cast<File>(-1))
  , manufacturer(static_cast<Manufacturer>(-1))
  , product(0xFFFF)
  , serialNumber(0)
  , timeCreated(static_cast<DateTime>(-1))
{
    globalMessageNumber = MesgNum::TrainingFile;
}

TrainingFileMessagePrivate::~TrainingFileMessagePrivate()
{

}

/// @todo Generate implementation.
bool TrainingFileMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
