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
