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
 * Defines the GyroscopeDataMessage, and GyroscopeDataMessagePrivate classes.
 */

#include "gyroscopedatamessage.h"
#include "gyroscopedatamessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class GyroscopeDataMessage
 *
 * The GyroscopeDataMessage class represents a FIT GyroscopeDataMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a GyroscopeDataMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
GyroscopeDataMessage::GyroscopeDataMessage() : AbstractDataMessage(new GyroscopeDataMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a GyroscopeDataMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
GyroscopeDataMessage::GyroscopeDataMessage(GyroscopeDataMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the GyroscopeDataMessage data message's \c timestamp field's current value.
 *
 * Whole second part of the timestamp
 *
 * \return the \c timestamp field value.
 */
DateTime GyroscopeDataMessage::timestamp() const
{
    Q_D(const GyroscopeDataMessage);
    return d->timestamp;
}

/*!
 * Returns the GyroscopeDataMessage data message's \c timestampMs field's current value.
 *
 * Millisecond part of the timestamp.
 *
 * \return the \c timestampMs field value.
 */
quint16 GyroscopeDataMessage::timestampMs() const
{
    Q_D(const GyroscopeDataMessage);
    return d->timestampMs;
}

/*!
 * Returns the GyroscopeDataMessage data message's \c sampleTimeOffset field's current value.
 *
 * Each time in the array describes the time at which the gyro sample with the corrosponding
 * index was taken. Limited to 30 samples in each message. The samples may span across seconds.
 * Array size must match the number of samples in gyro_x and gyro_y and gyro_z
 *
 * \return the \c sampleTimeOffset field value.
 */
quint16 GyroscopeDataMessage::sampleTimeOffset() const
{
    Q_D(const GyroscopeDataMessage);
    return d->sampleTimeOffset;
}

/*!
 * Returns the GyroscopeDataMessage data message's \c gyroX field's current value.
 *
 * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
 * may span across seconds. A conversion will need to be done on this data once read.
 *
 * \return the \c gyroX field value.
 */
quint16 GyroscopeDataMessage::gyroX() const
{
    Q_D(const GyroscopeDataMessage);
    return d->gyroX;
}

/*!
 * Returns the GyroscopeDataMessage data message's \c gyroY field's current value.
 *
 * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
 * may span across seconds. A conversion will need to be done on this data once read.
 *
 * \return the \c gyroY field value.
 */
quint16 GyroscopeDataMessage::gyroY() const
{
    Q_D(const GyroscopeDataMessage);
    return d->gyroY;
}

/*!
 * Returns the GyroscopeDataMessage data message's \c gyroZ field's current value.
 *
 * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
 * may span across seconds. A conversion will need to be done on this data once read.
 *
 * \return the \c gyroZ field value.
 */
quint16 GyroscopeDataMessage::gyroZ() const
{
    Q_D(const GyroscopeDataMessage);
    return d->gyroZ;
}

/*!
 * Returns the GyroscopeDataMessage data message's \c calibratedGyroX field's current value.
 *
 * Calibrated gyro reading
 *
 * \return the \c calibratedGyroX field value.
 */
float GyroscopeDataMessage::calibratedGyroX() const
{
    Q_D(const GyroscopeDataMessage);
    return d->calibratedGyroX;
}

/*!
 * Returns the GyroscopeDataMessage data message's \c calibratedGyroY field's current value.
 *
 * Calibrated gyro reading
 *
 * \return the \c calibratedGyroY field value.
 */
float GyroscopeDataMessage::calibratedGyroY() const
{
    Q_D(const GyroscopeDataMessage);
    return d->calibratedGyroY;
}

/*!
 * Returns the GyroscopeDataMessage data message's \c calibratedGyroZ field's current value.
 *
 * Calibrated gyro reading
 *
 * \return the \c calibratedGyroZ field value.
 */
float GyroscopeDataMessage::calibratedGyroZ() const
{
    Q_D(const GyroscopeDataMessage);
    return d->calibratedGyroZ;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void GyroscopeDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(GyroscopeDataMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void GyroscopeDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(GyroscopeDataMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c sampleTimeOffset field to \a sampleTimeOffset.
 *
 * \param sampleTimeOffset The field value to set.
 */
void GyroscopeDataMessage::setSampleTimeOffset(const quint16 sampleTimeOffset)
{
    Q_D(GyroscopeDataMessage);
    d->sampleTimeOffset = sampleTimeOffset;
}
/*!
 * Sets the \c gyroX field to \a gyroX.
 *
 * \param gyroX The field value to set.
 */
void GyroscopeDataMessage::setGyroX(const quint16 gyroX)
{
    Q_D(GyroscopeDataMessage);
    d->gyroX = gyroX;
}
/*!
 * Sets the \c gyroY field to \a gyroY.
 *
 * \param gyroY The field value to set.
 */
void GyroscopeDataMessage::setGyroY(const quint16 gyroY)
{
    Q_D(GyroscopeDataMessage);
    d->gyroY = gyroY;
}
/*!
 * Sets the \c gyroZ field to \a gyroZ.
 *
 * \param gyroZ The field value to set.
 */
void GyroscopeDataMessage::setGyroZ(const quint16 gyroZ)
{
    Q_D(GyroscopeDataMessage);
    d->gyroZ = gyroZ;
}
/*!
 * Sets the \c calibratedGyroX field to \a calibratedGyroX.
 *
 * \param calibratedGyroX The field value to set.
 */
void GyroscopeDataMessage::setCalibratedGyroX(const float calibratedGyroX)
{
    Q_D(GyroscopeDataMessage);
    d->calibratedGyroX = calibratedGyroX;
}
/*!
 * Sets the \c calibratedGyroY field to \a calibratedGyroY.
 *
 * \param calibratedGyroY The field value to set.
 */
void GyroscopeDataMessage::setCalibratedGyroY(const float calibratedGyroY)
{
    Q_D(GyroscopeDataMessage);
    d->calibratedGyroY = calibratedGyroY;
}
/*!
 * Sets the \c calibratedGyroZ field to \a calibratedGyroZ.
 *
 * \param calibratedGyroZ The field value to set.
 */
void GyroscopeDataMessage::setCalibratedGyroZ(const float calibratedGyroZ)
{
    Q_D(GyroscopeDataMessage);
    d->calibratedGyroZ = calibratedGyroZ;
}

/// \cond internal

/*!
 * \internal
 *
 * \class GyroscopeDataMessagePrivate
 *
 * The GyroscopeDataMessagePrivate class provides private implementation for the GyroscopeDataMessage.
 *
 * \sa GyroscopeDataMessage
 */

/*!
 * \internal
 *
 * Constructs a GyroscopeDataMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
GyroscopeDataMessagePrivate::GyroscopeDataMessagePrivate(GyroscopeDataMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , sampleTimeOffset(0xFFFF)
  , gyroX(0xFFFF)
  , gyroY(0xFFFF)
  , gyroZ(0xFFFF)
  , calibratedGyroX(static_cast<float>(-1))
  , calibratedGyroY(static_cast<float>(-1))
  , calibratedGyroZ(static_cast<float>(-1))
{
    globalMessageNumber = MesgNum::GyroscopeData;
}

/*!
 * \internal
 *
 * Destroys the GyroscopeDataMessagePrivate object.
 */
GyroscopeDataMessagePrivate::~GyroscopeDataMessagePrivate()
{

}

bool GyroscopeDataMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:gyroscope_data.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "gyroscope_data.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:gyroscope_data.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "gyroscope_data.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:gyroscope_data.sampleTimeOffset
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "gyroscope_data.sampleTimeOffset")) return false;
        this->sampleTimeOffset = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:gyroscope_data.gyroX
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "gyroscope_data.gyroX")) return false;
        this->gyroX = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:gyroscope_data.gyroY
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "gyroscope_data.gyroY")) return false;
        this->gyroY = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:gyroscope_data.gyroZ
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "gyroscope_data.gyroZ")) return false;
        this->gyroZ = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:gyroscope_data.calibratedGyroX
        if (!verify(data, baseType, 4, FitBaseType::Float32, "gyroscope_data.calibratedGyroX")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->calibratedGyroX) == 4, "src and dst not the same size");
            memcpy(&this->calibratedGyroX, &localEndian, data.size());
        }
        #else
        this->calibratedGyroX = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 6: // See Profile.xlsx::Messages:gyroscope_data.calibratedGyroY
        if (!verify(data, baseType, 4, FitBaseType::Float32, "gyroscope_data.calibratedGyroY")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->calibratedGyroY) == 4, "src and dst not the same size");
            memcpy(&this->calibratedGyroY, &localEndian, data.size());
        }
        #else
        this->calibratedGyroY = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 7: // See Profile.xlsx::Messages:gyroscope_data.calibratedGyroZ
        if (!verify(data, baseType, 4, FitBaseType::Float32, "gyroscope_data.calibratedGyroZ")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->calibratedGyroZ) == 4, "src and dst not the same size");
            memcpy(&this->calibratedGyroZ, &localEndian, data.size());
        }
        #else
        this->calibratedGyroZ = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    default:
        qWarning() << "ignoring unknown gyroscope_data message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
