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

/// @todo Generate implementation.
bool OneDSensorCalibrationMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE
