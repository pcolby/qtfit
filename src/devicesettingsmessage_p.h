// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the DeviceSettingsMessagePrivate class.
 */
#ifndef QTFIT_DEVICESETTINGSMESSAGE_P_H
#define QTFIT_DEVICESETTINGSMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class DeviceSettingsMessage;

class DeviceSettingsMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The DeviceSettingsMessage FIT message's activeTimeZone field.
     *
     * Index into time zone arrays.
     */
    quint8 activeTimeZone;

    /*!
     * The DeviceSettingsMessage FIT message's utcOffset field.
     *
     * Offset from system time. Required to convert timestamp from system time to UTC.
     */
    quint32 utcOffset;

    /*!
     * The DeviceSettingsMessage FIT message's timeOffset field.
     *
     * Offset from system time.
     */
    quint32 timeOffset;

    /*!
     * The DeviceSettingsMessage FIT message's timeMode field.
     *
     * Display mode for the time
     */
    TimeMode timeMode;

    /*!
     * The DeviceSettingsMessage FIT message's timeZoneOffset field.
     *
     * timezone offset in 1/4 hour increments
     */
    qint8 timeZoneOffset;

    /*!
     * The DeviceSettingsMessage FIT message's backlightMode field.
     *
     * Mode for backlight
     */
    BacklightMode backlightMode;

    /*!
     * The DeviceSettingsMessage FIT message's activityTrackerEnabled field.
     *
     * Enabled state of the activity tracker functionality
     */
    bool activityTrackerEnabled;

    /*!
     * The DeviceSettingsMessage FIT message's clockTime field.
     *
     * UTC timestamp used to set the devices clock and date
     */
    DateTime clockTime;

    /*!
     * The DeviceSettingsMessage FIT message's pagesEnabled field.
     *
     * Bitfield  to configure enabled screens for each supported loop
     */
    quint16 pagesEnabled;

    /*!
     * The DeviceSettingsMessage FIT message's moveAlertEnabled field.
     *
     * Enabled state of the move alert
     */
    bool moveAlertEnabled;

    /*!
     * The DeviceSettingsMessage FIT message's dateMode field.
     *
     * Display mode for the date
     */
    DateMode dateMode;

    /*!
     * The DeviceSettingsMessage FIT message's displayOrientation field.
     */
    DisplayOrientation displayOrientation;

    /*!
     * The DeviceSettingsMessage FIT message's mountingSide field.
     */
    Side mountingSide;

    /*!
     * The DeviceSettingsMessage FIT message's defaultPage field.
     *
     * Bitfield to indicate one page as default for each supported loop
     */
    quint16 defaultPage;

    /*!
     * The DeviceSettingsMessage FIT message's autosyncMinSteps field.
     *
     * Minimum steps before an autosync can occur
     */
    quint16 autosyncMinSteps;

    /*!
     * The DeviceSettingsMessage FIT message's autosyncMinTime field.
     *
     * Minimum minutes before an autosync can occur
     */
    quint16 autosyncMinTime;

    /*!
     * The DeviceSettingsMessage FIT message's lactateThresholdAutodetectEnabled field.
     *
     * Enable auto-detect setting for the lactate threshold feature.
     */
    bool lactateThresholdAutodetectEnabled;

    /*!
     * The DeviceSettingsMessage FIT message's bleAutoUploadEnabled field.
     *
     * Automatically upload using BLE
     */
    bool bleAutoUploadEnabled;

    /*!
     * The DeviceSettingsMessage FIT message's autoSyncFrequency field.
     *
     * Helps to conserve battery by changing modes
     */
    AutoSyncFrequency autoSyncFrequency;

    /*!
     * The DeviceSettingsMessage FIT message's autoActivityDetect field.
     *
     * Allows setting specific activities auto-activity detect enabled/disabled settings
     */
    AutoActivityDetect autoActivityDetect;

    /*!
     * The DeviceSettingsMessage FIT message's numberOfScreens field.
     *
     * Number of screens configured to display
     */
    quint8 numberOfScreens;

    /*!
     * The DeviceSettingsMessage FIT message's smartNotificationDisplayOrientation field.
     *
     * Smart Notification display orientation
     */
    DisplayOrientation smartNotificationDisplayOrientation;

    /*!
     * The DeviceSettingsMessage FIT message's tapInterface field.
     */
    Switch tapInterface;

    /*!
     * The DeviceSettingsMessage FIT message's tapSensitivity field.
     *
     * Used to hold the tap threshold setting
     */
    TapSensitivity tapSensitivity;

    DeviceSettingsMessagePrivate() = delete;
    explicit DeviceSettingsMessagePrivate(DeviceSettingsMessage * const q);
    virtual ~DeviceSettingsMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(DeviceSettingsMessage)
    Q_DISABLE_COPY(DeviceSettingsMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DEVICESETTINGSMESSAGE_P_H
