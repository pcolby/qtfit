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

#include "devicesettingsmessage.h"
#include "devicesettingsmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

DeviceSettingsMessage::DeviceSettingsMessage() : FitDataMessage(new DeviceSettingsMessagePrivate(this))
{

}

quint8 DeviceSettingsMessage::activeTimeZone() const
{
    Q_D(const DeviceSettingsMessage);
    return d->activeTimeZone;
}

quint32 DeviceSettingsMessage::utcOffset() const
{
    Q_D(const DeviceSettingsMessage);
    return d->utcOffset;
}

quint32 DeviceSettingsMessage::timeOffset() const
{
    Q_D(const DeviceSettingsMessage);
    return d->timeOffset;
}

TimeMode DeviceSettingsMessage::timeMode() const
{
    Q_D(const DeviceSettingsMessage);
    return d->timeMode;
}

qint8 DeviceSettingsMessage::timeZoneOffset() const
{
    Q_D(const DeviceSettingsMessage);
    return d->timeZoneOffset;
}

BacklightMode DeviceSettingsMessage::backlightMode() const
{
    Q_D(const DeviceSettingsMessage);
    return d->backlightMode;
}

bool DeviceSettingsMessage::activityTrackerEnabled() const
{
    Q_D(const DeviceSettingsMessage);
    return d->activityTrackerEnabled;
}

DateTime DeviceSettingsMessage::clockTime() const
{
    Q_D(const DeviceSettingsMessage);
    return d->clockTime;
}

quint16 DeviceSettingsMessage::pagesEnabled() const
{
    Q_D(const DeviceSettingsMessage);
    return d->pagesEnabled;
}

bool DeviceSettingsMessage::moveAlertEnabled() const
{
    Q_D(const DeviceSettingsMessage);
    return d->moveAlertEnabled;
}

DateMode DeviceSettingsMessage::dateMode() const
{
    Q_D(const DeviceSettingsMessage);
    return d->dateMode;
}

DisplayOrientation DeviceSettingsMessage::displayOrientation() const
{
    Q_D(const DeviceSettingsMessage);
    return d->displayOrientation;
}

Side DeviceSettingsMessage::mountingSide() const
{
    Q_D(const DeviceSettingsMessage);
    return d->mountingSide;
}

quint16 DeviceSettingsMessage::defaultPage() const
{
    Q_D(const DeviceSettingsMessage);
    return d->defaultPage;
}

quint16 DeviceSettingsMessage::autosyncMinSteps() const
{
    Q_D(const DeviceSettingsMessage);
    return d->autosyncMinSteps;
}

quint16 DeviceSettingsMessage::autosyncMinTime() const
{
    Q_D(const DeviceSettingsMessage);
    return d->autosyncMinTime;
}

bool DeviceSettingsMessage::lactateThresholdAutodetectEnabled() const
{
    Q_D(const DeviceSettingsMessage);
    return d->lactateThresholdAutodetectEnabled;
}

bool DeviceSettingsMessage::bleAutoUploadEnabled() const
{
    Q_D(const DeviceSettingsMessage);
    return d->bleAutoUploadEnabled;
}

AutoSyncFrequency DeviceSettingsMessage::autoSyncFrequency() const
{
    Q_D(const DeviceSettingsMessage);
    return d->autoSyncFrequency;
}

AutoActivityDetect DeviceSettingsMessage::autoActivityDetect() const
{
    Q_D(const DeviceSettingsMessage);
    return d->autoActivityDetect;
}

quint8 DeviceSettingsMessage::numberOfScreens() const
{
    Q_D(const DeviceSettingsMessage);
    return d->numberOfScreens;
}

DisplayOrientation DeviceSettingsMessage::smartNotificationDisplayOrientation() const
{
    Q_D(const DeviceSettingsMessage);
    return d->smartNotificationDisplayOrientation;
}

