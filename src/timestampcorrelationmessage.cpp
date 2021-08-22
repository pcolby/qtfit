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

/*!
 * \class TimestampCorrelationMessage
 *
 * The TimestampCorrelationMessage class represents a FIT TimestampCorrelationMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid TimestampCorrelationMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
TimestampCorrelationMessage::TimestampCorrelationMessage() : FitDataMessage(new TimestampCorrelationMessagePrivate(this))
{

}

/*!
 * Returns the TimestampCorrelationMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime TimestampCorrelationMessage::timestamp() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->timestamp;
}

/*!
 * Returns the TimestampCorrelationMessage data message's \c fractionalTimestamp field's current value.
 *
 * \return the \c fractionalTimestamp field value.
 */
quint16 TimestampCorrelationMessage::fractionalTimestamp() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->fractionalTimestamp;
}

/*!
 * Returns the TimestampCorrelationMessage data message's \c systemTimestamp field's current value.
 *
 * \return the \c systemTimestamp field value.
 */
DateTime TimestampCorrelationMessage::systemTimestamp() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->systemTimestamp;
}

/*!
 * Returns the TimestampCorrelationMessage data message's \c fractionalSystemTimestamp field's current value.
 *
 * \return the \c fractionalSystemTimestamp field value.
 */
quint16 TimestampCorrelationMessage::fractionalSystemTimestamp() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->fractionalSystemTimestamp;
}

/*!
 * Returns the TimestampCorrelationMessage data message's \c localTimestamp field's current value.
 *
 * \return the \c localTimestamp field value.
 */
LocalDateTime TimestampCorrelationMessage::localTimestamp() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->localTimestamp;
}

/*!
 * Returns the TimestampCorrelationMessage data message's \c timestampMs field's current value.
 *
 * \return the \c timestampMs field value.
 */
quint16 TimestampCorrelationMessage::timestampMs() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->timestampMs;
}

/*!
 * Returns the TimestampCorrelationMessage data message's \c systemTimestampMs field's current value.
 *
 * \return the \c systemTimestampMs field value.
 */
quint16 TimestampCorrelationMessage::systemTimestampMs() const
{
    Q_D(const TimestampCorrelationMessage);
    return d->systemTimestampMs;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void TimestampCorrelationMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(TimestampCorrelationMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c fractionalTimestamp field to \a fractionalTimestamp.
 *
 * \param fractionalTimestamp The field value to set.
 */
void TimestampCorrelationMessage::setFractionalTimestamp(const quint16 fractionalTimestamp)
{
    Q_D(TimestampCorrelationMessage);
    d->fractionalTimestamp = fractionalTimestamp;
}
/*!
 * Sets the \c systemTimestamp field to \a systemTimestamp.
 *
 * \param systemTimestamp The field value to set.
 */
void TimestampCorrelationMessage::setSystemTimestamp(const DateTime systemTimestamp)
{
    Q_D(TimestampCorrelationMessage);
    d->systemTimestamp = systemTimestamp;
}
/*!
 * Sets the \c fractionalSystemTimestamp field to \a fractionalSystemTimestamp.
 *
 * \param fractionalSystemTimestamp The field value to set.
 */
void TimestampCorrelationMessage::setFractionalSystemTimestamp(const quint16 fractionalSystemTimestamp)
{
    Q_D(TimestampCorrelationMessage);
    d->fractionalSystemTimestamp = fractionalSystemTimestamp;
}
/*!
 * Sets the \c localTimestamp field to \a localTimestamp.
 *
 * \param localTimestamp The field value to set.
 */
void TimestampCorrelationMessage::setLocalTimestamp(const LocalDateTime localTimestamp)
{
    Q_D(TimestampCorrelationMessage);
    d->localTimestamp = localTimestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void TimestampCorrelationMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(TimestampCorrelationMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c systemTimestampMs field to \a systemTimestampMs.
 *
 * \param systemTimestampMs The field value to set.
 */
void TimestampCorrelationMessage::setSystemTimestampMs(const quint16 systemTimestampMs)
{
    Q_D(TimestampCorrelationMessage);
    d->systemTimestampMs = systemTimestampMs;
}

/*!
 * \internal
 *
 * \class TimestampCorrelationMessagePrivate
 *
 * The TimestampCorrelationMessagePrivate class provides private implementation for the TimestampCorrelationMessage.
 *
 * \sa TimestampCorrelationMessage
 */

/*!
 * \internal
 *
 * Constructs a TimestampCorrelationMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
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

/*!
 * \internal
 *
 * Destroys the TimestampCorrelationMessagePrivate object.
 */
TimestampCorrelationMessagePrivate::~TimestampCorrelationMessagePrivate()
{

}

bool TimestampCorrelationMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:timestamp_correlation.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "timestamp_correlation.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:timestamp_correlation.fractionalTimestamp
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "timestamp_correlation.fractionalTimestamp")) return false;
        this->fractionalTimestamp = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:timestamp_correlation.systemTimestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "timestamp_correlation.systemTimestamp")) return false;
        this->systemTimestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:timestamp_correlation.fractionalSystemTimestamp
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "timestamp_correlation.fractionalSystemTimestamp")) return false;
        this->fractionalSystemTimestamp = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:timestamp_correlation.localTimestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "timestamp_correlation.localTimestamp")) return false;
        this->localTimestamp = static_cast<LocalDateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:timestamp_correlation.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "timestamp_correlation.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:timestamp_correlation.systemTimestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "timestamp_correlation.systemTimestampMs")) return false;
        this->systemTimestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown timestamp_correlation message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
