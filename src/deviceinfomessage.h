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
 * Declares the DeviceInfoMessage class.
 */

#ifndef QTFIT_DEVICEINFOMESSAGE_H
#define QTFIT_DEVICEINFOMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class DeviceInfoMessagePrivate;

class QTFIT_EXPORT DeviceInfoMessage : public AbstractDataMessage {

public:
    DeviceInfoMessage();
    ~DeviceInfoMessage();

    DateTime timestamp() const;
    DeviceIndex deviceIndex() const;
    quint8 deviceType() const;
    Manufacturer manufacturer() const;
    quint32z serialNumber() const;
    quint16 product() const;
    quint16 softwareVersion() const;
    quint8 hardwareVersion() const;
    quint32 cumOperatingTime() const;
    quint16 batteryVoltage() const;
    BatteryStatus batteryStatus() const;
    BodyLocation sensorPosition() const;
    QString descriptor() const;
    quint8z antTransmissionType() const;
    quint16z antDeviceNumber() const;
    AntNetwork antNetwork() const;
    SourceType sourceType() const;
    QString productName() const;

    void setTimestamp(const DateTime timestamp);
    void setDeviceIndex(const DeviceIndex deviceIndex);
    void setDeviceType(const quint8 deviceType);
    void setManufacturer(const Manufacturer manufacturer);
    void setSerialNumber(const quint32z serialNumber);
    void setProduct(const quint16 product);
    void setSoftwareVersion(const quint16 softwareVersion);
    void setHardwareVersion(const quint8 hardwareVersion);
    void setCumOperatingTime(const quint32 cumOperatingTime);
    void setBatteryVoltage(const quint16 batteryVoltage);
    void setBatteryStatus(const BatteryStatus batteryStatus);
    void setSensorPosition(const BodyLocation sensorPosition);
    void setDescriptor(const QString descriptor);
    void setAntTransmissionType(const quint8z antTransmissionType);
    void setAntDeviceNumber(const quint16z antDeviceNumber);
    void setAntNetwork(const AntNetwork antNetwork);
    void setSourceType(const SourceType sourceType);
    void setProductName(const QString productName);

protected:
    /// \cond internal
    explicit DeviceInfoMessage(DeviceInfoMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(DeviceInfoMessage)
  //Q_DISABLE_COPY(DeviceInfoMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DEVICEINFOMESSAGE_H
