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

/*!
 * \class DeviceSettingsMessage
 *
 * The DeviceSettingsMessage class represents a FIT DeviceSettingsMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid DeviceSettingsMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
DeviceSettingsMessage::DeviceSettingsMessage() : AbstractDataMessage(new DeviceSettingsMessagePrivate(this))
{

}

/*!
 * Returns the DeviceSettingsMessage data message's \c activeTimeZone field's current value.
 *
 * \return the \c activeTimeZone field value.
 */
quint8 DeviceSettingsMessage::activeTimeZone() const
{
    Q_D(const DeviceSettingsMessage);
    return d->activeTimeZone;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c utcOffset field's current value.
 *
 * \return the \c utcOffset field value.
 */
quint32 DeviceSettingsMessage::utcOffset() const
{
    Q_D(const DeviceSettingsMessage);
    return d->utcOffset;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c timeOffset field's current value.
 *
 * \return the \c timeOffset field value.
 */
quint32 DeviceSettingsMessage::timeOffset() const
{
    Q_D(const DeviceSettingsMessage);
    return d->timeOffset;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c timeMode field's current value.
 *
 * \return the \c timeMode field value.
 */
TimeMode DeviceSettingsMessage::timeMode() const
{
    Q_D(const DeviceSettingsMessage);
    return d->timeMode;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c timeZoneOffset field's current value.
 *
 * \return the \c timeZoneOffset field value.
 */
qint8 DeviceSettingsMessage::timeZoneOffset() const
{
    Q_D(const DeviceSettingsMessage);
    return d->timeZoneOffset;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c backlightMode field's current value.
 *
 * \return the \c backlightMode field value.
 */
BacklightMode DeviceSettingsMessage::backlightMode() const
{
    Q_D(const DeviceSettingsMessage);
    return d->backlightMode;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c activityTrackerEnabled field's current value.
 *
 * \return the \c activityTrackerEnabled field value.
 */
bool DeviceSettingsMessage::activityTrackerEnabled() const
{
    Q_D(const DeviceSettingsMessage);
    return d->activityTrackerEnabled;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c clockTime field's current value.
 *
 * \return the \c clockTime field value.
 */
DateTime DeviceSettingsMessage::clockTime() const
{
    Q_D(const DeviceSettingsMessage);
    return d->clockTime;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c pagesEnabled field's current value.
 *
 * \return the \c pagesEnabled field value.
 */
quint16 DeviceSettingsMessage::pagesEnabled() const
{
    Q_D(const DeviceSettingsMessage);
    return d->pagesEnabled;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c moveAlertEnabled field's current value.
 *
 * \return the \c moveAlertEnabled field value.
 */
bool DeviceSettingsMessage::moveAlertEnabled() const
{
    Q_D(const DeviceSettingsMessage);
    return d->moveAlertEnabled;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c dateMode field's current value.
 *
 * \return the \c dateMode field value.
 */
DateMode DeviceSettingsMessage::dateMode() const
{
    Q_D(const DeviceSettingsMessage);
    return d->dateMode;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c displayOrientation field's current value.
 *
 * \return the \c displayOrientation field value.
 */
DisplayOrientation DeviceSettingsMessage::displayOrientation() const
{
    Q_D(const DeviceSettingsMessage);
    return d->displayOrientation;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c mountingSide field's current value.
 *
 * \return the \c mountingSide field value.
 */
Side DeviceSettingsMessage::mountingSide() const
{
    Q_D(const DeviceSettingsMessage);
    return d->mountingSide;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c defaultPage field's current value.
 *
 * \return the \c defaultPage field value.
 */
quint16 DeviceSettingsMessage::defaultPage() const
{
    Q_D(const DeviceSettingsMessage);
    return d->defaultPage;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c autosyncMinSteps field's current value.
 *
 * \return the \c autosyncMinSteps field value.
 */
quint16 DeviceSettingsMessage::autosyncMinSteps() const
{
    Q_D(const DeviceSettingsMessage);
    return d->autosyncMinSteps;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c autosyncMinTime field's current value.
 *
 * \return the \c autosyncMinTime field value.
 */
quint16 DeviceSettingsMessage::autosyncMinTime() const
{
    Q_D(const DeviceSettingsMessage);
    return d->autosyncMinTime;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c lactateThresholdAutodetectEnabled field's current value.
 *
 * \return the \c lactateThresholdAutodetectEnabled field value.
 */
bool DeviceSettingsMessage::lactateThresholdAutodetectEnabled() const
{
    Q_D(const DeviceSettingsMessage);
    return d->lactateThresholdAutodetectEnabled;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c bleAutoUploadEnabled field's current value.
 *
 * \return the \c bleAutoUploadEnabled field value.
 */
bool DeviceSettingsMessage::bleAutoUploadEnabled() const
{
    Q_D(const DeviceSettingsMessage);
    return d->bleAutoUploadEnabled;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c autoSyncFrequency field's current value.
 *
 * \return the \c autoSyncFrequency field value.
 */
AutoSyncFrequency DeviceSettingsMessage::autoSyncFrequency() const
{
    Q_D(const DeviceSettingsMessage);
    return d->autoSyncFrequency;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c autoActivityDetect field's current value.
 *
 * \return the \c autoActivityDetect field value.
 */
AutoActivityDetect DeviceSettingsMessage::autoActivityDetect() const
{
    Q_D(const DeviceSettingsMessage);
    return d->autoActivityDetect;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c numberOfScreens field's current value.
 *
 * \return the \c numberOfScreens field value.
 */
quint8 DeviceSettingsMessage::numberOfScreens() const
{
    Q_D(const DeviceSettingsMessage);
    return d->numberOfScreens;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c smartNotificationDisplayOrientation field's current value.
 *
 * \return the \c smartNotificationDisplayOrientation field value.
 */
DisplayOrientation DeviceSettingsMessage::smartNotificationDisplayOrientation() const
{
    Q_D(const DeviceSettingsMessage);
    return d->smartNotificationDisplayOrientation;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c tapInterface field's current value.
 *
 * \return the \c tapInterface field value.
 */
Switch DeviceSettingsMessage::tapInterface() const
{
    Q_D(const DeviceSettingsMessage);
    return d->tapInterface;
}

/*!
 * Returns the DeviceSettingsMessage data message's \c tapSensitivity field's current value.
 *
 * \return the \c tapSensitivity field value.
 */
TapSensitivity DeviceSettingsMessage::tapSensitivity() const
{
    Q_D(const DeviceSettingsMessage);
    return d->tapSensitivity;
}

/*!
 * Sets the \c activeTimeZone field to \a activeTimeZone.
 *
 * \param activeTimeZone The field value to set.
 */
void DeviceSettingsMessage::setActiveTimeZone(const quint8 activeTimeZone)
{
    Q_D(DeviceSettingsMessage);
    d->activeTimeZone = activeTimeZone;
}
/*!
 * Sets the \c utcOffset field to \a utcOffset.
 *
 * \param utcOffset The field value to set.
 */
void DeviceSettingsMessage::setUtcOffset(const quint32 utcOffset)
{
    Q_D(DeviceSettingsMessage);
    d->utcOffset = utcOffset;
}
/*!
 * Sets the \c timeOffset field to \a timeOffset.
 *
 * \param timeOffset The field value to set.
 */
void DeviceSettingsMessage::setTimeOffset(const quint32 timeOffset)
{
    Q_D(DeviceSettingsMessage);
    d->timeOffset = timeOffset;
}
/*!
 * Sets the \c timeMode field to \a timeMode.
 *
 * \param timeMode The field value to set.
 */
void DeviceSettingsMessage::setTimeMode(const TimeMode timeMode)
{
    Q_D(DeviceSettingsMessage);
    d->timeMode = timeMode;
}
/*!
 * Sets the \c timeZoneOffset field to \a timeZoneOffset.
 *
 * \param timeZoneOffset The field value to set.
 */
void DeviceSettingsMessage::setTimeZoneOffset(const qint8 timeZoneOffset)
{
    Q_D(DeviceSettingsMessage);
    d->timeZoneOffset = timeZoneOffset;
}
/*!
 * Sets the \c backlightMode field to \a backlightMode.
 *
 * \param backlightMode The field value to set.
 */
void DeviceSettingsMessage::setBacklightMode(const BacklightMode backlightMode)
{
    Q_D(DeviceSettingsMessage);
    d->backlightMode = backlightMode;
}
/*!
 * Sets the \c activityTrackerEnabled field to \a activityTrackerEnabled.
 *
 * \param activityTrackerEnabled The field value to set.
 */
void DeviceSettingsMessage::setActivityTrackerEnabled(const bool activityTrackerEnabled)
{
    Q_D(DeviceSettingsMessage);
    d->activityTrackerEnabled = activityTrackerEnabled;
}
/*!
 * Sets the \c clockTime field to \a clockTime.
 *
 * \param clockTime The field value to set.
 */
void DeviceSettingsMessage::setClockTime(const DateTime clockTime)
{
    Q_D(DeviceSettingsMessage);
    d->clockTime = clockTime;
}
/*!
 * Sets the \c pagesEnabled field to \a pagesEnabled.
 *
 * \param pagesEnabled The field value to set.
 */
void DeviceSettingsMessage::setPagesEnabled(const quint16 pagesEnabled)
{
    Q_D(DeviceSettingsMessage);
    d->pagesEnabled = pagesEnabled;
}
/*!
 * Sets the \c moveAlertEnabled field to \a moveAlertEnabled.
 *
 * \param moveAlertEnabled The field value to set.
 */
void DeviceSettingsMessage::setMoveAlertEnabled(const bool moveAlertEnabled)
{
    Q_D(DeviceSettingsMessage);
    d->moveAlertEnabled = moveAlertEnabled;
}
/*!
 * Sets the \c dateMode field to \a dateMode.
 *
 * \param dateMode The field value to set.
 */
void DeviceSettingsMessage::setDateMode(const DateMode dateMode)
{
    Q_D(DeviceSettingsMessage);
    d->dateMode = dateMode;
}
/*!
 * Sets the \c displayOrientation field to \a displayOrientation.
 *
 * \param displayOrientation The field value to set.
 */
void DeviceSettingsMessage::setDisplayOrientation(const DisplayOrientation displayOrientation)
{
    Q_D(DeviceSettingsMessage);
    d->displayOrientation = displayOrientation;
}
/*!
 * Sets the \c mountingSide field to \a mountingSide.
 *
 * \param mountingSide The field value to set.
 */
void DeviceSettingsMessage::setMountingSide(const Side mountingSide)
{
    Q_D(DeviceSettingsMessage);
    d->mountingSide = mountingSide;
}
/*!
 * Sets the \c defaultPage field to \a defaultPage.
 *
 * \param defaultPage The field value to set.
 */
void DeviceSettingsMessage::setDefaultPage(const quint16 defaultPage)
{
    Q_D(DeviceSettingsMessage);
    d->defaultPage = defaultPage;
}
/*!
 * Sets the \c autosyncMinSteps field to \a autosyncMinSteps.
 *
 * \param autosyncMinSteps The field value to set.
 */
void DeviceSettingsMessage::setAutosyncMinSteps(const quint16 autosyncMinSteps)
{
    Q_D(DeviceSettingsMessage);
    d->autosyncMinSteps = autosyncMinSteps;
}
/*!
 * Sets the \c autosyncMinTime field to \a autosyncMinTime.
 *
 * \param autosyncMinTime The field value to set.
 */
void DeviceSettingsMessage::setAutosyncMinTime(const quint16 autosyncMinTime)
{
    Q_D(DeviceSettingsMessage);
    d->autosyncMinTime = autosyncMinTime;
}
/*!
 * Sets the \c lactateThresholdAutodetectEnabled field to \a lactateThresholdAutodetectEnabled.
 *
 * \param lactateThresholdAutodetectEnabled The field value to set.
 */
void DeviceSettingsMessage::setLactateThresholdAutodetectEnabled(const bool lactateThresholdAutodetectEnabled)
{
    Q_D(DeviceSettingsMessage);
    d->lactateThresholdAutodetectEnabled = lactateThresholdAutodetectEnabled;
}
/*!
 * Sets the \c bleAutoUploadEnabled field to \a bleAutoUploadEnabled.
 *
 * \param bleAutoUploadEnabled The field value to set.
 */
void DeviceSettingsMessage::setBleAutoUploadEnabled(const bool bleAutoUploadEnabled)
{
    Q_D(DeviceSettingsMessage);
    d->bleAutoUploadEnabled = bleAutoUploadEnabled;
}
/*!
 * Sets the \c autoSyncFrequency field to \a autoSyncFrequency.
 *
 * \param autoSyncFrequency The field value to set.
 */
void DeviceSettingsMessage::setAutoSyncFrequency(const AutoSyncFrequency autoSyncFrequency)
{
    Q_D(DeviceSettingsMessage);
    d->autoSyncFrequency = autoSyncFrequency;
}
/*!
 * Sets the \c autoActivityDetect field to \a autoActivityDetect.
 *
 * \param autoActivityDetect The field value to set.
 */
void DeviceSettingsMessage::setAutoActivityDetect(const AutoActivityDetect autoActivityDetect)
{
    Q_D(DeviceSettingsMessage);
    d->autoActivityDetect = autoActivityDetect;
}
/*!
 * Sets the \c numberOfScreens field to \a numberOfScreens.
 *
 * \param numberOfScreens The field value to set.
 */
void DeviceSettingsMessage::setNumberOfScreens(const quint8 numberOfScreens)
{
    Q_D(DeviceSettingsMessage);
    d->numberOfScreens = numberOfScreens;
}
/*!
 * Sets the \c smartNotificationDisplayOrientation field to \a smartNotificationDisplayOrientation.
 *
 * \param smartNotificationDisplayOrientation The field value to set.
 */
void DeviceSettingsMessage::setSmartNotificationDisplayOrientation(const DisplayOrientation smartNotificationDisplayOrientation)
{
    Q_D(DeviceSettingsMessage);
    d->smartNotificationDisplayOrientation = smartNotificationDisplayOrientation;
}
/*!
 * Sets the \c tapInterface field to \a tapInterface.
 *
 * \param tapInterface The field value to set.
 */
void DeviceSettingsMessage::setTapInterface(const Switch tapInterface)
{
    Q_D(DeviceSettingsMessage);
    d->tapInterface = tapInterface;
}
/*!
 * Sets the \c tapSensitivity field to \a tapSensitivity.
 *
 * \param tapSensitivity The field value to set.
 */
void DeviceSettingsMessage::setTapSensitivity(const TapSensitivity tapSensitivity)
{
    Q_D(DeviceSettingsMessage);
    d->tapSensitivity = tapSensitivity;
}

/*!
 * \internal
 *
 * \class DeviceSettingsMessagePrivate
 *
 * The DeviceSettingsMessagePrivate class provides private implementation for the DeviceSettingsMessage.
 *
 * \sa DeviceSettingsMessage
 */

/*!
 * \internal
 *
 * Constructs a DeviceSettingsMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
DeviceSettingsMessagePrivate::DeviceSettingsMessagePrivate(DeviceSettingsMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the DeviceSettingsMessagePrivate object.
 */
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
        qWarning() << "ignoring unknown device_settings message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

QTFIT_END_NAMESPACE
