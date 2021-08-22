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

#include "accelerometerdatamessage.h"
#include "accelerometerdatamessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class AccelerometerDataMessage
 *
 * The AccelerometerDataMessage class represents a FIT AccelerometerDataMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid AccelerometerDataMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
AccelerometerDataMessage::AccelerometerDataMessage() : FitDataMessage(new AccelerometerDataMessagePrivate(this))
{

}

/*!
 * Returns the AccelerometerDataMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime AccelerometerDataMessage::timestamp() const
{
    Q_D(const AccelerometerDataMessage);
    return d->timestamp;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c timestampMs field's current value.
 *
 * \return the \c timestampMs field value.
 */
quint16 AccelerometerDataMessage::timestampMs() const
{
    Q_D(const AccelerometerDataMessage);
    return d->timestampMs;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c sampleTimeOffset field's current value.
 *
 * \return the \c sampleTimeOffset field value.
 */
quint16 AccelerometerDataMessage::sampleTimeOffset() const
{
    Q_D(const AccelerometerDataMessage);
    return d->sampleTimeOffset;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c accelX field's current value.
 *
 * \return the \c accelX field value.
 */
quint16 AccelerometerDataMessage::accelX() const
{
    Q_D(const AccelerometerDataMessage);
    return d->accelX;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c accelY field's current value.
 *
 * \return the \c accelY field value.
 */
quint16 AccelerometerDataMessage::accelY() const
{
    Q_D(const AccelerometerDataMessage);
    return d->accelY;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c accelZ field's current value.
 *
 * \return the \c accelZ field value.
 */
quint16 AccelerometerDataMessage::accelZ() const
{
    Q_D(const AccelerometerDataMessage);
    return d->accelZ;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c calibratedAccelX field's current value.
 *
 * \return the \c calibratedAccelX field value.
 */
float AccelerometerDataMessage::calibratedAccelX() const
{
    Q_D(const AccelerometerDataMessage);
    return d->calibratedAccelX;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c calibratedAccelY field's current value.
 *
 * \return the \c calibratedAccelY field value.
 */
float AccelerometerDataMessage::calibratedAccelY() const
{
    Q_D(const AccelerometerDataMessage);
    return d->calibratedAccelY;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c calibratedAccelZ field's current value.
 *
 * \return the \c calibratedAccelZ field value.
 */
float AccelerometerDataMessage::calibratedAccelZ() const
{
    Q_D(const AccelerometerDataMessage);
    return d->calibratedAccelZ;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c compressedCalibratedAccelX field's current value.
 *
 * \return the \c compressedCalibratedAccelX field value.
 */
qint16 AccelerometerDataMessage::compressedCalibratedAccelX() const
{
    Q_D(const AccelerometerDataMessage);
    return d->compressedCalibratedAccelX;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c compressedCalibratedAccelY field's current value.
 *
 * \return the \c compressedCalibratedAccelY field value.
 */
qint16 AccelerometerDataMessage::compressedCalibratedAccelY() const
{
    Q_D(const AccelerometerDataMessage);
    return d->compressedCalibratedAccelY;
}

/*!
 * Returns the AccelerometerDataMessage data message's \c compressedCalibratedAccelZ field's current value.
 *
 * \return the \c compressedCalibratedAccelZ field value.
 */
qint16 AccelerometerDataMessage::compressedCalibratedAccelZ() const
{
    Q_D(const AccelerometerDataMessage);
    return d->compressedCalibratedAccelZ;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void AccelerometerDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(AccelerometerDataMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void AccelerometerDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(AccelerometerDataMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c sampleTimeOffset field to \a sampleTimeOffset.
 *
 * \param sampleTimeOffset The field value to set.
 */
void AccelerometerDataMessage::setSampleTimeOffset(const quint16 sampleTimeOffset)
{
    Q_D(AccelerometerDataMessage);
    d->sampleTimeOffset = sampleTimeOffset;
}
/*!
 * Sets the \c accelX field to \a accelX.
 *
 * \param accelX The field value to set.
 */
void AccelerometerDataMessage::setAccelX(const quint16 accelX)
{
    Q_D(AccelerometerDataMessage);
    d->accelX = accelX;
}
/*!
 * Sets the \c accelY field to \a accelY.
 *
 * \param accelY The field value to set.
 */
void AccelerometerDataMessage::setAccelY(const quint16 accelY)
{
    Q_D(AccelerometerDataMessage);
    d->accelY = accelY;
}
/*!
 * Sets the \c accelZ field to \a accelZ.
 *
 * \param accelZ The field value to set.
 */
void AccelerometerDataMessage::setAccelZ(const quint16 accelZ)
{
    Q_D(AccelerometerDataMessage);
    d->accelZ = accelZ;
}
/*!
 * Sets the \c calibratedAccelX field to \a calibratedAccelX.
 *
 * \param calibratedAccelX The field value to set.
 */
void AccelerometerDataMessage::setCalibratedAccelX(const float calibratedAccelX)
{
    Q_D(AccelerometerDataMessage);
    d->calibratedAccelX = calibratedAccelX;
}
/*!
 * Sets the \c calibratedAccelY field to \a calibratedAccelY.
 *
 * \param calibratedAccelY The field value to set.
 */
void AccelerometerDataMessage::setCalibratedAccelY(const float calibratedAccelY)
{
    Q_D(AccelerometerDataMessage);
    d->calibratedAccelY = calibratedAccelY;
}
/*!
 * Sets the \c calibratedAccelZ field to \a calibratedAccelZ.
 *
 * \param calibratedAccelZ The field value to set.
 */
void AccelerometerDataMessage::setCalibratedAccelZ(const float calibratedAccelZ)
{
    Q_D(AccelerometerDataMessage);
    d->calibratedAccelZ = calibratedAccelZ;
}
/*!
 * Sets the \c compressedCalibratedAccelX field to \a compressedCalibratedAccelX.
 *
 * \param compressedCalibratedAccelX The field value to set.
 */
void AccelerometerDataMessage::setCompressedCalibratedAccelX(const qint16 compressedCalibratedAccelX)
{
    Q_D(AccelerometerDataMessage);
    d->compressedCalibratedAccelX = compressedCalibratedAccelX;
}
/*!
 * Sets the \c compressedCalibratedAccelY field to \a compressedCalibratedAccelY.
 *
 * \param compressedCalibratedAccelY The field value to set.
 */
void AccelerometerDataMessage::setCompressedCalibratedAccelY(const qint16 compressedCalibratedAccelY)
{
    Q_D(AccelerometerDataMessage);
    d->compressedCalibratedAccelY = compressedCalibratedAccelY;
}
/*!
 * Sets the \c compressedCalibratedAccelZ field to \a compressedCalibratedAccelZ.
 *
 * \param compressedCalibratedAccelZ The field value to set.
 */
void AccelerometerDataMessage::setCompressedCalibratedAccelZ(const qint16 compressedCalibratedAccelZ)
{
    Q_D(AccelerometerDataMessage);
    d->compressedCalibratedAccelZ = compressedCalibratedAccelZ;
}

/*!
 * \internal
 *
 * \class AccelerometerDataMessagePrivate
 *
 * The AccelerometerDataMessagePrivate class provides private implementation for the AccelerometerDataMessage.
 *
 * \sa AccelerometerDataMessage
 */

/*!
 * \internal
 *
 * Constructs a AccelerometerDataMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
AccelerometerDataMessagePrivate::AccelerometerDataMessagePrivate(AccelerometerDataMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , sampleTimeOffset(0xFFFF)
  , accelX(0xFFFF)
  , accelY(0xFFFF)
  , accelZ(0xFFFF)
  , calibratedAccelX(static_cast<float>(-1))
  , calibratedAccelY(static_cast<float>(-1))
  , calibratedAccelZ(static_cast<float>(-1))
  , compressedCalibratedAccelX(0x7FFF)
  , compressedCalibratedAccelY(0x7FFF)
  , compressedCalibratedAccelZ(0x7FFF)
{
    globalMessageNumber = MesgNum::AccelerometerData;
}

/*!
 * \internal
 *
 * Destroys the AccelerometerDataMessagePrivate object.
 */
AccelerometerDataMessagePrivate::~AccelerometerDataMessagePrivate()
{

}

bool AccelerometerDataMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:accelerometer_data.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "accelerometer_data.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:accelerometer_data.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "accelerometer_data.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:accelerometer_data.sampleTimeOffset
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "accelerometer_data.sampleTimeOffset")) return false;
        this->sampleTimeOffset = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:accelerometer_data.accelX
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "accelerometer_data.accelX")) return false;
        this->accelX = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:accelerometer_data.accelY
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "accelerometer_data.accelY")) return false;
        this->accelY = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:accelerometer_data.accelZ
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "accelerometer_data.accelZ")) return false;
        this->accelZ = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:accelerometer_data.calibratedAccelX
        if (!verify(data, baseType, 4, FitBaseType::Float32, "accelerometer_data.calibratedAccelX")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->calibratedAccelX) == 4, "src and dst not the same size");
            memcpy(&this->calibratedAccelX, &localEndian, data.size());
        }
        #else
        this->calibratedAccelX = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 6: // See Profile.xlsx::Messages:accelerometer_data.calibratedAccelY
        if (!verify(data, baseType, 4, FitBaseType::Float32, "accelerometer_data.calibratedAccelY")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->calibratedAccelY) == 4, "src and dst not the same size");
            memcpy(&this->calibratedAccelY, &localEndian, data.size());
        }
        #else
        this->calibratedAccelY = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 7: // See Profile.xlsx::Messages:accelerometer_data.calibratedAccelZ
        if (!verify(data, baseType, 4, FitBaseType::Float32, "accelerometer_data.calibratedAccelZ")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->calibratedAccelZ) == 4, "src and dst not the same size");
            memcpy(&this->calibratedAccelZ, &localEndian, data.size());
        }
        #else
        this->calibratedAccelZ = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 8: // See Profile.xlsx::Messages:accelerometer_data.compressedCalibratedAccelX
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "accelerometer_data.compressedCalibratedAccelX")) return false;
        this->compressedCalibratedAccelX = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 9: // See Profile.xlsx::Messages:accelerometer_data.compressedCalibratedAccelY
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "accelerometer_data.compressedCalibratedAccelY")) return false;
        this->compressedCalibratedAccelY = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:accelerometer_data.compressedCalibratedAccelZ
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "accelerometer_data.compressedCalibratedAccelZ")) return false;
        this->compressedCalibratedAccelZ = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    default:
        qWarning() << "unknown accelerometer_data message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
