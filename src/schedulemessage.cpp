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

#include <QDebug>
#include <QtEndian>

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

ScheduleMessagePrivate::ScheduleMessagePrivate(ScheduleMessage * const q)
  : FitDataMessagePrivate(q)
  , manufacturer(static_cast<Manufacturer>(-1))
  , product(0xFFFF)
  , serialNumber(0)
  , timeCreated(static_cast<DateTime>(-1))
  , completed(static_cast<bool>(-1))
  , type(static_cast<Schedule>(-1))
  , scheduledTime(static_cast<LocalDateTime>(-1))
{
    globalMessageNumber = MesgNum::Schedule;
}

ScheduleMessagePrivate::~ScheduleMessagePrivate()
{

}

bool ScheduleMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:schedule.manufacturer
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "schedule.manufacturer has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "schedule.manufacturer size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:schedule.product
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "schedule.product has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "schedule.product size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->product = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:schedule.serialNumber
        if (baseType != FitBaseType::Uint32z) {
            /// \todo Add toString function for baseType.
            qWarning() << "schedule.serialNumber has base type" << static_cast<int>(baseType) << "but should be Uint32z";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "schedule.serialNumber size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->serialNumber = static_cast<quint32z>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:schedule.timeCreated
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "schedule.timeCreated has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "schedule.timeCreated size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeCreated = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:schedule.completed
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "schedule.completed has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "schedule.completed size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->completed = static_cast<bool>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:schedule.type
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "schedule.type has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "schedule.type size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->type = static_cast<Schedule>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:schedule.scheduledTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "schedule.scheduledTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "schedule.scheduledTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->scheduledTime = static_cast<LocalDateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown schedule message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
