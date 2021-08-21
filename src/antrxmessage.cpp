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

#include <QDebug>
#include <QtEndian>

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

AntRxMessagePrivate::AntRxMessagePrivate(AntRxMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , fractionalTimestamp(0xFFFF)
  , mesgId(0xFF)
  , mesgData(0xFF)
  , channelNumber(0xFF)
  , data(0xFF)
{
    globalMessageNumber = MesgNum::AntRx;
}

AntRxMessagePrivate::~AntRxMessagePrivate()
{

}

bool AntRxMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:ant_rx.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_rx.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "ant_rx.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:ant_rx.fractionalTimestamp
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_rx.fractionalTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "ant_rx.fractionalTimestamp size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->fractionalTimestamp = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:ant_rx.mesgId
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_rx.mesgId has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_rx.mesgId size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->mesgId = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:ant_rx.mesgData
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_rx.mesgData has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_rx.mesgData size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->mesgData = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:ant_rx.channelNumber
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_rx.channelNumber has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_rx.channelNumber size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->channelNumber = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:ant_rx.data
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_rx.data has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_rx.data size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->data = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown ant_rx message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
