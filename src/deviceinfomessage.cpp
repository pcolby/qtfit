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

/*!
 * \file
 * Defines the DeviceInfoMessage, and DeviceInfoMessagePrivate classes.
 */

#include "deviceinfomessage.h"
#include "deviceinfomessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class DeviceInfoMessage
 *
 * The DeviceInfoMessage class represents a FIT DeviceInfoMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a DeviceInfoMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
DeviceInfoMessage::DeviceInfoMessage() : AbstractDataMessage(new DeviceInfoMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a DeviceInfoMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
DeviceInfoMessage::DeviceInfoMessage(DeviceInfoMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the DeviceInfoMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime DeviceInfoMessage::timestamp() const
{
    Q_D(const DeviceInfoMessage);
    return d->timestamp;
}

/*!
 * Returns the DeviceInfoMessage data message's \c deviceIndex field's current value.
 *
 * \return the \c deviceIndex field value.
 */
DeviceIndex DeviceInfoMessage::deviceIndex() const
{
    Q_D(const DeviceInfoMessage);
    return d->deviceIndex;
}

/*!
 * Returns the DeviceInfoMessage data message's \c deviceType field's current value.
 *
 * \return the \c deviceType field value.
 */
quint8 DeviceInfoMessage::deviceType() const
{
    Q_D(const DeviceInfoMessage);
    return d->deviceType;
}

/*!
 * Returns the DeviceInfoMessage data message's \c manufacturer field's current value.
 *
 * \return the \c manufacturer field value.
 */
Manufacturer DeviceInfoMessage::manufacturer() const
{
    Q_D(const DeviceInfoMessage);
    return d->manufacturer;
}

/*!
 * Returns the DeviceInfoMessage data message's \c serialNumber field's current value.
 *
 * \return the \c serialNumber field value.
 */
quint32z DeviceInfoMessage::serialNumber() const
{
    Q_D(const DeviceInfoMessage);
    return d->serialNumber;
}

/*!
 * Returns the DeviceInfoMessage data message's \c product field's current value.
 *
 * \return the \c product field value.
 */
quint16 DeviceInfoMessage::product() const
{
    Q_D(const DeviceInfoMessage);
    return d->product;
}

/*!
 * Returns the DeviceInfoMessage data message's \c softwareVersion field's current value.
 *
 * \return the \c softwareVersion field value.
 */
quint16 DeviceInfoMessage::softwareVersion() const
{
    Q_D(const DeviceInfoMessage);
    return d->softwareVersion;
}

/*!
 * Returns the DeviceInfoMessage data message's \c hardwareVersion field's current value.
 *
 * \return the \c hardwareVersion field value.
 */
quint8 DeviceInfoMessage::hardwareVersion() const
{
    Q_D(const DeviceInfoMessage);
    return d->hardwareVersion;
}

/*!
 * Returns the DeviceInfoMessage data message's \c cumOperatingTime field's current value.
 *
 * Reset by new battery or charge.
 *
 * \return the \c cumOperatingTime field value.
 */
quint32 DeviceInfoMessage::cumOperatingTime() const
{
    Q_D(const DeviceInfoMessage);
    return d->cumOperatingTime;
}

/*!
 * Returns the DeviceInfoMessage data message's \c batteryVoltage field's current value.
 *
 * \return the \c batteryVoltage field value.
 */
quint16 DeviceInfoMessage::batteryVoltage() const
{
    Q_D(const DeviceInfoMessage);
    return d->batteryVoltage;
}

/*!
 * Returns the DeviceInfoMessage data message's \c batteryStatus field's current value.
 *
 * \return the \c batteryStatus field value.
 */
BatteryStatus DeviceInfoMessage::batteryStatus() const
{
    Q_D(const DeviceInfoMessage);
    return d->batteryStatus;
}

/*!
 * Returns the DeviceInfoMessage data message's \c sensorPosition field's current value.
 *
 * Indicates the location of the sensor
 *
 * \return the \c sensorPosition field value.
 */
BodyLocation DeviceInfoMessage::sensorPosition() const
{
    Q_D(const DeviceInfoMessage);
    return d->sensorPosition;
}

/*!
 * Returns the DeviceInfoMessage data message's \c descriptor field's current value.
 *
 * Used to describe the sensor or location
 *
 * \return the \c descriptor field value.
 */
QString DeviceInfoMessage::descriptor() const
{
    Q_D(const DeviceInfoMessage);
    return d->descriptor;
}

/*!
 * Returns the DeviceInfoMessage data message's \c antTransmissionType field's current value.
 *
 * \return the \c antTransmissionType field value.
 */
quint8z DeviceInfoMessage::antTransmissionType() const
{
    Q_D(const DeviceInfoMessage);
    return d->antTransmissionType;
}

/*!
 * Returns the DeviceInfoMessage data message's \c antDeviceNumber field's current value.
 *
 * \return the \c antDeviceNumber field value.
 */
quint16z DeviceInfoMessage::antDeviceNumber() const
{
    Q_D(const DeviceInfoMessage);
    return d->antDeviceNumber;
}

/*!
 * Returns the DeviceInfoMessage data message's \c antNetwork field's current value.
 *
 * \return the \c antNetwork field value.
 */
AntNetwork DeviceInfoMessage::antNetwork() const
{
    Q_D(const DeviceInfoMessage);
    return d->antNetwork;
}

/*!
 * Returns the DeviceInfoMessage data message's \c sourceType field's current value.
 *
 * \return the \c sourceType field value.
 */
SourceType DeviceInfoMessage::sourceType() const
{
    Q_D(const DeviceInfoMessage);
    return d->sourceType;
}

/*!
 * Returns the DeviceInfoMessage data message's \c productName field's current value.
 *
 * Optional free form string to indicate the devices name or model
 *
 * \return the \c productName field value.
 */
QString DeviceInfoMessage::productName() const
{
    Q_D(const DeviceInfoMessage);
    return d->productName;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void DeviceInfoMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(DeviceInfoMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c deviceIndex field to \a deviceIndex.
 *
 * \param deviceIndex The field value to set.
 */
void DeviceInfoMessage::setDeviceIndex(const DeviceIndex deviceIndex)
{
    Q_D(DeviceInfoMessage);
    d->deviceIndex = deviceIndex;
}
/*!
 * Sets the \c deviceType field to \a deviceType.
 *
 * \param deviceType The field value to set.
 */
void DeviceInfoMessage::setDeviceType(const quint8 deviceType)
{
    Q_D(DeviceInfoMessage);
    d->deviceType = deviceType;
}
/*!
 * Sets the \c manufacturer field to \a manufacturer.
 *
 * \param manufacturer The field value to set.
 */
void DeviceInfoMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(DeviceInfoMessage);
    d->manufacturer = manufacturer;
}
/*!
 * Sets the \c serialNumber field to \a serialNumber.
 *
 * \param serialNumber The field value to set.
 */
void DeviceInfoMessage::setSerialNumber(const quint32z serialNumber)
{
    Q_D(DeviceInfoMessage);
    d->serialNumber = serialNumber;
}
/*!
 * Sets the \c product field to \a product.
 *
 * \param product The field value to set.
 */
void DeviceInfoMessage::setProduct(const quint16 product)
{
    Q_D(DeviceInfoMessage);
    d->product = product;
}
/*!
 * Sets the \c softwareVersion field to \a softwareVersion.
 *
 * \param softwareVersion The field value to set.
 */
void DeviceInfoMessage::setSoftwareVersion(const quint16 softwareVersion)
{
    Q_D(DeviceInfoMessage);
    d->softwareVersion = softwareVersion;
}
/*!
 * Sets the \c hardwareVersion field to \a hardwareVersion.
 *
 * \param hardwareVersion The field value to set.
 */
void DeviceInfoMessage::setHardwareVersion(const quint8 hardwareVersion)
{
    Q_D(DeviceInfoMessage);
    d->hardwareVersion = hardwareVersion;
}
/*!
 * Sets the \c cumOperatingTime field to \a cumOperatingTime.
 *
 * \param cumOperatingTime The field value to set.
 */
void DeviceInfoMessage::setCumOperatingTime(const quint32 cumOperatingTime)
{
    Q_D(DeviceInfoMessage);
    d->cumOperatingTime = cumOperatingTime;
}
/*!
 * Sets the \c batteryVoltage field to \a batteryVoltage.
 *
 * \param batteryVoltage The field value to set.
 */
void DeviceInfoMessage::setBatteryVoltage(const quint16 batteryVoltage)
{
    Q_D(DeviceInfoMessage);
    d->batteryVoltage = batteryVoltage;
}
/*!
 * Sets the \c batteryStatus field to \a batteryStatus.
 *
 * \param batteryStatus The field value to set.
 */
void DeviceInfoMessage::setBatteryStatus(const BatteryStatus batteryStatus)
{
    Q_D(DeviceInfoMessage);
    d->batteryStatus = batteryStatus;
}
/*!
 * Sets the \c sensorPosition field to \a sensorPosition.
 *
 * \param sensorPosition The field value to set.
 */
void DeviceInfoMessage::setSensorPosition(const BodyLocation sensorPosition)
{
    Q_D(DeviceInfoMessage);
    d->sensorPosition = sensorPosition;
}
/*!
 * Sets the \c descriptor field to \a descriptor.
 *
 * \param descriptor The field value to set.
 */
void DeviceInfoMessage::setDescriptor(const QString descriptor)
{
    Q_D(DeviceInfoMessage);
    d->descriptor = descriptor;
}
/*!
 * Sets the \c antTransmissionType field to \a antTransmissionType.
 *
 * \param antTransmissionType The field value to set.
 */
void DeviceInfoMessage::setAntTransmissionType(const quint8z antTransmissionType)
{
    Q_D(DeviceInfoMessage);
    d->antTransmissionType = antTransmissionType;
}
/*!
 * Sets the \c antDeviceNumber field to \a antDeviceNumber.
 *
 * \param antDeviceNumber The field value to set.
 */
void DeviceInfoMessage::setAntDeviceNumber(const quint16z antDeviceNumber)
{
    Q_D(DeviceInfoMessage);
    d->antDeviceNumber = antDeviceNumber;
}
/*!
 * Sets the \c antNetwork field to \a antNetwork.
 *
 * \param antNetwork The field value to set.
 */
void DeviceInfoMessage::setAntNetwork(const AntNetwork antNetwork)
{
    Q_D(DeviceInfoMessage);
    d->antNetwork = antNetwork;
}
/*!
 * Sets the \c sourceType field to \a sourceType.
 *
 * \param sourceType The field value to set.
 */
void DeviceInfoMessage::setSourceType(const SourceType sourceType)
{
    Q_D(DeviceInfoMessage);
    d->sourceType = sourceType;
}
/*!
 * Sets the \c productName field to \a productName.
 *
 * \param productName The field value to set.
 */
void DeviceInfoMessage::setProductName(const QString productName)
{
    Q_D(DeviceInfoMessage);
    d->productName = productName;
}

/// \cond internal

/*!
 * \internal
 *
 * \class DeviceInfoMessagePrivate
 *
 * The DeviceInfoMessagePrivate class provides private implementation for the DeviceInfoMessage.
 *
 * \sa DeviceInfoMessage
 */

/*!
 * \internal
 *
 * Constructs a DeviceInfoMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
DeviceInfoMessagePrivate::DeviceInfoMessagePrivate(DeviceInfoMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , deviceIndex(static_cast<DeviceIndex>(-1))
  , deviceType(0xFF)
  , manufacturer(static_cast<Manufacturer>(-1))
  , serialNumber(0)
  , product(0xFFFF)
  , softwareVersion(0xFFFF)
  , hardwareVersion(0xFF)
  , cumOperatingTime(0xFFFFFFFF)
  , batteryVoltage(0xFFFF)
  , batteryStatus(static_cast<BatteryStatus>(-1))
  , sensorPosition(static_cast<BodyLocation>(-1))
  , antTransmissionType(static_cast<quint8z>(-1))
  , antDeviceNumber(0)
  , antNetwork(static_cast<AntNetwork>(-1))
  , sourceType(static_cast<SourceType>(-1))
{
    globalMessageNumber = MesgNum::DeviceInfo;
}

/*!
 * \internal
 *
 * Destroys the DeviceInfoMessagePrivate object.
 */
DeviceInfoMessagePrivate::~DeviceInfoMessagePrivate()
{

}

bool DeviceInfoMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:device_info.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "device_info.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:device_info.deviceIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "device_info.deviceIndex")) return false;
        this->deviceIndex = static_cast<DeviceIndex>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:device_info.deviceType
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "device_info.deviceType")) return false;
        this->deviceType = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:device_info.manufacturer
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "device_info.manufacturer")) return false;
        this->manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:device_info.serialNumber
        if (!verify(data, baseType, 4, FitBaseType::Uint32z, "device_info.serialNumber")) return false;
        this->serialNumber = static_cast<quint32z>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:device_info.product
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "device_info.product")) return false;
        this->product = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:device_info.softwareVersion
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "device_info.softwareVersion")) return false;
        this->softwareVersion = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:device_info.hardwareVersion
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "device_info.hardwareVersion")) return false;
        this->hardwareVersion = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:device_info.cumOperatingTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "device_info.cumOperatingTime")) return false;
        this->cumOperatingTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:device_info.batteryVoltage
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "device_info.batteryVoltage")) return false;
        this->batteryVoltage = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 11: // See Profile.xlsx::Messages:device_info.batteryStatus
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "device_info.batteryStatus")) return false;
        this->batteryStatus = static_cast<BatteryStatus>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:device_info.sensorPosition
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_info.sensorPosition")) return false;
        this->sensorPosition = static_cast<BodyLocation>(data.at(0));
        break;
    case 19: // See Profile.xlsx::Messages:device_info.descriptor
        if (!verify(data, baseType, 1, FitBaseType::String, "device_info.descriptor")) return false;
        this->descriptor = QString::fromUtf8(data);
        break;
    case 20: // See Profile.xlsx::Messages:device_info.antTransmissionType
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "device_info.antTransmissionType")) return false;
        this->antTransmissionType = static_cast<quint8z>(data.at(0));
        break;
    case 21: // See Profile.xlsx::Messages:device_info.antDeviceNumber
        if (!verify(data, baseType, 2, FitBaseType::Uint16z, "device_info.antDeviceNumber")) return false;
        this->antDeviceNumber = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 22: // See Profile.xlsx::Messages:device_info.antNetwork
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_info.antNetwork")) return false;
        this->antNetwork = static_cast<AntNetwork>(data.at(0));
        break;
    case 25: // See Profile.xlsx::Messages:device_info.sourceType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_info.sourceType")) return false;
        this->sourceType = static_cast<SourceType>(data.at(0));
        break;
    case 27: // See Profile.xlsx::Messages:device_info.productName
        if (!verify(data, baseType, 1, FitBaseType::String, "device_info.productName")) return false;
        this->productName = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown device_info message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
