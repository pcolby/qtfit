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

#ifndef QTFIT_SEGMENTLAPMESSAGE_P_H
#define QTFIT_SEGMENTLAPMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SegmentLapMessage;

class SegmentLapMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SegmentLapMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The SegmentLapMessage FIT message's timestamp field.
     *
     * Lap end time.
     */
    DateTime timestamp;

    /*!
     * The SegmentLapMessage FIT message's event field.
     */
    Event event;

    /*!
     * The SegmentLapMessage FIT message's eventType field.
     */
    EventType eventType;

    /*!
     * The SegmentLapMessage FIT message's startTime field.
     */
    DateTime startTime;

    /*!
     * The SegmentLapMessage FIT message's startPositionLat field.
     */
    qint32 startPositionLat;

    /*!
     * The SegmentLapMessage FIT message's startPositionLong field.
     */
    qint32 startPositionLong;

    /*!
     * The SegmentLapMessage FIT message's endPositionLat field.
     */
    qint32 endPositionLat;

    /*!
     * The SegmentLapMessage FIT message's endPositionLong field.
     */
    qint32 endPositionLong;

    /*!
     * The SegmentLapMessage FIT message's totalElapsedTime field.
     *
     * Time (includes pauses)
     */
    quint32 totalElapsedTime;

    /*!
     * The SegmentLapMessage FIT message's totalTimerTime field.
     *
     * Timer Time (excludes pauses)
     */
    quint32 totalTimerTime;

    /*!
     * The SegmentLapMessage FIT message's totalDistance field.
     */
    quint32 totalDistance;

    /*!
     * The SegmentLapMessage FIT message's totalCycles field.
     */
    quint32 totalCycles;

    /*!
     * The SegmentLapMessage FIT message's totalCalories field.
     */
    quint16 totalCalories;

    /*!
     * The SegmentLapMessage FIT message's totalFatCalories field.
     *
     * If New Leaf
     */
    quint16 totalFatCalories;

    /*!
     * The SegmentLapMessage FIT message's avgSpeed field.
     */
    quint16 avgSpeed;

    /*!
     * The SegmentLapMessage FIT message's maxSpeed field.
     */
    quint16 maxSpeed;

    /*!
     * The SegmentLapMessage FIT message's avgHeartRate field.
     */
    quint8 avgHeartRate;

    /*!
     * The SegmentLapMessage FIT message's maxHeartRate field.
     */
    quint8 maxHeartRate;

    /*!
     * The SegmentLapMessage FIT message's avgCadence field.
     *
     * total_cycles / total_timer_time if non_zero_avg_cadence otherwise total_cycles /
     * total_elapsed_time
     */
    quint8 avgCadence;

    /*!
     * The SegmentLapMessage FIT message's maxCadence field.
     */
    quint8 maxCadence;

    /*!
     * The SegmentLapMessage FIT message's avgPower field.
     *
     * total_power / total_timer_time if non_zero_avg_power otherwise total_power /
     * total_elapsed_time
     */
    quint16 avgPower;

    /*!
     * The SegmentLapMessage FIT message's maxPower field.
     */
    quint16 maxPower;

    /*!
     * The SegmentLapMessage FIT message's totalAscent field.
     */
    quint16 totalAscent;

    /*!
     * The SegmentLapMessage FIT message's totalDescent field.
     */
    quint16 totalDescent;

    /*!
     * The SegmentLapMessage FIT message's sport field.
     */
    Sport sport;

    /*!
     * The SegmentLapMessage FIT message's eventGroup field.
     */
    quint8 eventGroup;

    /*!
     * The SegmentLapMessage FIT message's necLat field.
     *
     * North east corner latitude.
     */
    qint32 necLat;

    /*!
     * The SegmentLapMessage FIT message's necLong field.
     *
     * North east corner longitude.
     */
    qint32 necLong;

    /*!
     * The SegmentLapMessage FIT message's swcLat field.
     *
     * South west corner latitude.
     */
    qint32 swcLat;

    /*!
     * The SegmentLapMessage FIT message's swcLong field.
     *
     * South west corner latitude.
     */
    qint32 swcLong;

    /*!
     * The SegmentLapMessage FIT message's name field.
     */
    QString name;

    /*!
     * The SegmentLapMessage FIT message's normalizedPower field.
     */
    quint16 normalizedPower;

    /*!
     * The SegmentLapMessage FIT message's leftRightBalance field.
     */
    LeftRightBalance100 leftRightBalance;

    /*!
     * The SegmentLapMessage FIT message's subSport field.
     */
    SubSport subSport;

    /*!
     * The SegmentLapMessage FIT message's totalWork field.
     */
    quint32 totalWork;

    /*!
     * The SegmentLapMessage FIT message's avgAltitude field.
     */
    quint16 avgAltitude;

    /*!
     * The SegmentLapMessage FIT message's maxAltitude field.
     */
    quint16 maxAltitude;

    /*!
     * The SegmentLapMessage FIT message's gpsAccuracy field.
     */
    quint8 gpsAccuracy;

    /*!
     * The SegmentLapMessage FIT message's avgGrade field.
     */
    qint16 avgGrade;

    /*!
     * The SegmentLapMessage FIT message's avgPosGrade field.
     */
    qint16 avgPosGrade;

    /*!
     * The SegmentLapMessage FIT message's avgNegGrade field.
     */
    qint16 avgNegGrade;

    /*!
     * The SegmentLapMessage FIT message's maxPosGrade field.
     */
    qint16 maxPosGrade;

    /*!
     * The SegmentLapMessage FIT message's maxNegGrade field.
     */
    qint16 maxNegGrade;

    /*!
     * The SegmentLapMessage FIT message's avgTemperature field.
     */
    qint8 avgTemperature;

    /*!
     * The SegmentLapMessage FIT message's maxTemperature field.
     */
    qint8 maxTemperature;

    /*!
     * The SegmentLapMessage FIT message's totalMovingTime field.
     */
    quint32 totalMovingTime;

    /*!
     * The SegmentLapMessage FIT message's avgPosVerticalSpeed field.
     */
    qint16 avgPosVerticalSpeed;

    /*!
     * The SegmentLapMessage FIT message's avgNegVerticalSpeed field.
     */
    qint16 avgNegVerticalSpeed;

    /*!
     * The SegmentLapMessage FIT message's maxPosVerticalSpeed field.
     */
    qint16 maxPosVerticalSpeed;

    /*!
     * The SegmentLapMessage FIT message's maxNegVerticalSpeed field.
     */
    qint16 maxNegVerticalSpeed;

    /*!
     * The SegmentLapMessage FIT message's timeInHrZone field.
     */
    quint32 timeInHrZone;

    /*!
     * The SegmentLapMessage FIT message's timeInSpeedZone field.
     */
    quint32 timeInSpeedZone;

    /*!
     * The SegmentLapMessage FIT message's timeInCadenceZone field.
     */
    quint32 timeInCadenceZone;

    /*!
     * The SegmentLapMessage FIT message's timeInPowerZone field.
     */
    quint32 timeInPowerZone;

    /*!
     * The SegmentLapMessage FIT message's repetitionNum field.
     */
    quint16 repetitionNum;

    /*!
     * The SegmentLapMessage FIT message's minAltitude field.
     */
    quint16 minAltitude;

    /*!
     * The SegmentLapMessage FIT message's minHeartRate field.
     */
    quint8 minHeartRate;

    /*!
     * The SegmentLapMessage FIT message's activeTime field.
     */
    quint32 activeTime;

    /*!
     * The SegmentLapMessage FIT message's wktStepIndex field.
     */
    MessageIndex wktStepIndex;

    /*!
     * The SegmentLapMessage FIT message's sportEvent field.
     */
    SportEvent sportEvent;

    /*!
     * The SegmentLapMessage FIT message's avgLeftTorqueEffectiveness field.
     */
    quint8 avgLeftTorqueEffectiveness;

    /*!
     * The SegmentLapMessage FIT message's avgRightTorqueEffectiveness field.
     */
    quint8 avgRightTorqueEffectiveness;

    /*!
     * The SegmentLapMessage FIT message's avgLeftPedalSmoothness field.
     */
    quint8 avgLeftPedalSmoothness;

    /*!
     * The SegmentLapMessage FIT message's avgRightPedalSmoothness field.
     */
    quint8 avgRightPedalSmoothness;

    /*!
     * The SegmentLapMessage FIT message's avgCombinedPedalSmoothness field.
     */
    quint8 avgCombinedPedalSmoothness;

    /*!
     * The SegmentLapMessage FIT message's status field.
     */
    SegmentLapStatus status;

    /*!
     * The SegmentLapMessage FIT message's uuid field.
     */
    QString uuid;

    /*!
     * The SegmentLapMessage FIT message's avgFractionalCadence field.
     *
     * fractional part of the avg_cadence
     */
    quint8 avgFractionalCadence;

    /*!
     * The SegmentLapMessage FIT message's maxFractionalCadence field.
     *
     * fractional part of the max_cadence
     */
    quint8 maxFractionalCadence;

    /*!
     * The SegmentLapMessage FIT message's totalFractionalCycles field.
     *
     * fractional part of the total_cycles
     */
    quint8 totalFractionalCycles;

    /*!
     * The SegmentLapMessage FIT message's frontGearShiftCount field.
     */
    quint16 frontGearShiftCount;

    /*!
     * The SegmentLapMessage FIT message's rearGearShiftCount field.
     */
    quint16 rearGearShiftCount;

    /*!
     * The SegmentLapMessage FIT message's timeStanding field.
     *
     * Total time spent in the standing position
     */
    quint32 timeStanding;

    /*!
     * The SegmentLapMessage FIT message's standCount field.
     *
     * Number of transitions to the standing state
     */
    quint16 standCount;

    /*!
     * The SegmentLapMessage FIT message's avgLeftPco field.
     *
     * Average left platform center offset
     */
    qint8 avgLeftPco;

    /*!
     * The SegmentLapMessage FIT message's avgRightPco field.
     *
     * Average right platform center offset
     */
    qint8 avgRightPco;

    /*!
     * The SegmentLapMessage FIT message's avgLeftPowerPhase field.
     *
     * Average left power phase angles. Data value indexes defined by power_phase_type.
     */
    quint8 avgLeftPowerPhase;

    /*!
     * The SegmentLapMessage FIT message's avgLeftPowerPhasePeak field.
     *
     * Average left power phase peak angles. Data value indexes defined by power_phase_type.
     */
    quint8 avgLeftPowerPhasePeak;

    /*!
     * The SegmentLapMessage FIT message's avgRightPowerPhase field.
     *
     * Average right power phase angles. Data value indexes defined by power_phase_type.
     */
    quint8 avgRightPowerPhase;

    /*!
     * The SegmentLapMessage FIT message's avgRightPowerPhasePeak field.
     *
     * Average right power phase peak angles. Data value indexes defined by power_phase_type.
     */
    quint8 avgRightPowerPhasePeak;

    /*!
     * The SegmentLapMessage FIT message's avgPowerPosition field.
     *
     * Average power by position. Data value indexes defined by rider_position_type.
     */
    quint16 avgPowerPosition;

    /*!
     * The SegmentLapMessage FIT message's maxPowerPosition field.
     *
     * Maximum power by position. Data value indexes defined by rider_position_type.
     */
    quint16 maxPowerPosition;

    /*!
     * The SegmentLapMessage FIT message's avgCadencePosition field.
     *
     * Average cadence by position. Data value indexes defined by rider_position_type.
     */
    quint8 avgCadencePosition;

    /*!
     * The SegmentLapMessage FIT message's maxCadencePosition field.
     *
     * Maximum cadence by position. Data value indexes defined by rider_position_type.
     */
    quint8 maxCadencePosition;

    /*!
     * The SegmentLapMessage FIT message's manufacturer field.
     *
     * Manufacturer that produced the segment
     */
    Manufacturer manufacturer;

    /*!
     * The SegmentLapMessage FIT message's totalGrit field.
     *
     * The grit score estimates how challenging a route could be for a cyclist in terms of time
     * spent going over sharp turns or large grade slopes.
     */
    float totalGrit;

    /*!
     * The SegmentLapMessage FIT message's totalFlow field.
     *
     * The flow score estimates how long distance wise a cyclist deaccelerates over intervals where
     * deacceleration is unnecessary such as smooth turns or small grade angle intervals.
     */
    float totalFlow;

    /*!
     * The SegmentLapMessage FIT message's avgGrit field.
     *
     * The grit score estimates how challenging a route could be for a cyclist in terms of time
     * spent going over sharp turns or large grade slopes.
     */
    float avgGrit;

    /*!
     * The SegmentLapMessage FIT message's avgFlow field.
     *
     * The flow score estimates how long distance wise a cyclist deaccelerates over intervals where
     * deacceleration is unnecessary such as smooth turns or small grade angle intervals.
     */
    float avgFlow;

    /*!
     * The SegmentLapMessage FIT message's totalFractionalAscent field.
     *
     * fractional part of total_ascent
     */
    quint8 totalFractionalAscent;

    /*!
     * The SegmentLapMessage FIT message's totalFractionalDescent field.
     *
     * fractional part of total_descent
     */
    quint8 totalFractionalDescent;

    SegmentLapMessagePrivate() = delete;
    explicit SegmentLapMessagePrivate(SegmentLapMessage * const q);
    virtual ~SegmentLapMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SegmentLapMessage)
    Q_DISABLE_COPY(SegmentLapMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTLAPMESSAGE_P_H
