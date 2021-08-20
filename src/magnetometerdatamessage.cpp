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

MagnetometerDataMessagePrivate::MagnetometerDataMessagePrivate(MagnetometerDataMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::MagnetometerData;
}

MagnetometerDataMessagePrivate::~MagnetometerDataMessagePrivate()
{

}

/// @todo Generate implementation.
bool MagnetometerDataMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
