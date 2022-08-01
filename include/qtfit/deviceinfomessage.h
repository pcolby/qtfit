// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
