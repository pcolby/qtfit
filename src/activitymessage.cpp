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

/// @todo Generate implementation.
bool ActivityMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
