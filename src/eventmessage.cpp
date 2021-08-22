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

#include "eventmessage.h"
#include "eventmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class EventMessage
 *
 * The EventMessage class represents a FIT EventMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid EventMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
EventMessage::EventMessage() : AbstractDataMessage(new EventMessagePrivate(this))
{

}

/*!
 * Returns the EventMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime EventMessage::timestamp() const
{
    Q_D(const EventMessage);
    return d->timestamp;
}

/*!
 * Returns the EventMessage data message's \c event field's current value.
 *
 * \return the \c event field value.
 */
Event EventMessage::event() const
{
    Q_D(const EventMessage);
    return d->event;
}

/*!
 * Returns the EventMessage data message's \c eventType field's current value.
 *
 * \return the \c eventType field value.
 */
EventType EventMessage::eventType() const
{
    Q_D(const EventMessage);
    return d->eventType;
}

/*!
 * Returns the EventMessage data message's \c data16 field's current value.
 *
 * \return the \c data16 field value.
 */
quint16 EventMessage::data16() const
{
    Q_D(const EventMessage);
    return d->data16;
}

/*!
 * Returns the EventMessage data message's \c data field's current value.
 *
 * \return the \c data field value.
 */
quint32 EventMessage::data() const
{
    Q_D(const EventMessage);
    return d->data;
}

/*!
 * Returns the EventMessage data message's \c eventGroup field's current value.
 *
 * \return the \c eventGroup field value.
 */
quint8 EventMessage::eventGroup() const
{
    Q_D(const EventMessage);
    return d->eventGroup;
}

/*!
 * Returns the EventMessage data message's \c score field's current value.
 *
 * \return the \c score field value.
 */
quint16 EventMessage::score() const
{
    Q_D(const EventMessage);
    return d->score;
}

/*!
 * Returns the EventMessage data message's \c opponentScore field's current value.
 *
 * \return the \c opponentScore field value.
 */
quint16 EventMessage::opponentScore() const
{
    Q_D(const EventMessage);
    return d->opponentScore;
}

/*!
 * Returns the EventMessage data message's \c frontGearNum field's current value.
 *
 * \return the \c frontGearNum field value.
 */
quint8z EventMessage::frontGearNum() const
{
    Q_D(const EventMessage);
    return d->frontGearNum;
}

/*!
 * Returns the EventMessage data message's \c frontGear field's current value.
 *
 * \return the \c frontGear field value.
 */
quint8z EventMessage::frontGear() const
{
    Q_D(const EventMessage);
    return d->frontGear;
}

/*!
 * Returns the EventMessage data message's \c rearGearNum field's current value.
 *
 * \return the \c rearGearNum field value.
 */
quint8z EventMessage::rearGearNum() const
{
    Q_D(const EventMessage);
    return d->rearGearNum;
}

/*!
 * Returns the EventMessage data message's \c rearGear field's current value.
 *
 * \return the \c rearGear field value.
 */
quint8z EventMessage::rearGear() const
{
    Q_D(const EventMessage);
    return d->rearGear;
}

/*!
 * Returns the EventMessage data message's \c deviceIndex field's current value.
 *
 * \return the \c deviceIndex field value.
 */
DeviceIndex EventMessage::deviceIndex() const
{
    Q_D(const EventMessage);
    return d->deviceIndex;
}

/*!
 * Returns the EventMessage data message's \c radarThreatLevelMax field's current value.
 *
 * \return the \c radarThreatLevelMax field value.
 */
RadarThreatLevelType EventMessage::radarThreatLevelMax() const
{
    Q_D(const EventMessage);
    return d->radarThreatLevelMax;
}

/*!
 * Returns the EventMessage data message's \c radarThreatCount field's current value.
 *
 * \return the \c radarThreatCount field value.
 */
