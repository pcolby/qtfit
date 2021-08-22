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

/*!
 * \class LengthMessage
 *
 * The LengthMessage class represents a FIT LengthMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid LengthMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
LengthMessage::LengthMessage() : AbstractDataMessage(new LengthMessagePrivate(this))
{

}

/*!
 * Returns the LengthMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex LengthMessage::messageIndex() const
{
    Q_D(const LengthMessage);
    return d->messageIndex;
}

/*!
 * Returns the LengthMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime LengthMessage::timestamp() const
{
    Q_D(const LengthMessage);
    return d->timestamp;
}

/*!
 * Returns the LengthMessage data message's \c event field's current value.
 *
 * \return the \c event field value.
 */
Event LengthMessage::event() const
{
    Q_D(const LengthMessage);
    return d->event;
}

/*!
 * Returns the LengthMessage data message's \c eventType field's current value.
 *
 * \return the \c eventType field value.
 */
EventType LengthMessage::eventType() const
{
    Q_D(const LengthMessage);
    return d->eventType;
}

/*!
 * Returns the LengthMessage data message's \c startTime field's current value.
 *
 * \return the \c startTime field value.
 */
DateTime LengthMessage::startTime() const
{
    Q_D(const LengthMessage);
    return d->startTime;
}

/*!
 * Returns the LengthMessage data message's \c totalElapsedTime field's current value.
 *
 * \return the \c totalElapsedTime field value.
 */
quint32 LengthMessage::totalElapsedTime() const
{
    Q_D(const LengthMessage);
    return d->totalElapsedTime;
}

/*!
 * Returns the LengthMessage data message's \c totalTimerTime field's current value.
 *
 * \return the \c totalTimerTime field value.
 */
quint32 LengthMessage::totalTimerTime() const
{
    Q_D(const LengthMessage);
    return d->totalTimerTime;
}

/*!
 * Returns the LengthMessage data message's \c totalStrokes field's current value.
 *
 * \return the \c totalStrokes field value.
 */
quint16 LengthMessage::totalStrokes() const
{
    Q_D(const LengthMessage);
    return d->totalStrokes;
}

/*!
 * Returns the LengthMessage data message's \c avgSpeed field's current value.
 *
 * \return the \c avgSpeed field value.
 */
quint16 LengthMessage::avgSpeed() const
{
    Q_D(const LengthMessage);
    return d->avgSpeed;
}

/*!
 * Returns the LengthMessage data message's \c swimStroke field's current value.
 *
 * \return the \c swimStroke field value.
 */
SwimStroke LengthMessage::swimStroke() const
{
    Q_D(const LengthMessage);
    return d->swimStroke;
}

/*!
 * Returns the LengthMessage data message's \c avgSwimmingCadence field's current value.
 *
 * \return the \c avgSwimmingCadence field value.
 */
quint8 LengthMessage::avgSwimmingCadence() const
{
    Q_D(const LengthMessage);
    return d->avgSwimmingCadence;
}

/*!
 * Returns the LengthMessage data message's \c eventGroup field's current value.
 *
 * \return the \c eventGroup field value.
 */
quint8 LengthMessage::eventGroup() const
{
    Q_D(const LengthMessage);
    return d->eventGroup;
}

/*!
 * Returns the LengthMessage data message's \c totalCalories field's current value.
 *
 * \return the \c totalCalories field value.
 */
quint16 LengthMessage::totalCalories() const
{
    Q_D(const LengthMessage);
    return d->totalCalories;
}

/*!
 * Returns the LengthMessage data message's \c lengthType field's current value.
 *
 * \return the \c lengthType field value.
 */
LengthType LengthMessage::lengthType() const
{
    Q_D(const LengthMessage);
    return d->lengthType;
}

/*!
 * Returns the LengthMessage data message's \c playerScore field's current value.
 *
 * \return the \c playerScore field value.
 */
