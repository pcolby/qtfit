// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the GpsMetadataMessage class.
 */

#ifndef QTFIT_GPSMETADATAMESSAGE_H
#define QTFIT_GPSMETADATAMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class GpsMetadataMessagePrivate;

class QTFIT_EXPORT GpsMetadataMessage : public AbstractDataMessage {

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
    /// \cond internal
    explicit GpsMetadataMessage(GpsMetadataMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(GpsMetadataMessage)
  //Q_DISABLE_COPY(GpsMetadataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_GPSMETADATAMESSAGE_H
