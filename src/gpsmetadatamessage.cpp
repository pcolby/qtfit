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

#include "gpsmetadatamessage.h"
#include "gpsmetadatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

GpsMetadataMessage::GpsMetadataMessage() : FitDataMessage(new GpsMetadataMessagePrivate(this))
{

}

DateTime GpsMetadataMessage::timestamp() const
{
    Q_D(const GpsMetadataMessage);
    return d->timestamp;
}

quint16 GpsMetadataMessage::timestampMs() const
{
    Q_D(const GpsMetadataMessage);
    return d->timestampMs;
}

qint32 GpsMetadataMessage::positionLat() const
{
    Q_D(const GpsMetadataMessage);
    return d->positionLat;
}

qint32 GpsMetadataMessage::positionLong() const
{
    Q_D(const GpsMetadataMessage);
    return d->positionLong;
}

quint32 GpsMetadataMessage::enhancedAltitude() const
{
    Q_D(const GpsMetadataMessage);
    return d->enhancedAltitude;
}

quint32 GpsMetadataMessage::enhancedSpeed() const
{
    Q_D(const GpsMetadataMessage);
    return d->enhancedSpeed;
}

quint16 GpsMetadataMessage::heading() const
{
    Q_D(const GpsMetadataMessage);
    return d->heading;
}

DateTime GpsMetadataMessage::utcTimestamp() const
{
    Q_D(const GpsMetadataMessage);
    return d->utcTimestamp;
}

qint16 GpsMetadataMessage::velocity() const
{
    Q_D(const GpsMetadataMessage);
    return d->velocity;
}

void GpsMetadataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(GpsMetadataMessage);
    d->timestamp = timestamp;
}
void GpsMetadataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(GpsMetadataMessage);
    d->timestampMs = timestampMs;
}
void GpsMetadataMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(GpsMetadataMessage);
    d->positionLat = positionLat;
}
void GpsMetadataMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(GpsMetadataMessage);
    d->positionLong = positionLong;
}
void GpsMetadataMessage::setEnhancedAltitude(const quint32 enhancedAltitude)
{
    Q_D(GpsMetadataMessage);
    d->enhancedAltitude = enhancedAltitude;
}
void GpsMetadataMessage::setEnhancedSpeed(const quint32 enhancedSpeed)
{
    Q_D(GpsMetadataMessage);
    d->enhancedSpeed = enhancedSpeed;
}
void GpsMetadataMessage::setHeading(const quint16 heading)
{
    Q_D(GpsMetadataMessage);
    d->heading = heading;
}
void GpsMetadataMessage::setUtcTimestamp(const DateTime utcTimestamp)
{
    Q_D(GpsMetadataMessage);
    d->utcTimestamp = utcTimestamp;
}
void GpsMetadataMessage::setVelocity(const qint16 velocity)
{
    Q_D(GpsMetadataMessage);
    d->velocity = velocity;
}

GpsMetadataMessagePrivate::GpsMetadataMessagePrivate(GpsMetadataMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::GpsMetadata;
}

GpsMetadataMessagePrivate::~GpsMetadataMessagePrivate()
{

}

/// @todo Generate implementation.
bool GpsMetadataMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
