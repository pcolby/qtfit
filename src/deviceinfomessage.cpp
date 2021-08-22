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

#include "deviceinfomessage.h"
#include "deviceinfomessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

DeviceInfoMessage::DeviceInfoMessage() : FitDataMessage(new DeviceInfoMessagePrivate(this))
{

}

DateTime DeviceInfoMessage::timestamp() const
{
    Q_D(const DeviceInfoMessage);
    return d->timestamp;
}

DeviceIndex DeviceInfoMessage::deviceIndex() const
{
    Q_D(const DeviceInfoMessage);
    return d->deviceIndex;
}

quint8 DeviceInfoMessage::deviceType() const
{
    Q_D(const DeviceInfoMessage);
    return d->deviceType;
}

Manufacturer DeviceInfoMessage::manufacturer() const
{
    Q_D(const DeviceInfoMessage);
    return d->manufacturer;
}

quint32z DeviceInfoMessage::serialNumber() const
{
    Q_D(const DeviceInfoMessage);
    return d->serialNumber;
}

quint16 DeviceInfoMessage::product() const
{
    Q_D(const DeviceInfoMessage);
    return d->product;
}

quint16 DeviceInfoMessage::softwareVersion() const
{
    Q_D(const DeviceInfoMessage);
    return d->softwareVersion;
}

quint8 DeviceInfoMessage::hardwareVersion() const
{
    Q_D(const DeviceInfoMessage);
    return d->hardwareVersion;
}

quint32 DeviceInfoMessage::cumOperatingTime() const
{
    Q_D(const DeviceInfoMessage);
    return d->cumOperatingTime;
}

quint16 DeviceInfoMessage::batteryVoltage() const
{
    Q_D(const DeviceInfoMessage);
    return d->batteryVoltage;
}

BatteryStatus DeviceInfoMessage::batteryStatus() const
{
    Q_D(const DeviceInfoMessage);
    return d->batteryStatus;
}

BodyLocation DeviceInfoMessage::sensorPosition() const
{
    Q_D(const DeviceInfoMessage);
    return d->sensorPosition;
}

QString DeviceInfoMessage::descriptor() const
{
    Q_D(const DeviceInfoMessage);
    return d->descriptor;
}

quint8z DeviceInfoMessage::antTransmissionType() const
{
    Q_D(const DeviceInfoMessage);
    return d->antTransmissionType;
}

quint16z DeviceInfoMessage::antDeviceNumber() const
{
    Q_D(const DeviceInfoMessage);
    return d->antDeviceNumber;
}

AntNetwork DeviceInfoMessage::antNetwork() const
{
    Q_D(const DeviceInfoMessage);
    return d->antNetwork;
}

SourceType DeviceInfoMessage::sourceType() const
{
    Q_D(const DeviceInfoMessage);
    return d->sourceType;
}

QString DeviceInfoMessage::productName() const
{
    Q_D(const DeviceInfoMessage);
    return d->productName;
}

void DeviceInfoMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(DeviceInfoMessage);
    d->timestamp = timestamp;
}
void DeviceInfoMessage::setDeviceIndex(const DeviceIndex deviceIndex)
{
    Q_D(DeviceInfoMessage);
    d->deviceIndex = deviceIndex;
}
void DeviceInfoMessage::setDeviceType(const quint8 deviceType)
{
    Q_D(DeviceInfoMessage);
    d->deviceType = deviceType;
}
void DeviceInfoMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(DeviceInfoMessage);
    d->manufacturer = manufacturer;
}
void DeviceInfoMessage::setSerialNumber(const quint32z serialNumber)
{
    Q_D(DeviceInfoMessage);
    d->serialNumber = serialNumber;
}
void DeviceInfoMessage::setProduct(const quint16 product)
{
    Q_D(DeviceInfoMessage);
    d->product = product;
}
void DeviceInfoMessage::setSoftwareVersion(const quint16 softwareVersion)
{
    Q_D(DeviceInfoMessage);
    d->softwareVersion = softwareVersion;
}
void DeviceInfoMessage::setHardwareVersion(const quint8 hardwareVersion)
{
    Q_D(DeviceInfoMessage);
    d->hardwareVersion = hardwareVersion;
}
void DeviceInfoMessage::setCumOperatingTime(const quint32 cumOperatingTime)
{
    Q_D(DeviceInfoMessage);
    d->cumOperatingTime = cumOperatingTime;
}
void DeviceInfoMessage::setBatteryVoltage(const quint16 batteryVoltage)
{
    Q_D(DeviceInfoMessage);
    d->batteryVoltage = batteryVoltage;
}
void DeviceInfoMessage::setBatteryStatus(const BatteryStatus batteryStatus)
{
    Q_D(DeviceInfoMessage);
    d->batteryStatus = batteryStatus;
}
void DeviceInfoMessage::setSensorPosition(const BodyLocation sensorPosition)
{
    Q_D(DeviceInfoMessage);
    d->sensorPosition = sensorPosition;
}
void DeviceInfoMessage::setDescriptor(const QString descriptor)
{
    Q_D(DeviceInfoMessage);
    d->descriptor = descriptor;
}
void DeviceInfoMessage::setAntTransmissionType(const quint8z antTransmissionType)
{
    Q_D(DeviceInfoMessage);
    d->antTransmissionType = antTransmissionType;
}
void DeviceInfoMessage::setAntDeviceNumber(const quint16z antDeviceNumber)
{
    Q_D(DeviceInfoMessage);
    d->antDeviceNumber = antDeviceNumber;
}
void DeviceInfoMessage::setAntNetwork(const AntNetwork antNetwork)
{
    Q_D(DeviceInfoMessage);
    d->antNetwork = antNetwork;
}
void DeviceInfoMessage::setSourceType(const SourceType sourceType)
{
    Q_D(DeviceInfoMessage);
    d->sourceType = sourceType;
}
void DeviceInfoMessage::setProductName(const QString productName)
{
    Q_D(DeviceInfoMessage);
    d->productName = productName;
}

DeviceInfoMessagePrivate::DeviceInfoMessagePrivate(DeviceInfoMessage * const q)
  : FitDataMessagePrivate(q)
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
        qWarning() << "unknown device_info message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