Switch DeviceSettingsMessage::tapInterface() const
{
    Q_D(const DeviceSettingsMessage);
    return d->tapInterface;
}

TapSensitivity DeviceSettingsMessage::tapSensitivity() const
{
    Q_D(const DeviceSettingsMessage);
    return d->tapSensitivity;
}

void DeviceSettingsMessage::setActiveTimeZone(const quint8 activeTimeZone)
{
    Q_D(DeviceSettingsMessage);
    d->activeTimeZone = activeTimeZone;
}
void DeviceSettingsMessage::setUtcOffset(const quint32 utcOffset)
{
    Q_D(DeviceSettingsMessage);
    d->utcOffset = utcOffset;
}
void DeviceSettingsMessage::setTimeOffset(const quint32 timeOffset)
{
    Q_D(DeviceSettingsMessage);
    d->timeOffset = timeOffset;
}
void DeviceSettingsMessage::setTimeMode(const TimeMode timeMode)
{
    Q_D(DeviceSettingsMessage);
    d->timeMode = timeMode;
}
void DeviceSettingsMessage::setTimeZoneOffset(const qint8 timeZoneOffset)
{
    Q_D(DeviceSettingsMessage);
    d->timeZoneOffset = timeZoneOffset;
}
void DeviceSettingsMessage::setBacklightMode(const BacklightMode backlightMode)
{
    Q_D(DeviceSettingsMessage);
    d->backlightMode = backlightMode;
}
void DeviceSettingsMessage::setActivityTrackerEnabled(const bool activityTrackerEnabled)
{
    Q_D(DeviceSettingsMessage);
    d->activityTrackerEnabled = activityTrackerEnabled;
}
void DeviceSettingsMessage::setClockTime(const DateTime clockTime)
{
    Q_D(DeviceSettingsMessage);
    d->clockTime = clockTime;
}
void DeviceSettingsMessage::setPagesEnabled(const quint16 pagesEnabled)
{
    Q_D(DeviceSettingsMessage);
    d->pagesEnabled = pagesEnabled;
}
void DeviceSettingsMessage::setMoveAlertEnabled(const bool moveAlertEnabled)
{
    Q_D(DeviceSettingsMessage);
    d->moveAlertEnabled = moveAlertEnabled;
}
void DeviceSettingsMessage::setDateMode(const DateMode dateMode)
{
    Q_D(DeviceSettingsMessage);
    d->dateMode = dateMode;
}
void DeviceSettingsMessage::setDisplayOrientation(const DisplayOrientation displayOrientation)
{
    Q_D(DeviceSettingsMessage);
    d->displayOrientation = displayOrientation;
}
void DeviceSettingsMessage::setMountingSide(const Side mountingSide)
{
    Q_D(DeviceSettingsMessage);
    d->mountingSide = mountingSide;
}
void DeviceSettingsMessage::setDefaultPage(const quint16 defaultPage)
{
    Q_D(DeviceSettingsMessage);
    d->defaultPage = defaultPage;
}
void DeviceSettingsMessage::setAutosyncMinSteps(const quint16 autosyncMinSteps)
{
    Q_D(DeviceSettingsMessage);
    d->autosyncMinSteps = autosyncMinSteps;
}
void DeviceSettingsMessage::setAutosyncMinTime(const quint16 autosyncMinTime)
{
    Q_D(DeviceSettingsMessage);
    d->autosyncMinTime = autosyncMinTime;
}
void DeviceSettingsMessage::setLactateThresholdAutodetectEnabled(const bool lactateThresholdAutodetectEnabled)
{
    Q_D(DeviceSettingsMessage);
    d->lactateThresholdAutodetectEnabled = lactateThresholdAutodetectEnabled;
}
void DeviceSettingsMessage::setBleAutoUploadEnabled(const bool bleAutoUploadEnabled)
{
    Q_D(DeviceSettingsMessage);
    d->bleAutoUploadEnabled = bleAutoUploadEnabled;
}
void DeviceSettingsMessage::setAutoSyncFrequency(const AutoSyncFrequency autoSyncFrequency)
{
    Q_D(DeviceSettingsMessage);
    d->autoSyncFrequency = autoSyncFrequency;
}
void DeviceSettingsMessage::setAutoActivityDetect(const AutoActivityDetect autoActivityDetect)
{
    Q_D(DeviceSettingsMessage);
    d->autoActivityDetect = autoActivityDetect;
}
void DeviceSettingsMessage::setNumberOfScreens(const quint8 numberOfScreens)
{
    Q_D(DeviceSettingsMessage);
    d->numberOfScreens = numberOfScreens;
}
void DeviceSettingsMessage::setSmartNotificationDisplayOrientation(const DisplayOrientation smartNotificationDisplayOrientation)
{
    Q_D(DeviceSettingsMessage);
    d->smartNotificationDisplayOrientation = smartNotificationDisplayOrientation;
}
void DeviceSettingsMessage::setTapInterface(const Switch tapInterface)
{
    Q_D(DeviceSettingsMessage);
    d->tapInterface = tapInterface;
}
void DeviceSettingsMessage::setTapSensitivity(const TapSensitivity tapSensitivity)
{
    Q_D(DeviceSettingsMessage);
    d->tapSensitivity = tapSensitivity;
}

