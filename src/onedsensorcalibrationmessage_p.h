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

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class OneDSensorCalibrationMessage;

class OneDSensorCalibrationMessagePrivate : public FitDataMessagePrivate {

public:
    DateTime timestamp;
    SensorType sensorType;
    quint32 calibrationFactor;
    quint32 calibrationDivisor;
    quint32 levelShift;
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
