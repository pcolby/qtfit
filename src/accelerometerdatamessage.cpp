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

QTFIT_BEGIN_NAMESPACE

AccelerometerDataMessage::AccelerometerDataMessage() : FitDataMessage(new AccelerometerDataMessagePrivate(this))
{

}

DateTime AccelerometerDataMessage::timestamp() const
{
    Q_D(const AccelerometerDataMessage);
    return d->timestamp;
}

quint16 AccelerometerDataMessage::timestampMs() const
{
    Q_D(const AccelerometerDataMessage);
    return d->timestampMs;
}

quint16 AccelerometerDataMessage::sampleTimeOffset() const
{
    Q_D(const AccelerometerDataMessage);
    return d->sampleTimeOffset;
}

quint16 AccelerometerDataMessage::accelX() const
{
    Q_D(const AccelerometerDataMessage);
    return d->accelX;
}

quint16 AccelerometerDataMessage::accelY() const
{
    Q_D(const AccelerometerDataMessage);
    return d->accelY;
}

quint16 AccelerometerDataMessage::accelZ() const
{
    Q_D(const AccelerometerDataMessage);
    return d->accelZ;
}

float AccelerometerDataMessage::calibratedAccelX() const
{
    Q_D(const AccelerometerDataMessage);
    return d->calibratedAccelX;
}

float AccelerometerDataMessage::calibratedAccelY() const
{
    Q_D(const AccelerometerDataMessage);
    return d->calibratedAccelY;
}

float AccelerometerDataMessage::calibratedAccelZ() const
{
    Q_D(const AccelerometerDataMessage);
    return d->calibratedAccelZ;
}

qint16 AccelerometerDataMessage::compressedCalibratedAccelX() const
{
    Q_D(const AccelerometerDataMessage);
    return d->compressedCalibratedAccelX;
}

qint16 AccelerometerDataMessage::compressedCalibratedAccelY() const
{
    Q_D(const AccelerometerDataMessage);
    return d->compressedCalibratedAccelY;
}

qint16 AccelerometerDataMessage::compressedCalibratedAccelZ() const
{
    Q_D(const AccelerometerDataMessage);
    return d->compressedCalibratedAccelZ;
}

void AccelerometerDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(AccelerometerDataMessage);
    d->timestamp = timestamp;
}
void AccelerometerDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(AccelerometerDataMessage);
    d->timestampMs = timestampMs;
}
void AccelerometerDataMessage::setSampleTimeOffset(const quint16 sampleTimeOffset)
{
    Q_D(AccelerometerDataMessage);
    d->sampleTimeOffset = sampleTimeOffset;
}
void AccelerometerDataMessage::setAccelX(const quint16 accelX)
{
    Q_D(AccelerometerDataMessage);
    d->accelX = accelX;
}
void AccelerometerDataMessage::setAccelY(const quint16 accelY)
{
    Q_D(AccelerometerDataMessage);
    d->accelY = accelY;
}
void AccelerometerDataMessage::setAccelZ(const quint16 accelZ)
{
    Q_D(AccelerometerDataMessage);
    d->accelZ = accelZ;
}
void AccelerometerDataMessage::setCalibratedAccelX(const float calibratedAccelX)
{
    Q_D(AccelerometerDataMessage);
    d->calibratedAccelX = calibratedAccelX;
}
void AccelerometerDataMessage::setCalibratedAccelY(const float calibratedAccelY)
{
    Q_D(AccelerometerDataMessage);
    d->calibratedAccelY = calibratedAccelY;
}
void AccelerometerDataMessage::setCalibratedAccelZ(const float calibratedAccelZ)
{
    Q_D(AccelerometerDataMessage);
    d->calibratedAccelZ = calibratedAccelZ;
}
void AccelerometerDataMessage::setCompressedCalibratedAccelX(const qint16 compressedCalibratedAccelX)
{
    Q_D(AccelerometerDataMessage);
    d->compressedCalibratedAccelX = compressedCalibratedAccelX;
}
void AccelerometerDataMessage::setCompressedCalibratedAccelY(const qint16 compressedCalibratedAccelY)
{
    Q_D(AccelerometerDataMessage);
    d->compressedCalibratedAccelY = compressedCalibratedAccelY;
}
void AccelerometerDataMessage::setCompressedCalibratedAccelZ(const qint16 compressedCalibratedAccelZ)
{
    Q_D(AccelerometerDataMessage);
    d->compressedCalibratedAccelZ = compressedCalibratedAccelZ;
}

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

AccelerometerDataMessagePrivate::~AccelerometerDataMessagePrivate()
{

}

/// @todo Generate implementation.
bool AccelerometerDataMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
