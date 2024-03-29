// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the ScheduleMessage, and ScheduleMessagePrivate classes.
 */

#include <qtfit/schedulemessage.h>
#include "schedulemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class ScheduleMessage
 *
 * The ScheduleMessage class represents a FIT ScheduleMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a ScheduleMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ScheduleMessage::ScheduleMessage() : AbstractDataMessage(new ScheduleMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a ScheduleMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
ScheduleMessage::ScheduleMessage(ScheduleMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the ScheduleMessage data message's \c manufacturer field's current value.
 *
 * Corresponds to file_id of scheduled workout / course.
 *
 * \return the \c manufacturer field value.
 */
Manufacturer ScheduleMessage::manufacturer() const
{
    Q_D(const ScheduleMessage);
    return d->manufacturer;
}

/*!
 * Returns the ScheduleMessage data message's \c product field's current value.
 *
 * Corresponds to file_id of scheduled workout / course.
 *
 * \return the \c product field value.
 */
quint16 ScheduleMessage::product() const
{
    Q_D(const ScheduleMessage);
    return d->product;
}

/*!
 * Returns the ScheduleMessage data message's \c serialNumber field's current value.
 *
 * Corresponds to file_id of scheduled workout / course.
 *
 * \return the \c serialNumber field value.
 */
quint32z ScheduleMessage::serialNumber() const
{
    Q_D(const ScheduleMessage);
    return d->serialNumber;
}

/*!
 * Returns the ScheduleMessage data message's \c timeCreated field's current value.
 *
 * Corresponds to file_id of scheduled workout / course.
 *
 * \return the \c timeCreated field value.
 */
DateTime ScheduleMessage::timeCreated() const
{
    Q_D(const ScheduleMessage);
    return d->timeCreated;
}

/*!
 * Returns the ScheduleMessage data message's \c completed field's current value.
 *
 * TRUE if this activity has been started
 *
 * \return the \c completed field value.
 */
bool ScheduleMessage::completed() const
{
    Q_D(const ScheduleMessage);
    return d->completed;
}

/*!
 * Returns the ScheduleMessage data message's \c type field's current value.
 *
 * \return the \c type field value.
 */
Schedule ScheduleMessage::type() const
{
    Q_D(const ScheduleMessage);
    return d->type;
}

/*!
 * Returns the ScheduleMessage data message's \c scheduledTime field's current value.
 *
 * \return the \c scheduledTime field value.
 */
LocalDateTime ScheduleMessage::scheduledTime() const
{
    Q_D(const ScheduleMessage);
    return d->scheduledTime;
}

/*!
 * Sets the \c manufacturer field to \a manufacturer.
 *
 * \param manufacturer The field value to set.
 */
void ScheduleMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(ScheduleMessage);
    d->manufacturer = manufacturer;
}
/*!
 * Sets the \c product field to \a product.
 *
 * \param product The field value to set.
 */
void ScheduleMessage::setProduct(const quint16 product)
{
    Q_D(ScheduleMessage);
    d->product = product;
}
/*!
 * Sets the \c serialNumber field to \a serialNumber.
 *
 * \param serialNumber The field value to set.
 */
void ScheduleMessage::setSerialNumber(const quint32z serialNumber)
{
    Q_D(ScheduleMessage);
    d->serialNumber = serialNumber;
}
/*!
 * Sets the \c timeCreated field to \a timeCreated.
 *
 * \param timeCreated The field value to set.
 */
void ScheduleMessage::setTimeCreated(const DateTime timeCreated)
{
    Q_D(ScheduleMessage);
    d->timeCreated = timeCreated;
}
/*!
 * Sets the \c completed field to \a completed.
 *
 * \param completed The field value to set.
 */
void ScheduleMessage::setCompleted(const bool completed)
{
    Q_D(ScheduleMessage);
    d->completed = completed;
}
/*!
 * Sets the \c type field to \a type.
 *
 * \param type The field value to set.
 */
void ScheduleMessage::setType(const Schedule type)
{
    Q_D(ScheduleMessage);
    d->type = type;
}
/*!
 * Sets the \c scheduledTime field to \a scheduledTime.
 *
 * \param scheduledTime The field value to set.
 */
void ScheduleMessage::setScheduledTime(const LocalDateTime scheduledTime)
{
    Q_D(ScheduleMessage);
    d->scheduledTime = scheduledTime;
}

/// \cond internal

/*!
 * \internal
 *
 * \class ScheduleMessagePrivate
 *
 * The ScheduleMessagePrivate class provides private implementation for the ScheduleMessage.
 *
 * \sa ScheduleMessage
 */

/*!
 * \internal
 *
 * Constructs a ScheduleMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ScheduleMessagePrivate::ScheduleMessagePrivate(ScheduleMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the ScheduleMessagePrivate object.
 */
ScheduleMessagePrivate::~ScheduleMessagePrivate()
{

}

bool ScheduleMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:schedule.manufacturer
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "schedule.manufacturer")) return false;
        this->manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:schedule.product
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "schedule.product")) return false;
        this->product = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:schedule.serialNumber
        if (!verify(data, baseType, 4, FitBaseType::Uint32z, "schedule.serialNumber")) return false;
        this->serialNumber = static_cast<quint32z>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:schedule.timeCreated
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "schedule.timeCreated")) return false;
        this->timeCreated = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:schedule.completed
        if (!verify(data, baseType, 0, FitBaseType::Byte, "schedule.completed")) return false;
        this->completed = static_cast<bool>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:schedule.type
        if (!verify(data, baseType, 1, FitBaseType::Enum, "schedule.type")) return false;
        this->type = static_cast<Schedule>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:schedule.scheduledTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "schedule.scheduledTime")) return false;
        this->scheduledTime = static_cast<LocalDateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown schedule message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
