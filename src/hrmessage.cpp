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

#include "hrmessage.h"
#include "hrmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class HrMessage
 *
 * The HrMessage class represents a FIT HrMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid HrMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
HrMessage::HrMessage() : AbstractDataMessage(new HrMessagePrivate(this))
{

}

/*!
 * Returns the HrMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime HrMessage::timestamp() const
{
    Q_D(const HrMessage);
    return d->timestamp;
}

/*!
 * Returns the HrMessage data message's \c fractionalTimestamp field's current value.
 *
 * \return the \c fractionalTimestamp field value.
 */
quint16 HrMessage::fractionalTimestamp() const
{
    Q_D(const HrMessage);
    return d->fractionalTimestamp;
}

/*!
 * Returns the HrMessage data message's \c time256 field's current value.
 *
 * \return the \c time256 field value.
 */
quint8 HrMessage::time256() const
{
    Q_D(const HrMessage);
    return d->time256;
}

/*!
 * Returns the HrMessage data message's \c filteredBpm field's current value.
 *
 * \return the \c filteredBpm field value.
 */
quint8 HrMessage::filteredBpm() const
{
    Q_D(const HrMessage);
    return d->filteredBpm;
}

/*!
 * Returns the HrMessage data message's \c eventTimestamp field's current value.
 *
 * \return the \c eventTimestamp field value.
 */
quint32 HrMessage::eventTimestamp() const
{
    Q_D(const HrMessage);
    return d->eventTimestamp;
}

/*!
 * Returns the HrMessage data message's \c eventTimestamp12 field's current value.
 *
 * \return the \c eventTimestamp12 field value.
 */
quint8 HrMessage::eventTimestamp12() const
{
    Q_D(const HrMessage);
    return d->eventTimestamp12;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void HrMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(HrMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c fractionalTimestamp field to \a fractionalTimestamp.
 *
 * \param fractionalTimestamp The field value to set.
 */
void HrMessage::setFractionalTimestamp(const quint16 fractionalTimestamp)
{
    Q_D(HrMessage);
    d->fractionalTimestamp = fractionalTimestamp;
}
/*!
 * Sets the \c time256 field to \a time256.
 *
 * \param time256 The field value to set.
 */
void HrMessage::setTime256(const quint8 time256)
{
    Q_D(HrMessage);
    d->time256 = time256;
}
/*!
 * Sets the \c filteredBpm field to \a filteredBpm.
 *
 * \param filteredBpm The field value to set.
 */
void HrMessage::setFilteredBpm(const quint8 filteredBpm)
{
    Q_D(HrMessage);
    d->filteredBpm = filteredBpm;
}
/*!
 * Sets the \c eventTimestamp field to \a eventTimestamp.
 *
 * \param eventTimestamp The field value to set.
 */
void HrMessage::setEventTimestamp(const quint32 eventTimestamp)
{
    Q_D(HrMessage);
    d->eventTimestamp = eventTimestamp;
}
/*!
 * Sets the \c eventTimestamp12 field to \a eventTimestamp12.
 *
 * \param eventTimestamp12 The field value to set.
 */
void HrMessage::setEventTimestamp12(const quint8 eventTimestamp12)
{
    Q_D(HrMessage);
    d->eventTimestamp12 = eventTimestamp12;
}

/// \cond internal

/*!
 * \internal
 *
 * \class HrMessagePrivate
 *
 * The HrMessagePrivate class provides private implementation for the HrMessage.
 *
 * \sa HrMessage
 */

/*!
 * \internal
 *
 * Constructs a HrMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
HrMessagePrivate::HrMessagePrivate(HrMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , fractionalTimestamp(0xFFFF)
  , time256(0xFF)
  , filteredBpm(0xFF)
  , eventTimestamp(0xFFFFFFFF)
  , eventTimestamp12(0xFF)
{
    globalMessageNumber = MesgNum::Hr;
}

/*!
 * \internal
 *
 * Destroys the HrMessagePrivate object.
 */
HrMessagePrivate::~HrMessagePrivate()
{

}

bool HrMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:hr.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "hr.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:hr.fractionalTimestamp
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "hr.fractionalTimestamp")) return false;
        this->fractionalTimestamp = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:hr.time256
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "hr.time256")) return false;
        this->time256 = static_cast<quint8>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:hr.filteredBpm
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "hr.filteredBpm")) return false;
        this->filteredBpm = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:hr.eventTimestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "hr.eventTimestamp")) return false;
        this->eventTimestamp = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:hr.eventTimestamp12
        if (!verify(data, baseType, 1, FitBaseType::Byte, "hr.eventTimestamp12")) return false;
        this->eventTimestamp12 = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown hr message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
