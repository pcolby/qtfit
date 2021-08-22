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

#include <QDebug>
#include <QtEndian>

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

GpsMetadataMessagePrivate::GpsMetadataMessagePrivate(GpsMetadataMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , positionLat(0x7FFFFFFF)
  , positionLong(0x7FFFFFFF)
  , enhancedAltitude(0xFFFFFFFF)
  , enhancedSpeed(0xFFFFFFFF)
  , heading(0xFFFF)
  , utcTimestamp(static_cast<DateTime>(-1))
  , velocity(0x7FFF)
{
    globalMessageNumber = MesgNum::GpsMetadata;
}

GpsMetadataMessagePrivate::~GpsMetadataMessagePrivate()
{

}

bool GpsMetadataMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:gps_metadata.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "gps_metadata.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:gps_metadata.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "gps_metadata.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:gps_metadata.positionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "gps_metadata.positionLat")) return false;
        this->positionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:gps_metadata.positionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "gps_metadata.positionLong")) return false;
        this->positionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:gps_metadata.enhancedAltitude
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "gps_metadata.enhancedAltitude")) return false;
        this->enhancedAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:gps_metadata.enhancedSpeed
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "gps_metadata.enhancedSpeed")) return false;
        this->enhancedSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:gps_metadata.heading
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "gps_metadata.heading")) return false;
        this->heading = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:gps_metadata.utcTimestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "gps_metadata.utcTimestamp")) return false;
        this->utcTimestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:gps_metadata.velocity
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "gps_metadata.velocity")) return false;
        this->velocity = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    default:
        qWarning() << "unknown gps_metadata message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
