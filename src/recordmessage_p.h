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

#ifndef QTFIT_RECORDMESSAGE_P_H
#define QTFIT_RECORDMESSAGE_P_H

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class RecordMessage;

class RecordMessagePrivate : public FitDataMessagePrivate {

public:
    DateTime timestamp;
    qint32 positionLat;
    qint32 positionLong;
    quint16 altitude;
    quint8 heartRate;
    quint8 cadence;
    quint32 distance;
    quint16 speed;
    quint16 power;
    quint8 compressedSpeedDistance;
    qint16 grade;
    quint8 resistance;
    qint32 timeFromCourse;
    quint8 cycleLength;
    qint8 temperature;
    quint8 speed1s;
    quint8 cycles;
    quint32 totalCycles;
    quint16 compressedAccumulatedPower;
    quint32 accumulatedPower;
    LeftRightBalance leftRightBalance;
    quint8 gpsAccuracy;
    qint16 verticalSpeed;
    quint16 calories;
    quint16 verticalOscillation;
    quint16 stanceTimePercent;
    quint16 stanceTime;
    ActivityType activityType;
    quint8 leftTorqueEffectiveness;
    quint8 rightTorqueEffectiveness;
    quint8 leftPedalSmoothness;
    quint8 rightPedalSmoothness;
    quint8 combinedPedalSmoothness;
    quint8 time128;
    StrokeType strokeType;
    quint8 zone;
    quint16 ballSpeed;
    quint16 cadence256;
    quint8 fractionalCadence;
    quint16 totalHemoglobinConc;
    quint16 totalHemoglobinConcMin;
    quint16 totalHemoglobinConcMax;
    quint16 saturatedHemoglobinPercent;
    quint16 saturatedHemoglobinPercentMin;
    quint16 saturatedHemoglobinPercentMax;
    DeviceIndex deviceIndex;
    qint8 leftPco;
    qint8 rightPco;
    quint8 leftPowerPhase;
    quint8 leftPowerPhasePeak;
    quint8 rightPowerPhase;
    quint8 rightPowerPhasePeak;
    quint32 enhancedSpeed;
    quint32 enhancedAltitude;
    quint8 batterySoc;
    quint16 motorPower;
    quint16 verticalRatio;
    quint16 stanceTimeBalance;
    quint16 stepLength;
    quint32 absolutePressure;
    quint32 depth;
    quint32 nextStopDepth;
    quint32 nextStopTime;
    quint32 timeToSurface;
    quint32 ndlTime;
    quint8 cnsLoad;
    quint16 n2Load;
    float grit;
    float flow;
    quint16 ebikeTravelRange;
    quint8 ebikeBatteryLevel;
    quint8 ebikeAssistMode;
    quint8 ebikeAssistLevelPercent;
    quint16 coreTemperature;

    RecordMessagePrivate() = delete;
    explicit RecordMessagePrivate(RecordMessage * const q);
    virtual ~RecordMessagePrivate();

protected:
    /// @todo Make base type enum.
    bool setField(const int fieldId, const QByteArray data, int baseType) override;

private:
    Q_DECLARE_PUBLIC(RecordMessage)
    Q_DISABLE_COPY(RecordMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_RECORDMESSAGE_P_H
