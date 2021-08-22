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

/*!
 * \class AntChannelIdMessage
 *
 * The AntChannelIdMessage class represents a FIT AntChannelIdMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid AntChannelIdMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
AntChannelIdMessage::AntChannelIdMessage() : AbstractDataMessage(new AntChannelIdMessagePrivate(this))
{

}

/*!
 * Returns the AntChannelIdMessage data message's \c channelNumber field's current value.
 *
 * \return the \c channelNumber field value.
 */
quint8 AntChannelIdMessage::channelNumber() const
{
    Q_D(const AntChannelIdMessage);
    return d->channelNumber;
}

/*!
 * Returns the AntChannelIdMessage data message's \c deviceType field's current value.
 *
 * \return the \c deviceType field value.
 */
quint8z AntChannelIdMessage::deviceType() const
{
    Q_D(const AntChannelIdMessage);
    return d->deviceType;
}

/*!
 * Returns the AntChannelIdMessage data message's \c deviceNumber field's current value.
 *
 * \return the \c deviceNumber field value.
 */
quint16z AntChannelIdMessage::deviceNumber() const
{
    Q_D(const AntChannelIdMessage);
    return d->deviceNumber;
}

/*!
 * Returns the AntChannelIdMessage data message's \c transmissionType field's current value.
 *
 * \return the \c transmissionType field value.
 */
quint8z AntChannelIdMessage::transmissionType() const
{
    Q_D(const AntChannelIdMessage);
    return d->transmissionType;
}

/*!
 * Returns the AntChannelIdMessage data message's \c deviceIndex field's current value.
 *
 * \return the \c deviceIndex field value.
 */
DeviceIndex AntChannelIdMessage::deviceIndex() const
{
    Q_D(const AntChannelIdMessage);
    return d->deviceIndex;
}

/*!
 * Sets the \c channelNumber field to \a channelNumber.
 *
 * \param channelNumber The field value to set.
 */
void AntChannelIdMessage::setChannelNumber(const quint8 channelNumber)
{
    Q_D(AntChannelIdMessage);
    d->channelNumber = channelNumber;
}
/*!
 * Sets the \c deviceType field to \a deviceType.
 *
 * \param deviceType The field value to set.
 */
void AntChannelIdMessage::setDeviceType(const quint8z deviceType)
{
    Q_D(AntChannelIdMessage);
    d->deviceType = deviceType;
}
/*!
 * Sets the \c deviceNumber field to \a deviceNumber.
 *
 * \param deviceNumber The field value to set.
 */
void AntChannelIdMessage::setDeviceNumber(const quint16z deviceNumber)
{
    Q_D(AntChannelIdMessage);
    d->deviceNumber = deviceNumber;
}
/*!
 * Sets the \c transmissionType field to \a transmissionType.
 *
 * \param transmissionType The field value to set.
 */
void AntChannelIdMessage::setTransmissionType(const quint8z transmissionType)
{
    Q_D(AntChannelIdMessage);
    d->transmissionType = transmissionType;
}
/*!
 * Sets the \c deviceIndex field to \a deviceIndex.
 *
 * \param deviceIndex The field value to set.
 */
void AntChannelIdMessage::setDeviceIndex(const DeviceIndex deviceIndex)
{
    Q_D(AntChannelIdMessage);
    d->deviceIndex = deviceIndex;
}

/*!
 * \internal
 *
 * \class AntChannelIdMessagePrivate
 *
 * The AntChannelIdMessagePrivate class provides private implementation for the AntChannelIdMessage.
 *
 * \sa AntChannelIdMessage
 */

/*!
 * \internal
 *
 * Constructs a AntChannelIdMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
AntChannelIdMessagePrivate::AntChannelIdMessagePrivate(AntChannelIdMessage * const q)
  : AbstractDataMessagePrivate(q)
  , channelNumber(0xFF)
  , deviceType(static_cast<quint8z>(-1))
  , deviceNumber(0)
  , transmissionType(static_cast<quint8z>(-1))
  , deviceIndex(static_cast<DeviceIndex>(-1))
{
    globalMessageNumber = MesgNum::AntChannelId;
}

/*!
 * \internal
 *
 * Destroys the AntChannelIdMessagePrivate object.
 */
AntChannelIdMessagePrivate::~AntChannelIdMessagePrivate()
{

}

bool AntChannelIdMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:ant_channel_id.channelNumber
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "ant_channel_id.channelNumber")) return false;
        this->channelNumber = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:ant_channel_id.deviceType
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "ant_channel_id.deviceType")) return false;
        this->deviceType = static_cast<quint8z>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:ant_channel_id.deviceNumber
        if (!verify(data, baseType, 2, FitBaseType::Uint16z, "ant_channel_id.deviceNumber")) return false;
        this->deviceNumber = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:ant_channel_id.transmissionType
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "ant_channel_id.transmissionType")) return false;
        this->transmissionType = static_cast<quint8z>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:ant_channel_id.deviceIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "ant_channel_id.deviceIndex")) return false;
        this->deviceIndex = static_cast<DeviceIndex>(data.at(0));
        break;
    default:
        qWarning() << "unknown ant_channel_id message field number" << fieldId;
        return AbstractDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
