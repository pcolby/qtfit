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

#ifndef QTFIT_DEVICESETTINGSMESSAGE_P_H
#define QTFIT_DEVICESETTINGSMESSAGE_P_H

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class DeviceSettingsMessage;

class DeviceSettingsMessagePrivate : public FitDataMessagePrivate {

public:
    quint8 activeTimeZone;
    quint32 utcOffset;
    quint32 timeOffset;
    TimeMode timeMode;
    qint8 timeZoneOffset;
    BacklightMode backlightMode;
    bool activityTrackerEnabled;
    DateTime clockTime;
    quint16 pagesEnabled;
    bool moveAlertEnabled;
    DateMode dateMode;
    DisplayOrientation displayOrientation;
    Side mountingSide;
    quint16 defaultPage;
    quint16 autosyncMinSteps;
    quint16 autosyncMinTime;
    bool lactateThresholdAutodetectEnabled;
    bool bleAutoUploadEnabled;
    AutoSyncFrequency autoSyncFrequency;
    AutoActivityDetect autoActivityDetect;
    quint8 numberOfScreens;
    DisplayOrientation smartNotificationDisplayOrientation;
    Switch tapInterface;
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