DeviceSettingsMessagePrivate::DeviceSettingsMessagePrivate(DeviceSettingsMessage * const q)
  : FitDataMessagePrivate(q)
  , activeTimeZone(0xFF)
  , utcOffset(0xFFFFFFFF)
  , timeOffset(0xFFFFFFFF)
  , timeMode(static_cast<TimeMode>(-1))
  , timeZoneOffset(0x7F)
  , backlightMode(static_cast<BacklightMode>(-1))
  , activityTrackerEnabled(static_cast<bool>(-1))
  , clockTime(static_cast<DateTime>(-1))
  , pagesEnabled(0xFFFF)
  , moveAlertEnabled(static_cast<bool>(-1))
  , dateMode(static_cast<DateMode>(-1))
  , displayOrientation(static_cast<DisplayOrientation>(-1))
  , mountingSide(static_cast<Side>(-1))
  , defaultPage(0xFFFF)
  , autosyncMinSteps(0xFFFF)
  , autosyncMinTime(0xFFFF)
  , lactateThresholdAutodetectEnabled(static_cast<bool>(-1))
  , bleAutoUploadEnabled(static_cast<bool>(-1))
  , autoSyncFrequency(static_cast<AutoSyncFrequency>(-1))
  , autoActivityDetect(static_cast<AutoActivityDetect>(-1))
  , numberOfScreens(0xFF)
  , smartNotificationDisplayOrientation(static_cast<DisplayOrientation>(-1))
  , tapInterface(static_cast<Switch>(-1))
  , tapSensitivity(static_cast<TapSensitivity>(-1))
{
    globalMessageNumber = MesgNum::DeviceSettings;
}

DeviceSettingsMessagePrivate::~DeviceSettingsMessagePrivate()
{

}

