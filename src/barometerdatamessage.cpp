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

#include "barometerdatamessage.h"
#include "barometerdatamessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

BarometerDataMessage::BarometerDataMessage() : FitDataMessage(new BarometerDataMessagePrivate(this))
{

}

DateTime BarometerDataMessage::timestamp() const
{
    Q_D(const BarometerDataMessage);
    return d->timestamp;
}

quint16 BarometerDataMessage::timestampMs() const
{
    Q_D(const BarometerDataMessage);
    return d->timestampMs;
}

quint16 BarometerDataMessage::sampleTimeOffset() const
{
    Q_D(const BarometerDataMessage);
    return d->sampleTimeOffset;
}

quint32 BarometerDataMessage::baroPres() const
{
    Q_D(const BarometerDataMessage);
    return d->baroPres;
}

void BarometerDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(BarometerDataMessage);
    d->timestamp = timestamp;
}
void BarometerDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(BarometerDataMessage);
    d->timestampMs = timestampMs;
}
void BarometerDataMessage::setSampleTimeOffset(const quint16 sampleTimeOffset)
{
    Q_D(BarometerDataMessage);
    d->sampleTimeOffset = sampleTimeOffset;
}
void BarometerDataMessage::setBaroPres(const quint32 baroPres)
{
    Q_D(BarometerDataMessage);
    d->baroPres = baroPres;
}

BarometerDataMessagePrivate::BarometerDataMessagePrivate(BarometerDataMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , sampleTimeOffset(0xFFFF)
  , baroPres(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::BarometerData;
}

BarometerDataMessagePrivate::~BarometerDataMessagePrivate()
{

}

bool BarometerDataMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:barometer_data.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "barometer_data.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "barometer_data.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:barometer_data.timestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "barometer_data.timestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "barometer_data.timestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:barometer_data.sampleTimeOffset
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "barometer_data.sampleTimeOffset has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "barometer_data.sampleTimeOffset size is" << data.size() << "but should be" << 2;
            return false;
        }
        sampleTimeOffset = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:barometer_data.baroPres
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "barometer_data.baroPres has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "barometer_data.baroPres size is" << data.size() << "but should be" << 4;
            return false;
        }
        baroPres = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown barometer_data message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
