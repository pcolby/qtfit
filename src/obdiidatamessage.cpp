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

#include "obdiidatamessage.h"
#include "obdiidatamessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class ObdiiDataMessage
 *
 * The ObdiiDataMessage class represents a FIT ObdiiDataMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid ObdiiDataMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ObdiiDataMessage::ObdiiDataMessage() : AbstractDataMessage(new ObdiiDataMessagePrivate(this))
{

}

/*!
 * Returns the ObdiiDataMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime ObdiiDataMessage::timestamp() const
{
    Q_D(const ObdiiDataMessage);
    return d->timestamp;
}

/*!
 * Returns the ObdiiDataMessage data message's \c timestampMs field's current value.
 *
 * \return the \c timestampMs field value.
 */
quint16 ObdiiDataMessage::timestampMs() const
{
    Q_D(const ObdiiDataMessage);
    return d->timestampMs;
}

/*!
 * Returns the ObdiiDataMessage data message's \c timeOffset field's current value.
 *
 * \return the \c timeOffset field value.
 */
quint16 ObdiiDataMessage::timeOffset() const
{
    Q_D(const ObdiiDataMessage);
    return d->timeOffset;
}

/*!
 * Returns the ObdiiDataMessage data message's \c pid field's current value.
 *
 * \return the \c pid field value.
 */
quint8 ObdiiDataMessage::pid() const
{
    Q_D(const ObdiiDataMessage);
    return d->pid;
}

/*!
 * Returns the ObdiiDataMessage data message's \c rawData field's current value.
 *
 * \return the \c rawData field value.
 */
quint8 ObdiiDataMessage::rawData() const
{
    Q_D(const ObdiiDataMessage);
    return d->rawData;
}

/*!
 * Returns the ObdiiDataMessage data message's \c pidDataSize field's current value.
 *
 * \return the \c pidDataSize field value.
 */
quint8 ObdiiDataMessage::pidDataSize() const
{
    Q_D(const ObdiiDataMessage);
    return d->pidDataSize;
}

/*!
 * Returns the ObdiiDataMessage data message's \c systemTime field's current value.
 *
 * \return the \c systemTime field value.
 */
quint32 ObdiiDataMessage::systemTime() const
{
    Q_D(const ObdiiDataMessage);
    return d->systemTime;
}

/*!
 * Returns the ObdiiDataMessage data message's \c startTimestamp field's current value.
 *
 * \return the \c startTimestamp field value.
 */
DateTime ObdiiDataMessage::startTimestamp() const
{
    Q_D(const ObdiiDataMessage);
    return d->startTimestamp;
}

/*!
 * Returns the ObdiiDataMessage data message's \c startTimestampMs field's current value.
 *
 * \return the \c startTimestampMs field value.
 */
quint16 ObdiiDataMessage::startTimestampMs() const
{
    Q_D(const ObdiiDataMessage);
    return d->startTimestampMs;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void ObdiiDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(ObdiiDataMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void ObdiiDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(ObdiiDataMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c timeOffset field to \a timeOffset.
 *
 * \param timeOffset The field value to set.
 */
void ObdiiDataMessage::setTimeOffset(const quint16 timeOffset)
{
    Q_D(ObdiiDataMessage);
    d->timeOffset = timeOffset;
}
/*!
 * Sets the \c pid field to \a pid.
 *
 * \param pid The field value to set.
 */
void ObdiiDataMessage::setPid(const quint8 pid)
{
    Q_D(ObdiiDataMessage);
    d->pid = pid;
}
/*!
 * Sets the \c rawData field to \a rawData.
 *
 * \param rawData The field value to set.
 */
void ObdiiDataMessage::setRawData(const quint8 rawData)
{
    Q_D(ObdiiDataMessage);
    d->rawData = rawData;
}
/*!
 * Sets the \c pidDataSize field to \a pidDataSize.
 *
 * \param pidDataSize The field value to set.
 */
void ObdiiDataMessage::setPidDataSize(const quint8 pidDataSize)
{
    Q_D(ObdiiDataMessage);
    d->pidDataSize = pidDataSize;
}
/*!
 * Sets the \c systemTime field to \a systemTime.
 *
 * \param systemTime The field value to set.
 */
void ObdiiDataMessage::setSystemTime(const quint32 systemTime)
{
    Q_D(ObdiiDataMessage);
    d->systemTime = systemTime;
}
/*!
 * Sets the \c startTimestamp field to \a startTimestamp.
 *
 * \param startTimestamp The field value to set.
 */
void ObdiiDataMessage::setStartTimestamp(const DateTime startTimestamp)
{
    Q_D(ObdiiDataMessage);
    d->startTimestamp = startTimestamp;
}
/*!
 * Sets the \c startTimestampMs field to \a startTimestampMs.
 *
 * \param startTimestampMs The field value to set.
 */
void ObdiiDataMessage::setStartTimestampMs(const quint16 startTimestampMs)
{
    Q_D(ObdiiDataMessage);
    d->startTimestampMs = startTimestampMs;
}

/*!
 * \internal
 *
 * \class ObdiiDataMessagePrivate
 *
 * The ObdiiDataMessagePrivate class provides private implementation for the ObdiiDataMessage.
 *
 * \sa ObdiiDataMessage
 */

/*!
 * \internal
 *
 * Constructs a ObdiiDataMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ObdiiDataMessagePrivate::ObdiiDataMessagePrivate(ObdiiDataMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , timeOffset(0xFFFF)
  , pid(0xFF)
  , rawData(0xFF)
  , pidDataSize(0xFF)
  , systemTime(0xFFFFFFFF)
  , startTimestamp(static_cast<DateTime>(-1))
  , startTimestampMs(0xFFFF)
{
    globalMessageNumber = MesgNum::ObdiiData;
}

/*!
 * \internal
 *
 * Destroys the ObdiiDataMessagePrivate object.
 */
ObdiiDataMessagePrivate::~ObdiiDataMessagePrivate()
{

}

bool ObdiiDataMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:obdii_data.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "obdii_data.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:obdii_data.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "obdii_data.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:obdii_data.timeOffset
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "obdii_data.timeOffset")) return false;
        this->timeOffset = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:obdii_data.pid
        if (!verify(data, baseType, 1, FitBaseType::Byte, "obdii_data.pid")) return false;
        this->pid = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:obdii_data.rawData
        if (!verify(data, baseType, 1, FitBaseType::Byte, "obdii_data.rawData")) return false;
        this->rawData = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:obdii_data.pidDataSize
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "obdii_data.pidDataSize")) return false;
        this->pidDataSize = static_cast<quint8>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:obdii_data.systemTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "obdii_data.systemTime")) return false;
        this->systemTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:obdii_data.startTimestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "obdii_data.startTimestamp")) return false;
        this->startTimestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:obdii_data.startTimestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "obdii_data.startTimestampMs")) return false;
        this->startTimestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "ignoring unknown obdii_data message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

QTFIT_END_NAMESPACE
