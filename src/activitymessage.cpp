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

#include "activitymessage.h"
#include "activitymessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

ActivityMessage::ActivityMessage() : FitDataMessage(new ActivityMessagePrivate(this))
{

}

DateTime ActivityMessage::timestamp() const
{
    Q_D(const ActivityMessage);
    return d->timestamp;
}

quint32 ActivityMessage::totalTimerTime() const
{
    Q_D(const ActivityMessage);
    return d->totalTimerTime;
}

quint16 ActivityMessage::numSessions() const
{
    Q_D(const ActivityMessage);
    return d->numSessions;
}

Activity ActivityMessage::type() const
{
    Q_D(const ActivityMessage);
    return d->type;
}

Event ActivityMessage::event() const
{
    Q_D(const ActivityMessage);
    return d->event;
}

EventType ActivityMessage::eventType() const
{
    Q_D(const ActivityMessage);
    return d->eventType;
}

LocalDateTime ActivityMessage::localTimestamp() const
{
    Q_D(const ActivityMessage);
    return d->localTimestamp;
}

quint8 ActivityMessage::eventGroup() const
{
    Q_D(const ActivityMessage);
    return d->eventGroup;
}

void ActivityMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(ActivityMessage);
    d->timestamp = timestamp;
}
void ActivityMessage::setTotalTimerTime(const quint32 totalTimerTime)
{
    Q_D(ActivityMessage);
    d->totalTimerTime = totalTimerTime;
}
void ActivityMessage::setNumSessions(const quint16 numSessions)
{
    Q_D(ActivityMessage);
    d->numSessions = numSessions;
}
void ActivityMessage::setType(const Activity type)
{
    Q_D(ActivityMessage);
    d->type = type;
}
void ActivityMessage::setEvent(const Event event)
{
    Q_D(ActivityMessage);
    d->event = event;
}
void ActivityMessage::setEventType(const EventType eventType)
{
    Q_D(ActivityMessage);
    d->eventType = eventType;
}
void ActivityMessage::setLocalTimestamp(const LocalDateTime localTimestamp)
{
    Q_D(ActivityMessage);
    d->localTimestamp = localTimestamp;
}
void ActivityMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(ActivityMessage);
    d->eventGroup = eventGroup;
}

ActivityMessagePrivate::ActivityMessagePrivate(ActivityMessage * const q)
  : FitDataMessagePrivate(q)
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

ActivityMessagePrivate::~ActivityMessagePrivate()
{

}

bool ActivityMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:activity.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "activity.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "activity.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:activity.totalTimerTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "activity.totalTimerTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "activity.totalTimerTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalTimerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:activity.numSessions
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "activity.numSessions has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "activity.numSessions size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->numSessions = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:activity.type
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "activity.type has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "activity.type size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->type = static_cast<Activity>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:activity.event
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "activity.event has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "activity.event size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->event = static_cast<Event>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:activity.eventType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "activity.eventType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "activity.eventType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->eventType = static_cast<EventType>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:activity.localTimestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "activity.localTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "activity.localTimestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->localTimestamp = static_cast<LocalDateTime>(bigEndian ? qFromBigEndian<LocalDateTime>(data) : qFromLittleEndian<LocalDateTime>(data));
        break;
    case 6: // See Profile.xlsx::Messages:activity.eventGroup
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "activity.eventGroup has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "activity.eventGroup size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->eventGroup = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown activity message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
