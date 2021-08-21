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

AntTxMessagePrivate::AntTxMessagePrivate(AntTxMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , fractionalTimestamp(0xFFFF)
  , mesgId(0xFF)
  , mesgData(0xFF)
  , channelNumber(0xFF)
  , data(0xFF)
{
    globalMessageNumber = MesgNum::AntTx;
}

AntTxMessagePrivate::~AntTxMessagePrivate()
{

}

bool AntTxMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:ant_tx.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_tx.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "ant_tx.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:ant_tx.fractionalTimestamp
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_tx.fractionalTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "ant_tx.fractionalTimestamp size is" << data.size() << "but should be" << 2;
            return false;
        }
        fractionalTimestamp = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:ant_tx.mesgId
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_tx.mesgId has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_tx.mesgId size is" << data.size() << "but should be" << 1;
            return false;
        }
        mesgId = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:ant_tx.mesgData
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_tx.mesgData has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_tx.mesgData size is" << data.size() << "but should be" << 1;
            return false;
        }
        mesgData = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:ant_tx.channelNumber
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_tx.channelNumber has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_tx.channelNumber size is" << data.size() << "but should be" << 1;
            return false;
        }
        channelNumber = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:ant_tx.data
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_tx.data has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_tx.data size is" << data.size() << "but should be" << 1;
            return false;
        }
        data = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown ant_tx message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
