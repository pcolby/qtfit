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

#include "timestampcorrelationmessage.h"
#include "timestampcorrelationmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

TimestampCorrelationMessage::TimestampCorrelationMessage() : FitDataMessage(new TimestampCorrelationMessagePrivate(this))
{

}

DateTime TimestampCorrelationMessage::timestamp() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->timestamp;
}

quint16 TimestampCorrelationMessage::fractionalTimestamp() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->fractionalTimestamp;
}

DateTime TimestampCorrelationMessage::systemTimestamp() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->systemTimestamp;
}

quint16 TimestampCorrelationMessage::fractionalSystemTimestamp() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->fractionalSystemTimestamp;
}

LocalDateTime TimestampCorrelationMessage::localTimestamp() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->localTimestamp;
}

quint16 TimestampCorrelationMessage::timestampMs() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->timestampMs;
}

quint16 TimestampCorrelationMessage::systemTimestampMs() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->systemTimestampMs;
}

void TimestampCorrelationMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(TimestampCorrelationMessage);
    d->timestamp = timestamp;
}
void TimestampCorrelationMessage::setFractionalTimestamp(const quint16 fractionalTimestamp)
{
    Q_D(TimestampCorrelationMessage);
    d->fractionalTimestamp = fractionalTimestamp;
}
void TimestampCorrelationMessage::setSystemTimestamp(const DateTime systemTimestamp)
{
    Q_D(TimestampCorrelationMessage);
    d->systemTimestamp = systemTimestamp;
}
void TimestampCorrelationMessage::setFractionalSystemTimestamp(const quint16 fractionalSystemTimestamp)
{
    Q_D(TimestampCorrelationMessage);
    d->fractionalSystemTimestamp = fractionalSystemTimestamp;
}
void TimestampCorrelationMessage::setLocalTimestamp(const LocalDateTime localTimestamp)
{
    Q_D(TimestampCorrelationMessage);
    d->localTimestamp = localTimestamp;
}
void TimestampCorrelationMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(TimestampCorrelationMessage);
    d->timestampMs = timestampMs;
}
void TimestampCorrelationMessage::setSystemTimestampMs(const quint16 systemTimestampMs)
{
    Q_D(TimestampCorrelationMessage);
    d->systemTimestampMs = systemTimestampMs;
}

TimestampCorrelationMessagePrivate::TimestampCorrelationMessagePrivate(TimestampCorrelationMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , fractionalTimestamp(0xFFFF)
  , systemTimestamp(static_cast<DateTime>(-1))
  , fractionalSystemTimestamp(0xFFFF)
  , localTimestamp(static_cast<LocalDateTime>(-1))
  , timestampMs(0xFFFF)
  , systemTimestampMs(0xFFFF)
{
    globalMessageNumber = MesgNum::TimestampCorrelation;
}

TimestampCorrelationMessagePrivate::~TimestampCorrelationMessagePrivate()
{

}

bool TimestampCorrelationMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:timestamp_correlation.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "timestamp_correlation.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "timestamp_correlation.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:timestamp_correlation.fractionalTimestamp
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "timestamp_correlation.fractionalTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "timestamp_correlation.fractionalTimestamp size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->fractionalTimestamp = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:timestamp_correlation.systemTimestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "timestamp_correlation.systemTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "timestamp_correlation.systemTimestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->systemTimestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:timestamp_correlation.fractionalSystemTimestamp
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "timestamp_correlation.fractionalSystemTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "timestamp_correlation.fractionalSystemTimestamp size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->fractionalSystemTimestamp = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:timestamp_correlation.localTimestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "timestamp_correlation.localTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "timestamp_correlation.localTimestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->localTimestamp = static_cast<LocalDateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:timestamp_correlation.timestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "timestamp_correlation.timestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "timestamp_correlation.timestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:timestamp_correlation.systemTimestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "timestamp_correlation.systemTimestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "timestamp_correlation.systemTimestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->systemTimestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown timestamp_correlation message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
