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

#ifndef QTFIT_DEVICEINFOMESSAGE_P_H
#define QTFIT_DEVICEINFOMESSAGE_P_H

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class DeviceInfoMessage;

class DeviceInfoMessagePrivate : public FitDataMessagePrivate {

public:
    DateTime timestamp;
    DeviceIndex deviceIndex;
    quint8 deviceType;
    Manufacturer manufacturer;
    quint32z serialNumber;
    quint16 product;
    quint16 softwareVersion;
    quint8 hardwareVersion;
    quint32 cumOperatingTime;
    quint16 batteryVoltage;
    BatteryStatus batteryStatus;
    BodyLocation sensorPosition;
    QString descriptor;
    quint8z antTransmissionType;
    quint16z antDeviceNumber;
    AntNetwork antNetwork;
    SourceType sourceType;
    QString productName;

    DeviceInfoMessagePrivate() = delete;
    explicit DeviceInfoMessagePrivate(DeviceInfoMessage * const q);
    virtual ~DeviceInfoMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(DeviceInfoMessage)
    Q_DISABLE_COPY(DeviceInfoMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DEVICEINFOMESSAGE_P_H
