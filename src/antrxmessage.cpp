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

#include "antrxmessage.h"
#include "antrxmessage_p.h"

QTFIT_BEGIN_NAMESPACE

AntRxMessage::AntRxMessage() : FitDataMessage(new AntRxMessagePrivate(this))
{

}

DateTime AntRxMessage::timestamp() const
{
    Q_D(const AntRxMessage);
    return d->timestamp;
}

quint16 AntRxMessage::fractionalTimestamp() const
{
    Q_D(const AntRxMessage);
    return d->fractionalTimestamp;
}

quint8 AntRxMessage::mesgId() const
{
    Q_D(const AntRxMessage);
    return d->mesgId;
}

quint8 AntRxMessage::mesgData() const
{
    Q_D(const AntRxMessage);
    return d->mesgData;
}

quint8 AntRxMessage::channelNumber() const
{
    Q_D(const AntRxMessage);
    return d->channelNumber;
}

quint8 AntRxMessage::data() const
{
    Q_D(const AntRxMessage);
    return d->data;
}

void AntRxMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(AntRxMessage);
    d->timestamp = timestamp;
}
void AntRxMessage::setFractionalTimestamp(const quint16 fractionalTimestamp)
{
    Q_D(AntRxMessage);
    d->fractionalTimestamp = fractionalTimestamp;
}
void AntRxMessage::setMesgId(const quint8 mesgId)
{
    Q_D(AntRxMessage);
    d->mesgId = mesgId;
}
void AntRxMessage::setMesgData(const quint8 mesgData)
{
    Q_D(AntRxMessage);
    d->mesgData = mesgData;
}
void AntRxMessage::setChannelNumber(const quint8 channelNumber)
{
    Q_D(AntRxMessage);
    d->channelNumber = channelNumber;
}
void AntRxMessage::setData(const quint8 data)
{
    Q_D(AntRxMessage);
    d->data = data;
}

AntRxMessagePrivate::AntRxMessagePrivate(AntRxMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::AntRx;
}

AntRxMessagePrivate::~AntRxMessagePrivate()
{

}

/// @todo Generate implementation.
bool AntRxMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
