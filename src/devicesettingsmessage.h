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

#ifndef QTFIT_DEVICESETTINGSMESSAGE_H
#define QTFIT_DEVICESETTINGSMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class DeviceSettingsMessagePrivate;

class QTFIT_EXPORT DeviceSettingsMessage : public FitDataMessage {

public:
    DeviceSettingsMessage();
    ~DeviceSettingsMessage();

    quint8 activeTimeZone() const;
    quint32 utcOffset() const;
    quint32 timeOffset() const;
    TimeMode timeMode() const;
    qint8 timeZoneOffset() const;
    BacklightMode backlightMode() const;
    bool activityTrackerEnabled() const;
    DateTime clockTime() const;
    quint16 pagesEnabled() const;
    bool moveAlertEnabled() const;
    DateMode dateMode() const;
    DisplayOrientation displayOrientation() const;
    Side mountingSide() const;
    quint16 defaultPage() const;
    quint16 autosyncMinSteps() const;
    quint16 autosyncMinTime() const;
    bool lactateThresholdAutodetectEnabled() const;
    bool bleAutoUploadEnabled() const;
    AutoSyncFrequency autoSyncFrequency() const;
    AutoActivityDetect autoActivityDetect() const;
    quint8 numberOfScreens() const;
    DisplayOrientation smartNotificationDisplayOrientation() const;
    Switch tapInterface() const;
    TapSensitivity tapSensitivity() const;

    void setActiveTimeZone(const quint8 activeTimeZone);
    void setUtcOffset(const quint32 utcOffset);
    void setTimeOffset(const quint32 timeOffset);
    void setTimeMode(const TimeMode timeMode);
    void setTimeZoneOffset(const qint8 timeZoneOffset);
    void setBacklightMode(const BacklightMode backlightMode);
    void setActivityTrackerEnabled(const bool activityTrackerEnabled);
    void setClockTime(const DateTime clockTime);
    void setPagesEnabled(const quint16 pagesEnabled);
    void setMoveAlertEnabled(const bool moveAlertEnabled);
    void setDateMode(const DateMode dateMode);
    void setDisplayOrientation(const DisplayOrientation displayOrientation);
    void setMountingSide(const Side mountingSide);
    void setDefaultPage(const quint16 defaultPage);
    void setAutosyncMinSteps(const quint16 autosyncMinSteps);
    void setAutosyncMinTime(const quint16 autosyncMinTime);
    void setLactateThresholdAutodetectEnabled(const bool lactateThresholdAutodetectEnabled);
    void setBleAutoUploadEnabled(const bool bleAutoUploadEnabled);
    void setAutoSyncFrequency(const AutoSyncFrequency autoSyncFrequency);
    void setAutoActivityDetect(const AutoActivityDetect autoActivityDetect);
    void setNumberOfScreens(const quint8 numberOfScreens);
    void setSmartNotificationDisplayOrientation(const DisplayOrientation smartNotificationDisplayOrientation);
    void setTapInterface(const Switch tapInterface);
    void setTapSensitivity(const TapSensitivity tapSensitivity);

protected:
    /// @cond internal
    explicit DeviceSettingsMessage(DeviceSettingsMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(DeviceSettingsMessage)
  //Q_DISABLE_COPY(DeviceSettingsMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DEVICESETTINGSMESSAGE_H
