// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ThreeDSensorCalibrationMessagePrivate class.
 */
#ifndef QTFIT_THREEDSENSORCALIBRATIONMESSAGE_P_H
#define QTFIT_THREEDSENSORCALIBRATIONMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ThreeDSensorCalibrationMessage;

class ThreeDSensorCalibrationMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ThreeDSensorCalibrationMessage FIT message's timestamp field.
     *
     * Whole second part of the timestamp
     */
    DateTime timestamp;

    /*!
     * The ThreeDSensorCalibrationMessage FIT message's sensorType field.
     *
     * Indicates which sensor the calibration is for
     */
    SensorType sensorType;

    /*!
     * The ThreeDSensorCalibrationMessage FIT message's calibrationFactor field.
     *
     * Calibration factor used to convert from raw ADC value to degrees, g,  etc.
     */
    quint32 calibrationFactor;

    /*!
     * The ThreeDSensorCalibrationMessage FIT message's calibrationDivisor field.
     *
     * Calibration factor divisor
     */
    quint32 calibrationDivisor;

    /*!
     * The ThreeDSensorCalibrationMessage FIT message's levelShift field.
     *
     * Level shift value used to shift the ADC value back into range
     */
    quint32 levelShift;

    /*!
     * The ThreeDSensorCalibrationMessage FIT message's offsetCal field.
     *
     * Internal calibration factors, one for each: xy, yx, zx
     */
    qint32 offsetCal;

    /*!
     * The ThreeDSensorCalibrationMessage FIT message's orientationMatrix field.
     *
     * 3 x 3 rotation matrix (row major)
     */
    qint32 orientationMatrix;

    ThreeDSensorCalibrationMessagePrivate() = delete;
    explicit ThreeDSensorCalibrationMessagePrivate(ThreeDSensorCalibrationMessage * const q);
    virtual ~ThreeDSensorCalibrationMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ThreeDSensorCalibrationMessage)
    Q_DISABLE_COPY(ThreeDSensorCalibrationMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_THREEDSENSORCALIBRATIONMESSAGE_P_H
