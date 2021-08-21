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

#include <QDebug>
#include <QtEndian>

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

bool LapMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:lap.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 253: // See Profile.xlsx::Messages:lap.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:lap.event
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.event has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.event size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->event = static_cast<Event>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:lap.eventType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.eventType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.eventType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->eventType = static_cast<EventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:lap.startTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.startTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.startTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->startTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:lap.startPositionLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.startPositionLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.startPositionLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->startPositionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:lap.startPositionLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.startPositionLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.startPositionLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->startPositionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:lap.endPositionLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.endPositionLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.endPositionLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->endPositionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:lap.endPositionLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.endPositionLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.endPositionLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->endPositionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:lap.totalElapsedTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalElapsedTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.totalElapsedTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalElapsedTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 8: // See Profile.xlsx::Messages:lap.totalTimerTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalTimerTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.totalTimerTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalTimerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 9: // See Profile.xlsx::Messages:lap.totalDistance
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalDistance has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.totalDistance size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalDistance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:lap.totalCycles
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalCycles has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.totalCycles size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalCycles = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 11: // See Profile.xlsx::Messages:lap.totalCalories
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalCalories has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.totalCalories size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->totalCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 12: // See Profile.xlsx::Messages:lap.totalFatCalories
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalFatCalories has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.totalFatCalories size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->totalFatCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 13: // See Profile.xlsx::Messages:lap.avgSpeed
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgSpeed has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 14: // See Profile.xlsx::Messages:lap.maxSpeed
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxSpeed has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 15: // See Profile.xlsx::Messages:lap.avgHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 16: // See Profile.xlsx::Messages:lap.maxHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.maxHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->maxHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:lap.avgCadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgCadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgCadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgCadence = static_cast<quint8>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:lap.maxCadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxCadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.maxCadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->maxCadence = static_cast<quint8>(data.at(0));
        break;
    case 19: // See Profile.xlsx::Messages:lap.avgPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 20: // See Profile.xlsx::Messages:lap.maxPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 21: // See Profile.xlsx::Messages:lap.totalAscent
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalAscent has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.totalAscent size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->totalAscent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 22: // See Profile.xlsx::Messages:lap.totalDescent
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalDescent has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.totalDescent size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->totalDescent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 23: // See Profile.xlsx::Messages:lap.intensity
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.intensity has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.intensity size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->intensity = static_cast<Intensity>(data.at(0));
        break;
    case 24: // See Profile.xlsx::Messages:lap.lapTrigger
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.lapTrigger has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.lapTrigger size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->lapTrigger = static_cast<LapTrigger>(data.at(0));
        break;
    case 25: // See Profile.xlsx::Messages:lap.sport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.sport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.sport size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 26: // See Profile.xlsx::Messages:lap.eventGroup
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.eventGroup has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.eventGroup size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->eventGroup = static_cast<quint8>(data.at(0));
        break;
    case 32: // See Profile.xlsx::Messages:lap.numLengths
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.numLengths has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.numLengths size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->numLengths = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 33: // See Profile.xlsx::Messages:lap.normalizedPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.normalizedPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.normalizedPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->normalizedPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 34: // See Profile.xlsx::Messages:lap.leftRightBalance
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.leftRightBalance has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.leftRightBalance size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->leftRightBalance = static_cast<LeftRightBalance100>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 35: // See Profile.xlsx::Messages:lap.firstLengthIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.firstLengthIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.firstLengthIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->firstLengthIndex = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 37: // See Profile.xlsx::Messages:lap.avgStrokeDistance
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgStrokeDistance has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgStrokeDistance size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgStrokeDistance = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 38: // See Profile.xlsx::Messages:lap.swimStroke
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.swimStroke has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.swimStroke size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->swimStroke = static_cast<SwimStroke>(data.at(0));
        break;
    case 39: // See Profile.xlsx::Messages:lap.subSport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.subSport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.subSport size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 40: // See Profile.xlsx::Messages:lap.numActiveLengths
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.numActiveLengths has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.numActiveLengths size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->numActiveLengths = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 41: // See Profile.xlsx::Messages:lap.totalWork
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalWork has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.totalWork size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalWork = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 42: // See Profile.xlsx::Messages:lap.avgAltitude
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgAltitude has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgAltitude size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 43: // See Profile.xlsx::Messages:lap.maxAltitude
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxAltitude has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxAltitude size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 44: // See Profile.xlsx::Messages:lap.gpsAccuracy
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.gpsAccuracy has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.gpsAccuracy size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->gpsAccuracy = static_cast<quint8>(data.at(0));
        break;
    case 45: // See Profile.xlsx::Messages:lap.avgGrade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgGrade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgGrade size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 46: // See Profile.xlsx::Messages:lap.avgPosGrade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgPosGrade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgPosGrade size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgPosGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 47: // See Profile.xlsx::Messages:lap.avgNegGrade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgNegGrade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgNegGrade size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgNegGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 48: // See Profile.xlsx::Messages:lap.maxPosGrade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxPosGrade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxPosGrade size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxPosGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 49: // See Profile.xlsx::Messages:lap.maxNegGrade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxNegGrade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxNegGrade size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxNegGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 50: // See Profile.xlsx::Messages:lap.avgTemperature
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgTemperature has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgTemperature size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgTemperature = static_cast<qint8>(data.at(0));
        break;
    case 51: // See Profile.xlsx::Messages:lap.maxTemperature
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxTemperature has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.maxTemperature size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->maxTemperature = static_cast<qint8>(data.at(0));
        break;
    case 52: // See Profile.xlsx::Messages:lap.totalMovingTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalMovingTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.totalMovingTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalMovingTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 53: // See Profile.xlsx::Messages:lap.avgPosVerticalSpeed
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgPosVerticalSpeed has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgPosVerticalSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgPosVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 54: // See Profile.xlsx::Messages:lap.avgNegVerticalSpeed
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgNegVerticalSpeed has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgNegVerticalSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgNegVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 55: // See Profile.xlsx::Messages:lap.maxPosVerticalSpeed
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxPosVerticalSpeed has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxPosVerticalSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxPosVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 56: // See Profile.xlsx::Messages:lap.maxNegVerticalSpeed
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxNegVerticalSpeed has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxNegVerticalSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxNegVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 57: // See Profile.xlsx::Messages:lap.timeInHrZone
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.timeInHrZone has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.timeInHrZone size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeInHrZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 58: // See Profile.xlsx::Messages:lap.timeInSpeedZone
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.timeInSpeedZone has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.timeInSpeedZone size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeInSpeedZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 59: // See Profile.xlsx::Messages:lap.timeInCadenceZone
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.timeInCadenceZone has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.timeInCadenceZone size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeInCadenceZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 60: // See Profile.xlsx::Messages:lap.timeInPowerZone
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.timeInPowerZone has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.timeInPowerZone size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeInPowerZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 61: // See Profile.xlsx::Messages:lap.repetitionNum
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.repetitionNum has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.repetitionNum size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->repetitionNum = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 62: // See Profile.xlsx::Messages:lap.minAltitude
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.minAltitude has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.minAltitude size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->minAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 63: // See Profile.xlsx::Messages:lap.minHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.minHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.minHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->minHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 71: // See Profile.xlsx::Messages:lap.wktStepIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.wktStepIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.wktStepIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->wktStepIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 74: // See Profile.xlsx::Messages:lap.opponentScore
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.opponentScore has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.opponentScore size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->opponentScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 75: // See Profile.xlsx::Messages:lap.strokeCount
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.strokeCount has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.strokeCount size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->strokeCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 76: // See Profile.xlsx::Messages:lap.zoneCount
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.zoneCount has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.zoneCount size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->zoneCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 77: // See Profile.xlsx::Messages:lap.avgVerticalOscillation
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgVerticalOscillation has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgVerticalOscillation size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgVerticalOscillation = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 78: // See Profile.xlsx::Messages:lap.avgStanceTimePercent
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgStanceTimePercent has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgStanceTimePercent size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgStanceTimePercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 79: // See Profile.xlsx::Messages:lap.avgStanceTime
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgStanceTime has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgStanceTime size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgStanceTime = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 80: // See Profile.xlsx::Messages:lap.avgFractionalCadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgFractionalCadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgFractionalCadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgFractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 81: // See Profile.xlsx::Messages:lap.maxFractionalCadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxFractionalCadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.maxFractionalCadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->maxFractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 82: // See Profile.xlsx::Messages:lap.totalFractionalCycles
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalFractionalCycles has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.totalFractionalCycles size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->totalFractionalCycles = static_cast<quint8>(data.at(0));
        break;
    case 83: // See Profile.xlsx::Messages:lap.playerScore
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.playerScore has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.playerScore size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->playerScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 84: // See Profile.xlsx::Messages:lap.avgTotalHemoglobinConc
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgTotalHemoglobinConc has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgTotalHemoglobinConc size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgTotalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 85: // See Profile.xlsx::Messages:lap.minTotalHemoglobinConc
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.minTotalHemoglobinConc has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.minTotalHemoglobinConc size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->minTotalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 86: // See Profile.xlsx::Messages:lap.maxTotalHemoglobinConc
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxTotalHemoglobinConc has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxTotalHemoglobinConc size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxTotalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 87: // See Profile.xlsx::Messages:lap.avgSaturatedHemoglobinPercent
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgSaturatedHemoglobinPercent has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgSaturatedHemoglobinPercent size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgSaturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 88: // See Profile.xlsx::Messages:lap.minSaturatedHemoglobinPercent
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.minSaturatedHemoglobinPercent has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.minSaturatedHemoglobinPercent size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->minSaturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 89: // See Profile.xlsx::Messages:lap.maxSaturatedHemoglobinPercent
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxSaturatedHemoglobinPercent has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxSaturatedHemoglobinPercent size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxSaturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 91: // See Profile.xlsx::Messages:lap.avgLeftTorqueEffectiveness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgLeftTorqueEffectiveness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgLeftTorqueEffectiveness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgLeftTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 92: // See Profile.xlsx::Messages:lap.avgRightTorqueEffectiveness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgRightTorqueEffectiveness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgRightTorqueEffectiveness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgRightTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 93: // See Profile.xlsx::Messages:lap.avgLeftPedalSmoothness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgLeftPedalSmoothness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgLeftPedalSmoothness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgLeftPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 94: // See Profile.xlsx::Messages:lap.avgRightPedalSmoothness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgRightPedalSmoothness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgRightPedalSmoothness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgRightPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 95: // See Profile.xlsx::Messages:lap.avgCombinedPedalSmoothness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgCombinedPedalSmoothness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgCombinedPedalSmoothness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgCombinedPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 98: // See Profile.xlsx::Messages:lap.timeStanding
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.timeStanding has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.timeStanding size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeStanding = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 99: // See Profile.xlsx::Messages:lap.standCount
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.standCount has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.standCount size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->standCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 100: // See Profile.xlsx::Messages:lap.avgLeftPco
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgLeftPco has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgLeftPco size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgLeftPco = static_cast<qint8>(data.at(0));
        break;
    case 101: // See Profile.xlsx::Messages:lap.avgRightPco
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgRightPco has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgRightPco size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgRightPco = static_cast<qint8>(data.at(0));
        break;
    case 102: // See Profile.xlsx::Messages:lap.avgLeftPowerPhase
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgLeftPowerPhase has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgLeftPowerPhase size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgLeftPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 103: // See Profile.xlsx::Messages:lap.avgLeftPowerPhasePeak
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgLeftPowerPhasePeak has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgLeftPowerPhasePeak size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgLeftPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 104: // See Profile.xlsx::Messages:lap.avgRightPowerPhase
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgRightPowerPhase has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgRightPowerPhase size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgRightPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 105: // See Profile.xlsx::Messages:lap.avgRightPowerPhasePeak
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgRightPowerPhasePeak has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgRightPowerPhasePeak size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgRightPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 106: // See Profile.xlsx::Messages:lap.avgPowerPosition
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgPowerPosition has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgPowerPosition size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgPowerPosition = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 107: // See Profile.xlsx::Messages:lap.maxPowerPosition
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxPowerPosition has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxPowerPosition size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxPowerPosition = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 108: // See Profile.xlsx::Messages:lap.avgCadencePosition
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgCadencePosition has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.avgCadencePosition size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgCadencePosition = static_cast<quint8>(data.at(0));
        break;
    case 109: // See Profile.xlsx::Messages:lap.maxCadencePosition
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxCadencePosition has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.maxCadencePosition size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->maxCadencePosition = static_cast<quint8>(data.at(0));
        break;
    case 110: // See Profile.xlsx::Messages:lap.enhancedAvgSpeed
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.enhancedAvgSpeed has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.enhancedAvgSpeed size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->enhancedAvgSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 111: // See Profile.xlsx::Messages:lap.enhancedMaxSpeed
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.enhancedMaxSpeed has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.enhancedMaxSpeed size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->enhancedMaxSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 112: // See Profile.xlsx::Messages:lap.enhancedAvgAltitude
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.enhancedAvgAltitude has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.enhancedAvgAltitude size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->enhancedAvgAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 113: // See Profile.xlsx::Messages:lap.enhancedMinAltitude
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.enhancedMinAltitude has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.enhancedMinAltitude size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->enhancedMinAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 114: // See Profile.xlsx::Messages:lap.enhancedMaxAltitude
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.enhancedMaxAltitude has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.enhancedMaxAltitude size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->enhancedMaxAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 115: // See Profile.xlsx::Messages:lap.avgLevMotorPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgLevMotorPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgLevMotorPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgLevMotorPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 116: // See Profile.xlsx::Messages:lap.maxLevMotorPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxLevMotorPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxLevMotorPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxLevMotorPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 117: // See Profile.xlsx::Messages:lap.levBatteryConsumption
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.levBatteryConsumption has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.levBatteryConsumption size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->levBatteryConsumption = static_cast<quint8>(data.at(0));
        break;
    case 118: // See Profile.xlsx::Messages:lap.avgVerticalRatio
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgVerticalRatio has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgVerticalRatio size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgVerticalRatio = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 119: // See Profile.xlsx::Messages:lap.avgStanceTimeBalance
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgStanceTimeBalance has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgStanceTimeBalance size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgStanceTimeBalance = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 120: // See Profile.xlsx::Messages:lap.avgStepLength
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgStepLength has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgStepLength size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgStepLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 121: // See Profile.xlsx::Messages:lap.avgVam
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgVam has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgVam size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgVam = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 149: // See Profile.xlsx::Messages:lap.totalGrit
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalGrit has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.totalGrit size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalGrit = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 150: // See Profile.xlsx::Messages:lap.totalFlow
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalFlow has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.totalFlow size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalFlow = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 151: // See Profile.xlsx::Messages:lap.jumpCount
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.jumpCount has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.jumpCount size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->jumpCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 153: // See Profile.xlsx::Messages:lap.avgGrit
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgGrit has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.avgGrit size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->avgGrit = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 154: // See Profile.xlsx::Messages:lap.avgFlow
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgFlow has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "lap.avgFlow size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->avgFlow = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 156: // See Profile.xlsx::Messages:lap.totalFractionalAscent
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalFractionalAscent has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.totalFractionalAscent size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->totalFractionalAscent = static_cast<quint8>(data.at(0));
        break;
    case 157: // See Profile.xlsx::Messages:lap.totalFractionalDescent
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.totalFractionalDescent has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "lap.totalFractionalDescent size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->totalFractionalDescent = static_cast<quint8>(data.at(0));
        break;
    case 158: // See Profile.xlsx::Messages:lap.avgCoreTemperature
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.avgCoreTemperature has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.avgCoreTemperature size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgCoreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 159: // See Profile.xlsx::Messages:lap.minCoreTemperature
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.minCoreTemperature has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.minCoreTemperature size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->minCoreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 160: // See Profile.xlsx::Messages:lap.maxCoreTemperature
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "lap.maxCoreTemperature has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "lap.maxCoreTemperature size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxCoreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown lap message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
