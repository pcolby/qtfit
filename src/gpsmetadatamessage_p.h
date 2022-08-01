// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the GpsMetadataMessagePrivate class.
 */
#ifndef QTFIT_GPSMETADATAMESSAGE_P_H
#define QTFIT_GPSMETADATAMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class GpsMetadataMessage;

class GpsMetadataMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The GpsMetadataMessage FIT message's timestamp field.
     *
     * Whole second part of the timestamp.
     */
    DateTime timestamp;

    /*!
     * The GpsMetadataMessage FIT message's timestampMs field.
     *
     * Millisecond part of the timestamp.
     */
    quint16 timestampMs;

    /*!
     * The GpsMetadataMessage FIT message's positionLat field.
     */
    qint32 positionLat;

    /*!
     * The GpsMetadataMessage FIT message's positionLong field.
     */
    qint32 positionLong;

    /*!
     * The GpsMetadataMessage FIT message's enhancedAltitude field.
     */
    quint32 enhancedAltitude;

    /*!
     * The GpsMetadataMessage FIT message's enhancedSpeed field.
     */
    quint32 enhancedSpeed;

    /*!
     * The GpsMetadataMessage FIT message's heading field.
     */
    quint16 heading;

    /*!
     * The GpsMetadataMessage FIT message's utcTimestamp field.
     *
     * Used to correlate UTC to system time if the timestamp of the message is in system time.  This
     * UTC time is derived from the GPS data.
     */
    DateTime utcTimestamp;

    /*!
     * The GpsMetadataMessage FIT message's velocity field.
     *
     * velocity[0] is lon velocity.  Velocity[1] is lat velocity.  Velocity[2] is altitude velocity.
     */
    qint16 velocity;

    GpsMetadataMessagePrivate() = delete;
    explicit GpsMetadataMessagePrivate(GpsMetadataMessage * const q);
    virtual ~GpsMetadataMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(GpsMetadataMessage)
    Q_DISABLE_COPY(GpsMetadataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_GPSMETADATAMESSAGE_P_H
