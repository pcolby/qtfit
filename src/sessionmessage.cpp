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

#include "sessionmessage.h"
#include "sessionmessage_p.h"

QTFIT_BEGIN_NAMESPACE

SessionMessage::SessionMessage() : FitDataMessage(new SessionMessagePrivate(this))
{

}

MessageIndex SessionMessage::messageIndex() const
{
    Q_D(const SessionMessage);
    return d->messageIndex;
}

DateTime SessionMessage::timestamp() const
{
    Q_D(const SessionMessage);
    return d->timestamp;
}

Event SessionMessage::event() const
{
    Q_D(const SessionMessage);
    return d->event;
}

EventType SessionMessage::eventType() const
{
    Q_D(const SessionMessage);
    return d->eventType;
}

DateTime SessionMessage::startTime() const
{
    Q_D(const SessionMessage);
    return d->startTime;
}

qint32 SessionMessage::startPositionLat() const
{
    Q_D(const SessionMessage);
    return d->startPositionLat;
}

qint32 SessionMessage::startPositionLong() const
{
    Q_D(const SessionMessage);
    return d->startPositionLong;
}

Sport SessionMessage::sport() const
{
    Q_D(const SessionMessage);
    return d->sport;
}

SubSport SessionMessage::subSport() const
{
    Q_D(const SessionMessage);
    return d->subSport;
}

quint32 SessionMessage::totalElapsedTime() const
{
    Q_D(const SessionMessage);
    return d->totalElapsedTime;
}

quint32 SessionMessage::totalTimerTime() const
{
    Q_D(const SessionMessage);
    return d->totalTimerTime;
}

quint32 SessionMessage::totalDistance() const
{
    Q_D(const SessionMessage);
    return d->totalDistance;
}

quint32 SessionMessage::totalCycles() const
{
    Q_D(const SessionMessage);
    return d->totalCycles;
}

quint16 SessionMessage::totalCalories() const
{
    Q_D(const SessionMessage);
    return d->totalCalories;
}

quint16 SessionMessage::totalFatCalories() const
{
    Q_D(const SessionMessage);
    return d->totalFatCalories;
}

quint16 SessionMessage::avgSpeed() const
{
    Q_D(const SessionMessage);
    return d->avgSpeed;
}

quint16 SessionMessage::maxSpeed() const
{
    Q_D(const SessionMessage);
    return d->maxSpeed;
}

quint8 SessionMessage::avgHeartRate() const
{
    Q_D(const SessionMessage);
    return d->avgHeartRate;
}

quint8 SessionMessage::maxHeartRate() const
{
    Q_D(const SessionMessage);
    return d->maxHeartRate;
}

quint8 SessionMessage::avgCadence() const
{
    Q_D(const SessionMessage);
    return d->avgCadence;
}

quint8 SessionMessage::maxCadence() const
{
    Q_D(const SessionMessage);
    return d->maxCadence;
}

quint16 SessionMessage::avgPower() const
{
    Q_D(const SessionMessage);
    return d->avgPower;
}

quint16 SessionMessage::maxPower() const
{
    Q_D(const SessionMessage);
    return d->maxPower;
}

quint16 SessionMessage::totalAscent() const
{
    Q_D(const SessionMessage);
    return d->totalAscent;
}

quint16 SessionMessage::totalDescent() const
{
    Q_D(const SessionMessage);
    return d->totalDescent;
}

quint8 SessionMessage::totalTrainingEffect() const
{
    Q_D(const SessionMessage);
    return d->totalTrainingEffect;
}

quint16 SessionMessage::firstLapIndex() const
{
    Q_D(const SessionMessage);
    return d->firstLapIndex;
}

quint16 SessionMessage::numLaps() const
{
    Q_D(const SessionMessage);
    return d->numLaps;
}

quint8 SessionMessage::eventGroup() const
{
    Q_D(const SessionMessage);
    return d->eventGroup;
}

SessionTrigger SessionMessage::trigger() const
{
    Q_D(const SessionMessage);
    return d->trigger;
}

qint32 SessionMessage::necLat() const
{
    Q_D(const SessionMessage);
    return d->necLat;
}

qint32 SessionMessage::necLong() const
{
    Q_D(const SessionMessage);
    return d->necLong;
}

qint32 SessionMessage::swcLat() const
{
    Q_D(const SessionMessage);
    return d->swcLat;
}

qint32 SessionMessage::swcLong() const
{
    Q_D(const SessionMessage);
    return d->swcLong;
}

quint16 SessionMessage::numLengths() const
{
    Q_D(const SessionMessage);
    return d->numLengths;
}

quint16 SessionMessage::normalizedPower() const
{
    Q_D(const SessionMessage);
    return d->normalizedPower;
}

quint16 SessionMessage::trainingStressScore() const
{
    Q_D(const SessionMessage);
    return d->trainingStressScore;
}

quint16 SessionMessage::intensityFactor() const
{
    Q_D(const SessionMessage);
    return d->intensityFactor;
}

LeftRightBalance100 SessionMessage::leftRightBalance() const
{
    Q_D(const SessionMessage);
    return d->leftRightBalance;
}

quint32 SessionMessage::avgStrokeCount() const
{
    Q_D(const SessionMessage);
    return d->avgStrokeCount;
}

quint16 SessionMessage::avgStrokeDistance() const
{
    Q_D(const SessionMessage);
    return d->avgStrokeDistance;
}

SwimStroke SessionMessage::swimStroke() const
{
    Q_D(const SessionMessage);
    return d->swimStroke;
}

quint16 SessionMessage::poolLength() const
{
    Q_D(const SessionMessage);
    return d->poolLength;
}

quint16 SessionMessage::thresholdPower() const
{
    Q_D(const SessionMessage);
    return d->thresholdPower;
}

DisplayMeasure SessionMessage::poolLengthUnit() const
{
    Q_D(const SessionMessage);
    return d->poolLengthUnit;
}

quint16 SessionMessage::numActiveLengths() const
{
    Q_D(const SessionMessage);
    return d->numActiveLengths;
}

quint32 SessionMessage::totalWork() const
{
    Q_D(const SessionMessage);
    return d->totalWork;
}

quint16 SessionMessage::avgAltitude() const
{
    Q_D(const SessionMessage);
    return d->avgAltitude;
}

quint16 SessionMessage::maxAltitude() const
{
    Q_D(const SessionMessage);
    return d->maxAltitude;
}

quint8 SessionMessage::gpsAccuracy() const
{
    Q_D(const SessionMessage);
    return d->gpsAccuracy;
}

qint16 SessionMessage::avgGrade() const
{
    Q_D(const SessionMessage);
    return d->avgGrade;
}

qint16 SessionMessage::avgPosGrade() const
{
    Q_D(const SessionMessage);
    return d->avgPosGrade;
}

qint16 SessionMessage::avgNegGrade() const
{
    Q_D(const SessionMessage);
    return d->avgNegGrade;
}

qint16 SessionMessage::maxPosGrade() const
{
    Q_D(const SessionMessage);
    return d->maxPosGrade;
}

qint16 SessionMessage::maxNegGrade() const
{
    Q_D(const SessionMessage);
    return d->maxNegGrade;
}

qint8 SessionMessage::avgTemperature() const
{
    Q_D(const SessionMessage);
    return d->avgTemperature;
}

qint8 SessionMessage::maxTemperature() const
{
    Q_D(const SessionMessage);
    return d->maxTemperature;
}

quint32 SessionMessage::totalMovingTime() const
{
    Q_D(const SessionMessage);
    return d->totalMovingTime;
}

qint16 SessionMessage::avgPosVerticalSpeed() const
{
    Q_D(const SessionMessage);
    return d->avgPosVerticalSpeed;
}

qint16 SessionMessage::avgNegVerticalSpeed() const
{
    Q_D(const SessionMessage);
    return d->avgNegVerticalSpeed;
}

qint16 SessionMessage::maxPosVerticalSpeed() const
{
    Q_D(const SessionMessage);
    return d->maxPosVerticalSpeed;
}

qint16 SessionMessage::maxNegVerticalSpeed() const
{
    Q_D(const SessionMessage);
    return d->maxNegVerticalSpeed;
}

quint8 SessionMessage::minHeartRate() const
{
    Q_D(const SessionMessage);
    return d->minHeartRate;
}

quint32 SessionMessage::timeInHrZone() const
{
    Q_D(const SessionMessage);
    return d->timeInHrZone;
}

quint32 SessionMessage::timeInSpeedZone() const
{
    Q_D(const SessionMessage);
    return d->timeInSpeedZone;
}

quint32 SessionMessage::timeInCadenceZone() const
{
    Q_D(const SessionMessage);
    return d->timeInCadenceZone;
}

quint32 SessionMessage::timeInPowerZone() const
{
    Q_D(const SessionMessage);
    return d->timeInPowerZone;
}

quint32 SessionMessage::avgLapTime() const
{
    Q_D(const SessionMessage);
    return d->avgLapTime;
}

quint16 SessionMessage::bestLapIndex() const
{
    Q_D(const SessionMessage);
    return d->bestLapIndex;
}

quint16 SessionMessage::minAltitude() const
{
    Q_D(const SessionMessage);
    return d->minAltitude;
}

quint16 SessionMessage::playerScore() const
{
    Q_D(const SessionMessage);
    return d->playerScore;
}

quint16 SessionMessage::opponentScore() const
{
    Q_D(const SessionMessage);
    return d->opponentScore;
}

QString SessionMessage::opponentName() const
{
    Q_D(const SessionMessage);
    return d->opponentName;
}

quint16 SessionMessage::strokeCount() const
{
    Q_D(const SessionMessage);
    return d->strokeCount;
}

quint16 SessionMessage::zoneCount() const
{
    Q_D(const SessionMessage);
    return d->zoneCount;
}

quint16 SessionMessage::maxBallSpeed() const
{
    Q_D(const SessionMessage);
    return d->maxBallSpeed;
}

quint16 SessionMessage::avgBallSpeed() const
{
    Q_D(const SessionMessage);
    return d->avgBallSpeed;
}

quint16 SessionMessage::avgVerticalOscillation() const
{
    Q_D(const SessionMessage);
    return d->avgVerticalOscillation;
}

quint16 SessionMessage::avgStanceTimePercent() const
{
    Q_D(const SessionMessage);
    return d->avgStanceTimePercent;
}

quint16 SessionMessage::avgStanceTime() const
{
    Q_D(const SessionMessage);
    return d->avgStanceTime;
}

quint8 SessionMessage::avgFractionalCadence() const
{
    Q_D(const SessionMessage);
    return d->avgFractionalCadence;
}

quint8 SessionMessage::maxFractionalCadence() const
{
    Q_D(const SessionMessage);
    return d->maxFractionalCadence;
}

