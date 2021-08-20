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

#ifndef QTFIT_GPSMETADATAMESSAGE_H
#define QTFIT_GPSMETADATAMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class GpsMetadataMessagePrivate;

class QTFIT_EXPORT GpsMetadataMessage : public FitDataMessage {

public:
    GpsMetadataMessage();
    ~GpsMetadataMessage();

    DateTime timestamp() const;
    quint16 timestampMs() const;
    qint32 positionLat() const;
    qint32 positionLong() const;
    quint32 enhancedAltitude() const;
    quint32 enhancedSpeed() const;
    quint16 heading() const;
    DateTime utcTimestamp() const;
    qint16 velocity() const;

    void setTimestamp(const DateTime timestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setPositionLat(const qint32 positionLat);
    void setPositionLong(const qint32 positionLong);
    void setEnhancedAltitude(const quint32 enhancedAltitude);
    void setEnhancedSpeed(const quint32 enhancedSpeed);
    void setHeading(const quint16 heading);
    void setUtcTimestamp(const DateTime utcTimestamp);
    void setVelocity(const qint16 velocity);

protected:
    /// @cond internal
    explicit GpsMetadataMessage(GpsMetadataMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(GpsMetadataMessage)
  //Q_DISABLE_COPY(GpsMetadataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_GPSMETADATAMESSAGE_H
