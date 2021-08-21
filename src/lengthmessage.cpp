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

#include <QDebug>
#include <QtEndian>

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

bool LengthMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:length.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "length.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 253: // See Profile.xlsx::Messages:length.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "length.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:length.event
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.event has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "length.event size is" << data.size() << "but should be" << 1;
            return false;
        }
        event = static_cast<Event>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:length.eventType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.eventType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "length.eventType size is" << data.size() << "but should be" << 1;
            return false;
        }
        eventType = static_cast<EventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:length.startTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.startTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "length.startTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        startTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 3: // See Profile.xlsx::Messages:length.totalElapsedTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.totalElapsedTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "length.totalElapsedTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        totalElapsedTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:length.totalTimerTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.totalTimerTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "length.totalTimerTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        totalTimerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:length.totalStrokes
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.totalStrokes has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "length.totalStrokes size is" << data.size() << "but should be" << 2;
            return false;
        }
        totalStrokes = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:length.avgSpeed
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.avgSpeed has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "length.avgSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        avgSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 7: // See Profile.xlsx::Messages:length.swimStroke
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.swimStroke has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "length.swimStroke size is" << data.size() << "but should be" << 1;
            return false;
        }
        swimStroke = static_cast<SwimStroke>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:length.avgSwimmingCadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.avgSwimmingCadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "length.avgSwimmingCadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        avgSwimmingCadence = static_cast<quint8>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:length.eventGroup
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.eventGroup has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "length.eventGroup size is" << data.size() << "but should be" << 1;
            return false;
        }
        eventGroup = static_cast<quint8>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:length.totalCalories
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.totalCalories has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "length.totalCalories size is" << data.size() << "but should be" << 2;
            return false;
        }
        totalCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 12: // See Profile.xlsx::Messages:length.lengthType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.lengthType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "length.lengthType size is" << data.size() << "but should be" << 1;
            return false;
        }
        lengthType = static_cast<LengthType>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:length.playerScore
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.playerScore has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "length.playerScore size is" << data.size() << "but should be" << 2;
            return false;
        }
        playerScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 19: // See Profile.xlsx::Messages:length.opponentScore
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.opponentScore has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "length.opponentScore size is" << data.size() << "but should be" << 2;
            return false;
        }
        opponentScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 20: // See Profile.xlsx::Messages:length.strokeCount
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.strokeCount has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "length.strokeCount size is" << data.size() << "but should be" << 2;
            return false;
        }
        strokeCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 21: // See Profile.xlsx::Messages:length.zoneCount
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "length.zoneCount has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "length.zoneCount size is" << data.size() << "but should be" << 2;
            return false;
        }
        zoneCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown length message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
