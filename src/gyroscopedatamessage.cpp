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

#include "gyroscopedatamessage.h"
#include "gyroscopedatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

GyroscopeDataMessage::GyroscopeDataMessage() : FitDataMessage(new GyroscopeDataMessagePrivate(this))
{

}

DateTime GyroscopeDataMessage::timestamp() const
{
    Q_D(const GyroscopeDataMessage);
    return d->timestamp;
}

quint16 GyroscopeDataMessage::timestampMs() const
{
    Q_D(const GyroscopeDataMessage);
    return d->timestampMs;
}

quint16 GyroscopeDataMessage::sampleTimeOffset() const
{
    Q_D(const GyroscopeDataMessage);
    return d->sampleTimeOffset;
}

quint16 GyroscopeDataMessage::gyroX() const
{
    Q_D(const GyroscopeDataMessage);
    return d->gyroX;
}

quint16 GyroscopeDataMessage::gyroY() const
{
    Q_D(const GyroscopeDataMessage);
    return d->gyroY;
}

quint16 GyroscopeDataMessage::gyroZ() const
{
    Q_D(const GyroscopeDataMessage);
    return d->gyroZ;
}

float GyroscopeDataMessage::calibratedGyroX() const
{
    Q_D(const GyroscopeDataMessage);
    return d->calibratedGyroX;
}

float GyroscopeDataMessage::calibratedGyroY() const
{
    Q_D(const GyroscopeDataMessage);
    return d->calibratedGyroY;
}

float GyroscopeDataMessage::calibratedGyroZ() const
{
    Q_D(const GyroscopeDataMessage);
    return d->calibratedGyroZ;
}

void GyroscopeDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(GyroscopeDataMessage);
    d->timestamp = timestamp;
}
void GyroscopeDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(GyroscopeDataMessage);
    d->timestampMs = timestampMs;
}
void GyroscopeDataMessage::setSampleTimeOffset(const quint16 sampleTimeOffset)
{
    Q_D(GyroscopeDataMessage);
    d->sampleTimeOffset = sampleTimeOffset;
}
void GyroscopeDataMessage::setGyroX(const quint16 gyroX)
{
    Q_D(GyroscopeDataMessage);
    d->gyroX = gyroX;
}
void GyroscopeDataMessage::setGyroY(const quint16 gyroY)
{
    Q_D(GyroscopeDataMessage);
    d->gyroY = gyroY;
}
void GyroscopeDataMessage::setGyroZ(const quint16 gyroZ)
{
    Q_D(GyroscopeDataMessage);
    d->gyroZ = gyroZ;
}
void GyroscopeDataMessage::setCalibratedGyroX(const float calibratedGyroX)
{
    Q_D(GyroscopeDataMessage);
    d->calibratedGyroX = calibratedGyroX;
}
void GyroscopeDataMessage::setCalibratedGyroY(const float calibratedGyroY)
{
    Q_D(GyroscopeDataMessage);
    d->calibratedGyroY = calibratedGyroY;
}
void GyroscopeDataMessage::setCalibratedGyroZ(const float calibratedGyroZ)
{
    Q_D(GyroscopeDataMessage);
    d->calibratedGyroZ = calibratedGyroZ;
}

GyroscopeDataMessagePrivate::GyroscopeDataMessagePrivate(GyroscopeDataMessage * const q)
  : FitDataMessagePrivate(q)
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

GyroscopeDataMessagePrivate::~GyroscopeDataMessagePrivate()
{

}

/// @todo Generate implementation.
bool GyroscopeDataMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
