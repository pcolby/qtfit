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

#include "magnetometerdatamessage.h"
#include "magnetometerdatamessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class MagnetometerDataMessage
 *
 * The MagnetometerDataMessage class represents a FIT MagnetometerDataMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a MagnetometerDataMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
MagnetometerDataMessage::MagnetometerDataMessage() : AbstractDataMessage(new MagnetometerDataMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a MagnetometerDataMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
MagnetometerDataMessage::MagnetometerDataMessage(MagnetometerDataMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the MagnetometerDataMessage data message's \c timestamp field's current value.
 *
 * Whole second part of the timestamp
 *
 * \return the \c timestamp field value.
 */
DateTime MagnetometerDataMessage::timestamp() const
{
    Q_D(const MagnetometerDataMessage);
    return d->timestamp;
}

/*!
 * Returns the MagnetometerDataMessage data message's \c timestampMs field's current value.
 *
 * Millisecond part of the timestamp.
 *
 * \return the \c timestampMs field value.
 */
quint16 MagnetometerDataMessage::timestampMs() const
{
    Q_D(const MagnetometerDataMessage);
    return d->timestampMs;
}

/*!
 * Returns the MagnetometerDataMessage data message's \c sampleTimeOffset field's current value.
 *
 * Each time in the array describes the time at which the compass sample with the corrosponding
 * index was taken. Limited to 30 samples in each message. The samples may span across seconds.
 * Array size must match the number of samples in cmps_x and cmps_y and cmps_z
 *
 * \return the \c sampleTimeOffset field value.
 */
quint16 MagnetometerDataMessage::sampleTimeOffset() const
{
    Q_D(const MagnetometerDataMessage);
    return d->sampleTimeOffset;
}

/*!
 * Returns the MagnetometerDataMessage data message's \c magX field's current value.
 *
 * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
 * may span across seconds. A conversion will need to be done on this data once read.
 *
 * \return the \c magX field value.
 */
quint16 MagnetometerDataMessage::magX() const
{
    Q_D(const MagnetometerDataMessage);
    return d->magX;
}

/*!
 * Returns the MagnetometerDataMessage data message's \c magY field's current value.
 *
 * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
 * may span across seconds. A conversion will need to be done on this data once read.
 *
 * \return the \c magY field value.
 */
quint16 MagnetometerDataMessage::magY() const
{
    Q_D(const MagnetometerDataMessage);
    return d->magY;
}

/*!
 * Returns the MagnetometerDataMessage data message's \c magZ field's current value.
 *
 * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
 * may span across seconds. A conversion will need to be done on this data once read.
 *
 * \return the \c magZ field value.
 */
quint16 MagnetometerDataMessage::magZ() const
{
    Q_D(const MagnetometerDataMessage);
    return d->magZ;
}

/*!
 * Returns the MagnetometerDataMessage data message's \c calibratedMagX field's current value.
 *
 * Calibrated Magnetometer reading
 *
 * \return the \c calibratedMagX field value.
 */
float MagnetometerDataMessage::calibratedMagX() const
{
    Q_D(const MagnetometerDataMessage);
    return d->calibratedMagX;
}

/*!
 * Returns the MagnetometerDataMessage data message's \c calibratedMagY field's current value.
 *
 * Calibrated Magnetometer reading
 *
 * \return the \c calibratedMagY field value.
 */
float MagnetometerDataMessage::calibratedMagY() const
{
    Q_D(const MagnetometerDataMessage);
    return d->calibratedMagY;
}

/*!
 * Returns the MagnetometerDataMessage data message's \c calibratedMagZ field's current value.
 *
 * Calibrated Magnetometer reading
 *
 * \return the \c calibratedMagZ field value.
 */
float MagnetometerDataMessage::calibratedMagZ() const
{
    Q_D(const MagnetometerDataMessage);
    return d->calibratedMagZ;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void MagnetometerDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(MagnetometerDataMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void MagnetometerDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(MagnetometerDataMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c sampleTimeOffset field to \a sampleTimeOffset.
 *
 * \param sampleTimeOffset The field value to set.
 */
void MagnetometerDataMessage::setSampleTimeOffset(const quint16 sampleTimeOffset)
{
    Q_D(MagnetometerDataMessage);
    d->sampleTimeOffset = sampleTimeOffset;
}
/*!
 * Sets the \c magX field to \a magX.
 *
 * \param magX The field value to set.
 */
void MagnetometerDataMessage::setMagX(const quint16 magX)
{
    Q_D(MagnetometerDataMessage);
    d->magX = magX;
}
/*!
 * Sets the \c magY field to \a magY.
 *
 * \param magY The field value to set.
 */
void MagnetometerDataMessage::setMagY(const quint16 magY)
{
    Q_D(MagnetometerDataMessage);
    d->magY = magY;
}
/*!
 * Sets the \c magZ field to \a magZ.
 *
 * \param magZ The field value to set.
 */
void MagnetometerDataMessage::setMagZ(const quint16 magZ)
{
    Q_D(MagnetometerDataMessage);
    d->magZ = magZ;
}
/*!
 * Sets the \c calibratedMagX field to \a calibratedMagX.
 *
 * \param calibratedMagX The field value to set.
 */
void MagnetometerDataMessage::setCalibratedMagX(const float calibratedMagX)
{
    Q_D(MagnetometerDataMessage);
    d->calibratedMagX = calibratedMagX;
}
/*!
 * Sets the \c calibratedMagY field to \a calibratedMagY.
 *
 * \param calibratedMagY The field value to set.
 */
void MagnetometerDataMessage::setCalibratedMagY(const float calibratedMagY)
{
    Q_D(MagnetometerDataMessage);
    d->calibratedMagY = calibratedMagY;
}
/*!
 * Sets the \c calibratedMagZ field to \a calibratedMagZ.
 *
 * \param calibratedMagZ The field value to set.
 */
void MagnetometerDataMessage::setCalibratedMagZ(const float calibratedMagZ)
{
    Q_D(MagnetometerDataMessage);
    d->calibratedMagZ = calibratedMagZ;
}

/// \cond internal

/*!
 * \internal
 *
 * \class MagnetometerDataMessagePrivate
 *
 * The MagnetometerDataMessagePrivate class provides private implementation for the MagnetometerDataMessage.
 *
 * \sa MagnetometerDataMessage
 */

/*!
 * \internal
 *
 * Constructs a MagnetometerDataMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
MagnetometerDataMessagePrivate::MagnetometerDataMessagePrivate(MagnetometerDataMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , sampleTimeOffset(0xFFFF)
  , magX(0xFFFF)
  , magY(0xFFFF)
  , magZ(0xFFFF)
  , calibratedMagX(static_cast<float>(-1))
  , calibratedMagY(static_cast<float>(-1))
  , calibratedMagZ(static_cast<float>(-1))
{
    globalMessageNumber = MesgNum::MagnetometerData;
}

/*!
 * \internal
 *
 * Destroys the MagnetometerDataMessagePrivate object.
 */
MagnetometerDataMessagePrivate::~MagnetometerDataMessagePrivate()
{

}

bool MagnetometerDataMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:magnetometer_data.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "magnetometer_data.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:magnetometer_data.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "magnetometer_data.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:magnetometer_data.sampleTimeOffset
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "magnetometer_data.sampleTimeOffset")) return false;
        this->sampleTimeOffset = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:magnetometer_data.magX
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "magnetometer_data.magX")) return false;
        this->magX = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:magnetometer_data.magY
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "magnetometer_data.magY")) return false;
        this->magY = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:magnetometer_data.magZ
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "magnetometer_data.magZ")) return false;
        this->magZ = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:magnetometer_data.calibratedMagX
        if (!verify(data, baseType, 4, FitBaseType::Float32, "magnetometer_data.calibratedMagX")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->calibratedMagX) == 4, "src and dst not the same size");
            memcpy(&this->calibratedMagX, &localEndian, data.size());
        }
        #else
        this->calibratedMagX = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 6: // See Profile.xlsx::Messages:magnetometer_data.calibratedMagY
        if (!verify(data, baseType, 4, FitBaseType::Float32, "magnetometer_data.calibratedMagY")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->calibratedMagY) == 4, "src and dst not the same size");
            memcpy(&this->calibratedMagY, &localEndian, data.size());
        }
        #else
        this->calibratedMagY = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 7: // See Profile.xlsx::Messages:magnetometer_data.calibratedMagZ
        if (!verify(data, baseType, 4, FitBaseType::Float32, "magnetometer_data.calibratedMagZ")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->calibratedMagZ) == 4, "src and dst not the same size");
            memcpy(&this->calibratedMagZ, &localEndian, data.size());
        }
        #else
        this->calibratedMagZ = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    default:
        qWarning() << "ignoring unknown magnetometer_data message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