quint8 SessionMessage::totalFractionalCycles() const
{
    Q_D(const SessionMessage);
    return d->totalFractionalCycles;
}

quint16 SessionMessage::avgTotalHemoglobinConc() const
{
    Q_D(const SessionMessage);
    return d->avgTotalHemoglobinConc;
}

quint16 SessionMessage::minTotalHemoglobinConc() const
{
    Q_D(const SessionMessage);
    return d->minTotalHemoglobinConc;
}

quint16 SessionMessage::maxTotalHemoglobinConc() const
{
    Q_D(const SessionMessage);
    return d->maxTotalHemoglobinConc;
}

quint16 SessionMessage::avgSaturatedHemoglobinPercent() const
{
    Q_D(const SessionMessage);
    return d->avgSaturatedHemoglobinPercent;
}

quint16 SessionMessage::minSaturatedHemoglobinPercent() const
{
    Q_D(const SessionMessage);
    return d->minSaturatedHemoglobinPercent;
}

quint16 SessionMessage::maxSaturatedHemoglobinPercent() const
{
    Q_D(const SessionMessage);
    return d->maxSaturatedHemoglobinPercent;
}

quint8 SessionMessage::avgLeftTorqueEffectiveness() const
{
    Q_D(const SessionMessage);
    return d->avgLeftTorqueEffectiveness;
}

quint8 SessionMessage::avgRightTorqueEffectiveness() const
{
    Q_D(const SessionMessage);
    return d->avgRightTorqueEffectiveness;
}

quint8 SessionMessage::avgLeftPedalSmoothness() const
{
    Q_D(const SessionMessage);
    return d->avgLeftPedalSmoothness;
}

quint8 SessionMessage::avgRightPedalSmoothness() const
{
    Q_D(const SessionMessage);
    return d->avgRightPedalSmoothness;
}

quint8 SessionMessage::avgCombinedPedalSmoothness() const
{
    Q_D(const SessionMessage);
    return d->avgCombinedPedalSmoothness;
}

quint8 SessionMessage::sportIndex() const
{
    Q_D(const SessionMessage);
    return d->sportIndex;
}

quint32 SessionMessage::timeStanding() const
{
    Q_D(const SessionMessage);
    return d->timeStanding;
}

quint16 SessionMessage::standCount() const
{
    Q_D(const SessionMessage);
    return d->standCount;
}

qint8 SessionMessage::avgLeftPco() const
{
    Q_D(const SessionMessage);
    return d->avgLeftPco;
}

qint8 SessionMessage::avgRightPco() const
{
    Q_D(const SessionMessage);
    return d->avgRightPco;
}

quint8 SessionMessage::avgLeftPowerPhase() const
{
    Q_D(const SessionMessage);
    return d->avgLeftPowerPhase;
}

quint8 SessionMessage::avgLeftPowerPhasePeak() const
{
    Q_D(const SessionMessage);
    return d->avgLeftPowerPhasePeak;
}

quint8 SessionMessage::avgRightPowerPhase() const
{
    Q_D(const SessionMessage);
    return d->avgRightPowerPhase;
}

quint8 SessionMessage::avgRightPowerPhasePeak() const
{
    Q_D(const SessionMessage);
    return d->avgRightPowerPhasePeak;
}

quint16 SessionMessage::avgPowerPosition() const
{
    Q_D(const SessionMessage);
    return d->avgPowerPosition;
}

quint16 SessionMessage::maxPowerPosition() const
{
    Q_D(const SessionMessage);
    return d->maxPowerPosition;
}

quint8 SessionMessage::avgCadencePosition() const
{
    Q_D(const SessionMessage);
    return d->avgCadencePosition;
}

quint8 SessionMessage::maxCadencePosition() const
{
    Q_D(const SessionMessage);
    return d->maxCadencePosition;
}

quint32 SessionMessage::enhancedAvgSpeed() const
{
    Q_D(const SessionMessage);
    return d->enhancedAvgSpeed;
}

quint32 SessionMessage::enhancedMaxSpeed() const
{
    Q_D(const SessionMessage);
    return d->enhancedMaxSpeed;
}

quint32 SessionMessage::enhancedAvgAltitude() const
{
    Q_D(const SessionMessage);
    return d->enhancedAvgAltitude;
}

quint32 SessionMessage::enhancedMinAltitude() const
{
    Q_D(const SessionMessage);
    return d->enhancedMinAltitude;
}

quint32 SessionMessage::enhancedMaxAltitude() const
{
    Q_D(const SessionMessage);
    return d->enhancedMaxAltitude;
}

quint16 SessionMessage::avgLevMotorPower() const
{
    Q_D(const SessionMessage);
    return d->avgLevMotorPower;
}

quint16 SessionMessage::maxLevMotorPower() const
{
    Q_D(const SessionMessage);
    return d->maxLevMotorPower;
}

quint8 SessionMessage::levBatteryConsumption() const
{
    Q_D(const SessionMessage);
    return d->levBatteryConsumption;
}

quint16 SessionMessage::avgVerticalRatio() const
{
    Q_D(const SessionMessage);
    return d->avgVerticalRatio;
}

quint16 SessionMessage::avgStanceTimeBalance() const
{
    Q_D(const SessionMessage);
    return d->avgStanceTimeBalance;
}

quint16 SessionMessage::avgStepLength() const
{
    Q_D(const SessionMessage);
    return d->avgStepLength;
}

quint8 SessionMessage::totalAnaerobicTrainingEffect() const
{
    Q_D(const SessionMessage);
    return d->totalAnaerobicTrainingEffect;
}

