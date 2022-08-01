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

/*!
 * \file
 * Defines the ActivityMessage, and ActivityMessagePrivate classes.
 */

#include <qtfit/activitymessage.h>
#include "activitymessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class ActivityMessage
 *
 * The ActivityMessage class represents a FIT ActivityMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a ActivityMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ActivityMessage::ActivityMessage() : AbstractDataMessage(new ActivityMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a ActivityMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
ActivityMessage::ActivityMessage(ActivityMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the ActivityMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime ActivityMessage::timestamp() const
{
    Q_D(const ActivityMessage);
    return d->timestamp;
}

/*!
 * Returns the ActivityMessage data message's \c totalTimerTime field's current value.
 *
 * Exclude pauses
 *
 * \return the \c totalTimerTime field value.
 */
quint32 ActivityMessage::totalTimerTime() const
{
    Q_D(const ActivityMessage);
    return d->totalTimerTime;
}

/*!
 * Returns the ActivityMessage data message's \c numSessions field's current value.
 *
 * \return the \c numSessions field value.
 */
quint16 ActivityMessage::numSessions() const
{
    Q_D(const ActivityMessage);
    return d->numSessions;
}

/*!
 * Returns the ActivityMessage data message's \c type field's current value.
 *
 * \return the \c type field value.
 */
Activity ActivityMessage::type() const
{
    Q_D(const ActivityMessage);
    return d->type;
}

/*!
 * Returns the ActivityMessage data message's \c event field's current value.
 *
 * \return the \c event field value.
 */
Event ActivityMessage::event() const
{
    Q_D(const ActivityMessage);
    return d->event;
}

/*!
 * Returns the ActivityMessage data message's \c eventType field's current value.
 *
 * \return the \c eventType field value.
 */
EventType ActivityMessage::eventType() const
{
    Q_D(const ActivityMessage);
    return d->eventType;
}

/*!
 * Returns the ActivityMessage data message's \c localTimestamp field's current value.
 *
 * timestamp epoch expressed in local time, used to convert activity timestamps to local time 
 *
 * \return the \c localTimestamp field value.
 */
LocalDateTime ActivityMessage::localTimestamp() const
{
    Q_D(const ActivityMessage);
    return d->localTimestamp;
}

/*!
 * Returns the ActivityMessage data message's \c eventGroup field's current value.
 *
 * \return the \c eventGroup field value.
 */
quint8 ActivityMessage::eventGroup() const
{
    Q_D(const ActivityMessage);
    return d->eventGroup;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void ActivityMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(ActivityMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c totalTimerTime field to \a totalTimerTime.
 *
 * \param totalTimerTime The field value to set.
 */
void ActivityMessage::setTotalTimerTime(const quint32 totalTimerTime)
{
    Q_D(ActivityMessage);
    d->totalTimerTime = totalTimerTime;
}
/*!
 * Sets the \c numSessions field to \a numSessions.
 *
 * \param numSessions The field value to set.
 */
void ActivityMessage::setNumSessions(const quint16 numSessions)
{
    Q_D(ActivityMessage);
    d->numSessions = numSessions;
}
/*!
 * Sets the \c type field to \a type.
 *
 * \param type The field value to set.
 */
void ActivityMessage::setType(const Activity type)
{
    Q_D(ActivityMessage);
    d->type = type;
}
/*!
 * Sets the \c event field to \a event.
 *
 * \param event The field value to set.
 */
void ActivityMessage::setEvent(const Event event)
{
    Q_D(ActivityMessage);
    d->event = event;
}
/*!
 * Sets the \c eventType field to \a eventType.
 *
 * \param eventType The field value to set.
 */
void ActivityMessage::setEventType(const EventType eventType)
{
    Q_D(ActivityMessage);
    d->eventType = eventType;
}
/*!
 * Sets the \c localTimestamp field to \a localTimestamp.
 *
 * \param localTimestamp The field value to set.
 */
void ActivityMessage::setLocalTimestamp(const LocalDateTime localTimestamp)
{
    Q_D(ActivityMessage);
    d->localTimestamp = localTimestamp;
}
/*!
 * Sets the \c eventGroup field to \a eventGroup.
 *
 * \param eventGroup The field value to set.
 */
void ActivityMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(ActivityMessage);
    d->eventGroup = eventGroup;
}

/// \cond internal

/*!
 * \internal
 *
 * \class ActivityMessagePrivate
 *
 * The ActivityMessagePrivate class provides private implementation for the ActivityMessage.
 *
 * \sa ActivityMessage
 */

/*!
 * \internal
 *
 * Constructs a ActivityMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ActivityMessagePrivate::ActivityMessagePrivate(ActivityMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , totalTimerTime(0xFFFFFFFF)
  , numSessions(0xFFFF)
  , type(static_cast<Activity>(-1))
  , event(static_cast<Event>(-1))
  , eventType(static_cast<EventType>(-1))
  , localTimestamp(static_cast<LocalDateTime>(-1))
  , eventGroup(0xFF)
{
    globalMessageNumber = MesgNum::Activity;
}

/*!
 * \internal
 *
 * Destroys the ActivityMessagePrivate object.
 */
ActivityMessagePrivate::~ActivityMessagePrivate()
{

}

bool ActivityMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:activity.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "activity.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:activity.totalTimerTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "activity.totalTimerTime")) return false;
        this->totalTimerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:activity.numSessions
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "activity.numSessions")) return false;
        this->numSessions = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:activity.type
        if (!verify(data, baseType, 1, FitBaseType::Enum, "activity.type")) return false;
        this->type = static_cast<Activity>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:activity.event
        if (!verify(data, baseType, 1, FitBaseType::Enum, "activity.event")) return false;
        this->event = static_cast<Event>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:activity.eventType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "activity.eventType")) return false;
        this->eventType = static_cast<EventType>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:activity.localTimestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "activity.localTimestamp")) return false;
        this->localTimestamp = static_cast<LocalDateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:activity.eventGroup
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "activity.eventGroup")) return false;
        this->eventGroup = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown activity message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
