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
 * Defines the ThreeDSensorCalibrationMessage, and ThreeDSensorCalibrationMessagePrivate classes.
 */

#include "threedsensorcalibrationmessage.h"
#include "threedsensorcalibrationmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class ThreeDSensorCalibrationMessage
 *
 * The ThreeDSensorCalibrationMessage class represents a FIT ThreeDSensorCalibrationMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a ThreeDSensorCalibrationMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ThreeDSensorCalibrationMessage::ThreeDSensorCalibrationMessage() : AbstractDataMessage(new ThreeDSensorCalibrationMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a ThreeDSensorCalibrationMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
ThreeDSensorCalibrationMessage::ThreeDSensorCalibrationMessage(ThreeDSensorCalibrationMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the ThreeDSensorCalibrationMessage data message's \c timestamp field's current value.
 *
 * Whole second part of the timestamp
 *
 * \return the \c timestamp field value.
 */
DateTime ThreeDSensorCalibrationMessage::timestamp() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->timestamp;
}

/*!
 * Returns the ThreeDSensorCalibrationMessage data message's \c sensorType field's current value.
 *
 * Indicates which sensor the calibration is for
 *
 * \return the \c sensorType field value.
 */
SensorType ThreeDSensorCalibrationMessage::sensorType() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->sensorType;
}

/*!
 * Returns the ThreeDSensorCalibrationMessage data message's \c calibrationFactor field's current value.
 *
 * Calibration factor used to convert from raw ADC value to degrees, g,  etc.
 *
 * \return the \c calibrationFactor field value.
 */
quint32 ThreeDSensorCalibrationMessage::calibrationFactor() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->calibrationFactor;
}

/*!
 * Returns the ThreeDSensorCalibrationMessage data message's \c calibrationDivisor field's current value.
 *
 * Calibration factor divisor
 *
 * \return the \c calibrationDivisor field value.
 */
quint32 ThreeDSensorCalibrationMessage::calibrationDivisor() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->calibrationDivisor;
}

/*!
 * Returns the ThreeDSensorCalibrationMessage data message's \c levelShift field's current value.
 *
 * Level shift value used to shift the ADC value back into range
 *
 * \return the \c levelShift field value.
 */
quint32 ThreeDSensorCalibrationMessage::levelShift() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->levelShift;
}

/*!
 * Returns the ThreeDSensorCalibrationMessage data message's \c offsetCal field's current value.
 *
 * Internal calibration factors, one for each: xy, yx, zx
 *
 * \return the \c offsetCal field value.
 */
qint32 ThreeDSensorCalibrationMessage::offsetCal() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->offsetCal;
}

/*!
 * Returns the ThreeDSensorCalibrationMessage data message's \c orientationMatrix field's current value.
 *
 * 3 x 3 rotation matrix (row major)
 *
 * \return the \c orientationMatrix field value.
 */
qint32 ThreeDSensorCalibrationMessage::orientationMatrix() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->orientationMatrix;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void ThreeDSensorCalibrationMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c sensorType field to \a sensorType.
 *
 * \param sensorType The field value to set.
 */
void ThreeDSensorCalibrationMessage::setSensorType(const SensorType sensorType)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->sensorType = sensorType;
}
/*!
 * Sets the \c calibrationFactor field to \a calibrationFactor.
 *
 * \param calibrationFactor The field value to set.
 */
void ThreeDSensorCalibrationMessage::setCalibrationFactor(const quint32 calibrationFactor)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->calibrationFactor = calibrationFactor;
}
/*!
 * Sets the \c calibrationDivisor field to \a calibrationDivisor.
 *
 * \param calibrationDivisor The field value to set.
 */
void ThreeDSensorCalibrationMessage::setCalibrationDivisor(const quint32 calibrationDivisor)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->calibrationDivisor = calibrationDivisor;
}
/*!
 * Sets the \c levelShift field to \a levelShift.
 *
 * \param levelShift The field value to set.
 */
void ThreeDSensorCalibrationMessage::setLevelShift(const quint32 levelShift)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->levelShift = levelShift;
}
/*!
 * Sets the \c offsetCal field to \a offsetCal.
 *
 * \param offsetCal The field value to set.
 */
void ThreeDSensorCalibrationMessage::setOffsetCal(const qint32 offsetCal)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->offsetCal = offsetCal;
}
/*!
 * Sets the \c orientationMatrix field to \a orientationMatrix.
 *
 * \param orientationMatrix The field value to set.
 */
void ThreeDSensorCalibrationMessage::setOrientationMatrix(const qint32 orientationMatrix)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->orientationMatrix = orientationMatrix;
}

/// \cond internal

/*!
 * \internal
 *
 * \class ThreeDSensorCalibrationMessagePrivate
 *
 * The ThreeDSensorCalibrationMessagePrivate class provides private implementation for the ThreeDSensorCalibrationMessage.
 *
 * \sa ThreeDSensorCalibrationMessage
 */

/*!
 * \internal
 *
 * Constructs a ThreeDSensorCalibrationMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ThreeDSensorCalibrationMessagePrivate::ThreeDSensorCalibrationMessagePrivate(ThreeDSensorCalibrationMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , sensorType(static_cast<SensorType>(-1))
  , calibrationFactor(0xFFFFFFFF)
  , calibrationDivisor(0xFFFFFFFF)
  , levelShift(0xFFFFFFFF)
  , offsetCal(0x7FFFFFFF)
  , orientationMatrix(0x7FFFFFFF)
{
    globalMessageNumber = MesgNum::ThreeDSensorCalibration;
}

/*!
 * \internal
 *
 * Destroys the ThreeDSensorCalibrationMessagePrivate object.
 */
ThreeDSensorCalibrationMessagePrivate::~ThreeDSensorCalibrationMessagePrivate()
{

}

bool ThreeDSensorCalibrationMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:three_d_sensor_calibration.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "three_d_sensor_calibration.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:three_d_sensor_calibration.sensorType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "three_d_sensor_calibration.sensorType")) return false;
        this->sensorType = static_cast<SensorType>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:three_d_sensor_calibration.calibrationFactor
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "three_d_sensor_calibration.calibrationFactor")) return false;
        this->calibrationFactor = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:three_d_sensor_calibration.calibrationDivisor
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "three_d_sensor_calibration.calibrationDivisor")) return false;
        this->calibrationDivisor = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:three_d_sensor_calibration.levelShift
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "three_d_sensor_calibration.levelShift")) return false;
        this->levelShift = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:three_d_sensor_calibration.offsetCal
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "three_d_sensor_calibration.offsetCal")) return false;
        this->offsetCal = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:three_d_sensor_calibration.orientationMatrix
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "three_d_sensor_calibration.orientationMatrix")) return false;
        this->orientationMatrix = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown three_d_sensor_calibration message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
