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

QTFIT_BEGIN_NAMESPACE

AntTxMessage::AntTxMessage() : FitDataMessage(new AntTxMessagePrivate(this))
{

}

DateTime AntTxMessage::timestamp() const
{
    Q_D(const AntTxMessage);
    return d->timestamp;
}

quint16 AntTxMessage::fractionalTimestamp() const
{
    Q_D(const AntTxMessage);
    return d->fractionalTimestamp;
}

quint8 AntTxMessage::mesgId() const
{
    Q_D(const AntTxMessage);
    return d->mesgId;
}

quint8 AntTxMessage::mesgData() const
{
    Q_D(const AntTxMessage);
    return d->mesgData;
}

quint8 AntTxMessage::channelNumber() const
{
    Q_D(const AntTxMessage);
    return d->channelNumber;
}

quint8 AntTxMessage::data() const
{
    Q_D(const AntTxMessage);
    return d->data;
}

void AntTxMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(AntTxMessage);
    d->timestamp = timestamp;
}
void AntTxMessage::setFractionalTimestamp(const quint16 fractionalTimestamp)
{
    Q_D(AntTxMessage);
    d->fractionalTimestamp = fractionalTimestamp;
}
void AntTxMessage::setMesgId(const quint8 mesgId)
{
    Q_D(AntTxMessage);
    d->mesgId = mesgId;
}
void AntTxMessage::setMesgData(const quint8 mesgData)
{
    Q_D(AntTxMessage);
    d->mesgData = mesgData;
}
void AntTxMessage::setChannelNumber(const quint8 channelNumber)
{
    Q_D(AntTxMessage);
    d->channelNumber = channelNumber;
}
void AntTxMessage::setData(const quint8 data)
{
    Q_D(AntTxMessage);
    d->data = data;
}

AntTxMessagePrivate::AntTxMessagePrivate(AntTxMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::AntTx;
}

AntTxMessagePrivate::~AntTxMessagePrivate()
{

}

/// @todo Generate implementation.
bool AntTxMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
