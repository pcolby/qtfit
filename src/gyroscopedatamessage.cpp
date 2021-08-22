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

#include <QDebug>
#include <QtEndian>

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
        qWarning() << "unknown gyroscope_data message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