quint8 EventMessage::radarThreatCount() const
{
    Q_D(const EventMessage);
    return d->radarThreatCount;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void EventMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(EventMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c event field to \a event.
 *
 * \param event The field value to set.
 */
void EventMessage::setEvent(const Event event)
{
    Q_D(EventMessage);
    d->event = event;
}
/*!
 * Sets the \c eventType field to \a eventType.
 *
 * \param eventType The field value to set.
 */
void EventMessage::setEventType(const EventType eventType)
{
    Q_D(EventMessage);
    d->eventType = eventType;
}
/*!
 * Sets the \c data16 field to \a data16.
 *
 * \param data16 The field value to set.
 */
void EventMessage::setData16(const quint16 data16)
{
    Q_D(EventMessage);
    d->data16 = data16;
}
/*!
 * Sets the \c data field to \a data.
 *
 * \param data The field value to set.
 */
void EventMessage::setData(const quint32 data)
{
    Q_D(EventMessage);
    d->data = data;
}
/*!
 * Sets the \c eventGroup field to \a eventGroup.
 *
 * \param eventGroup The field value to set.
 */
void EventMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(EventMessage);
    d->eventGroup = eventGroup;
}
/*!
 * Sets the \c score field to \a score.
 *
 * \param score The field value to set.
 */
void EventMessage::setScore(const quint16 score)
{
    Q_D(EventMessage);
    d->score = score;
}
/*!
 * Sets the \c opponentScore field to \a opponentScore.
 *
 * \param opponentScore The field value to set.
 */
void EventMessage::setOpponentScore(const quint16 opponentScore)
{
    Q_D(EventMessage);
    d->opponentScore = opponentScore;
}
/*!
 * Sets the \c frontGearNum field to \a frontGearNum.
 *
 * \param frontGearNum The field value to set.
 */
void EventMessage::setFrontGearNum(const quint8z frontGearNum)
{
    Q_D(EventMessage);
    d->frontGearNum = frontGearNum;
}
/*!
 * Sets the \c frontGear field to \a frontGear.
 *
 * \param frontGear The field value to set.
 */
void EventMessage::setFrontGear(const quint8z frontGear)
{
    Q_D(EventMessage);
    d->frontGear = frontGear;
}
/*!
 * Sets the \c rearGearNum field to \a rearGearNum.
 *
 * \param rearGearNum The field value to set.
 */
void EventMessage::setRearGearNum(const quint8z rearGearNum)
{
    Q_D(EventMessage);
    d->rearGearNum = rearGearNum;
}
/*!
 * Sets the \c rearGear field to \a rearGear.
 *
 * \param rearGear The field value to set.
 */
void EventMessage::setRearGear(const quint8z rearGear)
{
    Q_D(EventMessage);
    d->rearGear = rearGear;
}
/*!
 * Sets the \c deviceIndex field to \a deviceIndex.
 *
 * \param deviceIndex The field value to set.
 */
void EventMessage::setDeviceIndex(const DeviceIndex deviceIndex)
{
    Q_D(EventMessage);
    d->deviceIndex = deviceIndex;
}
/*!
 * Sets the \c radarThreatLevelMax field to \a radarThreatLevelMax.
 *
 * \param radarThreatLevelMax The field value to set.
 */
void EventMessage::setRadarThreatLevelMax(const RadarThreatLevelType radarThreatLevelMax)
{
    Q_D(EventMessage);
    d->radarThreatLevelMax = radarThreatLevelMax;
}
/*!
 * Sets the \c radarThreatCount field to \a radarThreatCount.
 *
 * \param radarThreatCount The field value to set.
 */
void EventMessage::setRadarThreatCount(const quint8 radarThreatCount)
{
    Q_D(EventMessage);
    d->radarThreatCount = radarThreatCount;
}

/*!
 * \internal
 *
 * \class EventMessagePrivate
 *
 * The EventMessagePrivate class provides private implementation for the EventMessage.
 *
 * \sa EventMessage
 */

/*!
 * \internal
 *
 * Constructs a EventMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
EventMessagePrivate::EventMessagePrivate(EventMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , event(static_cast<Event>(-1))
  , eventType(static_cast<EventType>(-1))
  , data16(0xFFFF)
  , data(0xFFFFFFFF)
  , eventGroup(0xFF)
  , score(0xFFFF)
  , opponentScore(0xFFFF)
  , frontGearNum(static_cast<quint8z>(-1))
  , frontGear(static_cast<quint8z>(-1))
  , rearGearNum(static_cast<quint8z>(-1))
  , rearGear(static_cast<quint8z>(-1))
  , deviceIndex(static_cast<DeviceIndex>(-1))
  , radarThreatLevelMax(static_cast<RadarThreatLevelType>(-1))
  , radarThreatCount(0xFF)
{
    globalMessageNumber = MesgNum::Event;
}

/*!
 * \internal
 *
 * Destroys the EventMessagePrivate object.
 */
EventMessagePrivate::~EventMessagePrivate()
{

}

bool EventMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:event.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "event.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:event.event
        if (!verify(data, baseType, 1, FitBaseType::Enum, "event.event")) return false;
        this->event = static_cast<Event>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:event.eventType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "event.eventType")) return false;
        this->eventType = static_cast<EventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:event.data16
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "event.data16")) return false;
        this->data16 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:event.data
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "event.data")) return false;
        this->data = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:event.eventGroup
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "event.eventGroup")) return false;
        this->eventGroup = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:event.score
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "event.score")) return false;
        this->score = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:event.opponentScore
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "event.opponentScore")) return false;
        this->opponentScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 9: // See Profile.xlsx::Messages:event.frontGearNum
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "event.frontGearNum")) return false;
        this->frontGearNum = static_cast<quint8z>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:event.frontGear
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "event.frontGear")) return false;
        this->frontGear = static_cast<quint8z>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:event.rearGearNum
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "event.rearGearNum")) return false;
        this->rearGearNum = static_cast<quint8z>(data.at(0));
        break;
    case 12: // See Profile.xlsx::Messages:event.rearGear
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "event.rearGear")) return false;
        this->rearGear = static_cast<quint8z>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:event.deviceIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "event.deviceIndex")) return false;
        this->deviceIndex = static_cast<DeviceIndex>(data.at(0));
        break;
    case 21: // See Profile.xlsx::Messages:event.radarThreatLevelMax
        if (!verify(data, baseType, 1, FitBaseType::Enum, "event.radarThreatLevelMax")) return false;
        this->radarThreatLevelMax = static_cast<RadarThreatLevelType>(data.at(0));
        break;
    case 22: // See Profile.xlsx::Messages:event.radarThreatCount
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "event.radarThreatCount")) return false;
        this->radarThreatCount = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown event message field number" << fieldId;
        return AbstractDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
