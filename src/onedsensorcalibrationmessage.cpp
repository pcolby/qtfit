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

#include "onedsensorcalibrationmessage.h"
#include "onedsensorcalibrationmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class OneDSensorCalibrationMessage
 *
 * The OneDSensorCalibrationMessage class represents a FIT OneDSensorCalibrationMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid OneDSensorCalibrationMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
OneDSensorCalibrationMessage::OneDSensorCalibrationMessage() : AbstractDataMessage(new OneDSensorCalibrationMessagePrivate(this))
{

}

/*!
 * Returns the OneDSensorCalibrationMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime OneDSensorCalibrationMessage::timestamp() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->timestamp;
}

/*!
 * Returns the OneDSensorCalibrationMessage data message's \c sensorType field's current value.
 *
 * \return the \c sensorType field value.
 */
SensorType OneDSensorCalibrationMessage::sensorType() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->sensorType;
}

/*!
 * Returns the OneDSensorCalibrationMessage data message's \c calibrationFactor field's current value.
 *
 * \return the \c calibrationFactor field value.
 */
quint32 OneDSensorCalibrationMessage::calibrationFactor() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->calibrationFactor;
}

/*!
 * Returns the OneDSensorCalibrationMessage data message's \c calibrationDivisor field's current value.
 *
 * \return the \c calibrationDivisor field value.
 */
quint32 OneDSensorCalibrationMessage::calibrationDivisor() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->calibrationDivisor;
}

/*!
 * Returns the OneDSensorCalibrationMessage data message's \c levelShift field's current value.
 *
 * \return the \c levelShift field value.
 */
quint32 OneDSensorCalibrationMessage::levelShift() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->levelShift;
}

/*!
 * Returns the OneDSensorCalibrationMessage data message's \c offsetCal field's current value.
 *
 * \return the \c offsetCal field value.
 */
qint32 OneDSensorCalibrationMessage::offsetCal() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->offsetCal;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void OneDSensorCalibrationMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(OneDSensorCalibrationMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c sensorType field to \a sensorType.
 *
 * \param sensorType The field value to set.
 */
void OneDSensorCalibrationMessage::setSensorType(const SensorType sensorType)
{
    Q_D(OneDSensorCalibrationMessage);
    d->sensorType = sensorType;
}
/*!
 * Sets the \c calibrationFactor field to \a calibrationFactor.
 *
 * \param calibrationFactor The field value to set.
 */
void OneDSensorCalibrationMessage::setCalibrationFactor(const quint32 calibrationFactor)
{
    Q_D(OneDSensorCalibrationMessage);
    d->calibrationFactor = calibrationFactor;
}
/*!
 * Sets the \c calibrationDivisor field to \a calibrationDivisor.
 *
 * \param calibrationDivisor The field value to set.
 */
void OneDSensorCalibrationMessage::setCalibrationDivisor(const quint32 calibrationDivisor)
{
    Q_D(OneDSensorCalibrationMessage);
    d->calibrationDivisor = calibrationDivisor;
}
/*!
 * Sets the \c levelShift field to \a levelShift.
 *
 * \param levelShift The field value to set.
 */
void OneDSensorCalibrationMessage::setLevelShift(const quint32 levelShift)
{
    Q_D(OneDSensorCalibrationMessage);
    d->levelShift = levelShift;
}
/*!
 * Sets the \c offsetCal field to \a offsetCal.
 *
 * \param offsetCal The field value to set.
 */
void OneDSensorCalibrationMessage::setOffsetCal(const qint32 offsetCal)
{
    Q_D(OneDSensorCalibrationMessage);
    d->offsetCal = offsetCal;
}

/// \cond internal

/*!
 * \internal
 *
 * \class OneDSensorCalibrationMessagePrivate
 *
 * The OneDSensorCalibrationMessagePrivate class provides private implementation for the OneDSensorCalibrationMessage.
 *
 * \sa OneDSensorCalibrationMessage
 */

/*!
 * \internal
 *
 * Constructs a OneDSensorCalibrationMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
OneDSensorCalibrationMessagePrivate::OneDSensorCalibrationMessagePrivate(OneDSensorCalibrationMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , sensorType(static_cast<SensorType>(-1))
  , calibrationFactor(0xFFFFFFFF)
  , calibrationDivisor(0xFFFFFFFF)
  , levelShift(0xFFFFFFFF)
  , offsetCal(0x7FFFFFFF)
{
    globalMessageNumber = MesgNum::OneDSensorCalibration;
}

/*!
 * \internal
 *
 * Destroys the OneDSensorCalibrationMessagePrivate object.
 */
OneDSensorCalibrationMessagePrivate::~OneDSensorCalibrationMessagePrivate()
{

}

bool OneDSensorCalibrationMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:one_d_sensor_calibration.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "one_d_sensor_calibration.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:one_d_sensor_calibration.sensorType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "one_d_sensor_calibration.sensorType")) return false;
        this->sensorType = static_cast<SensorType>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:one_d_sensor_calibration.calibrationFactor
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "one_d_sensor_calibration.calibrationFactor")) return false;
        this->calibrationFactor = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:one_d_sensor_calibration.calibrationDivisor
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "one_d_sensor_calibration.calibrationDivisor")) return false;
        this->calibrationDivisor = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:one_d_sensor_calibration.levelShift
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "one_d_sensor_calibration.levelShift")) return false;
        this->levelShift = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:one_d_sensor_calibration.offsetCal
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "one_d_sensor_calibration.offsetCal")) return false;
        this->offsetCal = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown one_d_sensor_calibration message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
