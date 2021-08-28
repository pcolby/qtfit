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
 * Defines the ConnectivityMessage, and ConnectivityMessagePrivate classes.
 */

#include "connectivitymessage.h"
#include "connectivitymessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class ConnectivityMessage
 *
 * The ConnectivityMessage class represents a FIT ConnectivityMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a ConnectivityMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ConnectivityMessage::ConnectivityMessage() : AbstractDataMessage(new ConnectivityMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a ConnectivityMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
ConnectivityMessage::ConnectivityMessage(ConnectivityMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the ConnectivityMessage data message's \c bluetoothEnabled field's current value.
 *
 * Use Bluetooth for connectivity features
 *
 * \return the \c bluetoothEnabled field value.
 */
bool ConnectivityMessage::bluetoothEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->bluetoothEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c bluetoothLeEnabled field's current value.
 *
 * Use Bluetooth Low Energy for connectivity features
 *
 * \return the \c bluetoothLeEnabled field value.
 */
bool ConnectivityMessage::bluetoothLeEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->bluetoothLeEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c antEnabled field's current value.
 *
 * Use ANT for connectivity features
 *
 * \return the \c antEnabled field value.
 */
bool ConnectivityMessage::antEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->antEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString ConnectivityMessage::name() const
{
    Q_D(const ConnectivityMessage);
    return d->name;
}

/*!
 * Returns the ConnectivityMessage data message's \c liveTrackingEnabled field's current value.
 *
 * \return the \c liveTrackingEnabled field value.
 */
bool ConnectivityMessage::liveTrackingEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->liveTrackingEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c weatherConditionsEnabled field's current value.
 *
 * \return the \c weatherConditionsEnabled field value.
 */
bool ConnectivityMessage::weatherConditionsEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->weatherConditionsEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c weatherAlertsEnabled field's current value.
 *
 * \return the \c weatherAlertsEnabled field value.
 */
bool ConnectivityMessage::weatherAlertsEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->weatherAlertsEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c autoActivityUploadEnabled field's current value.
 *
 * \return the \c autoActivityUploadEnabled field value.
 */
bool ConnectivityMessage::autoActivityUploadEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->autoActivityUploadEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c courseDownloadEnabled field's current value.
 *
 * \return the \c courseDownloadEnabled field value.
 */
bool ConnectivityMessage::courseDownloadEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->courseDownloadEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c workoutDownloadEnabled field's current value.
 *
 * \return the \c workoutDownloadEnabled field value.
 */
bool ConnectivityMessage::workoutDownloadEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->workoutDownloadEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c gpsEphemerisDownloadEnabled field's current value.
 *
 * \return the \c gpsEphemerisDownloadEnabled field value.
 */
bool ConnectivityMessage::gpsEphemerisDownloadEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->gpsEphemerisDownloadEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c incidentDetectionEnabled field's current value.
 *
 * \return the \c incidentDetectionEnabled field value.
 */
bool ConnectivityMessage::incidentDetectionEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->incidentDetectionEnabled;
}

/*!
 * Returns the ConnectivityMessage data message's \c grouptrackEnabled field's current value.
 *
 * \return the \c grouptrackEnabled field value.
 */
bool ConnectivityMessage::grouptrackEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->grouptrackEnabled;
}

/*!
 * Sets the \c bluetoothEnabled field to \a bluetoothEnabled.
 *
 * \param bluetoothEnabled The field value to set.
 */
void ConnectivityMessage::setBluetoothEnabled(const bool bluetoothEnabled)
{
    Q_D(ConnectivityMessage);
    d->bluetoothEnabled = bluetoothEnabled;
}
/*!
 * Sets the \c bluetoothLeEnabled field to \a bluetoothLeEnabled.
 *
 * \param bluetoothLeEnabled The field value to set.
 */
void ConnectivityMessage::setBluetoothLeEnabled(const bool bluetoothLeEnabled)
{
    Q_D(ConnectivityMessage);
    d->bluetoothLeEnabled = bluetoothLeEnabled;
}
/*!
 * Sets the \c antEnabled field to \a antEnabled.
 *
 * \param antEnabled The field value to set.
 */