quint16 LengthMessage::playerScore() const
{
    Q_D(const LengthMessage);
    return d->playerScore;
}

/*!
 * Returns the LengthMessage data message's \c opponentScore field's current value.
 *
 * \return the \c opponentScore field value.
 */
quint16 LengthMessage::opponentScore() const
{
    Q_D(const LengthMessage);
    return d->opponentScore;
}

/*!
 * Returns the LengthMessage data message's \c strokeCount field's current value.
 *
 * \return the \c strokeCount field value.
 */
quint16 LengthMessage::strokeCount() const
{
    Q_D(const LengthMessage);
    return d->strokeCount;
}

/*!
 * Returns the LengthMessage data message's \c zoneCount field's current value.
 *
 * \return the \c zoneCount field value.
 */
quint16 LengthMessage::zoneCount() const
{
    Q_D(const LengthMessage);
    return d->zoneCount;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void LengthMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(LengthMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void LengthMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(LengthMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c event field to \a event.
 *
 * \param event The field value to set.
 */
void LengthMessage::setEvent(const Event event)
{
    Q_D(LengthMessage);
    d->event = event;
}
/*!
 * Sets the \c eventType field to \a eventType.
 *
 * \param eventType The field value to set.
 */
void LengthMessage::setEventType(const EventType eventType)
{
    Q_D(LengthMessage);
    d->eventType = eventType;
}
/*!
 * Sets the \c startTime field to \a startTime.
 *
 * \param startTime The field value to set.
 */
void LengthMessage::setStartTime(const DateTime startTime)
{
    Q_D(LengthMessage);
    d->startTime = startTime;
}
/*!
 * Sets the \c totalElapsedTime field to \a totalElapsedTime.
 *
 * \param totalElapsedTime The field value to set.
 */
void LengthMessage::setTotalElapsedTime(const quint32 totalElapsedTime)
{
    Q_D(LengthMessage);
    d->totalElapsedTime = totalElapsedTime;
}
/*!
 * Sets the \c totalTimerTime field to \a totalTimerTime.
 *
 * \param totalTimerTime The field value to set.
 */
void LengthMessage::setTotalTimerTime(const quint32 totalTimerTime)
{
    Q_D(LengthMessage);
    d->totalTimerTime = totalTimerTime;
}
/*!
 * Sets the \c totalStrokes field to \a totalStrokes.
 *
 * \param totalStrokes The field value to set.
 */
void LengthMessage::setTotalStrokes(const quint16 totalStrokes)
{
    Q_D(LengthMessage);
    d->totalStrokes = totalStrokes;
}
/*!
 * Sets the \c avgSpeed field to \a avgSpeed.
 *
 * \param avgSpeed The field value to set.
 */
void LengthMessage::setAvgSpeed(const quint16 avgSpeed)
{
    Q_D(LengthMessage);
    d->avgSpeed = avgSpeed;
}
/*!
 * Sets the \c swimStroke field to \a swimStroke.
 *
 * \param swimStroke The field value to set.
 */
void LengthMessage::setSwimStroke(const SwimStroke swimStroke)
{
    Q_D(LengthMessage);
    d->swimStroke = swimStroke;
}
/*!
 * Sets the \c avgSwimmingCadence field to \a avgSwimmingCadence.
 *
 * \param avgSwimmingCadence The field value to set.
 */
void LengthMessage::setAvgSwimmingCadence(const quint8 avgSwimmingCadence)
{
    Q_D(LengthMessage);
    d->avgSwimmingCadence = avgSwimmingCadence;
}
/*!
 * Sets the \c eventGroup field to \a eventGroup.
 *
 * \param eventGroup The field value to set.
 */
void LengthMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(LengthMessage);
    d->eventGroup = eventGroup;
}
/*!
 * Sets the \c totalCalories field to \a totalCalories.
 *
 * \param totalCalories The field value to set.
 */
void LengthMessage::setTotalCalories(const quint16 totalCalories)
{
    Q_D(LengthMessage);
    d->totalCalories = totalCalories;
}
/*!
 * Sets the \c lengthType field to \a lengthType.
 *
 * \param lengthType The field value to set.
 */
void LengthMessage::setLengthType(const LengthType lengthType)
{
    Q_D(LengthMessage);
    d->lengthType = lengthType;
}
/*!
 * Sets the \c playerScore field to \a playerScore.
 *
 * \param playerScore The field value to set.
 */
void LengthMessage::setPlayerScore(const quint16 playerScore)
{
    Q_D(LengthMessage);
    d->playerScore = playerScore;
}
/*!
 * Sets the \c opponentScore field to \a opponentScore.
 *
 * \param opponentScore The field value to set.
 */
void LengthMessage::setOpponentScore(const quint16 opponentScore)
{
    Q_D(LengthMessage);
    d->opponentScore = opponentScore;
}
/*!
 * Sets the \c strokeCount field to \a strokeCount.
 *
 * \param strokeCount The field value to set.
 */
void LengthMessage::setStrokeCount(const quint16 strokeCount)
{
    Q_D(LengthMessage);
    d->strokeCount = strokeCount;
}
/*!
 * Sets the \c zoneCount field to \a zoneCount.
 *
 * \param zoneCount The field value to set.
 */
void LengthMessage::setZoneCount(const quint16 zoneCount)
{
    Q_D(LengthMessage);
    d->zoneCount = zoneCount;
}

/*!
 * \internal
 *
 * \class LengthMessagePrivate
 *
 * The LengthMessagePrivate class provides private implementation for the LengthMessage.
 *
 * \sa LengthMessage
 */

/*!
 * \internal
 *
 * Constructs a LengthMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
LengthMessagePrivate::LengthMessagePrivate(LengthMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the LengthMessagePrivate object.
 */
LengthMessagePrivate::~LengthMessagePrivate()
{

}

bool LengthMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:length.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "length.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 253: // See Profile.xlsx::Messages:length.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "length.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:length.event
        if (!verify(data, baseType, 1, FitBaseType::Enum, "length.event")) return false;
        this->event = static_cast<Event>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:length.eventType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "length.eventType")) return false;
        this->eventType = static_cast<EventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:length.startTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "length.startTime")) return false;
        this->startTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:length.totalElapsedTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "length.totalElapsedTime")) return false;
        this->totalElapsedTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:length.totalTimerTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "length.totalTimerTime")) return false;
        this->totalTimerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:length.totalStrokes
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "length.totalStrokes")) return false;
        this->totalStrokes = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:length.avgSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "length.avgSpeed")) return false;
        this->avgSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 7: // See Profile.xlsx::Messages:length.swimStroke
        if (!verify(data, baseType, 1, FitBaseType::Enum, "length.swimStroke")) return false;
        this->swimStroke = static_cast<SwimStroke>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:length.avgSwimmingCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "length.avgSwimmingCadence")) return false;
        this->avgSwimmingCadence = static_cast<quint8>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:length.eventGroup
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "length.eventGroup")) return false;
        this->eventGroup = static_cast<quint8>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:length.totalCalories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "length.totalCalories")) return false;
        this->totalCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 12: // See Profile.xlsx::Messages:length.lengthType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "length.lengthType")) return false;
        this->lengthType = static_cast<LengthType>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:length.playerScore
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "length.playerScore")) return false;
        this->playerScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 19: // See Profile.xlsx::Messages:length.opponentScore
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "length.opponentScore")) return false;
        this->opponentScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 20: // See Profile.xlsx::Messages:length.strokeCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "length.strokeCount")) return false;
        this->strokeCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 21: // See Profile.xlsx::Messages:length.zoneCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "length.zoneCount")) return false;
        this->zoneCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown length message field number" << fieldId;
        return AbstractDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
