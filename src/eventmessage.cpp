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

EventMessage::EventMessage() : FitDataMessage(new EventMessagePrivate(this))
{

}

DateTime EventMessage::timestamp() const
{
    Q_D(const EventMessage);
    return d->timestamp;
}

Event EventMessage::event() const
{
    Q_D(const EventMessage);
    return d->event;
}

EventType EventMessage::eventType() const
{
    Q_D(const EventMessage);
    return d->eventType;
}

quint16 EventMessage::data16() const
{
    Q_D(const EventMessage);
    return d->data16;
}

quint32 EventMessage::data() const
{
    Q_D(const EventMessage);
    return d->data;
}

quint8 EventMessage::eventGroup() const
{
    Q_D(const EventMessage);
    return d->eventGroup;
}

quint16 EventMessage::score() const
{
    Q_D(const EventMessage);
    return d->score;
}

quint16 EventMessage::opponentScore() const
{
    Q_D(const EventMessage);
    return d->opponentScore;
}

quint8z EventMessage::frontGearNum() const
{
    Q_D(const EventMessage);
    return d->frontGearNum;
}

quint8z EventMessage::frontGear() const
{
    Q_D(const EventMessage);
    return d->frontGear;
}

quint8z EventMessage::rearGearNum() const
{
    Q_D(const EventMessage);
    return d->rearGearNum;
}

quint8z EventMessage::rearGear() const
{
    Q_D(const EventMessage);
    return d->rearGear;
}

DeviceIndex EventMessage::deviceIndex() const
{
    Q_D(const EventMessage);
    return d->deviceIndex;
}

RadarThreatLevelType EventMessage::radarThreatLevelMax() const
{
    Q_D(const EventMessage);
    return d->radarThreatLevelMax;
}

quint8 EventMessage::radarThreatCount() const
{
    Q_D(const EventMessage);
    return d->radarThreatCount;
}

void EventMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(EventMessage);
    d->timestamp = timestamp;
}
void EventMessage::setEvent(const Event event)
{
    Q_D(EventMessage);
    d->event = event;
}
void EventMessage::setEventType(const EventType eventType)
{
    Q_D(EventMessage);
    d->eventType = eventType;
}
void EventMessage::setData16(const quint16 data16)
{
    Q_D(EventMessage);
    d->data16 = data16;
}
void EventMessage::setData(const quint32 data)
{
    Q_D(EventMessage);
    d->data = data;
}
void EventMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(EventMessage);
    d->eventGroup = eventGroup;
}
void EventMessage::setScore(const quint16 score)
{
    Q_D(EventMessage);
    d->score = score;
}
void EventMessage::setOpponentScore(const quint16 opponentScore)
{
    Q_D(EventMessage);
    d->opponentScore = opponentScore;
}
void EventMessage::setFrontGearNum(const quint8z frontGearNum)
{
    Q_D(EventMessage);
    d->frontGearNum = frontGearNum;
}
void EventMessage::setFrontGear(const quint8z frontGear)
{
    Q_D(EventMessage);
    d->frontGear = frontGear;
}
void EventMessage::setRearGearNum(const quint8z rearGearNum)
{
    Q_D(EventMessage);
    d->rearGearNum = rearGearNum;
}
void EventMessage::setRearGear(const quint8z rearGear)
{
    Q_D(EventMessage);
    d->rearGear = rearGear;
}
void EventMessage::setDeviceIndex(const DeviceIndex deviceIndex)
{
    Q_D(EventMessage);
    d->deviceIndex = deviceIndex;
}
void EventMessage::setRadarThreatLevelMax(const RadarThreatLevelType radarThreatLevelMax)
{
    Q_D(EventMessage);
    d->radarThreatLevelMax = radarThreatLevelMax;
}
void EventMessage::setRadarThreatCount(const quint8 radarThreatCount)
{
    Q_D(EventMessage);
    d->radarThreatCount = radarThreatCount;
}

EventMessagePrivate::EventMessagePrivate(EventMessage * const q)
  : FitDataMessagePrivate(q)
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

EventMessagePrivate::~EventMessagePrivate()
{

}

bool EventMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:event.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "event.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:event.event
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.event has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "event.event size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->event = static_cast<Event>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:event.eventType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.eventType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "event.eventType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->eventType = static_cast<EventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:event.data16
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.data16 has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "event.data16 size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->data16 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:event.data
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.data has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "event.data size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->data = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:event.eventGroup
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.eventGroup has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "event.eventGroup size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->eventGroup = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:event.score
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.score has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "event.score size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->score = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:event.opponentScore
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.opponentScore has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "event.opponentScore size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->opponentScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 9: // See Profile.xlsx::Messages:event.frontGearNum
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.frontGearNum has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "event.frontGearNum size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->frontGearNum = static_cast<quint8z>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:event.frontGear
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.frontGear has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "event.frontGear size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->frontGear = static_cast<quint8z>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:event.rearGearNum
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.rearGearNum has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "event.rearGearNum size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->rearGearNum = static_cast<quint8z>(data.at(0));
        break;
    case 12: // See Profile.xlsx::Messages:event.rearGear
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.rearGear has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "event.rearGear size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->rearGear = static_cast<quint8z>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:event.deviceIndex
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.deviceIndex has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "event.deviceIndex size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->deviceIndex = static_cast<DeviceIndex>(data.at(0));
        break;
    case 21: // See Profile.xlsx::Messages:event.radarThreatLevelMax
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.radarThreatLevelMax has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "event.radarThreatLevelMax size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->radarThreatLevelMax = static_cast<RadarThreatLevelType>(data.at(0));
        break;
    case 22: // See Profile.xlsx::Messages:event.radarThreatCount
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "event.radarThreatCount has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "event.radarThreatCount size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->radarThreatCount = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown event message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
