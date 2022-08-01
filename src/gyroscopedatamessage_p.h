// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
