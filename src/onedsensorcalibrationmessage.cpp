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

OneDSensorCalibrationMessage::OneDSensorCalibrationMessage() : FitDataMessage(new OneDSensorCalibrationMessagePrivate(this))
{

}

DateTime OneDSensorCalibrationMessage::timestamp() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->timestamp;
}

SensorType OneDSensorCalibrationMessage::sensorType() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->sensorType;
}

quint32 OneDSensorCalibrationMessage::calibrationFactor() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->calibrationFactor;
}

quint32 OneDSensorCalibrationMessage::calibrationDivisor() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->calibrationDivisor;
}

quint32 OneDSensorCalibrationMessage::levelShift() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->levelShift;
}

qint32 OneDSensorCalibrationMessage::offsetCal() const
{
    Q_D(const OneDSensorCalibrationMessage);
    return d->offsetCal;
}

void OneDSensorCalibrationMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(OneDSensorCalibrationMessage);
    d->timestamp = timestamp;
}
void OneDSensorCalibrationMessage::setSensorType(const SensorType sensorType)
{
    Q_D(OneDSensorCalibrationMessage);
    d->sensorType = sensorType;
}
void OneDSensorCalibrationMessage::setCalibrationFactor(const quint32 calibrationFactor)
{
    Q_D(OneDSensorCalibrationMessage);
    d->calibrationFactor = calibrationFactor;
}
void OneDSensorCalibrationMessage::setCalibrationDivisor(const quint32 calibrationDivisor)
{
    Q_D(OneDSensorCalibrationMessage);
    d->calibrationDivisor = calibrationDivisor;
}
void OneDSensorCalibrationMessage::setLevelShift(const quint32 levelShift)
{
    Q_D(OneDSensorCalibrationMessage);
    d->levelShift = levelShift;
}
void OneDSensorCalibrationMessage::setOffsetCal(const qint32 offsetCal)
{
    Q_D(OneDSensorCalibrationMessage);
    d->offsetCal = offsetCal;
}

OneDSensorCalibrationMessagePrivate::OneDSensorCalibrationMessagePrivate(OneDSensorCalibrationMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , sensorType(static_cast<SensorType>(-1))
  , calibrationFactor(0xFFFFFFFF)
  , calibrationDivisor(0xFFFFFFFF)
  , levelShift(0xFFFFFFFF)
  , offsetCal(0x7FFFFFFF)
{
    globalMessageNumber = MesgNum::OneDSensorCalibration;
}

OneDSensorCalibrationMessagePrivate::~OneDSensorCalibrationMessagePrivate()
{

}

bool OneDSensorCalibrationMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:one_d_sensor_calibration.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "one_d_sensor_calibration.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "one_d_sensor_calibration.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:one_d_sensor_calibration.sensorType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "one_d_sensor_calibration.sensorType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "one_d_sensor_calibration.sensorType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->sensorType = static_cast<SensorType>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:one_d_sensor_calibration.calibrationFactor
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "one_d_sensor_calibration.calibrationFactor has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "one_d_sensor_calibration.calibrationFactor size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->calibrationFactor = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:one_d_sensor_calibration.calibrationDivisor
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "one_d_sensor_calibration.calibrationDivisor has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "one_d_sensor_calibration.calibrationDivisor size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->calibrationDivisor = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:one_d_sensor_calibration.levelShift
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "one_d_sensor_calibration.levelShift has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "one_d_sensor_calibration.levelShift size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->levelShift = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:one_d_sensor_calibration.offsetCal
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "one_d_sensor_calibration.offsetCal has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "one_d_sensor_calibration.offsetCal size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->offsetCal = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    default:
        qWarning() << "unknown one_d_sensor_calibration message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