bool DeviceSettingsMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:device_settings.activeTimeZone
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "device_settings.activeTimeZone")) return false;
        this->activeTimeZone = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:device_settings.utcOffset
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "device_settings.utcOffset")) return false;
        this->utcOffset = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:device_settings.timeOffset
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "device_settings.timeOffset")) return false;
        this->timeOffset = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:device_settings.timeMode
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_settings.timeMode")) return false;
        this->timeMode = static_cast<TimeMode>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:device_settings.timeZoneOffset
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "device_settings.timeZoneOffset")) return false;
        this->timeZoneOffset = static_cast<qint8>(data.at(0));
        break;
    case 12: // See Profile.xlsx::Messages:device_settings.backlightMode
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_settings.backlightMode")) return false;
        this->backlightMode = static_cast<BacklightMode>(data.at(0));
        break;
    case 36: // See Profile.xlsx::Messages:device_settings.activityTrackerEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "device_settings.activityTrackerEnabled")) return false;
        this->activityTrackerEnabled = static_cast<bool>(data.at(0));
        break;
    case 39: // See Profile.xlsx::Messages:device_settings.clockTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "device_settings.clockTime")) return false;
        this->clockTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 40: // See Profile.xlsx::Messages:device_settings.pagesEnabled
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "device_settings.pagesEnabled")) return false;
        this->pagesEnabled = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 46: // See Profile.xlsx::Messages:device_settings.moveAlertEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "device_settings.moveAlertEnabled")) return false;
        this->moveAlertEnabled = static_cast<bool>(data.at(0));
        break;
    case 47: // See Profile.xlsx::Messages:device_settings.dateMode
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_settings.dateMode")) return false;
        this->dateMode = static_cast<DateMode>(data.at(0));
        break;
    case 55: // See Profile.xlsx::Messages:device_settings.displayOrientation
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_settings.displayOrientation")) return false;
        this->displayOrientation = static_cast<DisplayOrientation>(data.at(0));
        break;
    case 56: // See Profile.xlsx::Messages:device_settings.mountingSide
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_settings.mountingSide")) return false;
        this->mountingSide = static_cast<Side>(data.at(0));
        break;
    case 57: // See Profile.xlsx::Messages:device_settings.defaultPage
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "device_settings.defaultPage")) return false;
        this->defaultPage = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 58: // See Profile.xlsx::Messages:device_settings.autosyncMinSteps
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "device_settings.autosyncMinSteps")) return false;
        this->autosyncMinSteps = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 59: // See Profile.xlsx::Messages:device_settings.autosyncMinTime
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "device_settings.autosyncMinTime")) return false;
        this->autosyncMinTime = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 80: // See Profile.xlsx::Messages:device_settings.lactateThresholdAutodetectEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "device_settings.lactateThresholdAutodetectEnabled")) return false;
        this->lactateThresholdAutodetectEnabled = static_cast<bool>(data.at(0));
        break;
    case 86: // See Profile.xlsx::Messages:device_settings.bleAutoUploadEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "device_settings.bleAutoUploadEnabled")) return false;
        this->bleAutoUploadEnabled = static_cast<bool>(data.at(0));
        break;
    case 89: // See Profile.xlsx::Messages:device_settings.autoSyncFrequency
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_settings.autoSyncFrequency")) return false;
        this->autoSyncFrequency = static_cast<AutoSyncFrequency>(data.at(0));
        break;
    case 90: // See Profile.xlsx::Messages:device_settings.autoActivityDetect
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "device_settings.autoActivityDetect")) return false;
        this->autoActivityDetect = static_cast<AutoActivityDetect>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 94: // See Profile.xlsx::Messages:device_settings.numberOfScreens
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "device_settings.numberOfScreens")) return false;
        this->numberOfScreens = static_cast<quint8>(data.at(0));
        break;
    case 95: // See Profile.xlsx::Messages:device_settings.smartNotificationDisplayOrientation
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_settings.smartNotificationDisplayOrientation")) return false;
        this->smartNotificationDisplayOrientation = static_cast<DisplayOrientation>(data.at(0));
        break;
    case 134: // See Profile.xlsx::Messages:device_settings.tapInterface
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_settings.tapInterface")) return false;
        this->tapInterface = static_cast<Switch>(data.at(0));
        break;
    case 174: // See Profile.xlsx::Messages:device_settings.tapSensitivity
        if (!verify(data, baseType, 1, FitBaseType::Enum, "device_settings.tapSensitivity")) return false;
        this->tapSensitivity = static_cast<TapSensitivity>(data.at(0));
        break;
    default:
        qWarning() << "unknown device_settings message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
