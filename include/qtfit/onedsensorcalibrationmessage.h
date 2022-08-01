// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the OneDSensorCalibrationMessage class.
 */

#ifndef QTFIT_ONEDSENSORCALIBRATIONMESSAGE_H
#define QTFIT_ONEDSENSORCALIBRATIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class OneDSensorCalibrationMessagePrivate;

class QTFIT_EXPORT OneDSensorCalibrationMessage : public AbstractDataMessage {

public:
    OneDSensorCalibrationMessage();
    ~OneDSensorCalibrationMessage();

    DateTime timestamp() const;
    SensorType sensorType() const;
    quint32 calibrationFactor() const;
    quint32 calibrationDivisor() const;
    quint32 levelShift() const;
    qint32 offsetCal() const;

    void setTimestamp(const DateTime timestamp);
    void setSensorType(const SensorType sensorType);
    void setCalibrationFactor(const quint32 calibrationFactor);
    void setCalibrationDivisor(const quint32 calibrationDivisor);
    void setLevelShift(const quint32 levelShift);
    void setOffsetCal(const qint32 offsetCal);

protected:
    /// \cond internal
    explicit OneDSensorCalibrationMessage(OneDSensorCalibrationMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(OneDSensorCalibrationMessage)
  //Q_DISABLE_COPY(OneDSensorCalibrationMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ONEDSENSORCALIBRATIONMESSAGE_H
