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

#ifndef QTFIT_SEGMENTLAPMESSAGE_H
#define QTFIT_SEGMENTLAPMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SegmentLapMessagePrivate;

class QTFIT_EXPORT SegmentLapMessage : public AbstractDataMessage {

public:
    SegmentLapMessage();
    ~SegmentLapMessage();

    MessageIndex messageIndex() const;
    DateTime timestamp() const;
    Event event() const;
    EventType eventType() const;
    DateTime startTime() const;
    qint32 startPositionLat() const;
    qint32 startPositionLong() const;
    qint32 endPositionLat() const;
    qint32 endPositionLong() const;
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
    Sport sport() const;
    quint8 eventGroup() const;
    qint32 necLat() const;
    qint32 necLong() const;
    qint32 swcLat() const;
    qint32 swcLong() const;
    QString name() const;
    quint16 normalizedPower() const;
    LeftRightBalance100 leftRightBalance() const;
    SubSport subSport() const;
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
    quint32 timeInHrZone() const;
    quint32 timeInSpeedZone() const;
    quint32 timeInCadenceZone() const;
    quint32 timeInPowerZone() const;
    quint16 repetitionNum() const;
    quint16 minAltitude() const;
    quint8 minHeartRate() const;
    quint32 activeTime() const;
    MessageIndex wktStepIndex() const;
    SportEvent sportEvent() const;
    quint8 avgLeftTorqueEffectiveness() const;
    quint8 avgRightTorqueEffectiveness() const;
    quint8 avgLeftPedalSmoothness() const;
    quint8 avgRightPedalSmoothness() const;
    quint8 avgCombinedPedalSmoothness() const;
    SegmentLapStatus status() const;
    QString uuid() const;
    quint8 avgFractionalCadence() const;
    quint8 maxFractionalCadence() const;
    quint8 totalFractionalCycles() const;
    quint16 frontGearShiftCount() const;
    quint16 rearGearShiftCount() const;
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
    Manufacturer manufacturer() const;
    float totalGrit() const;
    float totalFlow() const;
    float avgGrit() const;
    float avgFlow() const;
    quint8 totalFractionalAscent() const;
    quint8 totalFractionalDescent() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setTimestamp(const DateTime timestamp);
    void setEvent(const Event event);
    void setEventType(const EventType eventType);
    void setStartTime(const DateTime startTime);
    void setStartPositionLat(const qint32 startPositionLat);
    void setStartPositionLong(const qint32 startPositionLong);
    void setEndPositionLat(const qint32 endPositionLat);
    void setEndPositionLong(const qint32 endPositionLong);
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
    void setSport(const Sport sport);
    void setEventGroup(const quint8 eventGroup);
    void setNecLat(const qint32 necLat);
    void setNecLong(const qint32 necLong);
    void setSwcLat(const qint32 swcLat);
    void setSwcLong(const qint32 swcLong);
    void setName(const QString name);
    void setNormalizedPower(const quint16 normalizedPower);
    void setLeftRightBalance(const LeftRightBalance100 leftRightBalance);
    void setSubSport(const SubSport subSport);
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
    void setTimeInHrZone(const quint32 timeInHrZone);
    void setTimeInSpeedZone(const quint32 timeInSpeedZone);
    void setTimeInCadenceZone(const quint32 timeInCadenceZone);
    void setTimeInPowerZone(const quint32 timeInPowerZone);
    void setRepetitionNum(const quint16 repetitionNum);
    void setMinAltitude(const quint16 minAltitude);
    void setMinHeartRate(const quint8 minHeartRate);
    void setActiveTime(const quint32 activeTime);
    void setWktStepIndex(const MessageIndex wktStepIndex);
    void setSportEvent(const SportEvent sportEvent);
    void setAvgLeftTorqueEffectiveness(const quint8 avgLeftTorqueEffectiveness);
    void setAvgRightTorqueEffectiveness(const quint8 avgRightTorqueEffectiveness);
    void setAvgLeftPedalSmoothness(const quint8 avgLeftPedalSmoothness);
    void setAvgRightPedalSmoothness(const quint8 avgRightPedalSmoothness);
    void setAvgCombinedPedalSmoothness(const quint8 avgCombinedPedalSmoothness);
    void setStatus(const SegmentLapStatus status);
    void setUuid(const QString uuid);
    void setAvgFractionalCadence(const quint8 avgFractionalCadence);
    void setMaxFractionalCadence(const quint8 maxFractionalCadence);
    void setTotalFractionalCycles(const quint8 totalFractionalCycles);
    void setFrontGearShiftCount(const quint16 frontGearShiftCount);
    void setRearGearShiftCount(const quint16 rearGearShiftCount);
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
    void setManufacturer(const Manufacturer manufacturer);
    void setTotalGrit(const float totalGrit);
    void setTotalFlow(const float totalFlow);
    void setAvgGrit(const float avgGrit);
    void setAvgFlow(const float avgFlow);
    void setTotalFractionalAscent(const quint8 totalFractionalAscent);
    void setTotalFractionalDescent(const quint8 totalFractionalDescent);

protected:
    /// @cond internal
    explicit SegmentLapMessage(SegmentLapMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SegmentLapMessage)
  //Q_DISABLE_COPY(SegmentLapMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTLAPMESSAGE_H