void ConnectivityMessage::setAntEnabled(const bool antEnabled)
{
    Q_D(ConnectivityMessage);
    d->antEnabled = antEnabled;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void ConnectivityMessage::setName(const QString name)
{
    Q_D(ConnectivityMessage);
    d->name = name;
}
/*!
 * Sets the \c liveTrackingEnabled field to \a liveTrackingEnabled.
 *
 * \param liveTrackingEnabled The field value to set.
 */
void ConnectivityMessage::setLiveTrackingEnabled(const bool liveTrackingEnabled)
{
    Q_D(ConnectivityMessage);
    d->liveTrackingEnabled = liveTrackingEnabled;
}
/*!
 * Sets the \c weatherConditionsEnabled field to \a weatherConditionsEnabled.
 *
 * \param weatherConditionsEnabled The field value to set.
 */
void ConnectivityMessage::setWeatherConditionsEnabled(const bool weatherConditionsEnabled)
{
    Q_D(ConnectivityMessage);
    d->weatherConditionsEnabled = weatherConditionsEnabled;
}
/*!
 * Sets the \c weatherAlertsEnabled field to \a weatherAlertsEnabled.
 *
 * \param weatherAlertsEnabled The field value to set.
 */
void ConnectivityMessage::setWeatherAlertsEnabled(const bool weatherAlertsEnabled)
{
    Q_D(ConnectivityMessage);
    d->weatherAlertsEnabled = weatherAlertsEnabled;
}
/*!
 * Sets the \c autoActivityUploadEnabled field to \a autoActivityUploadEnabled.
 *
 * \param autoActivityUploadEnabled The field value to set.
 */
void ConnectivityMessage::setAutoActivityUploadEnabled(const bool autoActivityUploadEnabled)
{
    Q_D(ConnectivityMessage);
    d->autoActivityUploadEnabled = autoActivityUploadEnabled;
}
/*!
 * Sets the \c courseDownloadEnabled field to \a courseDownloadEnabled.
 *
 * \param courseDownloadEnabled The field value to set.
 */
void ConnectivityMessage::setCourseDownloadEnabled(const bool courseDownloadEnabled)
{
    Q_D(ConnectivityMessage);
    d->courseDownloadEnabled = courseDownloadEnabled;
}
/*!
 * Sets the \c workoutDownloadEnabled field to \a workoutDownloadEnabled.
 *
 * \param workoutDownloadEnabled The field value to set.
 */
void ConnectivityMessage::setWorkoutDownloadEnabled(const bool workoutDownloadEnabled)
{
    Q_D(ConnectivityMessage);
    d->workoutDownloadEnabled = workoutDownloadEnabled;
}
/*!
 * Sets the \c gpsEphemerisDownloadEnabled field to \a gpsEphemerisDownloadEnabled.
 *
 * \param gpsEphemerisDownloadEnabled The field value to set.
 */
void ConnectivityMessage::setGpsEphemerisDownloadEnabled(const bool gpsEphemerisDownloadEnabled)
{
    Q_D(ConnectivityMessage);
    d->gpsEphemerisDownloadEnabled = gpsEphemerisDownloadEnabled;
}
/*!
 * Sets the \c incidentDetectionEnabled field to \a incidentDetectionEnabled.
 *
 * \param incidentDetectionEnabled The field value to set.
 */
void ConnectivityMessage::setIncidentDetectionEnabled(const bool incidentDetectionEnabled)
{
    Q_D(ConnectivityMessage);
    d->incidentDetectionEnabled = incidentDetectionEnabled;
}
/*!
 * Sets the \c grouptrackEnabled field to \a grouptrackEnabled.
 *
 * \param grouptrackEnabled The field value to set.
 */
void ConnectivityMessage::setGrouptrackEnabled(const bool grouptrackEnabled)
{
    Q_D(ConnectivityMessage);
    d->grouptrackEnabled = grouptrackEnabled;
}

/// \cond internal

/*!
 * \internal
 *
 * \class ConnectivityMessagePrivate
 *
 * The ConnectivityMessagePrivate class provides private implementation for the ConnectivityMessage.
 *
 * \sa ConnectivityMessage
 */

/*!
 * \internal
 *
 * Constructs a ConnectivityMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ConnectivityMessagePrivate::ConnectivityMessagePrivate(ConnectivityMessage * const q)
  : AbstractDataMessagePrivate(q)
  , bluetoothEnabled(static_cast<bool>(-1))
  , bluetoothLeEnabled(static_cast<bool>(-1))
  , antEnabled(static_cast<bool>(-1))
  , liveTrackingEnabled(static_cast<bool>(-1))
  , weatherConditionsEnabled(static_cast<bool>(-1))
  , weatherAlertsEnabled(static_cast<bool>(-1))
  , autoActivityUploadEnabled(static_cast<bool>(-1))
  , courseDownloadEnabled(static_cast<bool>(-1))
  , workoutDownloadEnabled(static_cast<bool>(-1))
  , gpsEphemerisDownloadEnabled(static_cast<bool>(-1))
  , incidentDetectionEnabled(static_cast<bool>(-1))
  , grouptrackEnabled(static_cast<bool>(-1))
{
    globalMessageNumber = MesgNum::Connectivity;
}

/*!
 * \internal
 *
 * Destroys the ConnectivityMessagePrivate object.
 */
ConnectivityMessagePrivate::~ConnectivityMessagePrivate()
{

}

bool ConnectivityMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:connectivity.bluetoothEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.bluetoothEnabled")) return false;
        this->bluetoothEnabled = static_cast<bool>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:connectivity.bluetoothLeEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.bluetoothLeEnabled")) return false;
        this->bluetoothLeEnabled = static_cast<bool>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:connectivity.antEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.antEnabled")) return false;
        this->antEnabled = static_cast<bool>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:connectivity.name
        if (!verify(data, baseType, 1, FitBaseType::String, "connectivity.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    case 4: // See Profile.xlsx::Messages:connectivity.liveTrackingEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.liveTrackingEnabled")) return false;
        this->liveTrackingEnabled = static_cast<bool>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:connectivity.weatherConditionsEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.weatherConditionsEnabled")) return false;
        this->weatherConditionsEnabled = static_cast<bool>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:connectivity.weatherAlertsEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.weatherAlertsEnabled")) return false;
        this->weatherAlertsEnabled = static_cast<bool>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:connectivity.autoActivityUploadEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.autoActivityUploadEnabled")) return false;
        this->autoActivityUploadEnabled = static_cast<bool>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:connectivity.courseDownloadEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.courseDownloadEnabled")) return false;
        this->courseDownloadEnabled = static_cast<bool>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:connectivity.workoutDownloadEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.workoutDownloadEnabled")) return false;
        this->workoutDownloadEnabled = static_cast<bool>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:connectivity.gpsEphemerisDownloadEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.gpsEphemerisDownloadEnabled")) return false;
        this->gpsEphemerisDownloadEnabled = static_cast<bool>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:connectivity.incidentDetectionEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.incidentDetectionEnabled")) return false;
        this->incidentDetectionEnabled = static_cast<bool>(data.at(0));
        break;
    case 12: // See Profile.xlsx::Messages:connectivity.grouptrackEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "connectivity.grouptrackEnabled")) return false;
        this->grouptrackEnabled = static_cast<bool>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown connectivity message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
