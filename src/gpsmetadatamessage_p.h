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
