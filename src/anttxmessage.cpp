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

#include "anttxmessage.h"
#include "anttxmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class AntTxMessage
 *
 * The AntTxMessage class represents a FIT AntTxMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a AntTxMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
AntTxMessage::AntTxMessage() : AbstractDataMessage(new AntTxMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a AntTxMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
AntTxMessage::AntTxMessage(AntTxMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the AntTxMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime AntTxMessage::timestamp() const
{
    Q_D(const AntTxMessage);
    return d->timestamp;
}

/*!
 * Returns the AntTxMessage data message's \c fractionalTimestamp field's current value.
 *
 * \return the \c fractionalTimestamp field value.
 */
quint16 AntTxMessage::fractionalTimestamp() const
{
    Q_D(const AntTxMessage);
    return d->fractionalTimestamp;
}

/*!
 * Returns the AntTxMessage data message's \c mesgId field's current value.
 *
 * \return the \c mesgId field value.
 */
quint8 AntTxMessage::mesgId() const
{
    Q_D(const AntTxMessage);
    return d->mesgId;
}

/*!
 * Returns the AntTxMessage data message's \c mesgData field's current value.
 *
 * \return the \c mesgData field value.
 */
quint8 AntTxMessage::mesgData() const
{
    Q_D(const AntTxMessage);
    return d->mesgData;
}

/*!
 * Returns the AntTxMessage data message's \c channelNumber field's current value.
 *
 * \return the \c channelNumber field value.
 */
quint8 AntTxMessage::channelNumber() const
{
    Q_D(const AntTxMessage);
    return d->channelNumber;
}

/*!
 * Returns the AntTxMessage data message's \c data field's current value.
 *
 * \return the \c data field value.
 */
quint8 AntTxMessage::data() const
{
    Q_D(const AntTxMessage);
    return d->data;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void AntTxMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(AntTxMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c fractionalTimestamp field to \a fractionalTimestamp.
 *
 * \param fractionalTimestamp The field value to set.
 */
void AntTxMessage::setFractionalTimestamp(const quint16 fractionalTimestamp)
{
    Q_D(AntTxMessage);
    d->fractionalTimestamp = fractionalTimestamp;
}
/*!
 * Sets the \c mesgId field to \a mesgId.
 *
 * \param mesgId The field value to set.
 */
void AntTxMessage::setMesgId(const quint8 mesgId)
{
    Q_D(AntTxMessage);
    d->mesgId = mesgId;
}
/*!
 * Sets the \c mesgData field to \a mesgData.
 *
 * \param mesgData The field value to set.
 */
void AntTxMessage::setMesgData(const quint8 mesgData)
{
    Q_D(AntTxMessage);
    d->mesgData = mesgData;
}
/*!
 * Sets the \c channelNumber field to \a channelNumber.
 *
 * \param channelNumber The field value to set.
 */
void AntTxMessage::setChannelNumber(const quint8 channelNumber)
{
    Q_D(AntTxMessage);
    d->channelNumber = channelNumber;
}
/*!
 * Sets the \c data field to \a data.
 *
 * \param data The field value to set.
 */
void AntTxMessage::setData(const quint8 data)
{
    Q_D(AntTxMessage);
    d->data = data;
}

/// \cond internal

/*!
 * \internal
 *
 * \class AntTxMessagePrivate
 *
 * The AntTxMessagePrivate class provides private implementation for the AntTxMessage.
 *
 * \sa AntTxMessage
 */

/*!
 * \internal
 *
 * Constructs a AntTxMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
AntTxMessagePrivate::AntTxMessagePrivate(AntTxMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , fractionalTimestamp(0xFFFF)
  , mesgId(0xFF)
  , mesgData(0xFF)
  , channelNumber(0xFF)
  , data(0xFF)
{
    globalMessageNumber = MesgNum::AntTx;
}

/*!
 * \internal
 *
 * Destroys the AntTxMessagePrivate object.
 */
AntTxMessagePrivate::~AntTxMessagePrivate()
{

}

bool AntTxMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:ant_tx.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "ant_tx.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:ant_tx.fractionalTimestamp
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "ant_tx.fractionalTimestamp")) return false;
        this->fractionalTimestamp = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:ant_tx.mesgId
        if (!verify(data, baseType, 1, FitBaseType::Byte, "ant_tx.mesgId")) return false;
        this->mesgId = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:ant_tx.mesgData
        if (!verify(data, baseType, 1, FitBaseType::Byte, "ant_tx.mesgData")) return false;
        this->mesgData = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:ant_tx.channelNumber
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "ant_tx.channelNumber")) return false;
        this->channelNumber = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:ant_tx.data
        if (!verify(data, baseType, 1, FitBaseType::Byte, "ant_tx.data")) return false;
        this->data = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown ant_tx message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
