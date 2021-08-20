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

#include "lapmessage.h"
#include "lapmessage_p.h"

QTFIT_BEGIN_NAMESPACE

LapMessage::LapMessage() : FitDataMessage(new LapMessagePrivate(this))
{

}

MessageIndex LapMessage::messageIndex() const
{
    Q_D(const LapMessage);
    return d->messageIndex;
}

DateTime LapMessage::timestamp() const
{
    Q_D(const LapMessage);
    return d->timestamp;
}

Event LapMessage::event() const
{
    Q_D(const LapMessage);
    return d->event;
}

EventType LapMessage::eventType() const
{
    Q_D(const LapMessage);
    return d->eventType;
}

DateTime LapMessage::startTime() const
{
    Q_D(const LapMessage);
    return d->startTime;
}

qint32 LapMessage::startPositionLat() const
{
    Q_D(const LapMessage);
    return d->startPositionLat;
}

qint32 LapMessage::startPositionLong() const
{
    Q_D(const LapMessage);
    return d->startPositionLong;
}

qint32 LapMessage::endPositionLat() const
{
    Q_D(const LapMessage);
    return d->endPositionLat;
}

qint32 LapMessage::endPositionLong() const
{
    Q_D(const LapMessage);
    return d->endPositionLong;
}

quint32 LapMessage::totalElapsedTime() const
{
    Q_D(const LapMessage);
    return d->totalElapsedTime;
}

quint32 LapMessage::totalTimerTime() const
{
    Q_D(const LapMessage);
    return d->totalTimerTime;
}

quint32 LapMessage::totalDistance() const
{
    Q_D(const LapMessage);
    return d->totalDistance;
}

quint32 LapMessage::totalCycles() const
{
    Q_D(const LapMessage);
    return d->totalCycles;
}

quint16 LapMessage::totalCalories() const
{
    Q_D(const LapMessage);
    return d->totalCalories;
}

quint16 LapMessage::totalFatCalories() const
{
    Q_D(const LapMessage);
    return d->totalFatCalories;
}

quint16 LapMessage::avgSpeed() const
{
    Q_D(const LapMessage);
    return d->avgSpeed;
}

quint16 LapMessage::maxSpeed() const
{
    Q_D(const LapMessage);
    return d->maxSpeed;
}

quint8 LapMessage::avgHeartRate() const
{
    Q_D(const LapMessage);
    return d->avgHeartRate;
}

quint8 LapMessage::maxHeartRate() const
{
    Q_D(const LapMessage);
    return d->maxHeartRate;
}

quint8 LapMessage::avgCadence() const
{
    Q_D(const LapMessage);
    return d->avgCadence;
}

quint8 LapMessage::maxCadence() const
{
    Q_D(const LapMessage);
    return d->maxCadence;
}

quint16 LapMessage::avgPower() const
{
    Q_D(const LapMessage);
    return d->avgPower;
}

quint16 LapMessage::maxPower() const
{
    Q_D(const LapMessage);
    return d->maxPower;
}

quint16 LapMessage::totalAscent() const
{
    Q_D(const LapMessage);
    return d->totalAscent;
}

quint16 LapMessage::totalDescent() const
{
    Q_D(const LapMessage);
    return d->totalDescent;
}

Intensity LapMessage::intensity() const
{
    Q_D(const LapMessage);
    return d->intensity;
}

LapTrigger LapMessage::lapTrigger() const
{
    Q_D(const LapMessage);
    return d->lapTrigger;
}

Sport LapMessage::sport() const
{
    Q_D(const LapMessage);
    return d->sport;
}

quint8 LapMessage::eventGroup() const
{
    Q_D(const LapMessage);
    return d->eventGroup;
}

quint16 LapMessage::numLengths() const
{
    Q_D(const LapMessage);
    return d->numLengths;
}

quint16 LapMessage::normalizedPower() const
{
    Q_D(const LapMessage);
    return d->normalizedPower;
}

LeftRightBalance100 LapMessage::leftRightBalance() const
{
    Q_D(const LapMessage);
    return d->leftRightBalance;
}

quint16 LapMessage::firstLengthIndex() const
{
    Q_D(const LapMessage);
    return d->firstLengthIndex;
}

quint16 LapMessage::avgStrokeDistance() const
{
    Q_D(const LapMessage);
    return d->avgStrokeDistance;
}

SwimStroke LapMessage::swimStroke() const
{
    Q_D(const LapMessage);
    return d->swimStroke;
}

SubSport LapMessage::subSport() const
{
    Q_D(const LapMessage);
    return d->subSport;
}

quint16 LapMessage::numActiveLengths() const
{
    Q_D(const LapMessage);
    return d->numActiveLengths;
}

quint32 LapMessage::totalWork() const
{
    Q_D(const LapMessage);
    return d->totalWork;
}

quint16 LapMessage::avgAltitude() const
{
    Q_D(const LapMessage);
    return d->avgAltitude;
}

quint16 LapMessage::maxAltitude() const
{
    Q_D(const LapMessage);
    return d->maxAltitude;
}

quint8 LapMessage::gpsAccuracy() const
{
    Q_D(const LapMessage);
    return d->gpsAccuracy;
}

