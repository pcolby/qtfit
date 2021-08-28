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
 * Declares the GyroscopeDataMessagePrivate class.
 */
#ifndef QTFIT_GYROSCOPEDATAMESSAGE_P_H
#define QTFIT_GYROSCOPEDATAMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class GyroscopeDataMessage;

class GyroscopeDataMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The GyroscopeDataMessage FIT message's timestamp field.
     *
     * Whole second part of the timestamp
     */
    DateTime timestamp;

    /*!
     * The GyroscopeDataMessage FIT message's timestampMs field.
     *
     * Millisecond part of the timestamp.
     */
    quint16 timestampMs;

    /*!
     * The GyroscopeDataMessage FIT message's sampleTimeOffset field.
     *
     * Each time in the array describes the time at which the gyro sample with the corrosponding
     * index was taken. Limited to 30 samples in each message. The samples may span across seconds.
     * Array size must match the number of samples in gyro_x and gyro_y and gyro_z
     */
    quint16 sampleTimeOffset;

    /*!
     * The GyroscopeDataMessage FIT message's gyroX field.
     *
     * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
     * may span across seconds. A conversion will need to be done on this data once read.
     */
    quint16 gyroX;

    /*!
     * The GyroscopeDataMessage FIT message's gyroY field.
     *
     * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
     * may span across seconds. A conversion will need to be done on this data once read.
     */
    quint16 gyroY;

    /*!
     * The GyroscopeDataMessage FIT message's gyroZ field.
     *
     * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
     * may span across seconds. A conversion will need to be done on this data once read.
     */
    quint16 gyroZ;

    /*!
     * The GyroscopeDataMessage FIT message's calibratedGyroX field.
     *
     * Calibrated gyro reading
     */
    float calibratedGyroX;

    /*!
     * The GyroscopeDataMessage FIT message's calibratedGyroY field.
     *
     * Calibrated gyro reading
     */
    float calibratedGyroY;

    /*!
     * The GyroscopeDataMessage FIT message's calibratedGyroZ field.
     *
     * Calibrated gyro reading
     */
    float calibratedGyroZ;

    GyroscopeDataMessagePrivate() = delete;
    explicit GyroscopeDataMessagePrivate(GyroscopeDataMessage * const q);
    virtual ~GyroscopeDataMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(GyroscopeDataMessage)
    Q_DISABLE_COPY(GyroscopeDataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_GYROSCOPEDATAMESSAGE_P_H
