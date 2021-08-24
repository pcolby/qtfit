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
