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

EventMessagePrivate::EventMessagePrivate(EventMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::Event;
}

EventMessagePrivate::~EventMessagePrivate()
{

}

/// @todo Generate implementation.
bool EventMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
