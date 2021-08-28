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

/*!
 * \file
 * Defines the GpsMetadataMessage, and GpsMetadataMessagePrivate classes.
 */

#include "gpsmetadatamessage.h"
#include "gpsmetadatamessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class GpsMetadataMessage
 *
 * The GpsMetadataMessage class represents a FIT GpsMetadataMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a GpsMetadataMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
GpsMetadataMessage::GpsMetadataMessage() : AbstractDataMessage(new GpsMetadataMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a GpsMetadataMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
GpsMetadataMessage::GpsMetadataMessage(GpsMetadataMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the GpsMetadataMessage data message's \c timestamp field's current value.
 *
 * Whole second part of the timestamp.
 *
 * \return the \c timestamp field value.
 */
DateTime GpsMetadataMessage::timestamp() const
{
    Q_D(const GpsMetadataMessage);
    return d->timestamp;
}

/*!
 * Returns the GpsMetadataMessage data message's \c timestampMs field's current value.
 *
 * Millisecond part of the timestamp.
 *
 * \return the \c timestampMs field value.
 */
quint16 GpsMetadataMessage::timestampMs() const
{
    Q_D(const GpsMetadataMessage);
    return d->timestampMs;
}

/*!
 * Returns the GpsMetadataMessage data message's \c positionLat field's current value.
 *
 * \return the \c positionLat field value.
 */
qint32 GpsMetadataMessage::positionLat() const
{
    Q_D(const GpsMetadataMessage);
    return d->positionLat;
}

/*!
 * Returns the GpsMetadataMessage data message's \c positionLong field's current value.
 *
 * \return the \c positionLong field value.
 */
qint32 GpsMetadataMessage::positionLong() const
{
    Q_D(const GpsMetadataMessage);
    return d->positionLong;
}

/*!
 * Returns the GpsMetadataMessage data message's \c enhancedAltitude field's current value.
 *
 * \return the \c enhancedAltitude field value.
 */
quint32 GpsMetadataMessage::enhancedAltitude() const
{
    Q_D(const GpsMetadataMessage);
    return d->enhancedAltitude;
}

/*!
 * Returns the GpsMetadataMessage data message's \c enhancedSpeed field's current value.
 *
 * \return the \c enhancedSpeed field value.
 */
quint32 GpsMetadataMessage::enhancedSpeed() const
{
    Q_D(const GpsMetadataMessage);
    return d->enhancedSpeed;
}

/*!
 * Returns the GpsMetadataMessage data message's \c heading field's current value.
 *
 * \return the \c heading field value.
 */
quint16 GpsMetadataMessage::heading() const
{
    Q_D(const GpsMetadataMessage);
    return d->heading;
}

/*!
 * Returns the GpsMetadataMessage data message's \c utcTimestamp field's current value.
 *
 * Used to correlate UTC to system time if the timestamp of the message is in system time.  This
 * UTC time is derived from the GPS data.
 *
 * \return the \c utcTimestamp field value.
 */
DateTime GpsMetadataMessage::utcTimestamp() const
{
    Q_D(const GpsMetadataMessage);
    return d->utcTimestamp;
}

/*!
 * Returns the GpsMetadataMessage data message's \c velocity field's current value.
 *
 * velocity[0] is lon velocity.  Velocity[1] is lat velocity.  Velocity[2] is altitude velocity.
 *
 * \return the \c velocity field value.
 */
qint16 GpsMetadataMessage::velocity() const
{
    Q_D(const GpsMetadataMessage);
    return d->velocity;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void GpsMetadataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(GpsMetadataMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void GpsMetadataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(GpsMetadataMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c positionLat field to \a positionLat.
 *
 * \param positionLat The field value to set.
 */
void GpsMetadataMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(GpsMetadataMessage);
    d->positionLat = positionLat;
}
/*!
 * Sets the \c positionLong field to \a positionLong.
 *
 * \param positionLong The field value to set.
 */
void GpsMetadataMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(GpsMetadataMessage);
    d->positionLong = positionLong;
}
/*!
 * Sets the \c enhancedAltitude field to \a enhancedAltitude.
 *
 * \param enhancedAltitude The field value to set.
 */
void GpsMetadataMessage::setEnhancedAltitude(const quint32 enhancedAltitude)
{
    Q_D(GpsMetadataMessage);
    d->enhancedAltitude = enhancedAltitude;
}
/*!
 * Sets the \c enhancedSpeed field to \a enhancedSpeed.
 *
 * \param enhancedSpeed The field value to set.
 */
void GpsMetadataMessage::setEnhancedSpeed(const quint32 enhancedSpeed)
{
    Q_D(GpsMetadataMessage);
    d->enhancedSpeed = enhancedSpeed;
}
/*!
 * Sets the \c heading field to \a heading.
 *
 * \param heading The field value to set.
 */
void GpsMetadataMessage::setHeading(const quint16 heading)
{
    Q_D(GpsMetadataMessage);
    d->heading = heading;
}
/*!
 * Sets the \c utcTimestamp field to \a utcTimestamp.
 *
 * \param utcTimestamp The field value to set.
 */
void GpsMetadataMessage::setUtcTimestamp(const DateTime utcTimestamp)
{
    Q_D(GpsMetadataMessage);
    d->utcTimestamp = utcTimestamp;
}
/*!
 * Sets the \c velocity field to \a velocity.
 *
 * \param velocity The field value to set.
 */
void GpsMetadataMessage::setVelocity(const qint16 velocity)
{
    Q_D(GpsMetadataMessage);
    d->velocity = velocity;
}

/// \cond internal

/*!
 * \internal
 *
 * \class GpsMetadataMessagePrivate
 *
 * The GpsMetadataMessagePrivate class provides private implementation for the GpsMetadataMessage.
 *
 * \sa GpsMetadataMessage
 */

/*!
 * \internal
 *
 * Constructs a GpsMetadataMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
GpsMetadataMessagePrivate::GpsMetadataMessagePrivate(GpsMetadataMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the GpsMetadataMessagePrivate object.
 */
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
        qWarning() << "ignoring unknown gps_metadata message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
