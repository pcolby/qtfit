// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the DiveGasMessage, and DiveGasMessagePrivate classes.
 */

#include <qtfit/divegasmessage.h>
#include "divegasmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class DiveGasMessage
 *
 * The DiveGasMessage class represents a FIT DiveGasMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a DiveGasMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
DiveGasMessage::DiveGasMessage() : AbstractDataMessage(new DiveGasMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a DiveGasMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
DiveGasMessage::DiveGasMessage(DiveGasMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the DiveGasMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex DiveGasMessage::messageIndex() const
{
    Q_D(const DiveGasMessage);
    return d->messageIndex;
}

/*!
 * Returns the DiveGasMessage data message's \c heliumContent field's current value.
 *
 * \return the \c heliumContent field value.
 */
quint8 DiveGasMessage::heliumContent() const
{
    Q_D(const DiveGasMessage);
    return d->heliumContent;
}

/*!
 * Returns the DiveGasMessage data message's \c oxygenContent field's current value.
 *
 * \return the \c oxygenContent field value.
 */
quint8 DiveGasMessage::oxygenContent() const
{
    Q_D(const DiveGasMessage);
    return d->oxygenContent;
}

/*!
 * Returns the DiveGasMessage data message's \c status field's current value.
 *
 * \return the \c status field value.
 */
DiveGasStatus DiveGasMessage::status() const
{
    Q_D(const DiveGasMessage);
    return d->status;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void DiveGasMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(DiveGasMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c heliumContent field to \a heliumContent.
 *
 * \param heliumContent The field value to set.
 */
void DiveGasMessage::setHeliumContent(const quint8 heliumContent)
{
    Q_D(DiveGasMessage);
    d->heliumContent = heliumContent;
}
/*!
 * Sets the \c oxygenContent field to \a oxygenContent.
 *
 * \param oxygenContent The field value to set.
 */
void DiveGasMessage::setOxygenContent(const quint8 oxygenContent)
{
    Q_D(DiveGasMessage);
    d->oxygenContent = oxygenContent;
}
/*!
 * Sets the \c status field to \a status.
 *
 * \param status The field value to set.
 */
void DiveGasMessage::setStatus(const DiveGasStatus status)
{
    Q_D(DiveGasMessage);
    d->status = status;
}

/// \cond internal

/*!
 * \internal
 *
 * \class DiveGasMessagePrivate
 *
 * The DiveGasMessagePrivate class provides private implementation for the DiveGasMessage.
 *
 * \sa DiveGasMessage
 */

/*!
 * \internal
 *
 * Constructs a DiveGasMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
DiveGasMessagePrivate::DiveGasMessagePrivate(DiveGasMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , heliumContent(0xFF)
  , oxygenContent(0xFF)
  , status(static_cast<DiveGasStatus>(-1))
{
    globalMessageNumber = MesgNum::DiveGas;
}

/*!
 * \internal
 *
 * Destroys the DiveGasMessagePrivate object.
 */
DiveGasMessagePrivate::~DiveGasMessagePrivate()
{

}

bool DiveGasMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:dive_gas.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_gas.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:dive_gas.heliumContent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_gas.heliumContent")) return false;
        this->heliumContent = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:dive_gas.oxygenContent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_gas.oxygenContent")) return false;
        this->oxygenContent = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:dive_gas.status
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_gas.status")) return false;
        this->status = static_cast<DiveGasStatus>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown dive_gas message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
