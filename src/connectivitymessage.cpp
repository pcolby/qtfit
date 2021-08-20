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

/// @todo Generate implementation.
bool ConnectivityMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
