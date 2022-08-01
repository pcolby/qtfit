// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the DeviceInfoMessagePrivate class.
 */
#ifndef QTFIT_DEVICEINFOMESSAGE_P_H
#define QTFIT_DEVICEINFOMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class DeviceInfoMessage;

class DeviceInfoMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The DeviceInfoMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The DeviceInfoMessage FIT message's deviceIndex field.
     */
    DeviceIndex deviceIndex;

    /*!
     * The DeviceInfoMessage FIT message's deviceType field.
     */
    quint8 deviceType;

    /*!
     * The DeviceInfoMessage FIT message's manufacturer field.
     */
    Manufacturer manufacturer;

    /*!
     * The DeviceInfoMessage FIT message's serialNumber field.
     */
    quint32z serialNumber;

    /*!
     * The DeviceInfoMessage FIT message's product field.
     */
    quint16 product;

    /*!
     * The DeviceInfoMessage FIT message's softwareVersion field.
     */
    quint16 softwareVersion;

    /*!
     * The DeviceInfoMessage FIT message's hardwareVersion field.
     */
    quint8 hardwareVersion;

    /*!
     * The DeviceInfoMessage FIT message's cumOperatingTime field.
     *
     * Reset by new battery or charge.
     */
    quint32 cumOperatingTime;

    /*!
     * The DeviceInfoMessage FIT message's batteryVoltage field.
     */
    quint16 batteryVoltage;

    /*!
     * The DeviceInfoMessage FIT message's batteryStatus field.
     */
    BatteryStatus batteryStatus;

    /*!
     * The DeviceInfoMessage FIT message's sensorPosition field.
     *
     * Indicates the location of the sensor
     */
    BodyLocation sensorPosition;

    /*!
     * The DeviceInfoMessage FIT message's descriptor field.
     *
     * Used to describe the sensor or location
     */
    QString descriptor;

    /*!
     * The DeviceInfoMessage FIT message's antTransmissionType field.
     */
    quint8z antTransmissionType;

    /*!
     * The DeviceInfoMessage FIT message's antDeviceNumber field.
     */
    quint16z antDeviceNumber;

    /*!
     * The DeviceInfoMessage FIT message's antNetwork field.
     */
    AntNetwork antNetwork;

    /*!
     * The DeviceInfoMessage FIT message's sourceType field.
     */
    SourceType sourceType;

    /*!
     * The DeviceInfoMessage FIT message's productName field.
     *
     * Optional free form string to indicate the devices name or model
     */
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