quint16 SessionMessage::avgVam() const
{
    Q_D(const SessionMessage);
    return d->avgVam;
}

float SessionMessage::totalGrit() const
{
    Q_D(const SessionMessage);
    return d->totalGrit;
}

float SessionMessage::totalFlow() const
{
    Q_D(const SessionMessage);
    return d->totalFlow;
}

quint16 SessionMessage::jumpCount() const
{
    Q_D(const SessionMessage);
    return d->jumpCount;
}

float SessionMessage::avgGrit() const
{
    Q_D(const SessionMessage);
    return d->avgGrit;
}

float SessionMessage::avgFlow() const
{
    Q_D(const SessionMessage);
    return d->avgFlow;
}

quint8 SessionMessage::totalFractionalAscent() const
{
    Q_D(const SessionMessage);
    return d->totalFractionalAscent;
}

quint8 SessionMessage::totalFractionalDescent() const
{
    Q_D(const SessionMessage);
    return d->totalFractionalDescent;
}

quint16 SessionMessage::avgCoreTemperature() const
{
    Q_D(const SessionMessage);
    return d->avgCoreTemperature;
}

quint16 SessionMessage::minCoreTemperature() const
{
    Q_D(const SessionMessage);
    return d->minCoreTemperature;
}

quint16 SessionMessage::maxCoreTemperature() const
{
    Q_D(const SessionMessage);
    return d->maxCoreTemperature;
}

void SessionMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SessionMessage);
    d->messageIndex = messageIndex;
}
void SessionMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(SessionMessage);
    d->timestamp = timestamp;
}
void SessionMessage::setEvent(const Event event)
{
    Q_D(SessionMessage);
    d->event = event;
}
void SessionMessage::setEventType(const EventType eventType)
{
    Q_D(SessionMessage);
    d->eventType = eventType;
}
void SessionMessage::setStartTime(const DateTime startTime)
{
    Q_D(SessionMessage);
    d->startTime = startTime;
}
void SessionMessage::setStartPositionLat(const qint32 startPositionLat)
{
    Q_D(SessionMessage);
    d->startPositionLat = startPositionLat;
}
void SessionMessage::setStartPositionLong(const qint32 startPositionLong)
{
    Q_D(SessionMessage);
    d->startPositionLong = startPositionLong;
}
void SessionMessage::setSport(const Sport sport)
{
    Q_D(SessionMessage);
    d->sport = sport;
}
void SessionMessage::setSubSport(const SubSport subSport)
{
    Q_D(SessionMessage);
    d->subSport = subSport;
}
void SessionMessage::setTotalElapsedTime(const quint32 totalElapsedTime)
{
    Q_D(SessionMessage);
    d->totalElapsedTime = totalElapsedTime;
}
void SessionMessage::setTotalTimerTime(const quint32 totalTimerTime)
{
    Q_D(SessionMessage);
    d->totalTimerTime = totalTimerTime;
}
void SessionMessage::setTotalDistance(const quint32 totalDistance)
{
    Q_D(SessionMessage);
    d->totalDistance = totalDistance;
}
void SessionMessage::setTotalCycles(const quint32 totalCycles)
{
    Q_D(SessionMessage);
    d->totalCycles = totalCycles;
}
void SessionMessage::setTotalCalories(const quint16 totalCalories)
{
    Q_D(SessionMessage);
    d->totalCalories = totalCalories;
}
void SessionMessage::setTotalFatCalories(const quint16 totalFatCalories)
{
    Q_D(SessionMessage);
    d->totalFatCalories = totalFatCalories;
}
void SessionMessage::setAvgSpeed(const quint16 avgSpeed)
{
    Q_D(SessionMessage);
    d->avgSpeed = avgSpeed;
}
void SessionMessage::setMaxSpeed(const quint16 maxSpeed)
{
    Q_D(SessionMessage);
    d->maxSpeed = maxSpeed;
}
void SessionMessage::setAvgHeartRate(const quint8 avgHeartRate)
{
    Q_D(SessionMessage);
    d->avgHeartRate = avgHeartRate;
}
void SessionMessage::setMaxHeartRate(const quint8 maxHeartRate)
{
    Q_D(SessionMessage);
    d->maxHeartRate = maxHeartRate;
}
void SessionMessage::setAvgCadence(const quint8 avgCadence)
{
    Q_D(SessionMessage);
    d->avgCadence = avgCadence;
}
void SessionMessage::setMaxCadence(const quint8 maxCadence)
{
    Q_D(SessionMessage);
    d->maxCadence = maxCadence;
}
void SessionMessage::setAvgPower(const quint16 avgPower)
{
    Q_D(SessionMessage);
    d->avgPower = avgPower;
}
void SessionMessage::setMaxPower(const quint16 maxPower)
{
    Q_D(SessionMessage);
    d->maxPower = maxPower;
}
void SessionMessage::setTotalAscent(const quint16 totalAscent)
{
    Q_D(SessionMessage);
    d->totalAscent = totalAscent;
}
void SessionMessage::setTotalDescent(const quint16 totalDescent)
{
    Q_D(SessionMessage);
    d->totalDescent = totalDescent;
}
void SessionMessage::setTotalTrainingEffect(const quint8 totalTrainingEffect)
{
    Q_D(SessionMessage);
    d->totalTrainingEffect = totalTrainingEffect;
}
void SessionMessage::setFirstLapIndex(const quint16 firstLapIndex)
{
    Q_D(SessionMessage);
    d->firstLapIndex = firstLapIndex;
}
void SessionMessage::setNumLaps(const quint16 numLaps)
{
    Q_D(SessionMessage);
    d->numLaps = numLaps;
}
void SessionMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(SessionMessage);
    d->eventGroup = eventGroup;
}
void SessionMessage::setTrigger(const SessionTrigger trigger)
{
    Q_D(SessionMessage);
    d->trigger = trigger;
}
void SessionMessage::setNecLat(const qint32 necLat)
{
    Q_D(SessionMessage);
    d->necLat = necLat;
}
void SessionMessage::setNecLong(const qint32 necLong)
{
    Q_D(SessionMessage);
    d->necLong = necLong;
}
void SessionMessage::setSwcLat(const qint32 swcLat)
{
    Q_D(SessionMessage);
    d->swcLat = swcLat;
}
void SessionMessage::setSwcLong(const qint32 swcLong)
{
    Q_D(SessionMessage);
    d->swcLong = swcLong;
}
void SessionMessage::setNumLengths(const quint16 numLengths)
{
    Q_D(SessionMessage);
    d->numLengths = numLengths;
}
void SessionMessage::setNormalizedPower(const quint16 normalizedPower)
{
    Q_D(SessionMessage);
    d->normalizedPower = normalizedPower;
}
void SessionMessage::setTrainingStressScore(const quint16 trainingStressScore)
{
    Q_D(SessionMessage);
    d->trainingStressScore = trainingStressScore;
}
void SessionMessage::setIntensityFactor(const quint16 intensityFactor)
{
    Q_D(SessionMessage);
    d->intensityFactor = intensityFactor;
}
void SessionMessage::setLeftRightBalance(const LeftRightBalance100 leftRightBalance)
{
    Q_D(SessionMessage);
    d->leftRightBalance = leftRightBalance;
}
void SessionMessage::setAvgStrokeCount(const quint32 avgStrokeCount)
{
    Q_D(SessionMessage);
    d->avgStrokeCount = avgStrokeCount;
}
void SessionMessage::setAvgStrokeDistance(const quint16 avgStrokeDistance)
{
    Q_D(SessionMessage);
    d->avgStrokeDistance = avgStrokeDistance;
}
void SessionMessage::setSwimStroke(const SwimStroke swimStroke)
{
    Q_D(SessionMessage);
    d->swimStroke = swimStroke;
}
void SessionMessage::setPoolLength(const quint16 poolLength)
{
    Q_D(SessionMessage);
    d->poolLength = poolLength;
}
void SessionMessage::setThresholdPower(const quint16 thresholdPower)
{
    Q_D(SessionMessage);
    d->thresholdPower = thresholdPower;
}
void SessionMessage::setPoolLengthUnit(const DisplayMeasure poolLengthUnit)
{
    Q_D(SessionMessage);
    d->poolLengthUnit = poolLengthUnit;
}
void SessionMessage::setNumActiveLengths(const quint16 numActiveLengths)
{
    Q_D(SessionMessage);
    d->numActiveLengths = numActiveLengths;
}
void SessionMessage::setTotalWork(const quint32 totalWork)
{
    Q_D(SessionMessage);
    d->totalWork = totalWork;
}
void SessionMessage::setAvgAltitude(const quint16 avgAltitude)
{
    Q_D(SessionMessage);
    d->avgAltitude = avgAltitude;
}
void SessionMessage::setMaxAltitude(const quint16 maxAltitude)
{
    Q_D(SessionMessage);
    d->maxAltitude = maxAltitude;
}
void SessionMessage::setGpsAccuracy(const quint8 gpsAccuracy)
{
    Q_D(SessionMessage);
    d->gpsAccuracy = gpsAccuracy;
}
void SessionMessage::setAvgGrade(const qint16 avgGrade)
{
    Q_D(SessionMessage);
    d->avgGrade = avgGrade;
}
void SessionMessage::setAvgPosGrade(const qint16 avgPosGrade)
{
    Q_D(SessionMessage);
    d->avgPosGrade = avgPosGrade;
}
void SessionMessage::setAvgNegGrade(const qint16 avgNegGrade)
{
    Q_D(SessionMessage);
    d->avgNegGrade = avgNegGrade;
}
void SessionMessage::setMaxPosGrade(const qint16 maxPosGrade)
{
    Q_D(SessionMessage);
    d->maxPosGrade = maxPosGrade;
}
void SessionMessage::setMaxNegGrade(const qint16 maxNegGrade)
{
    Q_D(SessionMessage);
    d->maxNegGrade = maxNegGrade;
}
void SessionMessage::setAvgTemperature(const qint8 avgTemperature)
{
    Q_D(SessionMessage);
    d->avgTemperature = avgTemperature;
}
void SessionMessage::setMaxTemperature(const qint8 maxTemperature)
{
    Q_D(SessionMessage);
    d->maxTemperature = maxTemperature;
}
void SessionMessage::setTotalMovingTime(const quint32 totalMovingTime)
{
    Q_D(SessionMessage);
    d->totalMovingTime = totalMovingTime;
}
void SessionMessage::setAvgPosVerticalSpeed(const qint16 avgPosVerticalSpeed)
{
    Q_D(SessionMessage);
    d->avgPosVerticalSpeed = avgPosVerticalSpeed;
}
void SessionMessage::setAvgNegVerticalSpeed(const qint16 avgNegVerticalSpeed)
{
    Q_D(SessionMessage);
    d->avgNegVerticalSpeed = avgNegVerticalSpeed;
}
void SessionMessage::setMaxPosVerticalSpeed(const qint16 maxPosVerticalSpeed)
{
    Q_D(SessionMessage);
    d->maxPosVerticalSpeed = maxPosVerticalSpeed;
}
void SessionMessage::setMaxNegVerticalSpeed(const qint16 maxNegVerticalSpeed)
{
    Q_D(SessionMessage);
    d->maxNegVerticalSpeed = maxNegVerticalSpeed;
}
void SessionMessage::setMinHeartRate(const quint8 minHeartRate)
{
    Q_D(SessionMessage);
    d->minHeartRate = minHeartRate;
}
void SessionMessage::setTimeInHrZone(const quint32 timeInHrZone)
{
    Q_D(SessionMessage);
    d->timeInHrZone = timeInHrZone;
}
void SessionMessage::setTimeInSpeedZone(const quint32 timeInSpeedZone)
{
    Q_D(SessionMessage);
    d->timeInSpeedZone = timeInSpeedZone;
}
void SessionMessage::setTimeInCadenceZone(const quint32 timeInCadenceZone)
{
    Q_D(SessionMessage);
    d->timeInCadenceZone = timeInCadenceZone;
}
void SessionMessage::setTimeInPowerZone(const quint32 timeInPowerZone)
{
    Q_D(SessionMessage);
    d->timeInPowerZone = timeInPowerZone;
}
void SessionMessage::setAvgLapTime(const quint32 avgLapTime)
{
    Q_D(SessionMessage);
    d->avgLapTime = avgLapTime;
}
void SessionMessage::setBestLapIndex(const quint16 bestLapIndex)
{
    Q_D(SessionMessage);
    d->bestLapIndex = bestLapIndex;
}
void SessionMessage::setMinAltitude(const quint16 minAltitude)
{
    Q_D(SessionMessage);
    d->minAltitude = minAltitude;
}
void SessionMessage::setPlayerScore(const quint16 playerScore)
{
    Q_D(SessionMessage);
    d->playerScore = playerScore;
}
void SessionMessage::setOpponentScore(const quint16 opponentScore)
{
    Q_D(SessionMessage);
    d->opponentScore = opponentScore;
}
void SessionMessage::setOpponentName(const QString opponentName)
{
    Q_D(SessionMessage);
    d->opponentName = opponentName;
}
void SessionMessage::setStrokeCount(const quint16 strokeCount)
{
    Q_D(SessionMessage);
    d->strokeCount = strokeCount;
}
void SessionMessage::setZoneCount(const quint16 zoneCount)
{
    Q_D(SessionMessage);
    d->zoneCount = zoneCount;
}
void SessionMessage::setMaxBallSpeed(const quint16 maxBallSpeed)
{
    Q_D(SessionMessage);
    d->maxBallSpeed = maxBallSpeed;
}
void SessionMessage::setAvgBallSpeed(const quint16 avgBallSpeed)
{
    Q_D(SessionMessage);
    d->avgBallSpeed = avgBallSpeed;
}
void SessionMessage::setAvgVerticalOscillation(const quint16 avgVerticalOscillation)
{
    Q_D(SessionMessage);
    d->avgVerticalOscillation = avgVerticalOscillation;
}
void SessionMessage::setAvgStanceTimePercent(const quint16 avgStanceTimePercent)
{
    Q_D(SessionMessage);
    d->avgStanceTimePercent = avgStanceTimePercent;
}
void SessionMessage::setAvgStanceTime(const quint16 avgStanceTime)
{
    Q_D(SessionMessage);
    d->avgStanceTime = avgStanceTime;
}
void SessionMessage::setAvgFractionalCadence(const quint8 avgFractionalCadence)
{
    Q_D(SessionMessage);
    d->avgFractionalCadence = avgFractionalCadence;
}
void SessionMessage::setMaxFractionalCadence(const quint8 maxFractionalCadence)
{
    Q_D(SessionMessage);
    d->maxFractionalCadence = maxFractionalCadence;
}
void SessionMessage::setTotalFractionalCycles(const quint8 totalFractionalCycles)
{
    Q_D(SessionMessage);
    d->totalFractionalCycles = totalFractionalCycles;
}
void SessionMessage::setAvgTotalHemoglobinConc(const quint16 avgTotalHemoglobinConc)
{
    Q_D(SessionMessage);
    d->avgTotalHemoglobinConc = avgTotalHemoglobinConc;
}
void SessionMessage::setMinTotalHemoglobinConc(const quint16 minTotalHemoglobinConc)
{
    Q_D(SessionMessage);
    d->minTotalHemoglobinConc = minTotalHemoglobinConc;
}
void SessionMessage::setMaxTotalHemoglobinConc(const quint16 maxTotalHemoglobinConc)
{
    Q_D(SessionMessage);
    d->maxTotalHemoglobinConc = maxTotalHemoglobinConc;
}
void SessionMessage::setAvgSaturatedHemoglobinPercent(const quint16 avgSaturatedHemoglobinPercent)
{
    Q_D(SessionMessage);
    d->avgSaturatedHemoglobinPercent = avgSaturatedHemoglobinPercent;
}
void SessionMessage::setMinSaturatedHemoglobinPercent(const quint16 minSaturatedHemoglobinPercent)
{
    Q_D(SessionMessage);
    d->minSaturatedHemoglobinPercent = minSaturatedHemoglobinPercent;
}
void SessionMessage::setMaxSaturatedHemoglobinPercent(const quint16 maxSaturatedHemoglobinPercent)
{
    Q_D(SessionMessage);
    d->maxSaturatedHemoglobinPercent = maxSaturatedHemoglobinPercent;
}
void SessionMessage::setAvgLeftTorqueEffectiveness(const quint8 avgLeftTorqueEffectiveness)
{
    Q_D(SessionMessage);
    d->avgLeftTorqueEffectiveness = avgLeftTorqueEffectiveness;
}
void SessionMessage::setAvgRightTorqueEffectiveness(const quint8 avgRightTorqueEffectiveness)
{
    Q_D(SessionMessage);
    d->avgRightTorqueEffectiveness = avgRightTorqueEffectiveness;
}
void SessionMessage::setAvgLeftPedalSmoothness(const quint8 avgLeftPedalSmoothness)
{
    Q_D(SessionMessage);
    d->avgLeftPedalSmoothness = avgLeftPedalSmoothness;
}
void SessionMessage::setAvgRightPedalSmoothness(const quint8 avgRightPedalSmoothness)
{
    Q_D(SessionMessage);
    d->avgRightPedalSmoothness = avgRightPedalSmoothness;
}
void SessionMessage::setAvgCombinedPedalSmoothness(const quint8 avgCombinedPedalSmoothness)
{
    Q_D(SessionMessage);
    d->avgCombinedPedalSmoothness = avgCombinedPedalSmoothness;
}
void SessionMessage::setSportIndex(const quint8 sportIndex)
{
    Q_D(SessionMessage);
    d->sportIndex = sportIndex;
}
void SessionMessage::setTimeStanding(const quint32 timeStanding)
{
    Q_D(SessionMessage);
    d->timeStanding = timeStanding;
}
void SessionMessage::setStandCount(const quint16 standCount)
{
    Q_D(SessionMessage);
    d->standCount = standCount;
}
void SessionMessage::setAvgLeftPco(const qint8 avgLeftPco)
{
    Q_D(SessionMessage);
    d->avgLeftPco = avgLeftPco;
}
void SessionMessage::setAvgRightPco(const qint8 avgRightPco)
{
    Q_D(SessionMessage);
    d->avgRightPco = avgRightPco;
}
void SessionMessage::setAvgLeftPowerPhase(const quint8 avgLeftPowerPhase)
{
    Q_D(SessionMessage);
    d->avgLeftPowerPhase = avgLeftPowerPhase;
}
void SessionMessage::setAvgLeftPowerPhasePeak(const quint8 avgLeftPowerPhasePeak)
{
    Q_D(SessionMessage);
    d->avgLeftPowerPhasePeak = avgLeftPowerPhasePeak;
}
void SessionMessage::setAvgRightPowerPhase(const quint8 avgRightPowerPhase)
{
    Q_D(SessionMessage);
    d->avgRightPowerPhase = avgRightPowerPhase;
}
void SessionMessage::setAvgRightPowerPhasePeak(const quint8 avgRightPowerPhasePeak)
{
    Q_D(SessionMessage);
    d->avgRightPowerPhasePeak = avgRightPowerPhasePeak;
}
void SessionMessage::setAvgPowerPosition(const quint16 avgPowerPosition)
{
    Q_D(SessionMessage);
    d->avgPowerPosition = avgPowerPosition;
}
void SessionMessage::setMaxPowerPosition(const quint16 maxPowerPosition)
{
    Q_D(SessionMessage);
    d->maxPowerPosition = maxPowerPosition;
}
void SessionMessage::setAvgCadencePosition(const quint8 avgCadencePosition)
{
    Q_D(SessionMessage);
    d->avgCadencePosition = avgCadencePosition;
}
void SessionMessage::setMaxCadencePosition(const quint8 maxCadencePosition)
{
    Q_D(SessionMessage);
    d->maxCadencePosition = maxCadencePosition;
}
void SessionMessage::setEnhancedAvgSpeed(const quint32 enhancedAvgSpeed)
{
    Q_D(SessionMessage);
    d->enhancedAvgSpeed = enhancedAvgSpeed;
}
void SessionMessage::setEnhancedMaxSpeed(const quint32 enhancedMaxSpeed)
{
    Q_D(SessionMessage);
    d->enhancedMaxSpeed = enhancedMaxSpeed;
}
void SessionMessage::setEnhancedAvgAltitude(const quint32 enhancedAvgAltitude)
{
    Q_D(SessionMessage);
    d->enhancedAvgAltitude = enhancedAvgAltitude;
}
void SessionMessage::setEnhancedMinAltitude(const quint32 enhancedMinAltitude)
{
    Q_D(SessionMessage);
    d->enhancedMinAltitude = enhancedMinAltitude;
}
void SessionMessage::setEnhancedMaxAltitude(const quint32 enhancedMaxAltitude)
{
    Q_D(SessionMessage);
    d->enhancedMaxAltitude = enhancedMaxAltitude;
}
void SessionMessage::setAvgLevMotorPower(const quint16 avgLevMotorPower)
{
    Q_D(SessionMessage);
    d->avgLevMotorPower = avgLevMotorPower;
}
void SessionMessage::setMaxLevMotorPower(const quint16 maxLevMotorPower)
{
    Q_D(SessionMessage);
    d->maxLevMotorPower = maxLevMotorPower;
}
void SessionMessage::setLevBatteryConsumption(const quint8 levBatteryConsumption)
{
    Q_D(SessionMessage);
    d->levBatteryConsumption = levBatteryConsumption;
}
void SessionMessage::setAvgVerticalRatio(const quint16 avgVerticalRatio)
{
    Q_D(SessionMessage);
    d->avgVerticalRatio = avgVerticalRatio;
}
void SessionMessage::setAvgStanceTimeBalance(const quint16 avgStanceTimeBalance)
{
    Q_D(SessionMessage);
    d->avgStanceTimeBalance = avgStanceTimeBalance;
}
void SessionMessage::setAvgStepLength(const quint16 avgStepLength)
{
    Q_D(SessionMessage);
    d->avgStepLength = avgStepLength;
}
void SessionMessage::setTotalAnaerobicTrainingEffect(const quint8 totalAnaerobicTrainingEffect)
{
    Q_D(SessionMessage);
    d->totalAnaerobicTrainingEffect = totalAnaerobicTrainingEffect;
}
void SessionMessage::setAvgVam(const quint16 avgVam)
{
    Q_D(SessionMessage);
    d->avgVam = avgVam;
}
void SessionMessage::setTotalGrit(const float totalGrit)
{
    Q_D(SessionMessage);
    d->totalGrit = totalGrit;
}
void SessionMessage::setTotalFlow(const float totalFlow)
{
    Q_D(SessionMessage);
    d->totalFlow = totalFlow;
}
void SessionMessage::setJumpCount(const quint16 jumpCount)
{
    Q_D(SessionMessage);
    d->jumpCount = jumpCount;
}
void SessionMessage::setAvgGrit(const float avgGrit)
{
    Q_D(SessionMessage);
    d->avgGrit = avgGrit;
}
void SessionMessage::setAvgFlow(const float avgFlow)
{
    Q_D(SessionMessage);
    d->avgFlow = avgFlow;
}
void SessionMessage::setTotalFractionalAscent(const quint8 totalFractionalAscent)
{
    Q_D(SessionMessage);
    d->totalFractionalAscent = totalFractionalAscent;
}
void SessionMessage::setTotalFractionalDescent(const quint8 totalFractionalDescent)
{
    Q_D(SessionMessage);
    d->totalFractionalDescent = totalFractionalDescent;
}
void SessionMessage::setAvgCoreTemperature(const quint16 avgCoreTemperature)
{
    Q_D(SessionMessage);
    d->avgCoreTemperature = avgCoreTemperature;
}
void SessionMessage::setMinCoreTemperature(const quint16 minCoreTemperature)
{
    Q_D(SessionMessage);
    d->minCoreTemperature = minCoreTemperature;
}
void SessionMessage::setMaxCoreTemperature(const quint16 maxCoreTemperature)
{
    Q_D(SessionMessage);
    d->maxCoreTemperature = maxCoreTemperature;
}

