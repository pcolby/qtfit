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

#include "threedsensorcalibrationmessage.h"
#include "threedsensorcalibrationmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

ThreeDSensorCalibrationMessage::ThreeDSensorCalibrationMessage() : FitDataMessage(new ThreeDSensorCalibrationMessagePrivate(this))
{

}

DateTime ThreeDSensorCalibrationMessage::timestamp() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->timestamp;
}

SensorType ThreeDSensorCalibrationMessage::sensorType() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->sensorType;
}

quint32 ThreeDSensorCalibrationMessage::calibrationFactor() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->calibrationFactor;
}

quint32 ThreeDSensorCalibrationMessage::calibrationDivisor() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->calibrationDivisor;
}

quint32 ThreeDSensorCalibrationMessage::levelShift() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->levelShift;
}

qint32 ThreeDSensorCalibrationMessage::offsetCal() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->offsetCal;
}

qint32 ThreeDSensorCalibrationMessage::orientationMatrix() const
{
    Q_D(const ThreeDSensorCalibrationMessage);
    return d->orientationMatrix;
}

void ThreeDSensorCalibrationMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->timestamp = timestamp;
}
void ThreeDSensorCalibrationMessage::setSensorType(const SensorType sensorType)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->sensorType = sensorType;
}
void ThreeDSensorCalibrationMessage::setCalibrationFactor(const quint32 calibrationFactor)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->calibrationFactor = calibrationFactor;
}
void ThreeDSensorCalibrationMessage::setCalibrationDivisor(const quint32 calibrationDivisor)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->calibrationDivisor = calibrationDivisor;
}
void ThreeDSensorCalibrationMessage::setLevelShift(const quint32 levelShift)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->levelShift = levelShift;
}
void ThreeDSensorCalibrationMessage::setOffsetCal(const qint32 offsetCal)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->offsetCal = offsetCal;
}
void ThreeDSensorCalibrationMessage::setOrientationMatrix(const qint32 orientationMatrix)
{
    Q_D(ThreeDSensorCalibrationMessage);
    d->orientationMatrix = orientationMatrix;
}

ThreeDSensorCalibrationMessagePrivate::ThreeDSensorCalibrationMessagePrivate(ThreeDSensorCalibrationMessage * const q)
  : FitDataMessagePrivate(q)
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
        qWarning() << "unknown three_d_sensor_calibration message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
