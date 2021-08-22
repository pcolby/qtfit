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

#ifndef QTFIT_RECORDMESSAGE_H
#define QTFIT_RECORDMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class RecordMessagePrivate;

class QTFIT_EXPORT RecordMessage : public AbstractDataMessage {

public:
    RecordMessage();
    ~RecordMessage();

    DateTime timestamp() const;
    qint32 positionLat() const;
    qint32 positionLong() const;
    quint16 altitude() const;
    quint8 heartRate() const;
    quint8 cadence() const;
    quint32 distance() const;
    quint16 speed() const;
    quint16 power() const;
    quint8 compressedSpeedDistance() const;
    qint16 grade() const;
    quint8 resistance() const;
    qint32 timeFromCourse() const;
    quint8 cycleLength() const;
    qint8 temperature() const;
    quint8 speed1s() const;
    quint8 cycles() const;
    quint32 totalCycles() const;
    quint16 compressedAccumulatedPower() const;
    quint32 accumulatedPower() const;
    LeftRightBalance leftRightBalance() const;
    quint8 gpsAccuracy() const;
    qint16 verticalSpeed() const;
    quint16 calories() const;
    quint16 verticalOscillation() const;
    quint16 stanceTimePercent() const;
    quint16 stanceTime() const;
    ActivityType activityType() const;
    quint8 leftTorqueEffectiveness() const;
    quint8 rightTorqueEffectiveness() const;
    quint8 leftPedalSmoothness() const;
    quint8 rightPedalSmoothness() const;
    quint8 combinedPedalSmoothness() const;
    quint8 time128() const;
    StrokeType strokeType() const;
    quint8 zone() const;
    quint16 ballSpeed() const;
    quint16 cadence256() const;
    quint8 fractionalCadence() const;
    quint16 totalHemoglobinConc() const;
    quint16 totalHemoglobinConcMin() const;
    quint16 totalHemoglobinConcMax() const;
    quint16 saturatedHemoglobinPercent() const;
    quint16 saturatedHemoglobinPercentMin() const;
    quint16 saturatedHemoglobinPercentMax() const;
    DeviceIndex deviceIndex() const;
    qint8 leftPco() const;
    qint8 rightPco() const;
    quint8 leftPowerPhase() const;
    quint8 leftPowerPhasePeak() const;
    quint8 rightPowerPhase() const;
    quint8 rightPowerPhasePeak() const;
    quint32 enhancedSpeed() const;
    quint32 enhancedAltitude() const;
    quint8 batterySoc() const;
    quint16 motorPower() const;
    quint16 verticalRatio() const;
    quint16 stanceTimeBalance() const;
    quint16 stepLength() const;
    quint32 absolutePressure() const;
    quint32 depth() const;
    quint32 nextStopDepth() const;
    quint32 nextStopTime() const;
    quint32 timeToSurface() const;
    quint32 ndlTime() const;
    quint8 cnsLoad() const;
    quint16 n2Load() const;
    float grit() const;
    float flow() const;
    quint16 ebikeTravelRange() const;
    quint8 ebikeBatteryLevel() const;
    quint8 ebikeAssistMode() const;
    quint8 ebikeAssistLevelPercent() const;
    quint16 coreTemperature() const;

