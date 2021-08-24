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

#ifndef QTFIT_SESSIONMESSAGE_P_H
#define QTFIT_SESSIONMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SessionMessage;

class SessionMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SessionMessage FIT message's messageIndex field.
     *
     * Selected bit is set for the current session.
     */
    MessageIndex messageIndex;

    /*!
     * The SessionMessage FIT message's timestamp field.
     *
     * Sesson end time.
     */
    DateTime timestamp;

    /*!
     * The SessionMessage FIT message's event field.
     *
     * session
     */
    Event event;

    /*!
     * The SessionMessage FIT message's eventType field.
     *
     * stop
     */
    EventType eventType;

    /*!
     * The SessionMessage FIT message's startTime field.
     */
    DateTime startTime;

    /*!
     * The SessionMessage FIT message's startPositionLat field.
     */
    qint32 startPositionLat;

    /*!
     * The SessionMessage FIT message's startPositionLong field.
     */
    qint32 startPositionLong;

    /*!
     * The SessionMessage FIT message's sport field.
     */
    Sport sport;

    /*!
     * The SessionMessage FIT message's subSport field.
     */
    SubSport subSport;

    /*!
     * The SessionMessage FIT message's totalElapsedTime field.
     *
     * Time (includes pauses)
     */
    quint32 totalElapsedTime;

    /*!
     * The SessionMessage FIT message's totalTimerTime field.
     *
     * Timer Time (excludes pauses)
     */
    quint32 totalTimerTime;

    /*!
     * The SessionMessage FIT message's totalDistance field.
     */
    quint32 totalDistance;

    /*!
     * The SessionMessage FIT message's totalCycles field.
     */
    quint32 totalCycles;

    /*!
     * The SessionMessage FIT message's totalCalories field.
     */
    quint16 totalCalories;

    /*!
     * The SessionMessage FIT message's totalFatCalories field.
     */
    quint16 totalFatCalories;

    /*!
     * The SessionMessage FIT message's avgSpeed field.
     *
     * total_distance / total_timer_time
     */
    quint16 avgSpeed;

    /*!
     * The SessionMessage FIT message's maxSpeed field.
     */
    quint16 maxSpeed;

    /*!
     * The SessionMessage FIT message's avgHeartRate field.
     *
     * average heart rate (excludes pause time)
     */
    quint8 avgHeartRate;

    /*!
     * The SessionMessage FIT message's maxHeartRate field.
     */
    quint8 maxHeartRate;

    /*!
     * The SessionMessage FIT message's avgCadence field.
     *
     * total_cycles / total_timer_time if non_zero_avg_cadence otherwise total_cycles /
     * total_elapsed_time
     */
    quint8 avgCadence;

    /*!
     * The SessionMessage FIT message's maxCadence field.
     */
    quint8 maxCadence;

    /*!
     * The SessionMessage FIT message's avgPower field.
     *
     * total_power / total_timer_time if non_zero_avg_power otherwise total_power /
     * total_elapsed_time
     */
    quint16 avgPower;

    /*!
     * The SessionMessage FIT message's maxPower field.
     */
    quint16 maxPower;

    /*!
     * The SessionMessage FIT message's totalAscent field.
     */
    quint16 totalAscent;

    /*!
     * The SessionMessage FIT message's totalDescent field.
     */
    quint16 totalDescent;

    /*!
     * The SessionMessage FIT message's totalTrainingEffect field.
     */
    quint8 totalTrainingEffect;

    /*!
     * The SessionMessage FIT message's firstLapIndex field.
     */
    quint16 firstLapIndex;

    /*!
     * The SessionMessage FIT message's numLaps field.
     */
    quint16 numLaps;

    /*!
     * The SessionMessage FIT message's eventGroup field.
     */
    quint8 eventGroup;

    /*!
     * The SessionMessage FIT message's trigger field.
     */
    SessionTrigger trigger;

    /*!
     * The SessionMessage FIT message's necLat field.
     *
     * North east corner latitude
     */
    qint32 necLat;

    /*!
     * The SessionMessage FIT message's necLong field.
     *
     * North east corner longitude
     */
    qint32 necLong;

    /*!
     * The SessionMessage FIT message's swcLat field.
     *
     * South west corner latitude
     */
    qint32 swcLat;

    /*!
     * The SessionMessage FIT message's swcLong field.
     *
     * South west corner longitude
     */
    qint32 swcLong;

    /*!
     * The SessionMessage FIT message's numLengths field.
     *
     * # of lengths of swim pool
     */
    quint16 numLengths;

    /*!
     * The SessionMessage FIT message's normalizedPower field.
     */
    quint16 normalizedPower;

    /*!
     * The SessionMessage FIT message's trainingStressScore field.
     */
    quint16 trainingStressScore;

    /*!
     * The SessionMessage FIT message's intensityFactor field.
     */
    quint16 intensityFactor;

    /*!
     * The SessionMessage FIT message's leftRightBalance field.
     */
    LeftRightBalance100 leftRightBalance;

    /*!
     * The SessionMessage FIT message's avgStrokeCount field.
     */
    quint32 avgStrokeCount;

    /*!
     * The SessionMessage FIT message's avgStrokeDistance field.
     */
    quint16 avgStrokeDistance;

    /*!
     * The SessionMessage FIT message's swimStroke field.
     */
    SwimStroke swimStroke;

    /*!
     * The SessionMessage FIT message's poolLength field.
     */
    quint16 poolLength;

    /*!
     * The SessionMessage FIT message's thresholdPower field.
     */
    quint16 thresholdPower;

    /*!
     * The SessionMessage FIT message's poolLengthUnit field.
     */
    DisplayMeasure poolLengthUnit;

    /*!
     * The SessionMessage FIT message's numActiveLengths field.
     *
     * # of active lengths of swim pool
     */
    quint16 numActiveLengths;

    /*!
     * The SessionMessage FIT message's totalWork field.
     */
    quint32 totalWork;

    /*!
     * The SessionMessage FIT message's avgAltitude field.
     */
    quint16 avgAltitude;

    /*!
     * The SessionMessage FIT message's maxAltitude field.
     */
    quint16 maxAltitude;

    /*!
     * The SessionMessage FIT message's gpsAccuracy field.
     */
    quint8 gpsAccuracy;

    /*!
     * The SessionMessage FIT message's avgGrade field.
     */
    qint16 avgGrade;

    /*!
     * The SessionMessage FIT message's avgPosGrade field.
     */
    qint16 avgPosGrade;

    /*!
     * The SessionMessage FIT message's avgNegGrade field.
     */
    qint16 avgNegGrade;

    /*!
     * The SessionMessage FIT message's maxPosGrade field.
     */
    qint16 maxPosGrade;

    /*!
     * The SessionMessage FIT message's maxNegGrade field.
     */
    qint16 maxNegGrade;

    /*!
     * The SessionMessage FIT message's avgTemperature field.
     */
    qint8 avgTemperature;

    /*!
     * The SessionMessage FIT message's maxTemperature field.
     */
    qint8 maxTemperature;

    /*!
     * The SessionMessage FIT message's totalMovingTime field.
     */
    quint32 totalMovingTime;

    /*!
     * The SessionMessage FIT message's avgPosVerticalSpeed field.
     */
    qint16 avgPosVerticalSpeed;

    /*!
     * The SessionMessage FIT message's avgNegVerticalSpeed field.
     */
    qint16 avgNegVerticalSpeed;

    /*!
     * The SessionMessage FIT message's maxPosVerticalSpeed field.
     */
    qint16 maxPosVerticalSpeed;

    /*!
     * The SessionMessage FIT message's maxNegVerticalSpeed field.
     */
    qint16 maxNegVerticalSpeed;

    /*!
     * The SessionMessage FIT message's minHeartRate field.
     */
    quint8 minHeartRate;

    /*!
     * The SessionMessage FIT message's timeInHrZone field.
     */
    quint32 timeInHrZone;

    /*!
     * The SessionMessage FIT message's timeInSpeedZone field.
     */
    quint32 timeInSpeedZone;

    /*!
     * The SessionMessage FIT message's timeInCadenceZone field.
     */
    quint32 timeInCadenceZone;

    /*!
     * The SessionMessage FIT message's timeInPowerZone field.
     */
    quint32 timeInPowerZone;

    /*!
     * The SessionMessage FIT message's avgLapTime field.
     */
    quint32 avgLapTime;

    /*!
     * The SessionMessage FIT message's bestLapIndex field.
     */
    quint16 bestLapIndex;

    /*!
     * The SessionMessage FIT message's minAltitude field.
     */
    quint16 minAltitude;

    /*!
     * The SessionMessage FIT message's playerScore field.
     */
    quint16 playerScore;

    /*!
     * The SessionMessage FIT message's opponentScore field.
     */
    quint16 opponentScore;

    /*!
     * The SessionMessage FIT message's opponentName field.
     */
    QString opponentName;

    /*!
     * The SessionMessage FIT message's strokeCount field.
     *
     * stroke_type enum used as the index
     */
    quint16 strokeCount;

    /*!
     * The SessionMessage FIT message's zoneCount field.
     *
     * zone number used as the index
     */
    quint16 zoneCount;

    /*!
     * The SessionMessage FIT message's maxBallSpeed field.
     */
    quint16 maxBallSpeed;

    /*!
     * The SessionMessage FIT message's avgBallSpeed field.
     */
    quint16 avgBallSpeed;

    /*!
     * The SessionMessage FIT message's avgVerticalOscillation field.
     */
    quint16 avgVerticalOscillation;

    /*!
     * The SessionMessage FIT message's avgStanceTimePercent field.
     */
    quint16 avgStanceTimePercent;

    /*!
     * The SessionMessage FIT message's avgStanceTime field.
     */
    quint16 avgStanceTime;

    /*!
     * The SessionMessage FIT message's avgFractionalCadence field.
     *
     * fractional part of the avg_cadence
     */
    quint8 avgFractionalCadence;

    /*!
     * The SessionMessage FIT message's maxFractionalCadence field.
     *
     * fractional part of the max_cadence
     */
    quint8 maxFractionalCadence;

    /*!
     * The SessionMessage FIT message's totalFractionalCycles field.
     *
     * fractional part of the total_cycles
     */
    quint8 totalFractionalCycles;

    /*!
     * The SessionMessage FIT message's avgTotalHemoglobinConc field.
     *
     * Avg saturated and unsaturated hemoglobin
     */
    quint16 avgTotalHemoglobinConc;

    /*!
     * The SessionMessage FIT message's minTotalHemoglobinConc field.
     *
     * Min saturated and unsaturated hemoglobin
     */
    quint16 minTotalHemoglobinConc;

    /*!
     * The SessionMessage FIT message's maxTotalHemoglobinConc field.
     *
     * Max saturated and unsaturated hemoglobin
     */
    quint16 maxTotalHemoglobinConc;

    /*!
     * The SessionMessage FIT message's avgSaturatedHemoglobinPercent field.
     *
     * Avg percentage of hemoglobin saturated with oxygen
     */
    quint16 avgSaturatedHemoglobinPercent;

    /*!
     * The SessionMessage FIT message's minSaturatedHemoglobinPercent field.
     *
     * Min percentage of hemoglobin saturated with oxygen
     */
    quint16 minSaturatedHemoglobinPercent;

    /*!
     * The SessionMessage FIT message's maxSaturatedHemoglobinPercent field.
     *
     * Max percentage of hemoglobin saturated with oxygen
     */
    quint16 maxSaturatedHemoglobinPercent;

    /*!
     * The SessionMessage FIT message's avgLeftTorqueEffectiveness field.
     */
    quint8 avgLeftTorqueEffectiveness;

    /*!
     * The SessionMessage FIT message's avgRightTorqueEffectiveness field.
     */
    quint8 avgRightTorqueEffectiveness;

    /*!
     * The SessionMessage FIT message's avgLeftPedalSmoothness field.
     */
    quint8 avgLeftPedalSmoothness;

    /*!
     * The SessionMessage FIT message's avgRightPedalSmoothness field.
     */
    quint8 avgRightPedalSmoothness;

    /*!
     * The SessionMessage FIT message's avgCombinedPedalSmoothness field.
     */
    quint8 avgCombinedPedalSmoothness;

    /*!
     * The SessionMessage FIT message's sportIndex field.
     */
    quint8 sportIndex;

    /*!
     * The SessionMessage FIT message's timeStanding field.
     *
     * Total time spend in the standing position
     */
    quint32 timeStanding;

    /*!
     * The SessionMessage FIT message's standCount field.
     *
     * Number of transitions to the standing state
     */
    quint16 standCount;

    /*!
     * The SessionMessage FIT message's avgLeftPco field.
     *
     * Average platform center offset Left
     */
    qint8 avgLeftPco;

    /*!
     * The SessionMessage FIT message's avgRightPco field.
     *
     * Average platform center offset Right
     */
    qint8 avgRightPco;

    /*!
     * The SessionMessage FIT message's avgLeftPowerPhase field.
     *
     * Average left power phase angles. Indexes defined by power_phase_type.
     */
    quint8 avgLeftPowerPhase;

    /*!
     * The SessionMessage FIT message's avgLeftPowerPhasePeak field.
     *
     * Average left power phase peak angles. Data value indexes defined by power_phase_type.
     */
    quint8 avgLeftPowerPhasePeak;

    /*!
     * The SessionMessage FIT message's avgRightPowerPhase field.
     *
     * Average right power phase angles. Data value indexes defined by power_phase_type.
     */
    quint8 avgRightPowerPhase;

    /*!
     * The SessionMessage FIT message's avgRightPowerPhasePeak field.
     *
     * Average right power phase peak angles data value indexes  defined by power_phase_type.
     */
    quint8 avgRightPowerPhasePeak;

    /*!
     * The SessionMessage FIT message's avgPowerPosition field.
     *
     * Average power by position. Data value indexes defined by rider_position_type.
     */
    quint16 avgPowerPosition;

    /*!
     * The SessionMessage FIT message's maxPowerPosition field.
     *
     * Maximum power by position. Data value indexes defined by rider_position_type.
     */
    quint16 maxPowerPosition;

    /*!
     * The SessionMessage FIT message's avgCadencePosition field.
     *
     * Average cadence by position. Data value indexes defined by rider_position_type.
     */
    quint8 avgCadencePosition;

    /*!
     * The SessionMessage FIT message's maxCadencePosition field.
     *
     * Maximum cadence by position. Data value indexes defined by rider_position_type.
     */
    quint8 maxCadencePosition;

    /*!
     * The SessionMessage FIT message's enhancedAvgSpeed field.
     *
     * total_distance / total_timer_time
     */
    quint32 enhancedAvgSpeed;

    /*!
     * The SessionMessage FIT message's enhancedMaxSpeed field.
     */
    quint32 enhancedMaxSpeed;

    /*!
     * The SessionMessage FIT message's enhancedAvgAltitude field.
     */
    quint32 enhancedAvgAltitude;

    /*!
     * The SessionMessage FIT message's enhancedMinAltitude field.
     */
    quint32 enhancedMinAltitude;

    /*!
     * The SessionMessage FIT message's enhancedMaxAltitude field.
     */
    quint32 enhancedMaxAltitude;

    /*!
     * The SessionMessage FIT message's avgLevMotorPower field.
     *
     * lev average motor power during session
     */
    quint16 avgLevMotorPower;

    /*!
     * The SessionMessage FIT message's maxLevMotorPower field.
     *
     * lev maximum motor power during session
     */
    quint16 maxLevMotorPower;

    /*!
     * The SessionMessage FIT message's levBatteryConsumption field.
     *
     * lev battery consumption during session
     */
    quint8 levBatteryConsumption;

    /*!
     * The SessionMessage FIT message's avgVerticalRatio field.
     */
    quint16 avgVerticalRatio;

    /*!
     * The SessionMessage FIT message's avgStanceTimeBalance field.
     */
    quint16 avgStanceTimeBalance;

    /*!
     * The SessionMessage FIT message's avgStepLength field.
     */
    quint16 avgStepLength;

    /*!
     * The SessionMessage FIT message's totalAnaerobicTrainingEffect field.
     */
    quint8 totalAnaerobicTrainingEffect;

    /*!
     * The SessionMessage FIT message's avgVam field.
     */
    quint16 avgVam;

    /*!
     * The SessionMessage FIT message's totalGrit field.
     *
     * The grit score estimates how challenging a route could be for a cyclist in terms of time
     * spent going over sharp turns or large grade slopes.
     */
    float totalGrit;

    /*!
     * The SessionMessage FIT message's totalFlow field.
     *
     * The flow score estimates how long distance wise a cyclist deaccelerates over intervals where
     * deacceleration is unnecessary such as smooth turns or small grade angle intervals.
     */
    float totalFlow;

    /*!
     * The SessionMessage FIT message's jumpCount field.
     */
    quint16 jumpCount;

    /*!
     * The SessionMessage FIT message's avgGrit field.
     *
     * The grit score estimates how challenging a route could be for a cyclist in terms of time
     * spent going over sharp turns or large grade slopes.
     */
    float avgGrit;

    /*!
     * The SessionMessage FIT message's avgFlow field.
     *
     * The flow score estimates how long distance wise a cyclist deaccelerates over intervals where
     * deacceleration is unnecessary such as smooth turns or small grade angle intervals.
     */
    float avgFlow;

    /*!
     * The SessionMessage FIT message's totalFractionalAscent field.
     *
     * fractional part of total_ascent
     */
    quint8 totalFractionalAscent;

    /*!
     * The SessionMessage FIT message's totalFractionalDescent field.
     *
     * fractional part of total_descent
     */
    quint8 totalFractionalDescent;

    /*!
     * The SessionMessage FIT message's avgCoreTemperature field.
     */
    quint16 avgCoreTemperature;

    /*!
     * The SessionMessage FIT message's minCoreTemperature field.
     */
    quint16 minCoreTemperature;

    /*!
     * The SessionMessage FIT message's maxCoreTemperature field.
     */
    quint16 maxCoreTemperature;

    SessionMessagePrivate() = delete;
    explicit SessionMessagePrivate(SessionMessage * const q);
    virtual ~SessionMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SessionMessage)
    Q_DISABLE_COPY(SessionMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SESSIONMESSAGE_P_H
