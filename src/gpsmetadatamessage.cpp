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

bool GpsMetadataMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:gps_metadata.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "gps_metadata.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "gps_metadata.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:gps_metadata.timestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "gps_metadata.timestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "gps_metadata.timestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:gps_metadata.positionLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "gps_metadata.positionLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "gps_metadata.positionLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        positionLat = static_cast<qint32>(bigEndian ? qFromBigEndian<qint32>(data) : qFromLittleEndian<qint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:gps_metadata.positionLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "gps_metadata.positionLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "gps_metadata.positionLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        positionLong = static_cast<qint32>(bigEndian ? qFromBigEndian<qint32>(data) : qFromLittleEndian<qint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:gps_metadata.enhancedAltitude
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "gps_metadata.enhancedAltitude has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "gps_metadata.enhancedAltitude size is" << data.size() << "but should be" << 4;
            return false;
        }
        enhancedAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:gps_metadata.enhancedSpeed
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "gps_metadata.enhancedSpeed has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "gps_metadata.enhancedSpeed size is" << data.size() << "but should be" << 4;
            return false;
        }
        enhancedSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:gps_metadata.heading
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "gps_metadata.heading has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "gps_metadata.heading size is" << data.size() << "but should be" << 2;
            return false;
        }
        heading = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:gps_metadata.utcTimestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "gps_metadata.utcTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "gps_metadata.utcTimestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        utcTimestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 7: // See Profile.xlsx::Messages:gps_metadata.velocity
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "gps_metadata.velocity has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "gps_metadata.velocity size is" << data.size() << "but should be" << 2;
            return false;
        }
        velocity = static_cast<qint16>(bigEndian ? qFromBigEndian<qint16>(data) : qFromLittleEndian<qint16>(data));
        break;
    default:
        qWarning() << "unknown gps_metadata message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
