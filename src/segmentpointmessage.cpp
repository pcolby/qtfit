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

#include "segmentpointmessage.h"
#include "segmentpointmessage_p.h"

QTFIT_BEGIN_NAMESPACE

SegmentPointMessage::SegmentPointMessage() : FitDataMessage(new SegmentPointMessagePrivate(this))
{

}

MessageIndex SegmentPointMessage::messageIndex() const
{
    Q_D(const SegmentPointMessage);
    return d->messageIndex;
}

qint32 SegmentPointMessage::positionLat() const
{
    Q_D(const SegmentPointMessage);
    return d->positionLat;
}

qint32 SegmentPointMessage::positionLong() const
{
    Q_D(const SegmentPointMessage);
    return d->positionLong;
}

quint32 SegmentPointMessage::distance() const
{
    Q_D(const SegmentPointMessage);
    return d->distance;
}

quint16 SegmentPointMessage::altitude() const
{
    Q_D(const SegmentPointMessage);
    return d->altitude;
}

quint32 SegmentPointMessage::leaderTime() const
{
    Q_D(const SegmentPointMessage);
    return d->leaderTime;
}

void SegmentPointMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SegmentPointMessage);
    d->messageIndex = messageIndex;
}
void SegmentPointMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(SegmentPointMessage);
    d->positionLat = positionLat;
}
void SegmentPointMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(SegmentPointMessage);
    d->positionLong = positionLong;
}
void SegmentPointMessage::setDistance(const quint32 distance)
{
    Q_D(SegmentPointMessage);
    d->distance = distance;
}
void SegmentPointMessage::setAltitude(const quint16 altitude)
{
    Q_D(SegmentPointMessage);
    d->altitude = altitude;
}
void SegmentPointMessage::setLeaderTime(const quint32 leaderTime)
{
    Q_D(SegmentPointMessage);
    d->leaderTime = leaderTime;
}

SegmentPointMessagePrivate::SegmentPointMessagePrivate(SegmentPointMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::SegmentPoint;
}

SegmentPointMessagePrivate::~SegmentPointMessagePrivate()
{

}

/// @todo Generate implementation.
bool SegmentPointMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