    void setTimestamp(const DateTime timestamp);
    void setPositionLat(const qint32 positionLat);
    void setPositionLong(const qint32 positionLong);
    void setAltitude(const quint16 altitude);
    void setHeartRate(const quint8 heartRate);
    void setCadence(const quint8 cadence);
    void setDistance(const quint32 distance);
    void setSpeed(const quint16 speed);
    void setPower(const quint16 power);
    void setCompressedSpeedDistance(const quint8 compressedSpeedDistance);
    void setGrade(const qint16 grade);
    void setResistance(const quint8 resistance);
    void setTimeFromCourse(const qint32 timeFromCourse);
    void setCycleLength(const quint8 cycleLength);
    void setTemperature(const qint8 temperature);
    void setSpeed1s(const quint8 speed1s);
    void setCycles(const quint8 cycles);
    void setTotalCycles(const quint32 totalCycles);
    void setCompressedAccumulatedPower(const quint16 compressedAccumulatedPower);
    void setAccumulatedPower(const quint32 accumulatedPower);
    void setLeftRightBalance(const LeftRightBalance leftRightBalance);
    void setGpsAccuracy(const quint8 gpsAccuracy);
    void setVerticalSpeed(const qint16 verticalSpeed);
    void setCalories(const quint16 calories);
    void setVerticalOscillation(const quint16 verticalOscillation);
    void setStanceTimePercent(const quint16 stanceTimePercent);
    void setStanceTime(const quint16 stanceTime);
    void setActivityType(const ActivityType activityType);
    void setLeftTorqueEffectiveness(const quint8 leftTorqueEffectiveness);
    void setRightTorqueEffectiveness(const quint8 rightTorqueEffectiveness);
    void setLeftPedalSmoothness(const quint8 leftPedalSmoothness);
    void setRightPedalSmoothness(const quint8 rightPedalSmoothness);
    void setCombinedPedalSmoothness(const quint8 combinedPedalSmoothness);
    void setTime128(const quint8 time128);
    void setStrokeType(const StrokeType strokeType);
    void setZone(const quint8 zone);
    void setBallSpeed(const quint16 ballSpeed);
    void setCadence256(const quint16 cadence256);
    void setFractionalCadence(const quint8 fractionalCadence);
    void setTotalHemoglobinConc(const quint16 totalHemoglobinConc);
    void setTotalHemoglobinConcMin(const quint16 totalHemoglobinConcMin);
    void setTotalHemoglobinConcMax(const quint16 totalHemoglobinConcMax);
    void setSaturatedHemoglobinPercent(const quint16 saturatedHemoglobinPercent);
    void setSaturatedHemoglobinPercentMin(const quint16 saturatedHemoglobinPercentMin);
    void setSaturatedHemoglobinPercentMax(const quint16 saturatedHemoglobinPercentMax);
    void setDeviceIndex(const DeviceIndex deviceIndex);
    void setLeftPco(const qint8 leftPco);
    void setRightPco(const qint8 rightPco);
    void setLeftPowerPhase(const quint8 leftPowerPhase);
    void setLeftPowerPhasePeak(const quint8 leftPowerPhasePeak);
    void setRightPowerPhase(const quint8 rightPowerPhase);
    void setRightPowerPhasePeak(const quint8 rightPowerPhasePeak);
    void setEnhancedSpeed(const quint32 enhancedSpeed);
    void setEnhancedAltitude(const quint32 enhancedAltitude);
    void setBatterySoc(const quint8 batterySoc);
    void setMotorPower(const quint16 motorPower);
    void setVerticalRatio(const quint16 verticalRatio);
    void setStanceTimeBalance(const quint16 stanceTimeBalance);
    void setStepLength(const quint16 stepLength);
    void setAbsolutePressure(const quint32 absolutePressure);
    void setDepth(const quint32 depth);
    void setNextStopDepth(const quint32 nextStopDepth);
    void setNextStopTime(const quint32 nextStopTime);
    void setTimeToSurface(const quint32 timeToSurface);
    void setNdlTime(const quint32 ndlTime);
    void setCnsLoad(const quint8 cnsLoad);
    void setN2Load(const quint16 n2Load);
    void setGrit(const float grit);
    void setFlow(const float flow);
    void setEbikeTravelRange(const quint16 ebikeTravelRange);
    void setEbikeBatteryLevel(const quint8 ebikeBatteryLevel);
    void setEbikeAssistMode(const quint8 ebikeAssistMode);
    void setEbikeAssistLevelPercent(const quint8 ebikeAssistLevelPercent);
    void setCoreTemperature(const quint16 coreTemperature);

protected:
    /// \cond internal
    explicit RecordMessage(RecordMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(RecordMessage)
  //Q_DISABLE_COPY(RecordMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_RECORDMESSAGE_H
