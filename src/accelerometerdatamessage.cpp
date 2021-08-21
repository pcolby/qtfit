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

#include <QDebug>
#include <QtEndian>

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

bool AccelerometerDataMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:accelerometer_data.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "accelerometer_data.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:accelerometer_data.timestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.timestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "accelerometer_data.timestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:accelerometer_data.sampleTimeOffset
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.sampleTimeOffset has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "accelerometer_data.sampleTimeOffset size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->sampleTimeOffset = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:accelerometer_data.accelX
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.accelX has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "accelerometer_data.accelX size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->accelX = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:accelerometer_data.accelY
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.accelY has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "accelerometer_data.accelY size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->accelY = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:accelerometer_data.accelZ
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.accelZ has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "accelerometer_data.accelZ size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->accelZ = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:accelerometer_data.calibratedAccelX
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.calibratedAccelX has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "accelerometer_data.calibratedAccelX size is" << data.size() << "but should be" << 4;
            return false;
        }
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            this->calibratedAccelX = *reinterpret_cast<const float *>(&localEndian);
        }
        #else
        this->calibratedAccelX = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 6: // See Profile.xlsx::Messages:accelerometer_data.calibratedAccelY
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.calibratedAccelY has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "accelerometer_data.calibratedAccelY size is" << data.size() << "but should be" << 4;
            return false;
        }
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            this->calibratedAccelY = *reinterpret_cast<const float *>(&localEndian);
        }
        #else
        this->calibratedAccelY = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 7: // See Profile.xlsx::Messages:accelerometer_data.calibratedAccelZ
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.calibratedAccelZ has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "accelerometer_data.calibratedAccelZ size is" << data.size() << "but should be" << 4;
            return false;
        }
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            this->calibratedAccelZ = *reinterpret_cast<const float *>(&localEndian);
        }
        #else
        this->calibratedAccelZ = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 8: // See Profile.xlsx::Messages:accelerometer_data.compressedCalibratedAccelX
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.compressedCalibratedAccelX has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "accelerometer_data.compressedCalibratedAccelX size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->compressedCalibratedAccelX = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 9: // See Profile.xlsx::Messages:accelerometer_data.compressedCalibratedAccelY
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.compressedCalibratedAccelY has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "accelerometer_data.compressedCalibratedAccelY size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->compressedCalibratedAccelY = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:accelerometer_data.compressedCalibratedAccelZ
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "accelerometer_data.compressedCalibratedAccelZ has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "accelerometer_data.compressedCalibratedAccelZ size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->compressedCalibratedAccelZ = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    default:
        qWarning() << "unknown accelerometer_data message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
