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

DeviceSettingsMessagePrivate::DeviceSettingsMessagePrivate(DeviceSettingsMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::DeviceSettings;
}

DeviceSettingsMessagePrivate::~DeviceSettingsMessagePrivate()
{

}

/// @todo Generate implementation.
bool DeviceSettingsMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE
