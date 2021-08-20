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

#include "schedulemessage.h"
#include "schedulemessage_p.h"

QTFIT_BEGIN_NAMESPACE

ScheduleMessage::ScheduleMessage() : FitDataMessage(new ScheduleMessagePrivate(this))
{

}

Manufacturer ScheduleMessage::manufacturer() const
{
    Q_D(const ScheduleMessage);
    return d->manufacturer;
}

quint16 ScheduleMessage::product() const
{
    Q_D(const ScheduleMessage);
    return d->product;
}

quint32z ScheduleMessage::serialNumber() const
{
    Q_D(const ScheduleMessage);
    return d->serialNumber;
}

DateTime ScheduleMessage::timeCreated() const
{
    Q_D(const ScheduleMessage);
    return d->timeCreated;
}

bool ScheduleMessage::completed() const
{
    Q_D(const ScheduleMessage);
    return d->completed;
}

Schedule ScheduleMessage::type() const
{
    Q_D(const ScheduleMessage);
    return d->type;
}

LocalDateTime ScheduleMessage::scheduledTime() const
{
    Q_D(const ScheduleMessage);
    return d->scheduledTime;
}

void ScheduleMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(ScheduleMessage);
    d->manufacturer = manufacturer;
}
void ScheduleMessage::setProduct(const quint16 product)
{
    Q_D(ScheduleMessage);
    d->product = product;
}
void ScheduleMessage::setSerialNumber(const quint32z serialNumber)
{
    Q_D(ScheduleMessage);
    d->serialNumber = serialNumber;
}
void ScheduleMessage::setTimeCreated(const DateTime timeCreated)
{
    Q_D(ScheduleMessage);
    d->timeCreated = timeCreated;
}
void ScheduleMessage::setCompleted(const bool completed)
{
    Q_D(ScheduleMessage);
    d->completed = completed;
}
void ScheduleMessage::setType(const Schedule type)
{
    Q_D(ScheduleMessage);
    d->type = type;
}
void ScheduleMessage::setScheduledTime(const LocalDateTime scheduledTime)
{
    Q_D(ScheduleMessage);
    d->scheduledTime = scheduledTime;
}

ScheduleMessagePrivate::ScheduleMessagePrivate(ScheduleMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::Schedule;
}

ScheduleMessagePrivate::~ScheduleMessagePrivate()
{

}

/// @todo Generate implementation.
bool ScheduleMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
