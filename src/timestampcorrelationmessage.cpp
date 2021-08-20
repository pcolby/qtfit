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

TimestampCorrelationMessagePrivate::TimestampCorrelationMessagePrivate(TimestampCorrelationMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::TimestampCorrelation;
}

TimestampCorrelationMessagePrivate::~TimestampCorrelationMessagePrivate()
{

}

/// @todo Generate implementation.
bool TimestampCorrelationMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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