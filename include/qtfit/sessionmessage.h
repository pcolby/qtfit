// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SessionMessage class.
 */

#ifndef QTFIT_SESSIONMESSAGE_H
#define QTFIT_SESSIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SessionMessagePrivate;

class QTFIT_EXPORT SessionMessage : public AbstractDataMessage {

public:
    SessionMessage();
    ~SessionMessage();

    MessageIndex messageIndex() const;
    DateTime timestamp() const;
    Event event() const;
    EventType eventType() const;
    DateTime startTime() const;
    qint32 startPositionLat() const;
    qint32 startPositionLong() const;
    Sport sport() const;
    SubSport subSport() const;
    quint32 totalElapsedTime() const;
    quint32 totalTimerTime() const;
    quint32 totalDistance() const;
    quint32 totalCycles() const;
    quint16 totalCalories() const;
    quint16 totalFatCalories() const;
    quint16 avgSpeed() const;
    quint16 maxSpeed() const;
    quint8 avgHeartRate() const;
    quint8 maxHeartRate() const;
    quint8 avgCadence() const;
    quint8 maxCadence() const;
    quint16 avgPower() const;
    quint16 maxPower() const;
    quint16 totalAscent() const;
    quint16 totalDescent() const;
    quint8 totalTrainingEffect() const;
    quint16 firstLapIndex() const;
    quint16 numLaps() const;
    quint8 eventGroup() const;
    SessionTrigger trigger() const;
    qint32 necLat() const;
    qint32 necLong() const;
    qint32 swcLat() const;
    qint32 swcLong() const;
    quint16 numLengths() const;
    quint16 normalizedPower() const;
    quint16 trainingStressScore() const;
    quint16 intensityFactor() const;
    LeftRightBalance100 leftRightBalance() const;
    quint32 avgStrokeCount() const;
    quint16 avgStrokeDistance() const;
    SwimStroke swimStroke() const;
    quint16 poolLength() const;
    quint16 thresholdPower() const;
    DisplayMeasure poolLengthUnit() const;
    quint16 numActiveLengths() const;
    quint32 totalWork() const;
    quint16 avgAltitude() const;
    quint16 maxAltitude() const;
    quint8 gpsAccuracy() const;
    qint16 avgGrade() const;
    qint16 avgPosGrade() const;
    qint16 avgNegGrade() const;
    qint16 maxPosGrade() const;
    qint16 maxNegGrade() const;
    qint8 avgTemperature() const;
    qint8 maxTemperature() const;
    quint32 totalMovingTime() const;
    qint16 avgPosVerticalSpeed() const;
    qint16 avgNegVerticalSpeed() const;
    qint16 maxPosVerticalSpeed() const;
    qint16 maxNegVerticalSpeed() const;
    quint8 minHeartRate() const;
    quint32 timeInHrZone() const;
    quint32 timeInSpeedZone() const;
    quint32 timeInCadenceZone() const;
    quint32 timeInPowerZone() const;
    quint32 avgLapTime() const;
    quint16 bestLapIndex() const;
    quint16 minAltitude() const;
    quint16 playerScore() const;
    quint16 opponentScore() const;
    QString opponentName() const;
    quint16 strokeCount() const;
    quint16 zoneCount() const;
    quint16 maxBallSpeed() const;
    quint16 avgBallSpeed() const;
    quint16 avgVerticalOscillation() const;
    quint16 avgStanceTimePercent() const;
    quint16 avgStanceTime() const;
    quint8 avgFractionalCadence() const;
    quint8 maxFractionalCadence() const;
    quint8 totalFractionalCycles() const;
    quint16 avgTotalHemoglobinConc() const;
    quint16 minTotalHemoglobinConc() const;
    quint16 maxTotalHemoglobinConc() const;
    quint16 avgSaturatedHemoglobinPercent() const;
    quint16 minSaturatedHemoglobinPercent() const;
    quint16 maxSaturatedHemoglobinPercent() const;
    quint8 avgLeftTorqueEffectiveness() const;
    quint8 avgRightTorqueEffectiveness() const;
    quint8 avgLeftPedalSmoothness() const;
    quint8 avgRightPedalSmoothness() const;
    quint8 avgCombinedPedalSmoothness() const;
    quint8 sportIndex() const;
    quint32 timeStanding() const;
    quint16 standCount() const;
    qint8 avgLeftPco() const;
    qint8 avgRightPco() const;
    quint8 avgLeftPowerPhase() const;
    quint8 avgLeftPowerPhasePeak() const;
    quint8 avgRightPowerPhase() const;
    quint8 avgRightPowerPhasePeak() const;
    quint16 avgPowerPosition() const;
    quint16 maxPowerPosition() const;
    quint8 avgCadencePosition() const;
    quint8 maxCadencePosition() const;
    quint32 enhancedAvgSpeed() const;
    quint32 enhancedMaxSpeed() const;
    quint32 enhancedAvgAltitude() const;
    quint32 enhancedMinAltitude() const;
    quint32 enhancedMaxAltitude() const;
    quint16 avgLevMotorPower() const;
    quint16 maxLevMotorPower() const;
    quint8 levBatteryConsumption() const;
    quint16 avgVerticalRatio() const;
    quint16 avgStanceTimeBalance() const;
    quint16 avgStepLength() const;
    quint8 totalAnaerobicTrainingEffect() const;
    quint16 avgVam() const;
    float totalGrit() const;
    float totalFlow() const;
    quint16 jumpCount() const;
    float avgGrit() const;
    float avgFlow() const;
    quint8 totalFractionalAscent() const;
    quint8 totalFractionalDescent() const;
    quint16 avgCoreTemperature() const;
    quint16 minCoreTemperature() const;
    quint16 maxCoreTemperature() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setTimestamp(const DateTime timestamp);
    void setEvent(const Event event);
    void setEventType(const EventType eventType);
    void setStartTime(const DateTime startTime);
    void setStartPositionLat(const qint32 startPositionLat);
    void setStartPositionLong(const qint32 startPositionLong);
    void setSport(const Sport sport);
    void setSubSport(const SubSport subSport);
    void setTotalElapsedTime(const quint32 totalElapsedTime);
    void setTotalTimerTime(const quint32 totalTimerTime);
    void setTotalDistance(const quint32 totalDistance);
    void setTotalCycles(const quint32 totalCycles);
    void setTotalCalories(const quint16 totalCalories);
    void setTotalFatCalories(const quint16 totalFatCalories);
    void setAvgSpeed(const quint16 avgSpeed);
    void setMaxSpeed(const quint16 maxSpeed);
    void setAvgHeartRate(const quint8 avgHeartRate);
    void setMaxHeartRate(const quint8 maxHeartRate);
    void setAvgCadence(const quint8 avgCadence);
    void setMaxCadence(const quint8 maxCadence);
    void setAvgPower(const quint16 avgPower);
    void setMaxPower(const quint16 maxPower);
    void setTotalAscent(const quint16 totalAscent);
    void setTotalDescent(const quint16 totalDescent);
    void setTotalTrainingEffect(const quint8 totalTrainingEffect);
    void setFirstLapIndex(const quint16 firstLapIndex);
    void setNumLaps(const quint16 numLaps);
    void setEventGroup(const quint8 eventGroup);
    void setTrigger(const SessionTrigger trigger);
    void setNecLat(const qint32 necLat);
    void setNecLong(const qint32 necLong);
    void setSwcLat(const qint32 swcLat);
    void setSwcLong(const qint32 swcLong);
    void setNumLengths(const quint16 numLengths);
    void setNormalizedPower(const quint16 normalizedPower);
    void setTrainingStressScore(const quint16 trainingStressScore);
    void setIntensityFactor(const quint16 intensityFactor);
    void setLeftRightBalance(const LeftRightBalance100 leftRightBalance);
    void setAvgStrokeCount(const quint32 avgStrokeCount);
    void setAvgStrokeDistance(const quint16 avgStrokeDistance);
    void setSwimStroke(const SwimStroke swimStroke);
    void setPoolLength(const quint16 poolLength);
    void setThresholdPower(const quint16 thresholdPower);
    void setPoolLengthUnit(const DisplayMeasure poolLengthUnit);
    void setNumActiveLengths(const quint16 numActiveLengths);
    void setTotalWork(const quint32 totalWork);
    void setAvgAltitude(const quint16 avgAltitude);
    void setMaxAltitude(const quint16 maxAltitude);
    void setGpsAccuracy(const quint8 gpsAccuracy);
    void setAvgGrade(const qint16 avgGrade);
    void setAvgPosGrade(const qint16 avgPosGrade);
    void setAvgNegGrade(const qint16 avgNegGrade);
    void setMaxPosGrade(const qint16 maxPosGrade);
    void setMaxNegGrade(const qint16 maxNegGrade);
    void setAvgTemperature(const qint8 avgTemperature);
    void setMaxTemperature(const qint8 maxTemperature);
    void setTotalMovingTime(const quint32 totalMovingTime);
    void setAvgPosVerticalSpeed(const qint16 avgPosVerticalSpeed);
    void setAvgNegVerticalSpeed(const qint16 avgNegVerticalSpeed);
    void setMaxPosVerticalSpeed(const qint16 maxPosVerticalSpeed);
    void setMaxNegVerticalSpeed(const qint16 maxNegVerticalSpeed);
    void setMinHeartRate(const quint8 minHeartRate);
    void setTimeInHrZone(const quint32 timeInHrZone);
    void setTimeInSpeedZone(const quint32 timeInSpeedZone);
    void setTimeInCadenceZone(const quint32 timeInCadenceZone);
    void setTimeInPowerZone(const quint32 timeInPowerZone);
    void setAvgLapTime(const quint32 avgLapTime);
    void setBestLapIndex(const quint16 bestLapIndex);
    void setMinAltitude(const quint16 minAltitude);
    void setPlayerScore(const quint16 playerScore);
    void setOpponentScore(const quint16 opponentScore);
    void setOpponentName(const QString opponentName);
    void setStrokeCount(const quint16 strokeCount);
    void setZoneCount(const quint16 zoneCount);
    void setMaxBallSpeed(const quint16 maxBallSpeed);
    void setAvgBallSpeed(const quint16 avgBallSpeed);
    void setAvgVerticalOscillation(const quint16 avgVerticalOscillation);
    void setAvgStanceTimePercent(const quint16 avgStanceTimePercent);
    void setAvgStanceTime(const quint16 avgStanceTime);
    void setAvgFractionalCadence(const quint8 avgFractionalCadence);
    void setMaxFractionalCadence(const quint8 maxFractionalCadence);
    void setTotalFractionalCycles(const quint8 totalFractionalCycles);
    void setAvgTotalHemoglobinConc(const quint16 avgTotalHemoglobinConc);
    void setMinTotalHemoglobinConc(const quint16 minTotalHemoglobinConc);
    void setMaxTotalHemoglobinConc(const quint16 maxTotalHemoglobinConc);
    void setAvgSaturatedHemoglobinPercent(const quint16 avgSaturatedHemoglobinPercent);
    void setMinSaturatedHemoglobinPercent(const quint16 minSaturatedHemoglobinPercent);
    void setMaxSaturatedHemoglobinPercent(const quint16 maxSaturatedHemoglobinPercent);
    void setAvgLeftTorqueEffectiveness(const quint8 avgLeftTorqueEffectiveness);
    void setAvgRightTorqueEffectiveness(const quint8 avgRightTorqueEffectiveness);
    void setAvgLeftPedalSmoothness(const quint8 avgLeftPedalSmoothness);
    void setAvgRightPedalSmoothness(const quint8 avgRightPedalSmoothness);
    void setAvgCombinedPedalSmoothness(const quint8 avgCombinedPedalSmoothness);
    void setSportIndex(const quint8 sportIndex);
    void setTimeStanding(const quint32 timeStanding);
    void setStandCount(const quint16 standCount);
    void setAvgLeftPco(const qint8 avgLeftPco);
    void setAvgRightPco(const qint8 avgRightPco);
    void setAvgLeftPowerPhase(const quint8 avgLeftPowerPhase);
    void setAvgLeftPowerPhasePeak(const quint8 avgLeftPowerPhasePeak);
    void setAvgRightPowerPhase(const quint8 avgRightPowerPhase);
    void setAvgRightPowerPhasePeak(const quint8 avgRightPowerPhasePeak);
    void setAvgPowerPosition(const quint16 avgPowerPosition);
    void setMaxPowerPosition(const quint16 maxPowerPosition);
    void setAvgCadencePosition(const quint8 avgCadencePosition);
    void setMaxCadencePosition(const quint8 maxCadencePosition);
    void setEnhancedAvgSpeed(const quint32 enhancedAvgSpeed);
    void setEnhancedMaxSpeed(const quint32 enhancedMaxSpeed);
    void setEnhancedAvgAltitude(const quint32 enhancedAvgAltitude);
    void setEnhancedMinAltitude(const quint32 enhancedMinAltitude);
    void setEnhancedMaxAltitude(const quint32 enhancedMaxAltitude);
    void setAvgLevMotorPower(const quint16 avgLevMotorPower);
    void setMaxLevMotorPower(const quint16 maxLevMotorPower);
    void setLevBatteryConsumption(const quint8 levBatteryConsumption);
    void setAvgVerticalRatio(const quint16 avgVerticalRatio);
    void setAvgStanceTimeBalance(const quint16 avgStanceTimeBalance);
    void setAvgStepLength(const quint16 avgStepLength);
    void setTotalAnaerobicTrainingEffect(const quint8 totalAnaerobicTrainingEffect);
    void setAvgVam(const quint16 avgVam);
    void setTotalGrit(const float totalGrit);
    void setTotalFlow(const float totalFlow);
    void setJumpCount(const quint16 jumpCount);
    void setAvgGrit(const float avgGrit);
    void setAvgFlow(const float avgFlow);
    void setTotalFractionalAscent(const quint8 totalFractionalAscent);
    void setTotalFractionalDescent(const quint8 totalFractionalDescent);
    void setAvgCoreTemperature(const quint16 avgCoreTemperature);
    void setMinCoreTemperature(const quint16 minCoreTemperature);
    void setMaxCoreTemperature(const quint16 maxCoreTemperature);

protected:
    /// \cond internal
    explicit SessionMessage(SessionMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SessionMessage)
  //Q_DISABLE_COPY(SessionMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SESSIONMESSAGE_H
