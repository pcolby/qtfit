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

#include "connectivitymessage.h"
#include "connectivitymessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

ConnectivityMessage::ConnectivityMessage() : FitDataMessage(new ConnectivityMessagePrivate(this))
{

}

bool ConnectivityMessage::bluetoothEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->bluetoothEnabled;
}

bool ConnectivityMessage::bluetoothLeEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->bluetoothLeEnabled;
}

bool ConnectivityMessage::antEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->antEnabled;
}

QString ConnectivityMessage::name() const
{
    Q_D(const ConnectivityMessage);
    return d->name;
}

bool ConnectivityMessage::liveTrackingEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->liveTrackingEnabled;
}

bool ConnectivityMessage::weatherConditionsEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->weatherConditionsEnabled;
}

bool ConnectivityMessage::weatherAlertsEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->weatherAlertsEnabled;
}

bool ConnectivityMessage::autoActivityUploadEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->autoActivityUploadEnabled;
}

bool ConnectivityMessage::courseDownloadEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->courseDownloadEnabled;
}

bool ConnectivityMessage::workoutDownloadEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->workoutDownloadEnabled;
}

bool ConnectivityMessage::gpsEphemerisDownloadEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->gpsEphemerisDownloadEnabled;
}

bool ConnectivityMessage::incidentDetectionEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->incidentDetectionEnabled;
}

bool ConnectivityMessage::grouptrackEnabled() const
{
    Q_D(const ConnectivityMessage);
    return d->grouptrackEnabled;
}

void ConnectivityMessage::setBluetoothEnabled(const bool bluetoothEnabled)
{
    Q_D(ConnectivityMessage);
    d->bluetoothEnabled = bluetoothEnabled;
}
void ConnectivityMessage::setBluetoothLeEnabled(const bool bluetoothLeEnabled)
{
    Q_D(ConnectivityMessage);
    d->bluetoothLeEnabled = bluetoothLeEnabled;
}
void ConnectivityMessage::setAntEnabled(const bool antEnabled)
{
    Q_D(ConnectivityMessage);
    d->antEnabled = antEnabled;
}
void ConnectivityMessage::setName(const QString name)
{
    Q_D(ConnectivityMessage);
    d->name = name;
}
void ConnectivityMessage::setLiveTrackingEnabled(const bool liveTrackingEnabled)
{
    Q_D(ConnectivityMessage);
    d->liveTrackingEnabled = liveTrackingEnabled;
}
void ConnectivityMessage::setWeatherConditionsEnabled(const bool weatherConditionsEnabled)
{
    Q_D(ConnectivityMessage);
    d->weatherConditionsEnabled = weatherConditionsEnabled;
}
void ConnectivityMessage::setWeatherAlertsEnabled(const bool weatherAlertsEnabled)
{
    Q_D(ConnectivityMessage);
    d->weatherAlertsEnabled = weatherAlertsEnabled;
}
void ConnectivityMessage::setAutoActivityUploadEnabled(const bool autoActivityUploadEnabled)
{
    Q_D(ConnectivityMessage);
    d->autoActivityUploadEnabled = autoActivityUploadEnabled;
}
void ConnectivityMessage::setCourseDownloadEnabled(const bool courseDownloadEnabled)
{
    Q_D(ConnectivityMessage);
    d->courseDownloadEnabled = courseDownloadEnabled;
}
void ConnectivityMessage::setWorkoutDownloadEnabled(const bool workoutDownloadEnabled)
{
    Q_D(ConnectivityMessage);
    d->workoutDownloadEnabled = workoutDownloadEnabled;
}
void ConnectivityMessage::setGpsEphemerisDownloadEnabled(const bool gpsEphemerisDownloadEnabled)
{
    Q_D(ConnectivityMessage);
    d->gpsEphemerisDownloadEnabled = gpsEphemerisDownloadEnabled;
}
void ConnectivityMessage::setIncidentDetectionEnabled(const bool incidentDetectionEnabled)
{
    Q_D(ConnectivityMessage);
    d->incidentDetectionEnabled = incidentDetectionEnabled;
}
void ConnectivityMessage::setGrouptrackEnabled(const bool grouptrackEnabled)
{
    Q_D(ConnectivityMessage);
    d->grouptrackEnabled = grouptrackEnabled;
}

ConnectivityMessagePrivate::ConnectivityMessagePrivate(ConnectivityMessage * const q)
  : FitDataMessagePrivate(q)
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

ConnectivityMessagePrivate::~ConnectivityMessagePrivate()
{

}

bool ConnectivityMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:connectivity.bluetoothEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.bluetoothEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.bluetoothEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->bluetoothEnabled = static_cast<bool>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:connectivity.bluetoothLeEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.bluetoothLeEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.bluetoothLeEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->bluetoothLeEnabled = static_cast<bool>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:connectivity.antEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.antEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.antEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->antEnabled = static_cast<bool>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:connectivity.name
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.name has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "connectivity.name size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->name = QString::fromUtf8(data);
        break;
    case 4: // See Profile.xlsx::Messages:connectivity.liveTrackingEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.liveTrackingEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.liveTrackingEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->liveTrackingEnabled = static_cast<bool>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:connectivity.weatherConditionsEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.weatherConditionsEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.weatherConditionsEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->weatherConditionsEnabled = static_cast<bool>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:connectivity.weatherAlertsEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.weatherAlertsEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.weatherAlertsEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->weatherAlertsEnabled = static_cast<bool>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:connectivity.autoActivityUploadEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.autoActivityUploadEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.autoActivityUploadEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->autoActivityUploadEnabled = static_cast<bool>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:connectivity.courseDownloadEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.courseDownloadEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.courseDownloadEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->courseDownloadEnabled = static_cast<bool>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:connectivity.workoutDownloadEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.workoutDownloadEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.workoutDownloadEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->workoutDownloadEnabled = static_cast<bool>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:connectivity.gpsEphemerisDownloadEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.gpsEphemerisDownloadEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.gpsEphemerisDownloadEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->gpsEphemerisDownloadEnabled = static_cast<bool>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:connectivity.incidentDetectionEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.incidentDetectionEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.incidentDetectionEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->incidentDetectionEnabled = static_cast<bool>(data.at(0));
        break;
    case 12: // See Profile.xlsx::Messages:connectivity.grouptrackEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "connectivity.grouptrackEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "connectivity.grouptrackEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->grouptrackEnabled = static_cast<bool>(data.at(0));
        break;
    default:
        qWarning() << "unknown connectivity message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
