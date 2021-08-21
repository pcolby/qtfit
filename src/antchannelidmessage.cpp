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

#include "antchannelidmessage.h"
#include "antchannelidmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

AntChannelIdMessage::AntChannelIdMessage() : FitDataMessage(new AntChannelIdMessagePrivate(this))
{

}

quint8 AntChannelIdMessage::channelNumber() const
{
    Q_D(const AntChannelIdMessage);
    return d->channelNumber;
}

quint8z AntChannelIdMessage::deviceType() const
{
    Q_D(const AntChannelIdMessage);
    return d->deviceType;
}

quint16z AntChannelIdMessage::deviceNumber() const
{
    Q_D(const AntChannelIdMessage);
    return d->deviceNumber;
}

quint8z AntChannelIdMessage::transmissionType() const
{
    Q_D(const AntChannelIdMessage);
    return d->transmissionType;
}

DeviceIndex AntChannelIdMessage::deviceIndex() const
{
    Q_D(const AntChannelIdMessage);
    return d->deviceIndex;
}

void AntChannelIdMessage::setChannelNumber(const quint8 channelNumber)
{
    Q_D(AntChannelIdMessage);
    d->channelNumber = channelNumber;
}
void AntChannelIdMessage::setDeviceType(const quint8z deviceType)
{
    Q_D(AntChannelIdMessage);
    d->deviceType = deviceType;
}
void AntChannelIdMessage::setDeviceNumber(const quint16z deviceNumber)
{
    Q_D(AntChannelIdMessage);
    d->deviceNumber = deviceNumber;
}
void AntChannelIdMessage::setTransmissionType(const quint8z transmissionType)
{
    Q_D(AntChannelIdMessage);
    d->transmissionType = transmissionType;
}
void AntChannelIdMessage::setDeviceIndex(const DeviceIndex deviceIndex)
{
    Q_D(AntChannelIdMessage);
    d->deviceIndex = deviceIndex;
}

AntChannelIdMessagePrivate::AntChannelIdMessagePrivate(AntChannelIdMessage * const q)
  : FitDataMessagePrivate(q)
  , channelNumber(0xFF)
  , deviceType(static_cast<quint8z>(-1))
  , deviceNumber(0)
  , transmissionType(static_cast<quint8z>(-1))
  , deviceIndex(static_cast<DeviceIndex>(-1))
{
    globalMessageNumber = MesgNum::AntChannelId;
}

AntChannelIdMessagePrivate::~AntChannelIdMessagePrivate()
{

}

bool AntChannelIdMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:ant_channel_id.channelNumber
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_channel_id.channelNumber has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_channel_id.channelNumber size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->channelNumber = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:ant_channel_id.deviceType
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_channel_id.deviceType has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_channel_id.deviceType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->deviceType = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 2: // See Profile.xlsx::Messages:ant_channel_id.deviceNumber
        if (baseType != FitBaseType::Uint16z) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_channel_id.deviceNumber has base type" << static_cast<int>(baseType) << "but should be Uint16z";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "ant_channel_id.deviceNumber size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->deviceNumber = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16z>(data) : qFromLittleEndian<quint16z>(data));
        break;
    case 3: // See Profile.xlsx::Messages:ant_channel_id.transmissionType
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_channel_id.transmissionType has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_channel_id.transmissionType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->transmissionType = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 4: // See Profile.xlsx::Messages:ant_channel_id.deviceIndex
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "ant_channel_id.deviceIndex has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ant_channel_id.deviceIndex size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->deviceIndex = static_cast<DeviceIndex>(data.at(0));
        break;
    default:
        qWarning() << "unknown ant_channel_id message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
