// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the MemoGlobMessage, and MemoGlobMessagePrivate classes.
 */

#include <qtfit/memoglobmessage.h>
#include "memoglobmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class MemoGlobMessage
 *
 * The MemoGlobMessage class represents a FIT MemoGlobMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a MemoGlobMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
MemoGlobMessage::MemoGlobMessage() : AbstractDataMessage(new MemoGlobMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a MemoGlobMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
MemoGlobMessage::MemoGlobMessage(MemoGlobMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the MemoGlobMessage data message's \c partIndex field's current value.
 *
 * Sequence number of memo blocks
 *
 * \return the \c partIndex field value.
 */
quint32 MemoGlobMessage::partIndex() const
{
    Q_D(const MemoGlobMessage);
    return d->partIndex;
}

/*!
 * Returns the MemoGlobMessage data message's \c memo field's current value.
 *
 * Block of utf8 bytes
 *
 * \return the \c memo field value.
 */
quint8 MemoGlobMessage::memo() const
{
    Q_D(const MemoGlobMessage);
    return d->memo;
}

/*!
 * Returns the MemoGlobMessage data message's \c messageNumber field's current value.
 *
 * Allows relating glob to another mesg  If used only required for first part of each memo_glob
 *
 * \return the \c messageNumber field value.
 */
quint16 MemoGlobMessage::messageNumber() const
{
    Q_D(const MemoGlobMessage);
    return d->messageNumber;
}

/*!
 * Returns the MemoGlobMessage data message's \c messageIndex field's current value.
 *
 * Index of external mesg
 *
 * \return the \c messageIndex field value.
 */
MessageIndex MemoGlobMessage::messageIndex() const
{
    Q_D(const MemoGlobMessage);
    return d->messageIndex;
}

/*!
 * Sets the \c partIndex field to \a partIndex.
 *
 * \param partIndex The field value to set.
 */
void MemoGlobMessage::setPartIndex(const quint32 partIndex)
{
    Q_D(MemoGlobMessage);
    d->partIndex = partIndex;
}
/*!
 * Sets the \c memo field to \a memo.
 *
 * \param memo The field value to set.
 */
void MemoGlobMessage::setMemo(const quint8 memo)
{
    Q_D(MemoGlobMessage);
    d->memo = memo;
}
/*!
 * Sets the \c messageNumber field to \a messageNumber.
 *
 * \param messageNumber The field value to set.
 */
void MemoGlobMessage::setMessageNumber(const quint16 messageNumber)
{
    Q_D(MemoGlobMessage);
    d->messageNumber = messageNumber;
}
/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void MemoGlobMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(MemoGlobMessage);
    d->messageIndex = messageIndex;
}

/// \cond internal

/*!
 * \internal
 *
 * \class MemoGlobMessagePrivate
 *
 * The MemoGlobMessagePrivate class provides private implementation for the MemoGlobMessage.
 *
 * \sa MemoGlobMessage
 */

/*!
 * \internal
 *
 * Constructs a MemoGlobMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
MemoGlobMessagePrivate::MemoGlobMessagePrivate(MemoGlobMessage * const q)
  : AbstractDataMessagePrivate(q)
  , partIndex(0xFFFFFFFF)
  , memo(0xFF)
  , messageNumber(0xFFFF)
  , messageIndex(static_cast<MessageIndex>(-1))
{
    globalMessageNumber = MesgNum::MemoGlob;
}

/*!
 * \internal
 *
 * Destroys the MemoGlobMessagePrivate object.
 */
MemoGlobMessagePrivate::~MemoGlobMessagePrivate()
{

}

bool MemoGlobMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 250: // See Profile.xlsx::Messages:memo_glob.partIndex
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "memo_glob.partIndex")) return false;
        this->partIndex = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:memo_glob.memo
        if (!verify(data, baseType, 1, FitBaseType::Byte, "memo_glob.memo")) return false;
        this->memo = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:memo_glob.messageNumber
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "memo_glob.messageNumber")) return false;
        this->messageNumber = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:memo_glob.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "memo_glob.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "ignoring unknown memo_glob message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
