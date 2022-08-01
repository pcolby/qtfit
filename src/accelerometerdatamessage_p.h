// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the AccelerometerDataMessagePrivate class.
 */
#ifndef QTFIT_ACCELEROMETERDATAMESSAGE_P_H
#define QTFIT_ACCELEROMETERDATAMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class AccelerometerDataMessage;

class AccelerometerDataMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The AccelerometerDataMessage FIT message's timestamp field.
     *
     * Whole second part of the timestamp
     */
    DateTime timestamp;

    /*!
     * The AccelerometerDataMessage FIT message's timestampMs field.
     *
     * Millisecond part of the timestamp.
     */
    quint16 timestampMs;

    /*!
     * The AccelerometerDataMessage FIT message's sampleTimeOffset field.
     *
     * Each time in the array describes the time at which the accelerometer sample with the
     * corrosponding index was taken. Limited to 30 samples in each message. The samples may span
     * across seconds. Array size must match the number of samples in accel_x and accel_y and
     * accel_z
     */
    quint16 sampleTimeOffset;

    /*!
     * The AccelerometerDataMessage FIT message's accelX field.
     *
     * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
     * may span across seconds. A conversion will need to be done on this data once read.
     */
    quint16 accelX;

    /*!
     * The AccelerometerDataMessage FIT message's accelY field.
     *
     * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
     * may span across seconds. A conversion will need to be done on this data once read.
     */
    quint16 accelY;

    /*!
     * The AccelerometerDataMessage FIT message's accelZ field.
     *
     * These are the raw ADC reading. Maximum number of samples is 30 in each message. The samples
     * may span across seconds. A conversion will need to be done on this data once read.
     */
    quint16 accelZ;

    /*!
     * The AccelerometerDataMessage FIT message's calibratedAccelX field.
     *
     * Calibrated accel reading
     */
    float calibratedAccelX;

    /*!
     * The AccelerometerDataMessage FIT message's calibratedAccelY field.
     *
     * Calibrated accel reading
     */
    float calibratedAccelY;

    /*!
     * The AccelerometerDataMessage FIT message's calibratedAccelZ field.
     *
     * Calibrated accel reading
     */
    float calibratedAccelZ;

    /*!
     * The AccelerometerDataMessage FIT message's compressedCalibratedAccelX field.
     *
     * Calibrated accel reading
     */
    qint16 compressedCalibratedAccelX;

    /*!
     * The AccelerometerDataMessage FIT message's compressedCalibratedAccelY field.
     *
     * Calibrated accel reading
     */
    qint16 compressedCalibratedAccelY;

    /*!
     * The AccelerometerDataMessage FIT message's compressedCalibratedAccelZ field.
     *
     * Calibrated accel reading
     */
    qint16 compressedCalibratedAccelZ;

    AccelerometerDataMessagePrivate() = delete;
    explicit AccelerometerDataMessagePrivate(AccelerometerDataMessage * const q);
    virtual ~AccelerometerDataMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(AccelerometerDataMessage)
    Q_DISABLE_COPY(AccelerometerDataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ACCELEROMETERDATAMESSAGE_P_H
