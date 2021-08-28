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

/*!
 * \file
 * Declares the LapMessagePrivate class.
 */
#ifndef QTFIT_LAPMESSAGE_P_H
#define QTFIT_LAPMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class LapMessage;

class LapMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The LapMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The LapMessage FIT message's timestamp field.
     *
     * Lap end time.
     */
    DateTime timestamp;

    /*!
     * The LapMessage FIT message's event field.
     */
    Event event;

    /*!
     * The LapMessage FIT message's eventType field.
     */
    EventType eventType;

    /*!
     * The LapMessage FIT message's startTime field.
     */
    DateTime startTime;

    /*!
     * The LapMessage FIT message's startPositionLat field.
     */
    qint32 startPositionLat;

    /*!
     * The LapMessage FIT message's startPositionLong field.
     */
    qint32 startPositionLong;

    /*!
     * The LapMessage FIT message's endPositionLat field.
     */
    qint32 endPositionLat;

    /*!
     * The LapMessage FIT message's endPositionLong field.
     */
    qint32 endPositionLong;

    /*!
     * The LapMessage FIT message's totalElapsedTime field.
     *
     * Time (includes pauses)
     */
    quint32 totalElapsedTime;

    /*!
     * The LapMessage FIT message's totalTimerTime field.
     *
     * Timer Time (excludes pauses)
     */
    quint32 totalTimerTime;

    /*!
     * The LapMessage FIT message's totalDistance field.
     */
    quint32 totalDistance;

    /*!
     * The LapMessage FIT message's totalCycles field.
     */
    quint32 totalCycles;

    /*!
     * The LapMessage FIT message's totalCalories field.
     */
    quint16 totalCalories;

    /*!
     * The LapMessage FIT message's totalFatCalories field.
     *
     * If New Leaf
     */
    quint16 totalFatCalories;

    /*!
     * The LapMessage FIT message's avgSpeed field.
     */
    quint16 avgSpeed;

    /*!
     * The LapMessage FIT message's maxSpeed field.
     */
    quint16 maxSpeed;

    /*!
     * The LapMessage FIT message's avgHeartRate field.
     */
    quint8 avgHeartRate;

    /*!
     * The LapMessage FIT message's maxHeartRate field.
     */
    quint8 maxHeartRate;

    /*!
     * The LapMessage FIT message's avgCadence field.
     *
     * total_cycles / total_timer_time if non_zero_avg_cadence otherwise total_cycles /
     * total_elapsed_time
     */
    quint8 avgCadence;

    /*!
     * The LapMessage FIT message's maxCadence field.
     */
    quint8 maxCadence;

    /*!
     * The LapMessage FIT message's avgPower field.
     *
     * total_power / total_timer_time if non_zero_avg_power otherwise total_power /
     * total_elapsed_time
     */
    quint16 avgPower;

    /*!
     * The LapMessage FIT message's maxPower field.
     */
    quint16 maxPower;

    /*!
     * The LapMessage FIT message's totalAscent field.
     */
    quint16 totalAscent;

    /*!
     * The LapMessage FIT message's totalDescent field.
     */
    quint16 totalDescent;

    /*!
     * The LapMessage FIT message's intensity field.
     */
    Intensity intensity;

    /*!
     * The LapMessage FIT message's lapTrigger field.
     */
    LapTrigger lapTrigger;

    /*!
     * The LapMessage FIT message's sport field.
     */
    Sport sport;

    /*!
     * The LapMessage FIT message's eventGroup field.
     */
    quint8 eventGroup;

    /*!
     * The LapMessage FIT message's numLengths field.
     *
     * # of lengths of swim pool
     */
    quint16 numLengths;

    /*!
     * The LapMessage FIT message's normalizedPower field.
     */
    quint16 normalizedPower;

    /*!
     * The LapMessage FIT message's leftRightBalance field.
     */
    LeftRightBalance100 leftRightBalance;

    /*!
     * The LapMessage FIT message's firstLengthIndex field.
     */
    quint16 firstLengthIndex;

    /*!
     * The LapMessage FIT message's avgStrokeDistance field.
     */
    quint16 avgStrokeDistance;

    /*!
     * The LapMessage FIT message's swimStroke field.
     */
    SwimStroke swimStroke;

    /*!
     * The LapMessage FIT message's subSport field.
     */
    SubSport subSport;

    /*!
     * The LapMessage FIT message's numActiveLengths field.
     *
     * # of active lengths of swim pool
     */
    quint16 numActiveLengths;

    /*!
     * The LapMessage FIT message's totalWork field.
     */
    quint32 totalWork;

    /*!
     * The LapMessage FIT message's avgAltitude field.
     */
    quint16 avgAltitude;

    /*!
     * The LapMessage FIT message's maxAltitude field.
     */
    quint16 maxAltitude;

    /*!
     * The LapMessage FIT message's gpsAccuracy field.
     */
    quint8 gpsAccuracy;

    /*!
     * The LapMessage FIT message's avgGrade field.
     */
    qint16 avgGrade;

    /*!
     * The LapMessage FIT message's avgPosGrade field.
     */
    qint16 avgPosGrade;

    /*!
     * The LapMessage FIT message's avgNegGrade field.
     */
    qint16 avgNegGrade;

    /*!
     * The LapMessage FIT message's maxPosGrade field.
     */
    qint16 maxPosGrade;

    /*!
     * The LapMessage FIT message's maxNegGrade field.
     */
    qint16 maxNegGrade;

    /*!
     * The LapMessage FIT message's avgTemperature field.
     */
    qint8 avgTemperature;

    /*!
     * The LapMessage FIT message's maxTemperature field.
     */
    qint8 maxTemperature;

    /*!
     * The LapMessage FIT message's totalMovingTime field.
     */
    quint32 totalMovingTime;

    /*!
     * The LapMessage FIT message's avgPosVerticalSpeed field.
     */
    qint16 avgPosVerticalSpeed;

    /*!
     * The LapMessage FIT message's avgNegVerticalSpeed field.
     */
    qint16 avgNegVerticalSpeed;

    /*!
     * The LapMessage FIT message's maxPosVerticalSpeed field.
     */
    qint16 maxPosVerticalSpeed;

    /*!
     * The LapMessage FIT message's maxNegVerticalSpeed field.
     */
    qint16 maxNegVerticalSpeed;

    /*!
     * The LapMessage FIT message's timeInHrZone field.
     */
    quint32 timeInHrZone;

    /*!
     * The LapMessage FIT message's timeInSpeedZone field.
     */
    quint32 timeInSpeedZone;

    /*!
     * The LapMessage FIT message's timeInCadenceZone field.
     */
    quint32 timeInCadenceZone;

    /*!
     * The LapMessage FIT message's timeInPowerZone field.
     */
    quint32 timeInPowerZone;

    /*!
     * The LapMessage FIT message's repetitionNum field.
     */
    quint16 repetitionNum;

    /*!
     * The LapMessage FIT message's minAltitude field.
     */
    quint16 minAltitude;

    /*!
     * The LapMessage FIT message's minHeartRate field.
     */
    quint8 minHeartRate;

    /*!
     * The LapMessage FIT message's wktStepIndex field.
     */
    MessageIndex wktStepIndex;

    /*!
     * The LapMessage FIT message's opponentScore field.
     */
    quint16 opponentScore;

    /*!
     * The LapMessage FIT message's strokeCount field.
     *
     * stroke_type enum used as the index
     */
    quint16 strokeCount;

    /*!
     * The LapMessage FIT message's zoneCount field.
     *
     * zone number used as the index
     */
    quint16 zoneCount;

    /*!
     * The LapMessage FIT message's avgVerticalOscillation field.
     */
    quint16 avgVerticalOscillation;

    /*!
     * The LapMessage FIT message's avgStanceTimePercent field.
     */
    quint16 avgStanceTimePercent;

    /*!
     * The LapMessage FIT message's avgStanceTime field.
     */
    quint16 avgStanceTime;

    /*!
     * The LapMessage FIT message's avgFractionalCadence field.
     *
     * fractional part of the avg_cadence
     */
    quint8 avgFractionalCadence;

    /*!
     * The LapMessage FIT message's maxFractionalCadence field.
     *
     * fractional part of the max_cadence
     */
    quint8 maxFractionalCadence;

    /*!
     * The LapMessage FIT message's totalFractionalCycles field.
     *
     * fractional part of the total_cycles
     */
    quint8 totalFractionalCycles;

    /*!
     * The LapMessage FIT message's playerScore field.
     */
    quint16 playerScore;

    /*!
     * The LapMessage FIT message's avgTotalHemoglobinConc field.
     *
     * Avg saturated and unsaturated hemoglobin
     */
    quint16 avgTotalHemoglobinConc;

    /*!
     * The LapMessage FIT message's minTotalHemoglobinConc field.
     *
     * Min saturated and unsaturated hemoglobin
     */
    quint16 minTotalHemoglobinConc;

    /*!
     * The LapMessage FIT message's maxTotalHemoglobinConc field.
     *
     * Max saturated and unsaturated hemoglobin
     */
    quint16 maxTotalHemoglobinConc;

    /*!
     * The LapMessage FIT message's avgSaturatedHemoglobinPercent field.
     *
     * Avg percentage of hemoglobin saturated with oxygen
     */
    quint16 avgSaturatedHemoglobinPercent;

    /*!
     * The LapMessage FIT message's minSaturatedHemoglobinPercent field.
     *
     * Min percentage of hemoglobin saturated with oxygen
     */
    quint16 minSaturatedHemoglobinPercent;

    /*!
     * The LapMessage FIT message's maxSaturatedHemoglobinPercent field.
     *
     * Max percentage of hemoglobin saturated with oxygen
     */
    quint16 maxSaturatedHemoglobinPercent;

    /*!
     * The LapMessage FIT message's avgLeftTorqueEffectiveness field.
     */
    quint8 avgLeftTorqueEffectiveness;

    /*!
     * The LapMessage FIT message's avgRightTorqueEffectiveness field.
     */
    quint8 avgRightTorqueEffectiveness;

    /*!
     * The LapMessage FIT message's avgLeftPedalSmoothness field.
     */
    quint8 avgLeftPedalSmoothness;

    /*!
     * The LapMessage FIT message's avgRightPedalSmoothness field.
     */
    quint8 avgRightPedalSmoothness;

    /*!
     * The LapMessage FIT message's avgCombinedPedalSmoothness field.
     */
    quint8 avgCombinedPedalSmoothness;

    /*!
     * The LapMessage FIT message's timeStanding field.
     *
     * Total time spent in the standing position
     */
    quint32 timeStanding;

    /*!
     * The LapMessage FIT message's standCount field.
     *
     * Number of transitions to the standing state
     */
    quint16 standCount;

    /*!
     * The LapMessage FIT message's avgLeftPco field.
     *
     * Average left platform center offset
     */
    qint8 avgLeftPco;

    /*!
     * The LapMessage FIT message's avgRightPco field.
     *
     * Average right platform center offset
     */
    qint8 avgRightPco;

    /*!
     * The LapMessage FIT message's avgLeftPowerPhase field.
     *
     * Average left power phase angles. Data value indexes defined by power_phase_type.
     */
    quint8 avgLeftPowerPhase;

    /*!
     * The LapMessage FIT message's avgLeftPowerPhasePeak field.
     *
     * Average left power phase peak angles. Data value indexes  defined by power_phase_type.
     */
    quint8 avgLeftPowerPhasePeak;

    /*!
     * The LapMessage FIT message's avgRightPowerPhase field.
     *
     * Average right power phase angles. Data value indexes defined by power_phase_type.
     */
    quint8 avgRightPowerPhase;

    /*!
     * The LapMessage FIT message's avgRightPowerPhasePeak field.
     *
     * Average right power phase peak angles. Data value indexes  defined by power_phase_type.
     */
    quint8 avgRightPowerPhasePeak;

    /*!
     * The LapMessage FIT message's avgPowerPosition field.
     *
     * Average power by position. Data value indexes defined by rider_position_type.
     */
    quint16 avgPowerPosition;

    /*!
     * The LapMessage FIT message's maxPowerPosition field.
     *
     * Maximum power by position. Data value indexes defined by rider_position_type.
     */
    quint16 maxPowerPosition;

    /*!
     * The LapMessage FIT message's avgCadencePosition field.
     *
     * Average cadence by position. Data value indexes defined by rider_position_type.
     */
    quint8 avgCadencePosition;

    /*!
     * The LapMessage FIT message's maxCadencePosition field.
     *
     * Maximum cadence by position. Data value indexes defined by rider_position_type.
     */
    quint8 maxCadencePosition;

    /*!
     * The LapMessage FIT message's enhancedAvgSpeed field.
     */
    quint32 enhancedAvgSpeed;

    /*!
     * The LapMessage FIT message's enhancedMaxSpeed field.
     */
    quint32 enhancedMaxSpeed;

    /*!
     * The LapMessage FIT message's enhancedAvgAltitude field.
     */
    quint32 enhancedAvgAltitude;

    /*!
     * The LapMessage FIT message's enhancedMinAltitude field.
     */
    quint32 enhancedMinAltitude;

    /*!
     * The LapMessage FIT message's enhancedMaxAltitude field.
     */
    quint32 enhancedMaxAltitude;

    /*!
     * The LapMessage FIT message's avgLevMotorPower field.
     *
     * lev average motor power during lap
     */
    quint16 avgLevMotorPower;

    /*!
     * The LapMessage FIT message's maxLevMotorPower field.
     *
     * lev maximum motor power during lap
     */
    quint16 maxLevMotorPower;

    /*!
     * The LapMessage FIT message's levBatteryConsumption field.
     *
     * lev battery consumption during lap
     */
    quint8 levBatteryConsumption;

    /*!
     * The LapMessage FIT message's avgVerticalRatio field.
     */
    quint16 avgVerticalRatio;

    /*!
     * The LapMessage FIT message's avgStanceTimeBalance field.
     */
    quint16 avgStanceTimeBalance;

    /*!
     * The LapMessage FIT message's avgStepLength field.
     */
    quint16 avgStepLength;

    /*!
     * The LapMessage FIT message's avgVam field.
     */
    quint16 avgVam;

    /*!
     * The LapMessage FIT message's totalGrit field.
     *
     * The grit score estimates how challenging a route could be for a cyclist in terms of time
     * spent going over sharp turns or large grade slopes.
     */
    float totalGrit;

    /*!
     * The LapMessage FIT message's totalFlow field.
     *
     * The flow score estimates how long distance wise a cyclist deaccelerates over intervals where
     * deacceleration is unnecessary such as smooth turns or small grade angle intervals.
     */
    float totalFlow;

    /*!
     * The LapMessage FIT message's jumpCount field.
     */
    quint16 jumpCount;

    /*!
     * The LapMessage FIT message's avgGrit field.
     *
     * The grit score estimates how challenging a route could be for a cyclist in terms of time
     * spent going over sharp turns or large grade slopes.
     */
    float avgGrit;

    /*!
     * The LapMessage FIT message's avgFlow field.
     *
     * The flow score estimates how long distance wise a cyclist deaccelerates over intervals where
     * deacceleration is unnecessary such as smooth turns or small grade angle intervals.
     */
    float avgFlow;

    /*!
     * The LapMessage FIT message's totalFractionalAscent field.
     *
     * fractional part of total_ascent
     */
    quint8 totalFractionalAscent;

    /*!
     * The LapMessage FIT message's totalFractionalDescent field.
     *
     * fractional part of total_descent
     */
    quint8 totalFractionalDescent;

    /*!
     * The LapMessage FIT message's avgCoreTemperature field.
     */
    quint16 avgCoreTemperature;

    /*!
     * The LapMessage FIT message's minCoreTemperature field.
     */
    quint16 minCoreTemperature;

    /*!
     * The LapMessage FIT message's maxCoreTemperature field.
     */
    quint16 maxCoreTemperature;

    LapMessagePrivate() = delete;
    explicit LapMessagePrivate(LapMessage * const q);
    virtual ~LapMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(LapMessage)
    Q_DISABLE_COPY(LapMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_LAPMESSAGE_P_H
