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

#ifndef QTFIT_CONNECTIVITYMESSAGE_H
#define QTFIT_CONNECTIVITYMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ConnectivityMessagePrivate;

class QTFIT_EXPORT ConnectivityMessage : public AbstractDataMessage {

public:
    ConnectivityMessage();
    ~ConnectivityMessage();

    bool bluetoothEnabled() const;
    bool bluetoothLeEnabled() const;
    bool antEnabled() const;
    QString name() const;
    bool liveTrackingEnabled() const;
    bool weatherConditionsEnabled() const;
    bool weatherAlertsEnabled() const;
    bool autoActivityUploadEnabled() const;
    bool courseDownloadEnabled() const;
    bool workoutDownloadEnabled() const;
    bool gpsEphemerisDownloadEnabled() const;
    bool incidentDetectionEnabled() const;
    bool grouptrackEnabled() const;

    void setBluetoothEnabled(const bool bluetoothEnabled);
    void setBluetoothLeEnabled(const bool bluetoothLeEnabled);
    void setAntEnabled(const bool antEnabled);
    void setName(const QString name);
    void setLiveTrackingEnabled(const bool liveTrackingEnabled);
    void setWeatherConditionsEnabled(const bool weatherConditionsEnabled);
    void setWeatherAlertsEnabled(const bool weatherAlertsEnabled);
    void setAutoActivityUploadEnabled(const bool autoActivityUploadEnabled);
    void setCourseDownloadEnabled(const bool courseDownloadEnabled);
    void setWorkoutDownloadEnabled(const bool workoutDownloadEnabled);
    void setGpsEphemerisDownloadEnabled(const bool gpsEphemerisDownloadEnabled);
    void setIncidentDetectionEnabled(const bool incidentDetectionEnabled);
    void setGrouptrackEnabled(const bool grouptrackEnabled);

protected:
    /// \cond internal
    explicit ConnectivityMessage(ConnectivityMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ConnectivityMessage)
  //Q_DISABLE_COPY(ConnectivityMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CONNECTIVITYMESSAGE_H
