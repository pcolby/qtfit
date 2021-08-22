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

#include "memoglobmessage.h"
#include "memoglobmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

MemoGlobMessage::MemoGlobMessage() : FitDataMessage(new MemoGlobMessagePrivate(this))
{

}

quint32 MemoGlobMessage::partIndex() const
{
    Q_D(const MemoGlobMessage);
    return d->partIndex;
}

quint8 MemoGlobMessage::memo() const
{
    Q_D(const MemoGlobMessage);
    return d->memo;
}

quint16 MemoGlobMessage::messageNumber() const
{
    Q_D(const MemoGlobMessage);
    return d->messageNumber;
}

MessageIndex MemoGlobMessage::messageIndex() const
{
    Q_D(const MemoGlobMessage);
    return d->messageIndex;
}

void MemoGlobMessage::setPartIndex(const quint32 partIndex)
{
    Q_D(MemoGlobMessage);
    d->partIndex = partIndex;
}
void MemoGlobMessage::setMemo(const quint8 memo)
{
    Q_D(MemoGlobMessage);
    d->memo = memo;
}
void MemoGlobMessage::setMessageNumber(const quint16 messageNumber)
{
    Q_D(MemoGlobMessage);
    d->messageNumber = messageNumber;
}
void MemoGlobMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(MemoGlobMessage);
    d->messageIndex = messageIndex;
}

MemoGlobMessagePrivate::MemoGlobMessagePrivate(MemoGlobMessage * const q)
  : FitDataMessagePrivate(q)
  , partIndex(0xFFFFFFFF)
  , memo(0xFF)
  , messageNumber(0xFFFF)
  , messageIndex(static_cast<MessageIndex>(-1))
{
    globalMessageNumber = MesgNum::MemoGlob;
}

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
        qWarning() << "unknown memo_glob message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
