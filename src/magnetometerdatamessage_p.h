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

#ifndef QTFIT_MAGNETOMETERDATAMESSAGE_P_H
#define QTFIT_MAGNETOMETERDATAMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class MagnetometerDataMessage;

class MagnetometerDataMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The MagnetometerDataMessage FIT message's timestamp field.
     *
     * Whole second part of the timestamp
     */
    DateTime timestamp;

    /*!
     * The MagnetometerDataMessage FIT message's timestampMs field.
     *
     * Millisecond part of the timestamp.
     */
    quint16 timestampMs;

    /*!
     * The MagnetometerDataMessage FIT message's sampleTimeOffset field.
     *
     * Each time in the array describes the time at which the compass sample with the corrosponding
     * index was taken. Limited to 30 samples in each message. The samples may span across seconds.
     * Array size must match the number of samples in cmps_x and cmps_y and cmps_z
     */
    quint16 sampleTimeOffset;

    /*!
     * The MagnetometerDataMessage FIT message's magX field.
     *
     * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
     * may span across seconds. A conversion will need to be done on this data once read.
     */
    quint16 magX;

    /*!
     * The MagnetometerDataMessage FIT message's magY field.
     *
     * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
     * may span across seconds. A conversion will need to be done on this data once read.
     */
    quint16 magY;

    /*!
     * The MagnetometerDataMessage FIT message's magZ field.
     *
     * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
     * may span across seconds. A conversion will need to be done on this data once read.
     */
    quint16 magZ;

    /*!
     * The MagnetometerDataMessage FIT message's calibratedMagX field.
     *
     * Calibrated Magnetometer reading
     */
    float calibratedMagX;

    /*!
     * The MagnetometerDataMessage FIT message's calibratedMagY field.
     *
     * Calibrated Magnetometer reading
     */
    float calibratedMagY;

    /*!
     * The MagnetometerDataMessage FIT message's calibratedMagZ field.
     *
     * Calibrated Magnetometer reading
     */
    float calibratedMagZ;

    MagnetometerDataMessagePrivate() = delete;
    explicit MagnetometerDataMessagePrivate(MagnetometerDataMessage * const q);
    virtual ~MagnetometerDataMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(MagnetometerDataMessage)
    Q_DISABLE_COPY(MagnetometerDataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MAGNETOMETERDATAMESSAGE_P_H
