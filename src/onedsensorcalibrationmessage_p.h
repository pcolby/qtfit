// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the OneDSensorCalibrationMessagePrivate class.
 */
#ifndef QTFIT_ONEDSENSORCALIBRATIONMESSAGE_P_H
#define QTFIT_ONEDSENSORCALIBRATIONMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class OneDSensorCalibrationMessage;

class OneDSensorCalibrationMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The OneDSensorCalibrationMessage FIT message's timestamp field.
     *
     * Whole second part of the timestamp
     */
    DateTime timestamp;

    /*!
     * The OneDSensorCalibrationMessage FIT message's sensorType field.
     *
     * Indicates which sensor the calibration is for
     */
    SensorType sensorType;

    /*!
     * The OneDSensorCalibrationMessage FIT message's calibrationFactor field.
     *
     * Calibration factor used to convert from raw ADC value to degrees, g,  etc.
     */
    quint32 calibrationFactor;

    /*!
     * The OneDSensorCalibrationMessage FIT message's calibrationDivisor field.
     *
     * Calibration factor divisor
     */
    quint32 calibrationDivisor;

    /*!
     * The OneDSensorCalibrationMessage FIT message's levelShift field.
     *
     * Level shift value used to shift the ADC value back into range
     */
    quint32 levelShift;

    /*!
     * The OneDSensorCalibrationMessage FIT message's offsetCal field.
     *
     * Internal Calibration factor
     */
    qint32 offsetCal;

    OneDSensorCalibrationMessagePrivate() = delete;
    explicit OneDSensorCalibrationMessagePrivate(OneDSensorCalibrationMessage * const q);
    virtual ~OneDSensorCalibrationMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(OneDSensorCalibrationMessage)
    Q_DISABLE_COPY(OneDSensorCalibrationMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ONEDSENSORCALIBRATIONMESSAGE_P_H
