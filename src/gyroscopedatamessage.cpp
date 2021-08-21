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

bool GyroscopeDataMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:gyroscope_data.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "gyroscope_data.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "gyroscope_data.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:gyroscope_data.timestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "gyroscope_data.timestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "gyroscope_data.timestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:gyroscope_data.sampleTimeOffset
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "gyroscope_data.sampleTimeOffset has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "gyroscope_data.sampleTimeOffset size is" << data.size() << "but should be" << 2;
            return false;
        }
        sampleTimeOffset = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:gyroscope_data.gyroX
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "gyroscope_data.gyroX has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "gyroscope_data.gyroX size is" << data.size() << "but should be" << 2;
            return false;
        }
        gyroX = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:gyroscope_data.gyroY
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "gyroscope_data.gyroY has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "gyroscope_data.gyroY size is" << data.size() << "but should be" << 2;
            return false;
        }
        gyroY = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:gyroscope_data.gyroZ
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "gyroscope_data.gyroZ has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "gyroscope_data.gyroZ size is" << data.size() << "but should be" << 2;
            return false;
        }
        gyroZ = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:gyroscope_data.calibratedGyroX
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "gyroscope_data.calibratedGyroX has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "gyroscope_data.calibratedGyroX size is" << data.size() << "but should be" << 4;
            return false;
        }
        calibratedGyroX = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 6: // See Profile.xlsx::Messages:gyroscope_data.calibratedGyroY
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "gyroscope_data.calibratedGyroY has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "gyroscope_data.calibratedGyroY size is" << data.size() << "but should be" << 4;
            return false;
        }
        calibratedGyroY = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 7: // See Profile.xlsx::Messages:gyroscope_data.calibratedGyroZ
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "gyroscope_data.calibratedGyroZ has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "gyroscope_data.calibratedGyroZ size is" << data.size() << "but should be" << 4;
            return false;
        }
        calibratedGyroZ = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    default:
        qWarning() << "unknown gyroscope_data message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
