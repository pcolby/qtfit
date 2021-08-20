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

AntChannelIdMessagePrivate::AntChannelIdMessagePrivate(AntChannelIdMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::AntChannelId;
}

AntChannelIdMessagePrivate::~AntChannelIdMessagePrivate()
{

}

/// @todo Generate implementation.
bool AntChannelIdMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
