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

#include "lengthmessage.h"
#include "lengthmessage_p.h"

QTFIT_BEGIN_NAMESPACE

LengthMessage::LengthMessage() : FitDataMessage(new LengthMessagePrivate(this))
{

}

MessageIndex LengthMessage::messageIndex() const
{
    Q_D(const LengthMessage);
    return d->messageIndex;
}

DateTime LengthMessage::timestamp() const
{
    Q_D(const LengthMessage);
    return d->timestamp;
}

Event LengthMessage::event() const
{
    Q_D(const LengthMessage);
    return d->event;
}

EventType LengthMessage::eventType() const
{
    Q_D(const LengthMessage);
    return d->eventType;
}

DateTime LengthMessage::startTime() const
{
    Q_D(const LengthMessage);
    return d->startTime;
}

quint32 LengthMessage::totalElapsedTime() const
{
    Q_D(const LengthMessage);
    return d->totalElapsedTime;
}

quint32 LengthMessage::totalTimerTime() const
{
    Q_D(const LengthMessage);
    return d->totalTimerTime;
}

quint16 LengthMessage::totalStrokes() const
{
    Q_D(const LengthMessage);
    return d->totalStrokes;
}

quint16 LengthMessage::avgSpeed() const
{
    Q_D(const LengthMessage);
    return d->avgSpeed;
}

SwimStroke LengthMessage::swimStroke() const
{
    Q_D(const LengthMessage);
    return d->swimStroke;
}

quint8 LengthMessage::avgSwimmingCadence() const
{
    Q_D(const LengthMessage);
    return d->avgSwimmingCadence;
}

quint8 LengthMessage::eventGroup() const
{
    Q_D(const LengthMessage);
    return d->eventGroup;
}

quint16 LengthMessage::totalCalories() const
{
    Q_D(const LengthMessage);
    return d->totalCalories;
}

LengthType LengthMessage::lengthType() const
{
    Q_D(const LengthMessage);
    return d->lengthType;
}

quint16 LengthMessage::playerScore() const
{
    Q_D(const LengthMessage);
    return d->playerScore;
}

quint16 LengthMessage::opponentScore() const
{
    Q_D(const LengthMessage);
    return d->opponentScore;
}

quint16 LengthMessage::strokeCount() const
{
    Q_D(const LengthMessage);
    return d->strokeCount;
}

quint16 LengthMessage::zoneCount() const
{
    Q_D(const LengthMessage);
    return d->zoneCount;
}

void LengthMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(LengthMessage);
    d->messageIndex = messageIndex;
}
void LengthMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(LengthMessage);
    d->timestamp = timestamp;
}
void LengthMessage::setEvent(const Event event)
{
    Q_D(LengthMessage);
    d->event = event;
}
void LengthMessage::setEventType(const EventType eventType)
{
    Q_D(LengthMessage);
    d->eventType = eventType;
}
void LengthMessage::setStartTime(const DateTime startTime)
{
    Q_D(LengthMessage);
    d->startTime = startTime;
}
void LengthMessage::setTotalElapsedTime(const quint32 totalElapsedTime)
{
    Q_D(LengthMessage);
    d->totalElapsedTime = totalElapsedTime;
}
void LengthMessage::setTotalTimerTime(const quint32 totalTimerTime)
{
    Q_D(LengthMessage);
    d->totalTimerTime = totalTimerTime;
}
void LengthMessage::setTotalStrokes(const quint16 totalStrokes)
{
    Q_D(LengthMessage);
    d->totalStrokes = totalStrokes;
}
void LengthMessage::setAvgSpeed(const quint16 avgSpeed)
{
    Q_D(LengthMessage);
    d->avgSpeed = avgSpeed;
}
void LengthMessage::setSwimStroke(const SwimStroke swimStroke)
{
    Q_D(LengthMessage);
    d->swimStroke = swimStroke;
}
void LengthMessage::setAvgSwimmingCadence(const quint8 avgSwimmingCadence)
{
    Q_D(LengthMessage);
    d->avgSwimmingCadence = avgSwimmingCadence;
}
void LengthMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(LengthMessage);
    d->eventGroup = eventGroup;
}
void LengthMessage::setTotalCalories(const quint16 totalCalories)
{
    Q_D(LengthMessage);
    d->totalCalories = totalCalories;
}
void LengthMessage::setLengthType(const LengthType lengthType)
{
    Q_D(LengthMessage);
    d->lengthType = lengthType;
}
void LengthMessage::setPlayerScore(const quint16 playerScore)
{
    Q_D(LengthMessage);
    d->playerScore = playerScore;
}
void LengthMessage::setOpponentScore(const quint16 opponentScore)
{
    Q_D(LengthMessage);
    d->opponentScore = opponentScore;
}
void LengthMessage::setStrokeCount(const quint16 strokeCount)
{
    Q_D(LengthMessage);
    d->strokeCount = strokeCount;
}
void LengthMessage::setZoneCount(const quint16 zoneCount)
{
    Q_D(LengthMessage);
    d->zoneCount = zoneCount;
}

LengthMessagePrivate::LengthMessagePrivate(LengthMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , timestamp(static_cast<DateTime>(-1))
  , event(static_cast<Event>(-1))
  , eventType(static_cast<EventType>(-1))
  , startTime(static_cast<DateTime>(-1))
  , totalElapsedTime(0xFFFFFFFF)
  , totalTimerTime(0xFFFFFFFF)
  , totalStrokes(0xFFFF)
  , avgSpeed(0xFFFF)
  , swimStroke(static_cast<SwimStroke>(-1))
  , avgSwimmingCadence(0xFF)
  , eventGroup(0xFF)
  , totalCalories(0xFFFF)
  , lengthType(static_cast<LengthType>(-1))
  , playerScore(0xFFFF)
  , opponentScore(0xFFFF)
  , strokeCount(0xFFFF)
  , zoneCount(0xFFFF)
{
    globalMessageNumber = MesgNum::Length;
}

LengthMessagePrivate::~LengthMessagePrivate()
{

}

/// @todo Generate implementation.
bool LengthMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
