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

ThreeDSensorCalibrationMessagePrivate::ThreeDSensorCalibrationMessagePrivate(ThreeDSensorCalibrationMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::ThreeDSensorCalibration;
}

ThreeDSensorCalibrationMessagePrivate::~ThreeDSensorCalibrationMessagePrivate()
{

}

/// @todo Generate implementation.
bool ThreeDSensorCalibrationMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
