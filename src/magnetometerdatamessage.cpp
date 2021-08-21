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

#include "magnetometerdatamessage.h"
#include "magnetometerdatamessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

MagnetometerDataMessage::MagnetometerDataMessage() : FitDataMessage(new MagnetometerDataMessagePrivate(this))
{

}

DateTime MagnetometerDataMessage::timestamp() const
{
    Q_D(const MagnetometerDataMessage);
    return d->timestamp;
}

quint16 MagnetometerDataMessage::timestampMs() const
{
    Q_D(const MagnetometerDataMessage);
    return d->timestampMs;
}

quint16 MagnetometerDataMessage::sampleTimeOffset() const
{
    Q_D(const MagnetometerDataMessage);
    return d->sampleTimeOffset;
}

quint16 MagnetometerDataMessage::magX() const
{
    Q_D(const MagnetometerDataMessage);
    return d->magX;
}

quint16 MagnetometerDataMessage::magY() const
{
    Q_D(const MagnetometerDataMessage);
    return d->magY;
}

quint16 MagnetometerDataMessage::magZ() const
{
    Q_D(const MagnetometerDataMessage);
    return d->magZ;
}

float MagnetometerDataMessage::calibratedMagX() const
{
    Q_D(const MagnetometerDataMessage);
    return d->calibratedMagX;
}

float MagnetometerDataMessage::calibratedMagY() const
{
    Q_D(const MagnetometerDataMessage);
    return d->calibratedMagY;
}

float MagnetometerDataMessage::calibratedMagZ() const
{
    Q_D(const MagnetometerDataMessage);
    return d->calibratedMagZ;
}

void MagnetometerDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(MagnetometerDataMessage);
    d->timestamp = timestamp;
}
void MagnetometerDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(MagnetometerDataMessage);
    d->timestampMs = timestampMs;
}
void MagnetometerDataMessage::setSampleTimeOffset(const quint16 sampleTimeOffset)
{
    Q_D(MagnetometerDataMessage);
    d->sampleTimeOffset = sampleTimeOffset;
}
void MagnetometerDataMessage::setMagX(const quint16 magX)
{
    Q_D(MagnetometerDataMessage);
    d->magX = magX;
}
void MagnetometerDataMessage::setMagY(const quint16 magY)
{
    Q_D(MagnetometerDataMessage);
    d->magY = magY;
}
void MagnetometerDataMessage::setMagZ(const quint16 magZ)
{
    Q_D(MagnetometerDataMessage);
    d->magZ = magZ;
}
void MagnetometerDataMessage::setCalibratedMagX(const float calibratedMagX)
{
    Q_D(MagnetometerDataMessage);
    d->calibratedMagX = calibratedMagX;
}
void MagnetometerDataMessage::setCalibratedMagY(const float calibratedMagY)
{
    Q_D(MagnetometerDataMessage);
    d->calibratedMagY = calibratedMagY;
}
void MagnetometerDataMessage::setCalibratedMagZ(const float calibratedMagZ)
{
    Q_D(MagnetometerDataMessage);
    d->calibratedMagZ = calibratedMagZ;
}

MagnetometerDataMessagePrivate::MagnetometerDataMessagePrivate(MagnetometerDataMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , sampleTimeOffset(0xFFFF)
  , magX(0xFFFF)
  , magY(0xFFFF)
  , magZ(0xFFFF)
  , calibratedMagX(static_cast<float>(-1))
  , calibratedMagY(static_cast<float>(-1))
  , calibratedMagZ(static_cast<float>(-1))
{
    globalMessageNumber = MesgNum::MagnetometerData;
}

MagnetometerDataMessagePrivate::~MagnetometerDataMessagePrivate()
{

}

bool MagnetometerDataMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:magnetometer_data.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "magnetometer_data.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "magnetometer_data.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:magnetometer_data.timestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "magnetometer_data.timestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "magnetometer_data.timestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:magnetometer_data.sampleTimeOffset
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "magnetometer_data.sampleTimeOffset has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "magnetometer_data.sampleTimeOffset size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->sampleTimeOffset = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:magnetometer_data.magX
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "magnetometer_data.magX has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "magnetometer_data.magX size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->magX = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:magnetometer_data.magY
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "magnetometer_data.magY has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "magnetometer_data.magY size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->magY = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:magnetometer_data.magZ
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "magnetometer_data.magZ has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "magnetometer_data.magZ size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->magZ = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:magnetometer_data.calibratedMagX
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "magnetometer_data.calibratedMagX has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "magnetometer_data.calibratedMagX size is" << data.size() << "but should be" << 4;
            return false;
        }
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            this->calibratedMagX = *reinterpret_cast<const float *>(&localEndian);
        }
        #else
        this->calibratedMagX = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 6: // See Profile.xlsx::Messages:magnetometer_data.calibratedMagY
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "magnetometer_data.calibratedMagY has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "magnetometer_data.calibratedMagY size is" << data.size() << "but should be" << 4;
            return false;
        }
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            this->calibratedMagY = *reinterpret_cast<const float *>(&localEndian);
        }
        #else
        this->calibratedMagY = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 7: // See Profile.xlsx::Messages:magnetometer_data.calibratedMagZ
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "magnetometer_data.calibratedMagZ has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "magnetometer_data.calibratedMagZ size is" << data.size() << "but should be" << 4;
            return false;
        }
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            this->calibratedMagZ = *reinterpret_cast<const float *>(&localEndian);
        }
        #else
        this->calibratedMagZ = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    default:
        qWarning() << "unknown magnetometer_data message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
