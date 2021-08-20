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

/// @todo Generate implementation.
bool MemoGlobMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