qint16 LapMessage::avgGrade() const
{
    Q_D(const LapMessage);
    return d->avgGrade;
}

qint16 LapMessage::avgPosGrade() const
{
    Q_D(const LapMessage);
    return d->avgPosGrade;
}

qint16 LapMessage::avgNegGrade() const
{
    Q_D(const LapMessage);
    return d->avgNegGrade;
}

qint16 LapMessage::maxPosGrade() const
{
    Q_D(const LapMessage);
    return d->maxPosGrade;
}

qint16 LapMessage::maxNegGrade() const
{
    Q_D(const LapMessage);
    return d->maxNegGrade;
}

qint8 LapMessage::avgTemperature() const
{
    Q_D(const LapMessage);
    return d->avgTemperature;
}

qint8 LapMessage::maxTemperature() const
{
    Q_D(const LapMessage);
    return d->maxTemperature;
}

quint32 LapMessage::totalMovingTime() const
{
    Q_D(const LapMessage);
    return d->totalMovingTime;
}

qint16 LapMessage::avgPosVerticalSpeed() const
{
    Q_D(const LapMessage);
    return d->avgPosVerticalSpeed;
}

qint16 LapMessage::avgNegVerticalSpeed() const
{
    Q_D(const LapMessage);
    return d->avgNegVerticalSpeed;
}

qint16 LapMessage::maxPosVerticalSpeed() const
{
    Q_D(const LapMessage);
    return d->maxPosVerticalSpeed;
}

qint16 LapMessage::maxNegVerticalSpeed() const
{
    Q_D(const LapMessage);
    return d->maxNegVerticalSpeed;
}

quint32 LapMessage::timeInHrZone() const
{
    Q_D(const LapMessage);
    return d->timeInHrZone;
}

quint32 LapMessage::timeInSpeedZone() const
{
    Q_D(const LapMessage);
    return d->timeInSpeedZone;
}

quint32 LapMessage::timeInCadenceZone() const
{
    Q_D(const LapMessage);
    return d->timeInCadenceZone;
}

quint32 LapMessage::timeInPowerZone() const
{
    Q_D(const LapMessage);
    return d->timeInPowerZone;
}

quint16 LapMessage::repetitionNum() const
{
    Q_D(const LapMessage);
    return d->repetitionNum;
}

quint16 LapMessage::minAltitude() const
{
    Q_D(const LapMessage);
    return d->minAltitude;
}

quint8 LapMessage::minHeartRate() const
{
    Q_D(const LapMessage);
    return d->minHeartRate;
}

MessageIndex LapMessage::wktStepIndex() const
{
    Q_D(const LapMessage);
    return d->wktStepIndex;
}

quint16 LapMessage::opponentScore() const
{
    Q_D(const LapMessage);
    return d->opponentScore;
}

quint16 LapMessage::strokeCount() const
{
    Q_D(const LapMessage);
    return d->strokeCount;
}

quint16 LapMessage::zoneCount() const
{
    Q_D(const LapMessage);
    return d->zoneCount;
}

quint16 LapMessage::avgVerticalOscillation() const
{
    Q_D(const LapMessage);
    return d->avgVerticalOscillation;
}

quint16 LapMessage::avgStanceTimePercent() const
{
    Q_D(const LapMessage);
    return d->avgStanceTimePercent;
}

quint16 LapMessage::avgStanceTime() const
{
    Q_D(const LapMessage);
    return d->avgStanceTime;
}

quint8 LapMessage::avgFractionalCadence() const
{
    Q_D(const LapMessage);
    return d->avgFractionalCadence;
}

quint8 LapMessage::maxFractionalCadence() const
{
    Q_D(const LapMessage);
    return d->maxFractionalCadence;
}

quint8 LapMessage::totalFractionalCycles() const
{
    Q_D(const LapMessage);
    return d->totalFractionalCycles;
}

quint16 LapMessage::playerScore() const
{
    Q_D(const LapMessage);
    return d->playerScore;
}

quint16 LapMessage::avgTotalHemoglobinConc() const
{
    Q_D(const LapMessage);
    return d->avgTotalHemoglobinConc;
}

quint16 LapMessage::minTotalHemoglobinConc() const
{
    Q_D(const LapMessage);
    return d->minTotalHemoglobinConc;
}

quint16 LapMessage::maxTotalHemoglobinConc() const
{
    Q_D(const LapMessage);
    return d->maxTotalHemoglobinConc;
}

quint16 LapMessage::avgSaturatedHemoglobinPercent() const
{
    Q_D(const LapMessage);
    return d->avgSaturatedHemoglobinPercent;
}

quint16 LapMessage::minSaturatedHemoglobinPercent() const
{
    Q_D(const LapMessage);
    return d->minSaturatedHemoglobinPercent;
}

quint16 LapMessage::maxSaturatedHemoglobinPercent() const
{
    Q_D(const LapMessage);
    return d->maxSaturatedHemoglobinPercent;
}

quint8 LapMessage::avgLeftTorqueEffectiveness() const
{
    Q_D(const LapMessage);
    return d->avgLeftTorqueEffectiveness;
}

quint8 LapMessage::avgRightTorqueEffectiveness() const
{
    Q_D(const LapMessage);
    return d->avgRightTorqueEffectiveness;
}

