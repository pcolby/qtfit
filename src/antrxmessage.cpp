// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the AntRxMessage, and AntRxMessagePrivate classes.
 */

#include <qtfit/antrxmessage.h>
#include "antrxmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class AntRxMessage
 *
 * The AntRxMessage class represents a FIT AntRxMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a AntRxMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
AntRxMessage::AntRxMessage() : AbstractDataMessage(new AntRxMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a AntRxMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
AntRxMessage::AntRxMessage(AntRxMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the AntRxMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime AntRxMessage::timestamp() const
{
    Q_D(const AntRxMessage);
    return d->timestamp;
}

/*!
 * Returns the AntRxMessage data message's \c fractionalTimestamp field's current value.
 *
 * \return the \c fractionalTimestamp field value.
 */
quint16 AntRxMessage::fractionalTimestamp() const
{
    Q_D(const AntRxMessage);
    return d->fractionalTimestamp;
}

/*!
 * Returns the AntRxMessage data message's \c mesgId field's current value.
 *
 * \return the \c mesgId field value.
 */
quint8 AntRxMessage::mesgId() const
{
    Q_D(const AntRxMessage);
    return d->mesgId;
}

/*!
 * Returns the AntRxMessage data message's \c mesgData field's current value.
 *
 * \return the \c mesgData field value.
 */
quint8 AntRxMessage::mesgData() const
{
    Q_D(const AntRxMessage);
    return d->mesgData;
}

/*!
 * Returns the AntRxMessage data message's \c channelNumber field's current value.
 *
 * \return the \c channelNumber field value.
 */
quint8 AntRxMessage::channelNumber() const
{
    Q_D(const AntRxMessage);
    return d->channelNumber;
}

/*!
 * Returns the AntRxMessage data message's \c data field's current value.
 *
 * \return the \c data field value.
 */
quint8 AntRxMessage::data() const
{
    Q_D(const AntRxMessage);
    return d->data;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void AntRxMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(AntRxMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c fractionalTimestamp field to \a fractionalTimestamp.
 *
 * \param fractionalTimestamp The field value to set.
 */
void AntRxMessage::setFractionalTimestamp(const quint16 fractionalTimestamp)
{
    Q_D(AntRxMessage);
    d->fractionalTimestamp = fractionalTimestamp;
}
/*!
 * Sets the \c mesgId field to \a mesgId.
 *
 * \param mesgId The field value to set.
 */
void AntRxMessage::setMesgId(const quint8 mesgId)
{
    Q_D(AntRxMessage);
    d->mesgId = mesgId;
}
/*!
 * Sets the \c mesgData field to \a mesgData.
 *
 * \param mesgData The field value to set.
 */
void AntRxMessage::setMesgData(const quint8 mesgData)
{
    Q_D(AntRxMessage);
    d->mesgData = mesgData;
}
/*!
 * Sets the \c channelNumber field to \a channelNumber.
 *
 * \param channelNumber The field value to set.
 */
void AntRxMessage::setChannelNumber(const quint8 channelNumber)
{
    Q_D(AntRxMessage);
    d->channelNumber = channelNumber;
}
/*!
 * Sets the \c data field to \a data.
 *
 * \param data The field value to set.
 */
void AntRxMessage::setData(const quint8 data)
{
    Q_D(AntRxMessage);
    d->data = data;
}

/// \cond internal

/*!
 * \internal
 *
 * \class AntRxMessagePrivate
 *
 * The AntRxMessagePrivate class provides private implementation for the AntRxMessage.
 *
 * \sa AntRxMessage
 */

/*!
 * \internal
 *
 * Constructs a AntRxMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
AntRxMessagePrivate::AntRxMessagePrivate(AntRxMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , fractionalTimestamp(0xFFFF)
  , mesgId(0xFF)
  , mesgData(0xFF)
  , channelNumber(0xFF)
  , data(0xFF)
{
    globalMessageNumber = MesgNum::AntRx;
}

/*!
 * \internal
 *
 * Destroys the AntRxMessagePrivate object.
 */
AntRxMessagePrivate::~AntRxMessagePrivate()
{

}

bool AntRxMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:ant_rx.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "ant_rx.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:ant_rx.fractionalTimestamp
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "ant_rx.fractionalTimestamp")) return false;
        this->fractionalTimestamp = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:ant_rx.mesgId
        if (!verify(data, baseType, 1, FitBaseType::Byte, "ant_rx.mesgId")) return false;
        this->mesgId = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:ant_rx.mesgData
        if (!verify(data, baseType, 1, FitBaseType::Byte, "ant_rx.mesgData")) return false;
        this->mesgData = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:ant_rx.channelNumber
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "ant_rx.channelNumber")) return false;
        this->channelNumber = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:ant_rx.data
        if (!verify(data, baseType, 1, FitBaseType::Byte, "ant_rx.data")) return false;
        this->data = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown ant_rx message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
