// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the MagnetometerDataMessagePrivate class.
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
