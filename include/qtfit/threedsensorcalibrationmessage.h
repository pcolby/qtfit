// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ThreeDSensorCalibrationMessage class.
 */

#ifndef QTFIT_THREEDSENSORCALIBRATIONMESSAGE_H
#define QTFIT_THREEDSENSORCALIBRATIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ThreeDSensorCalibrationMessagePrivate;

class QTFIT_EXPORT ThreeDSensorCalibrationMessage : public AbstractDataMessage {

public:
    ThreeDSensorCalibrationMessage();
    ~ThreeDSensorCalibrationMessage();

    DateTime timestamp() const;
    SensorType sensorType() const;
    quint32 calibrationFactor() const;
    quint32 calibrationDivisor() const;
    quint32 levelShift() const;
    qint32 offsetCal() const;
    qint32 orientationMatrix() const;

    void setTimestamp(const DateTime timestamp);
    void setSensorType(const SensorType sensorType);
    void setCalibrationFactor(const quint32 calibrationFactor);
    void setCalibrationDivisor(const quint32 calibrationDivisor);
    void setLevelShift(const quint32 levelShift);
    void setOffsetCal(const qint32 offsetCal);
    void setOrientationMatrix(const qint32 orientationMatrix);

protected:
    /// \cond internal
    explicit ThreeDSensorCalibrationMessage(ThreeDSensorCalibrationMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ThreeDSensorCalibrationMessage)
  //Q_DISABLE_COPY(ThreeDSensorCalibrationMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_THREEDSENSORCALIBRATIONMESSAGE_H