quint8 LapMessage::avgLeftPedalSmoothness() const
{
    Q_D(const LapMessage);
    return d->avgLeftPedalSmoothness;
}

quint8 LapMessage::avgRightPedalSmoothness() const
{
    Q_D(const LapMessage);
    return d->avgRightPedalSmoothness;
}

quint8 LapMessage::avgCombinedPedalSmoothness() const
{
    Q_D(const LapMessage);
    return d->avgCombinedPedalSmoothness;
}

quint32 LapMessage::timeStanding() const
{
    Q_D(const LapMessage);
    return d->timeStanding;
}

quint16 LapMessage::standCount() const
{
    Q_D(const LapMessage);
    return d->standCount;
}

qint8 LapMessage::avgLeftPco() const
{
    Q_D(const LapMessage);
    return d->avgLeftPco;
}

qint8 LapMessage::avgRightPco() const
{
    Q_D(const LapMessage);
    return d->avgRightPco;
}

quint8 LapMessage::avgLeftPowerPhase() const
{
    Q_D(const LapMessage);
    return d->avgLeftPowerPhase;
}

quint8 LapMessage::avgLeftPowerPhasePeak() const
{
    Q_D(const LapMessage);
    return d->avgLeftPowerPhasePeak;
}

quint8 LapMessage::avgRightPowerPhase() const
{
    Q_D(const LapMessage);
    return d->avgRightPowerPhase;
}

quint8 LapMessage::avgRightPowerPhasePeak() const
{
    Q_D(const LapMessage);
    return d->avgRightPowerPhasePeak;
}

quint16 LapMessage::avgPowerPosition() const
{
    Q_D(const LapMessage);
    return d->avgPowerPosition;
}

quint16 LapMessage::maxPowerPosition() const
{
    Q_D(const LapMessage);
    return d->maxPowerPosition;
}

quint8 LapMessage::avgCadencePosition() const
{
    Q_D(const LapMessage);
    return d->avgCadencePosition;
}

quint8 LapMessage::maxCadencePosition() const
{
    Q_D(const LapMessage);
    return d->maxCadencePosition;
}

quint32 LapMessage::enhancedAvgSpeed() const
{
    Q_D(const LapMessage);
    return d->enhancedAvgSpeed;
}

quint32 LapMessage::enhancedMaxSpeed() const
{
    Q_D(const LapMessage);
    return d->enhancedMaxSpeed;
}

quint32 LapMessage::enhancedAvgAltitude() const
{
    Q_D(const LapMessage);
    return d->enhancedAvgAltitude;
}

quint32 LapMessage::enhancedMinAltitude() const
{
    Q_D(const LapMessage);
    return d->enhancedMinAltitude;
}

quint32 LapMessage::enhancedMaxAltitude() const
{
    Q_D(const LapMessage);
    return d->enhancedMaxAltitude;
}

quint16 LapMessage::avgLevMotorPower() const
{
    Q_D(const LapMessage);
    return d->avgLevMotorPower;
}

quint16 LapMessage::maxLevMotorPower() const
{
    Q_D(const LapMessage);
    return d->maxLevMotorPower;
}

quint8 LapMessage::levBatteryConsumption() const
{
    Q_D(const LapMessage);
    return d->levBatteryConsumption;
}

quint16 LapMessage::avgVerticalRatio() const
{
    Q_D(const LapMessage);
    return d->avgVerticalRatio;
}

quint16 LapMessage::avgStanceTimeBalance() const
{
    Q_D(const LapMessage);
    return d->avgStanceTimeBalance;
}

quint16 LapMessage::avgStepLength() const
{
    Q_D(const LapMessage);
    return d->avgStepLength;
}

quint16 LapMessage::avgVam() const
{
    Q_D(const LapMessage);
    return d->avgVam;
}

float LapMessage::totalGrit() const
{
    Q_D(const LapMessage);
    return d->totalGrit;
}

float LapMessage::totalFlow() const
{
    Q_D(const LapMessage);
    return d->totalFlow;
}

quint16 LapMessage::jumpCount() const
{
    Q_D(const LapMessage);
    return d->jumpCount;
}

float LapMessage::avgGrit() const
{
    Q_D(const LapMessage);
    return d->avgGrit;
}

float LapMessage::avgFlow() const
{
    Q_D(const LapMessage);
    return d->avgFlow;
}

quint8 LapMessage::totalFractionalAscent() const
{
    Q_D(const LapMessage);
    return d->totalFractionalAscent;
}

quint8 LapMessage::totalFractionalDescent() const
{
    Q_D(const LapMessage);
    return d->totalFractionalDescent;
}

quint16 LapMessage::avgCoreTemperature() const
{
    Q_D(const LapMessage);
    return d->avgCoreTemperature;
}

quint16 LapMessage::minCoreTemperature() const
{
    Q_D(const LapMessage);
    return d->minCoreTemperature;
}

quint16 LapMessage::maxCoreTemperature() const
{
    Q_D(const LapMessage);
    return d->maxCoreTemperature;
}

void LapMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(LapMessage);
    d->messageIndex = messageIndex;
}
void LapMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(LapMessage);
    d->timestamp = timestamp;
}
void LapMessage::setEvent(const Event event)
{
    Q_D(LapMessage);
    d->event = event;
}
void LapMessage::setEventType(const EventType eventType)
{
    Q_D(LapMessage);
    d->eventType = eventType;
}
void LapMessage::setStartTime(const DateTime startTime)
{
    Q_D(LapMessage);
    d->startTime = startTime;
}
void LapMessage::setStartPositionLat(const qint32 startPositionLat)
{
    Q_D(LapMessage);
    d->startPositionLat = startPositionLat;
}
void LapMessage::setStartPositionLong(const qint32 startPositionLong)
{
    Q_D(LapMessage);
    d->startPositionLong = startPositionLong;
}
void LapMessage::setEndPositionLat(const qint32 endPositionLat)
{
    Q_D(LapMessage);
    d->endPositionLat = endPositionLat;
}
void LapMessage::setEndPositionLong(const qint32 endPositionLong)
{
    Q_D(LapMessage);
    d->endPositionLong = endPositionLong;
}
void LapMessage::setTotalElapsedTime(const quint32 totalElapsedTime)
{
    Q_D(LapMessage);
    d->totalElapsedTime = totalElapsedTime;
}
void LapMessage::setTotalTimerTime(const quint32 totalTimerTime)
{
    Q_D(LapMessage);
    d->totalTimerTime = totalTimerTime;
}
void LapMessage::setTotalDistance(const quint32 totalDistance)
{
    Q_D(LapMessage);
    d->totalDistance = totalDistance;
}
void LapMessage::setTotalCycles(const quint32 totalCycles)
{
    Q_D(LapMessage);
    d->totalCycles = totalCycles;
}
void LapMessage::setTotalCalories(const quint16 totalCalories)
{
    Q_D(LapMessage);
    d->totalCalories = totalCalories;
}
void LapMessage::setTotalFatCalories(const quint16 totalFatCalories)
{
    Q_D(LapMessage);
    d->totalFatCalories = totalFatCalories;
}
void LapMessage::setAvgSpeed(const quint16 avgSpeed)
{
    Q_D(LapMessage);
    d->avgSpeed = avgSpeed;
}
void LapMessage::setMaxSpeed(const quint16 maxSpeed)
{
    Q_D(LapMessage);
    d->maxSpeed = maxSpeed;
}
void LapMessage::setAvgHeartRate(const quint8 avgHeartRate)
{
    Q_D(LapMessage);
    d->avgHeartRate = avgHeartRate;
}
void LapMessage::setMaxHeartRate(const quint8 maxHeartRate)
{
    Q_D(LapMessage);
    d->maxHeartRate = maxHeartRate;
}
void LapMessage::setAvgCadence(const quint8 avgCadence)
{
    Q_D(LapMessage);
    d->avgCadence = avgCadence;
}
void LapMessage::setMaxCadence(const quint8 maxCadence)
{
    Q_D(LapMessage);
    d->maxCadence = maxCadence;
}
void LapMessage::setAvgPower(const quint16 avgPower)
{
    Q_D(LapMessage);
    d->avgPower = avgPower;
}
void LapMessage::setMaxPower(const quint16 maxPower)
{
    Q_D(LapMessage);
    d->maxPower = maxPower;
}
void LapMessage::setTotalAscent(const quint16 totalAscent)
{
    Q_D(LapMessage);
    d->totalAscent = totalAscent;
}
void LapMessage::setTotalDescent(const quint16 totalDescent)
{
    Q_D(LapMessage);
    d->totalDescent = totalDescent;
}
void LapMessage::setIntensity(const Intensity intensity)
{
    Q_D(LapMessage);
    d->intensity = intensity;
}
void LapMessage::setLapTrigger(const LapTrigger lapTrigger)
{
    Q_D(LapMessage);
    d->lapTrigger = lapTrigger;
}
void LapMessage::setSport(const Sport sport)
{
    Q_D(LapMessage);
    d->sport = sport;
}
void LapMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(LapMessage);
    d->eventGroup = eventGroup;
}
void LapMessage::setNumLengths(const quint16 numLengths)
{
    Q_D(LapMessage);
    d->numLengths = numLengths;
}
void LapMessage::setNormalizedPower(const quint16 normalizedPower)
{
    Q_D(LapMessage);
    d->normalizedPower = normalizedPower;
}
void LapMessage::setLeftRightBalance(const LeftRightBalance100 leftRightBalance)
{
    Q_D(LapMessage);
    d->leftRightBalance = leftRightBalance;
}
void LapMessage::setFirstLengthIndex(const quint16 firstLengthIndex)
{
    Q_D(LapMessage);
    d->firstLengthIndex = firstLengthIndex;
}
void LapMessage::setAvgStrokeDistance(const quint16 avgStrokeDistance)
{
    Q_D(LapMessage);
    d->avgStrokeDistance = avgStrokeDistance;
}
void LapMessage::setSwimStroke(const SwimStroke swimStroke)
{
    Q_D(LapMessage);
    d->swimStroke = swimStroke;
}
void LapMessage::setSubSport(const SubSport subSport)
{
    Q_D(LapMessage);
    d->subSport = subSport;
}
void LapMessage::setNumActiveLengths(const quint16 numActiveLengths)
{
    Q_D(LapMessage);
    d->numActiveLengths = numActiveLengths;
}
void LapMessage::setTotalWork(const quint32 totalWork)
{
    Q_D(LapMessage);
    d->totalWork = totalWork;
}
void LapMessage::setAvgAltitude(const quint16 avgAltitude)
{
    Q_D(LapMessage);
    d->avgAltitude = avgAltitude;
}
void LapMessage::setMaxAltitude(const quint16 maxAltitude)
{
    Q_D(LapMessage);
    d->maxAltitude = maxAltitude;
}
void LapMessage::setGpsAccuracy(const quint8 gpsAccuracy)
{
    Q_D(LapMessage);
    d->gpsAccuracy = gpsAccuracy;
}
void LapMessage::setAvgGrade(const qint16 avgGrade)
{
    Q_D(LapMessage);
    d->avgGrade = avgGrade;
}
void LapMessage::setAvgPosGrade(const qint16 avgPosGrade)
{
    Q_D(LapMessage);
    d->avgPosGrade = avgPosGrade;
}
void LapMessage::setAvgNegGrade(const qint16 avgNegGrade)
{
    Q_D(LapMessage);
    d->avgNegGrade = avgNegGrade;
}
void LapMessage::setMaxPosGrade(const qint16 maxPosGrade)
{
    Q_D(LapMessage);
    d->maxPosGrade = maxPosGrade;
}
void LapMessage::setMaxNegGrade(const qint16 maxNegGrade)
{
    Q_D(LapMessage);
    d->maxNegGrade = maxNegGrade;
}
void LapMessage::setAvgTemperature(const qint8 avgTemperature)
{
    Q_D(LapMessage);
    d->avgTemperature = avgTemperature;
}
void LapMessage::setMaxTemperature(const qint8 maxTemperature)
{
    Q_D(LapMessage);
    d->maxTemperature = maxTemperature;
}
void LapMessage::setTotalMovingTime(const quint32 totalMovingTime)
{
    Q_D(LapMessage);
    d->totalMovingTime = totalMovingTime;
}
void LapMessage::setAvgPosVerticalSpeed(const qint16 avgPosVerticalSpeed)
{
    Q_D(LapMessage);
    d->avgPosVerticalSpeed = avgPosVerticalSpeed;
}
void LapMessage::setAvgNegVerticalSpeed(const qint16 avgNegVerticalSpeed)
{
    Q_D(LapMessage);
    d->avgNegVerticalSpeed = avgNegVerticalSpeed;
}
void LapMessage::setMaxPosVerticalSpeed(const qint16 maxPosVerticalSpeed)
{
    Q_D(LapMessage);
    d->maxPosVerticalSpeed = maxPosVerticalSpeed;
}
void LapMessage::setMaxNegVerticalSpeed(const qint16 maxNegVerticalSpeed)
{
    Q_D(LapMessage);
    d->maxNegVerticalSpeed = maxNegVerticalSpeed;
}
void LapMessage::setTimeInHrZone(const quint32 timeInHrZone)
{
    Q_D(LapMessage);
    d->timeInHrZone = timeInHrZone;
}
void LapMessage::setTimeInSpeedZone(const quint32 timeInSpeedZone)
{
    Q_D(LapMessage);
    d->timeInSpeedZone = timeInSpeedZone;
}
void LapMessage::setTimeInCadenceZone(const quint32 timeInCadenceZone)
{
    Q_D(LapMessage);
    d->timeInCadenceZone = timeInCadenceZone;
}
void LapMessage::setTimeInPowerZone(const quint32 timeInPowerZone)
{
    Q_D(LapMessage);
    d->timeInPowerZone = timeInPowerZone;
}
void LapMessage::setRepetitionNum(const quint16 repetitionNum)
{
    Q_D(LapMessage);
    d->repetitionNum = repetitionNum;
}
void LapMessage::setMinAltitude(const quint16 minAltitude)
{
    Q_D(LapMessage);
    d->minAltitude = minAltitude;
}
void LapMessage::setMinHeartRate(const quint8 minHeartRate)
{
    Q_D(LapMessage);
    d->minHeartRate = minHeartRate;
}
void LapMessage::setWktStepIndex(const MessageIndex wktStepIndex)
{
    Q_D(LapMessage);
    d->wktStepIndex = wktStepIndex;
}
void LapMessage::setOpponentScore(const quint16 opponentScore)
{
    Q_D(LapMessage);
    d->opponentScore = opponentScore;
}
void LapMessage::setStrokeCount(const quint16 strokeCount)
{
    Q_D(LapMessage);
    d->strokeCount = strokeCount;
}
void LapMessage::setZoneCount(const quint16 zoneCount)
{
    Q_D(LapMessage);
    d->zoneCount = zoneCount;
}
void LapMessage::setAvgVerticalOscillation(const quint16 avgVerticalOscillation)
{
    Q_D(LapMessage);
    d->avgVerticalOscillation = avgVerticalOscillation;
}
void LapMessage::setAvgStanceTimePercent(const quint16 avgStanceTimePercent)
{
    Q_D(LapMessage);
    d->avgStanceTimePercent = avgStanceTimePercent;
}
void LapMessage::setAvgStanceTime(const quint16 avgStanceTime)
{
    Q_D(LapMessage);
    d->avgStanceTime = avgStanceTime;
}
void LapMessage::setAvgFractionalCadence(const quint8 avgFractionalCadence)
{
    Q_D(LapMessage);
    d->avgFractionalCadence = avgFractionalCadence;
}
void LapMessage::setMaxFractionalCadence(const quint8 maxFractionalCadence)
{
    Q_D(LapMessage);
    d->maxFractionalCadence = maxFractionalCadence;
}
void LapMessage::setTotalFractionalCycles(const quint8 totalFractionalCycles)
{
    Q_D(LapMessage);
    d->totalFractionalCycles = totalFractionalCycles;
}
void LapMessage::setPlayerScore(const quint16 playerScore)
{
    Q_D(LapMessage);
    d->playerScore = playerScore;
}
void LapMessage::setAvgTotalHemoglobinConc(const quint16 avgTotalHemoglobinConc)
{
    Q_D(LapMessage);
    d->avgTotalHemoglobinConc = avgTotalHemoglobinConc;
}
void LapMessage::setMinTotalHemoglobinConc(const quint16 minTotalHemoglobinConc)
{
    Q_D(LapMessage);
    d->minTotalHemoglobinConc = minTotalHemoglobinConc;
}
void LapMessage::setMaxTotalHemoglobinConc(const quint16 maxTotalHemoglobinConc)
{
    Q_D(LapMessage);
    d->maxTotalHemoglobinConc = maxTotalHemoglobinConc;
}
void LapMessage::setAvgSaturatedHemoglobinPercent(const quint16 avgSaturatedHemoglobinPercent)
{
    Q_D(LapMessage);
    d->avgSaturatedHemoglobinPercent = avgSaturatedHemoglobinPercent;
}
void LapMessage::setMinSaturatedHemoglobinPercent(const quint16 minSaturatedHemoglobinPercent)
{
    Q_D(LapMessage);
    d->minSaturatedHemoglobinPercent = minSaturatedHemoglobinPercent;
}
void LapMessage::setMaxSaturatedHemoglobinPercent(const quint16 maxSaturatedHemoglobinPercent)
{
    Q_D(LapMessage);
    d->maxSaturatedHemoglobinPercent = maxSaturatedHemoglobinPercent;
}
void LapMessage::setAvgLeftTorqueEffectiveness(const quint8 avgLeftTorqueEffectiveness)
{
    Q_D(LapMessage);
    d->avgLeftTorqueEffectiveness = avgLeftTorqueEffectiveness;
}
void LapMessage::setAvgRightTorqueEffectiveness(const quint8 avgRightTorqueEffectiveness)
{
    Q_D(LapMessage);
    d->avgRightTorqueEffectiveness = avgRightTorqueEffectiveness;
}
void LapMessage::setAvgLeftPedalSmoothness(const quint8 avgLeftPedalSmoothness)
{
    Q_D(LapMessage);
    d->avgLeftPedalSmoothness = avgLeftPedalSmoothness;
}
void LapMessage::setAvgRightPedalSmoothness(const quint8 avgRightPedalSmoothness)
{
    Q_D(LapMessage);
    d->avgRightPedalSmoothness = avgRightPedalSmoothness;
}
void LapMessage::setAvgCombinedPedalSmoothness(const quint8 avgCombinedPedalSmoothness)
{
    Q_D(LapMessage);
    d->avgCombinedPedalSmoothness = avgCombinedPedalSmoothness;
}
void LapMessage::setTimeStanding(const quint32 timeStanding)
{
    Q_D(LapMessage);
    d->timeStanding = timeStanding;
}
void LapMessage::setStandCount(const quint16 standCount)
{
    Q_D(LapMessage);
    d->standCount = standCount;
}
void LapMessage::setAvgLeftPco(const qint8 avgLeftPco)
{
    Q_D(LapMessage);
    d->avgLeftPco = avgLeftPco;
}
void LapMessage::setAvgRightPco(const qint8 avgRightPco)
{
    Q_D(LapMessage);
    d->avgRightPco = avgRightPco;
}
void LapMessage::setAvgLeftPowerPhase(const quint8 avgLeftPowerPhase)
{
    Q_D(LapMessage);
    d->avgLeftPowerPhase = avgLeftPowerPhase;
}
void LapMessage::setAvgLeftPowerPhasePeak(const quint8 avgLeftPowerPhasePeak)
{
    Q_D(LapMessage);
    d->avgLeftPowerPhasePeak = avgLeftPowerPhasePeak;
}
void LapMessage::setAvgRightPowerPhase(const quint8 avgRightPowerPhase)
{
    Q_D(LapMessage);
    d->avgRightPowerPhase = avgRightPowerPhase;
}
void LapMessage::setAvgRightPowerPhasePeak(const quint8 avgRightPowerPhasePeak)
{
    Q_D(LapMessage);
    d->avgRightPowerPhasePeak = avgRightPowerPhasePeak;
}
void LapMessage::setAvgPowerPosition(const quint16 avgPowerPosition)
{
    Q_D(LapMessage);
    d->avgPowerPosition = avgPowerPosition;
}
void LapMessage::setMaxPowerPosition(const quint16 maxPowerPosition)
{
    Q_D(LapMessage);
    d->maxPowerPosition = maxPowerPosition;
}
void LapMessage::setAvgCadencePosition(const quint8 avgCadencePosition)
{
    Q_D(LapMessage);
    d->avgCadencePosition = avgCadencePosition;
}
void LapMessage::setMaxCadencePosition(const quint8 maxCadencePosition)
{
    Q_D(LapMessage);
    d->maxCadencePosition = maxCadencePosition;
}
void LapMessage::setEnhancedAvgSpeed(const quint32 enhancedAvgSpeed)
{
    Q_D(LapMessage);
    d->enhancedAvgSpeed = enhancedAvgSpeed;
}
void LapMessage::setEnhancedMaxSpeed(const quint32 enhancedMaxSpeed)
{
    Q_D(LapMessage);
    d->enhancedMaxSpeed = enhancedMaxSpeed;
}
void LapMessage::setEnhancedAvgAltitude(const quint32 enhancedAvgAltitude)
{
    Q_D(LapMessage);
    d->enhancedAvgAltitude = enhancedAvgAltitude;
}
void LapMessage::setEnhancedMinAltitude(const quint32 enhancedMinAltitude)
{
    Q_D(LapMessage);
    d->enhancedMinAltitude = enhancedMinAltitude;
}
void LapMessage::setEnhancedMaxAltitude(const quint32 enhancedMaxAltitude)
{
    Q_D(LapMessage);
    d->enhancedMaxAltitude = enhancedMaxAltitude;
}
void LapMessage::setAvgLevMotorPower(const quint16 avgLevMotorPower)
{
    Q_D(LapMessage);
    d->avgLevMotorPower = avgLevMotorPower;
}
void LapMessage::setMaxLevMotorPower(const quint16 maxLevMotorPower)
{
    Q_D(LapMessage);
    d->maxLevMotorPower = maxLevMotorPower;
}
void LapMessage::setLevBatteryConsumption(const quint8 levBatteryConsumption)
{
    Q_D(LapMessage);
    d->levBatteryConsumption = levBatteryConsumption;
}
void LapMessage::setAvgVerticalRatio(const quint16 avgVerticalRatio)
{
    Q_D(LapMessage);
    d->avgVerticalRatio = avgVerticalRatio;
}
void LapMessage::setAvgStanceTimeBalance(const quint16 avgStanceTimeBalance)
{
    Q_D(LapMessage);
    d->avgStanceTimeBalance = avgStanceTimeBalance;
}
void LapMessage::setAvgStepLength(const quint16 avgStepLength)
{
    Q_D(LapMessage);
    d->avgStepLength = avgStepLength;
}
void LapMessage::setAvgVam(const quint16 avgVam)
{
    Q_D(LapMessage);
    d->avgVam = avgVam;
}
void LapMessage::setTotalGrit(const float totalGrit)
{
    Q_D(LapMessage);
    d->totalGrit = totalGrit;
}
void LapMessage::setTotalFlow(const float totalFlow)
{
    Q_D(LapMessage);
    d->totalFlow = totalFlow;
}
void LapMessage::setJumpCount(const quint16 jumpCount)
{
    Q_D(LapMessage);
    d->jumpCount = jumpCount;
}
void LapMessage::setAvgGrit(const float avgGrit)
{
    Q_D(LapMessage);
    d->avgGrit = avgGrit;
}
void LapMessage::setAvgFlow(const float avgFlow)
{
    Q_D(LapMessage);
    d->avgFlow = avgFlow;
}
void LapMessage::setTotalFractionalAscent(const quint8 totalFractionalAscent)
{
    Q_D(LapMessage);
    d->totalFractionalAscent = totalFractionalAscent;
}
void LapMessage::setTotalFractionalDescent(const quint8 totalFractionalDescent)
{
    Q_D(LapMessage);
    d->totalFractionalDescent = totalFractionalDescent;
}
void LapMessage::setAvgCoreTemperature(const quint16 avgCoreTemperature)
{
    Q_D(LapMessage);
    d->avgCoreTemperature = avgCoreTemperature;
}
void LapMessage::setMinCoreTemperature(const quint16 minCoreTemperature)
{
    Q_D(LapMessage);
    d->minCoreTemperature = minCoreTemperature;
}
void LapMessage::setMaxCoreTemperature(const quint16 maxCoreTemperature)
{
    Q_D(LapMessage);
    d->maxCoreTemperature = maxCoreTemperature;
}

