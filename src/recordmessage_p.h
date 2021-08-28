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
 * Declares the RecordMessagePrivate class.
 */
#ifndef QTFIT_RECORDMESSAGE_P_H
#define QTFIT_RECORDMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class RecordMessage;

class RecordMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The RecordMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The RecordMessage FIT message's positionLat field.
     */
    qint32 positionLat;

    /*!
     * The RecordMessage FIT message's positionLong field.
     */
    qint32 positionLong;

    /*!
     * The RecordMessage FIT message's altitude field.
     */
    quint16 altitude;

    /*!
     * The RecordMessage FIT message's heartRate field.
     */
    quint8 heartRate;

    /*!
     * The RecordMessage FIT message's cadence field.
     */
    quint8 cadence;

    /*!
     * The RecordMessage FIT message's distance field.
     */
    quint32 distance;

    /*!
     * The RecordMessage FIT message's speed field.
     */
    quint16 speed;

    /*!
     * The RecordMessage FIT message's power field.
     */
    quint16 power;

    /*!
     * The RecordMessage FIT message's compressedSpeedDistance field.
     */
    quint8 compressedSpeedDistance;

    /*!
     * The RecordMessage FIT message's grade field.
     */
    qint16 grade;

    /*!
     * The RecordMessage FIT message's resistance field.
     *
     * Relative. 0 is none  254 is Max.
     */
    quint8 resistance;

    /*!
     * The RecordMessage FIT message's timeFromCourse field.
     */
    qint32 timeFromCourse;

    /*!
     * The RecordMessage FIT message's cycleLength field.
     */
    quint8 cycleLength;

    /*!
     * The RecordMessage FIT message's temperature field.
     */
    qint8 temperature;

    /*!
     * The RecordMessage FIT message's speed1s field.
     *
     * Speed at 1s intervals.  Timestamp field indicates time of last array element.
     */
    quint8 speed1s;

    /*!
     * The RecordMessage FIT message's cycles field.
     */
    quint8 cycles;

    /*!
     * The RecordMessage FIT message's totalCycles field.
     */
    quint32 totalCycles;

    /*!
     * The RecordMessage FIT message's compressedAccumulatedPower field.
     */
    quint16 compressedAccumulatedPower;

    /*!
     * The RecordMessage FIT message's accumulatedPower field.
     */
    quint32 accumulatedPower;

    /*!
     * The RecordMessage FIT message's leftRightBalance field.
     */
    LeftRightBalance leftRightBalance;

    /*!
     * The RecordMessage FIT message's gpsAccuracy field.
     */
    quint8 gpsAccuracy;

    /*!
     * The RecordMessage FIT message's verticalSpeed field.
     */
    qint16 verticalSpeed;

    /*!
     * The RecordMessage FIT message's calories field.
     */
    quint16 calories;

    /*!
     * The RecordMessage FIT message's verticalOscillation field.
     */
    quint16 verticalOscillation;

    /*!
     * The RecordMessage FIT message's stanceTimePercent field.
     */
    quint16 stanceTimePercent;

    /*!
     * The RecordMessage FIT message's stanceTime field.
     */
    quint16 stanceTime;

    /*!
     * The RecordMessage FIT message's activityType field.
     */
    ActivityType activityType;

    /*!
     * The RecordMessage FIT message's leftTorqueEffectiveness field.
     */
    quint8 leftTorqueEffectiveness;

    /*!
     * The RecordMessage FIT message's rightTorqueEffectiveness field.
     */
    quint8 rightTorqueEffectiveness;

    /*!
     * The RecordMessage FIT message's leftPedalSmoothness field.
     */
    quint8 leftPedalSmoothness;

    /*!
     * The RecordMessage FIT message's rightPedalSmoothness field.
     */
    quint8 rightPedalSmoothness;

    /*!
     * The RecordMessage FIT message's combinedPedalSmoothness field.
     */
    quint8 combinedPedalSmoothness;

    /*!
     * The RecordMessage FIT message's time128 field.
     */
    quint8 time128;

    /*!
     * The RecordMessage FIT message's strokeType field.
     */
    StrokeType strokeType;

    /*!
     * The RecordMessage FIT message's zone field.
     */
    quint8 zone;

    /*!
     * The RecordMessage FIT message's ballSpeed field.
     */
    quint16 ballSpeed;

    /*!
     * The RecordMessage FIT message's cadence256 field.
     *
     * Log cadence and fractional cadence for backwards compatability
     */
    quint16 cadence256;

    /*!
     * The RecordMessage FIT message's fractionalCadence field.
     */
    quint8 fractionalCadence;

    /*!
     * The RecordMessage FIT message's totalHemoglobinConc field.
     *
     * Total saturated and unsaturated hemoglobin
     */
    quint16 totalHemoglobinConc;

    /*!
     * The RecordMessage FIT message's totalHemoglobinConcMin field.
     *
     * Min saturated and unsaturated hemoglobin
     */
    quint16 totalHemoglobinConcMin;

    /*!
     * The RecordMessage FIT message's totalHemoglobinConcMax field.
     *
     * Max saturated and unsaturated hemoglobin
     */
    quint16 totalHemoglobinConcMax;

    /*!
     * The RecordMessage FIT message's saturatedHemoglobinPercent field.
     *
     * Percentage of hemoglobin saturated with oxygen
     */
    quint16 saturatedHemoglobinPercent;

    /*!
     * The RecordMessage FIT message's saturatedHemoglobinPercentMin field.
     *
     * Min percentage of hemoglobin saturated with oxygen
     */
    quint16 saturatedHemoglobinPercentMin;

    /*!
     * The RecordMessage FIT message's saturatedHemoglobinPercentMax field.
     *
     * Max percentage of hemoglobin saturated with oxygen
     */
    quint16 saturatedHemoglobinPercentMax;

    /*!
     * The RecordMessage FIT message's deviceIndex field.
     */
    DeviceIndex deviceIndex;

    /*!
     * The RecordMessage FIT message's leftPco field.
     *
     * Left platform center offset
     */
    qint8 leftPco;

    /*!
     * The RecordMessage FIT message's rightPco field.
     *
     * Right platform center offset
     */
    qint8 rightPco;

    /*!
     * The RecordMessage FIT message's leftPowerPhase field.
     *
     * Left power phase angles. Data value indexes defined by power_phase_type.
     */
    quint8 leftPowerPhase;

    /*!
     * The RecordMessage FIT message's leftPowerPhasePeak field.
     *
     * Left power phase peak angles. Data value indexes defined by power_phase_type.
     */
    quint8 leftPowerPhasePeak;

    /*!
     * The RecordMessage FIT message's rightPowerPhase field.
     *
     * Right power phase angles. Data value indexes defined by power_phase_type.
     */
    quint8 rightPowerPhase;

    /*!
     * The RecordMessage FIT message's rightPowerPhasePeak field.
     *
     * Right power phase peak angles. Data value indexes defined by power_phase_type.
     */
    quint8 rightPowerPhasePeak;

    /*!
     * The RecordMessage FIT message's enhancedSpeed field.
     */
    quint32 enhancedSpeed;

    /*!
     * The RecordMessage FIT message's enhancedAltitude field.
     */
    quint32 enhancedAltitude;

    /*!
     * The RecordMessage FIT message's batterySoc field.
     *
     * lev battery state of charge
     */
    quint8 batterySoc;

    /*!
     * The RecordMessage FIT message's motorPower field.
     *
     * lev motor power
     */
    quint16 motorPower;

    /*!
     * The RecordMessage FIT message's verticalRatio field.
     */
    quint16 verticalRatio;

    /*!
     * The RecordMessage FIT message's stanceTimeBalance field.
     */
    quint16 stanceTimeBalance;

    /*!
     * The RecordMessage FIT message's stepLength field.
     */
    quint16 stepLength;

    /*!
     * The RecordMessage FIT message's absolutePressure field.
     *
     * Includes atmospheric pressure
     */
    quint32 absolutePressure;

    /*!
     * The RecordMessage FIT message's depth field.
     *
     * 0 if above water
     */
    quint32 depth;

    /*!
     * The RecordMessage FIT message's nextStopDepth field.
     *
     * 0 if above water
     */
    quint32 nextStopDepth;

    /*!
     * The RecordMessage FIT message's nextStopTime field.
     */
    quint32 nextStopTime;

    /*!
     * The RecordMessage FIT message's timeToSurface field.
     */
    quint32 timeToSurface;

    /*!
     * The RecordMessage FIT message's ndlTime field.
     */
    quint32 ndlTime;

    /*!
     * The RecordMessage FIT message's cnsLoad field.
     */
    quint8 cnsLoad;

    /*!
     * The RecordMessage FIT message's n2Load field.
     */
    quint16 n2Load;

    /*!
     * The RecordMessage FIT message's grit field.
     *
     * The grit score estimates how challenging a route could be for a cyclist in terms of time
     * spent going over sharp turns or large grade slopes.
     */
    float grit;

    /*!
     * The RecordMessage FIT message's flow field.
     *
     * The flow score estimates how long distance wise a cyclist deaccelerates over intervals where
     * deacceleration is unnecessary such as smooth turns or small grade angle intervals.
     */
    float flow;

    /*!
     * The RecordMessage FIT message's ebikeTravelRange field.
     */
    quint16 ebikeTravelRange;

    /*!
     * The RecordMessage FIT message's ebikeBatteryLevel field.
     */
    quint8 ebikeBatteryLevel;

    /*!
     * The RecordMessage FIT message's ebikeAssistMode field.
     */
    quint8 ebikeAssistMode;

    /*!
     * The RecordMessage FIT message's ebikeAssistLevelPercent field.
     */
    quint8 ebikeAssistLevelPercent;

    /*!
     * The RecordMessage FIT message's coreTemperature field.
     */
    quint16 coreTemperature;

    RecordMessagePrivate() = delete;
    explicit RecordMessagePrivate(RecordMessage * const q);
    virtual ~RecordMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(RecordMessage)
    Q_DISABLE_COPY(RecordMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_RECORDMESSAGE_P_H