SessionMessagePrivate::SessionMessagePrivate(SessionMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , timestamp(static_cast<DateTime>(-1))
  , event(static_cast<Event>(-1))
  , eventType(static_cast<EventType>(-1))
  , startTime(static_cast<DateTime>(-1))
  , startPositionLat(0x7FFFFFFF)
  , startPositionLong(0x7FFFFFFF)
  , sport(static_cast<Sport>(-1))
  , subSport(static_cast<SubSport>(-1))
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
  , totalTrainingEffect(0xFF)
  , firstLapIndex(0xFFFF)
  , numLaps(0xFFFF)
  , eventGroup(0xFF)
  , trigger(static_cast<SessionTrigger>(-1))
  , necLat(0x7FFFFFFF)
  , necLong(0x7FFFFFFF)
  , swcLat(0x7FFFFFFF)
  , swcLong(0x7FFFFFFF)
  , numLengths(0xFFFF)
  , normalizedPower(0xFFFF)
  , trainingStressScore(0xFFFF)
  , intensityFactor(0xFFFF)
  , leftRightBalance(static_cast<LeftRightBalance100>(-1))
  , avgStrokeCount(0xFFFFFFFF)
  , avgStrokeDistance(0xFFFF)
  , swimStroke(static_cast<SwimStroke>(-1))
  , poolLength(0xFFFF)
  , thresholdPower(0xFFFF)
  , poolLengthUnit(static_cast<DisplayMeasure>(-1))
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
  , minHeartRate(0xFF)
  , timeInHrZone(0xFFFFFFFF)
  , timeInSpeedZone(0xFFFFFFFF)
  , timeInCadenceZone(0xFFFFFFFF)
  , timeInPowerZone(0xFFFFFFFF)
  , avgLapTime(0xFFFFFFFF)
  , bestLapIndex(0xFFFF)
  , minAltitude(0xFFFF)
  , playerScore(0xFFFF)
  , opponentScore(0xFFFF)
  , strokeCount(0xFFFF)
  , zoneCount(0xFFFF)
  , maxBallSpeed(0xFFFF)
  , avgBallSpeed(0xFFFF)
  , avgVerticalOscillation(0xFFFF)
  , avgStanceTimePercent(0xFFFF)
  , avgStanceTime(0xFFFF)
  , avgFractionalCadence(0xFF)
  , maxFractionalCadence(0xFF)
  , totalFractionalCycles(0xFF)
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
  , sportIndex(0xFF)
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
  , totalAnaerobicTrainingEffect(0xFF)
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
    globalMessageNumber = MesgNum::Session;
}

SessionMessagePrivate::~SessionMessagePrivate()
{

}

/// @todo Generate implementation.
bool SessionMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