LapMessagePrivate::LapMessagePrivate(LapMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , timestamp(static_cast<DateTime>(-1))
  , event(static_cast<Event>(-1))
  , eventType(static_cast<EventType>(-1))
  , startTime(static_cast<DateTime>(-1))
  , startPositionLat(0x7FFFFFFF)
  , startPositionLong(0x7FFFFFFF)
  , endPositionLat(0x7FFFFFFF)
  , endPositionLong(0x7FFFFFFF)
  , totalElapsedTime(0xFFFFFFFF)
  , totalTimerTime(0xFFFFFFFF)
  , totalDistance(0xFFFFFFFF)
  , totalCycles(0xFFFFFFFF)
  , totalCalories(0xFFFF)
  , totalFatCalories(0xFFFF)
  , avgSpeed(0xFFFF)
  , maxSpeed(0xFFFF)
  , avgHeartRate(0xFF)
  , maxHeartRate(0xFF)
  , avgCadence(0xFF)
  , maxCadence(0xFF)
  , avgPower(0xFFFF)
  , maxPower(0xFFFF)
  , totalAscent(0xFFFF)
  , totalDescent(0xFFFF)
  , intensity(static_cast<Intensity>(-1))
  , lapTrigger(static_cast<LapTrigger>(-1))
  , sport(static_cast<Sport>(-1))
  , eventGroup(0xFF)
  , numLengths(0xFFFF)
  , normalizedPower(0xFFFF)
  , leftRightBalance(static_cast<LeftRightBalance100>(-1))
  , firstLengthIndex(0xFFFF)
  , avgStrokeDistance(0xFFFF)
  , swimStroke(static_cast<SwimStroke>(-1))
  , subSport(static_cast<SubSport>(-1))
  , numActiveLengths(0xFFFF)
  , totalWork(0xFFFFFFFF)
  , avgAltitude(0xFFFF)
  , maxAltitude(0xFFFF)
  , gpsAccuracy(0xFF)
  , avgGrade(0x7FFF)
  , avgPosGrade(0x7FFF)
  , avgNegGrade(0x7FFF)
  , maxPosGrade(0x7FFF)
  , maxNegGrade(0x7FFF)
  , avgTemperature(0x7F)
  , maxTemperature(0x7F)
  , totalMovingTime(0xFFFFFFFF)
  , avgPosVerticalSpeed(0x7FFF)
  , avgNegVerticalSpeed(0x7FFF)
  , maxPosVerticalSpeed(0x7FFF)
  , maxNegVerticalSpeed(0x7FFF)
  , timeInHrZone(0xFFFFFFFF)
  , timeInSpeedZone(0xFFFFFFFF)
  , timeInCadenceZone(0xFFFFFFFF)
  , timeInPowerZone(0xFFFFFFFF)
  , repetitionNum(0xFFFF)
  , minAltitude(0xFFFF)
  , minHeartRate(0xFF)
  , wktStepIndex(static_cast<MessageIndex>(-1))
  , opponentScore(0xFFFF)
  , strokeCount(0xFFFF)
  , zoneCount(0xFFFF)
  , avgVerticalOscillation(0xFFFF)
  , avgStanceTimePercent(0xFFFF)
  , avgStanceTime(0xFFFF)
  , avgFractionalCadence(0xFF)
  , maxFractionalCadence(0xFF)
  , totalFractionalCycles(0xFF)
  , playerScore(0xFFFF)
  , avgTotalHemoglobinConc(0xFFFF)
  , minTotalHemoglobinConc(0xFFFF)
  , maxTotalHemoglobinConc(0xFFFF)
  , avgSaturatedHemoglobinPercent(0xFFFF)
  , minSaturatedHemoglobinPercent(0xFFFF)
  , maxSaturatedHemoglobinPercent(0xFFFF)
  , avgLeftTorqueEffectiveness(0xFF)
  , avgRightTorqueEffectiveness(0xFF)
  , avgLeftPedalSmoothness(0xFF)
  , avgRightPedalSmoothness(0xFF)
  , avgCombinedPedalSmoothness(0xFF)
  , timeStanding(0xFFFFFFFF)
  , standCount(0xFFFF)
  , avgLeftPco(0x7F)
  , avgRightPco(0x7F)
  , avgLeftPowerPhase(0xFF)
  , avgLeftPowerPhasePeak(0xFF)
  , avgRightPowerPhase(0xFF)
  , avgRightPowerPhasePeak(0xFF)
  , avgPowerPosition(0xFFFF)
  , maxPowerPosition(0xFFFF)
  , avgCadencePosition(0xFF)
  , maxCadencePosition(0xFF)
  , enhancedAvgSpeed(0xFFFFFFFF)
  , enhancedMaxSpeed(0xFFFFFFFF)
  , enhancedAvgAltitude(0xFFFFFFFF)
  , enhancedMinAltitude(0xFFFFFFFF)
  , enhancedMaxAltitude(0xFFFFFFFF)
  , avgLevMotorPower(0xFFFF)
  , maxLevMotorPower(0xFFFF)
  , levBatteryConsumption(0xFF)
  , avgVerticalRatio(0xFFFF)
  , avgStanceTimeBalance(0xFFFF)
  , avgStepLength(0xFFFF)
  , avgVam(0xFFFF)
  , totalGrit(static_cast<float>(-1))
  , totalFlow(static_cast<float>(-1))
  , jumpCount(0xFFFF)
  , avgGrit(static_cast<float>(-1))
  , avgFlow(static_cast<float>(-1))
  , totalFractionalAscent(0xFF)
  , totalFractionalDescent(0xFF)
  , avgCoreTemperature(0xFFFF)
  , minCoreTemperature(0xFFFF)
  , maxCoreTemperature(0xFFFF)
{
    globalMessageNumber = MesgNum::Lap;
}

LapMessagePrivate::~LapMessagePrivate()
{

}

/// @todo Generate implementation.
bool LapMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE
