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

#include "segmentlapmessage.h"
#include "segmentlapmessage_p.h"

QTFIT_BEGIN_NAMESPACE

SegmentLapMessage::SegmentLapMessage() : FitDataMessage(new SegmentLapMessagePrivate(this))
{

}

MessageIndex SegmentLapMessage::messageIndex() const
{
    Q_D(const SegmentLapMessage);
    return d->messageIndex;
}

DateTime SegmentLapMessage::timestamp() const
{
    Q_D(const SegmentLapMessage);
    return d->timestamp;
}

Event SegmentLapMessage::event() const
{
    Q_D(const SegmentLapMessage);
    return d->event;
}

EventType SegmentLapMessage::eventType() const
{
    Q_D(const SegmentLapMessage);
    return d->eventType;
}

DateTime SegmentLapMessage::startTime() const
{
    Q_D(const SegmentLapMessage);
    return d->startTime;
}

qint32 SegmentLapMessage::startPositionLat() const
{
    Q_D(const SegmentLapMessage);
    return d->startPositionLat;
}

qint32 SegmentLapMessage::startPositionLong() const
{
    Q_D(const SegmentLapMessage);
    return d->startPositionLong;
}

qint32 SegmentLapMessage::endPositionLat() const
{
    Q_D(const SegmentLapMessage);
    return d->endPositionLat;
}

qint32 SegmentLapMessage::endPositionLong() const
{
    Q_D(const SegmentLapMessage);
    return d->endPositionLong;
}

quint32 SegmentLapMessage::totalElapsedTime() const
{
    Q_D(const SegmentLapMessage);
    return d->totalElapsedTime;
}

quint32 SegmentLapMessage::totalTimerTime() const
{
    Q_D(const SegmentLapMessage);
    return d->totalTimerTime;
}

quint32 SegmentLapMessage::totalDistance() const
{
    Q_D(const SegmentLapMessage);
    return d->totalDistance;
}

quint32 SegmentLapMessage::totalCycles() const
{
    Q_D(const SegmentLapMessage);
    return d->totalCycles;
}

quint16 SegmentLapMessage::totalCalories() const
{
    Q_D(const SegmentLapMessage);
    return d->totalCalories;
}

quint16 SegmentLapMessage::totalFatCalories() const
{
    Q_D(const SegmentLapMessage);
    return d->totalFatCalories;
}

quint16 SegmentLapMessage::avgSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->avgSpeed;
}

quint16 SegmentLapMessage::maxSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->maxSpeed;
}

quint8 SegmentLapMessage::avgHeartRate() const
{
    Q_D(const SegmentLapMessage);
    return d->avgHeartRate;
}

quint8 SegmentLapMessage::maxHeartRate() const
{
    Q_D(const SegmentLapMessage);
    return d->maxHeartRate;
}

quint8 SegmentLapMessage::avgCadence() const
{
    Q_D(const SegmentLapMessage);
    return d->avgCadence;
}

quint8 SegmentLapMessage::maxCadence() const
{
    Q_D(const SegmentLapMessage);
    return d->maxCadence;
}

quint16 SegmentLapMessage::avgPower() const
{
    Q_D(const SegmentLapMessage);
    return d->avgPower;
}

quint16 SegmentLapMessage::maxPower() const
{
    Q_D(const SegmentLapMessage);
    return d->maxPower;
}

quint16 SegmentLapMessage::totalAscent() const
{
    Q_D(const SegmentLapMessage);
    return d->totalAscent;
}

quint16 SegmentLapMessage::totalDescent() const
{
    Q_D(const SegmentLapMessage);
    return d->totalDescent;
}

Sport SegmentLapMessage::sport() const
{
    Q_D(const SegmentLapMessage);
    return d->sport;
}

quint8 SegmentLapMessage::eventGroup() const
{
    Q_D(const SegmentLapMessage);
    return d->eventGroup;
}

qint32 SegmentLapMessage::necLat() const
{
    Q_D(const SegmentLapMessage);
    return d->necLat;
}

qint32 SegmentLapMessage::necLong() const
{
    Q_D(const SegmentLapMessage);
    return d->necLong;
}

qint32 SegmentLapMessage::swcLat() const
{
    Q_D(const SegmentLapMessage);
    return d->swcLat;
}

qint32 SegmentLapMessage::swcLong() const
{
    Q_D(const SegmentLapMessage);
    return d->swcLong;
}

QString SegmentLapMessage::name() const
{
    Q_D(const SegmentLapMessage);
    return d->name;
}

quint16 SegmentLapMessage::normalizedPower() const
{
    Q_D(const SegmentLapMessage);
    return d->normalizedPower;
}

LeftRightBalance100 SegmentLapMessage::leftRightBalance() const
{
    Q_D(const SegmentLapMessage);
    return d->leftRightBalance;
}

SubSport SegmentLapMessage::subSport() const
{
    Q_D(const SegmentLapMessage);
    return d->subSport;
}

quint32 SegmentLapMessage::totalWork() const
{
    Q_D(const SegmentLapMessage);
    return d->totalWork;
}

quint16 SegmentLapMessage::avgAltitude() const
{
    Q_D(const SegmentLapMessage);
    return d->avgAltitude;
}

quint16 SegmentLapMessage::maxAltitude() const
{
    Q_D(const SegmentLapMessage);
    return d->maxAltitude;
}

quint8 SegmentLapMessage::gpsAccuracy() const
{
    Q_D(const SegmentLapMessage);
    return d->gpsAccuracy;
}

qint16 SegmentLapMessage::avgGrade() const
{
    Q_D(const SegmentLapMessage);
    return d->avgGrade;
}

qint16 SegmentLapMessage::avgPosGrade() const
{
    Q_D(const SegmentLapMessage);
    return d->avgPosGrade;
}

qint16 SegmentLapMessage::avgNegGrade() const
{
    Q_D(const SegmentLapMessage);
    return d->avgNegGrade;
}

qint16 SegmentLapMessage::maxPosGrade() const
{
    Q_D(const SegmentLapMessage);
    return d->maxPosGrade;
}

qint16 SegmentLapMessage::maxNegGrade() const
{
    Q_D(const SegmentLapMessage);
    return d->maxNegGrade;
}

qint8 SegmentLapMessage::avgTemperature() const
{
    Q_D(const SegmentLapMessage);
    return d->avgTemperature;
}

qint8 SegmentLapMessage::maxTemperature() const
{
    Q_D(const SegmentLapMessage);
    return d->maxTemperature;
}

quint32 SegmentLapMessage::totalMovingTime() const
{
    Q_D(const SegmentLapMessage);
    return d->totalMovingTime;
}

qint16 SegmentLapMessage::avgPosVerticalSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->avgPosVerticalSpeed;
}

qint16 SegmentLapMessage::avgNegVerticalSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->avgNegVerticalSpeed;
}

qint16 SegmentLapMessage::maxPosVerticalSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->maxPosVerticalSpeed;
}

qint16 SegmentLapMessage::maxNegVerticalSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->maxNegVerticalSpeed;
}

quint32 SegmentLapMessage::timeInHrZone() const
{
    Q_D(const SegmentLapMessage);
    return d->timeInHrZone;
}

quint32 SegmentLapMessage::timeInSpeedZone() const
{
    Q_D(const SegmentLapMessage);
    return d->timeInSpeedZone;
}

quint32 SegmentLapMessage::timeInCadenceZone() const
{
    Q_D(const SegmentLapMessage);
    return d->timeInCadenceZone;
}

quint32 SegmentLapMessage::timeInPowerZone() const
{
    Q_D(const SegmentLapMessage);
    return d->timeInPowerZone;
}

quint16 SegmentLapMessage::repetitionNum() const
{
    Q_D(const SegmentLapMessage);
    return d->repetitionNum;
}

quint16 SegmentLapMessage::minAltitude() const
{
    Q_D(const SegmentLapMessage);
    return d->minAltitude;
}

quint8 SegmentLapMessage::minHeartRate() const
{
    Q_D(const SegmentLapMessage);
    return d->minHeartRate;
}

quint32 SegmentLapMessage::activeTime() const
{
    Q_D(const SegmentLapMessage);
    return d->activeTime;
}

MessageIndex SegmentLapMessage::wktStepIndex() const
{
    Q_D(const SegmentLapMessage);
    return d->wktStepIndex;
}

SportEvent SegmentLapMessage::sportEvent() const
{
    Q_D(const SegmentLapMessage);
    return d->sportEvent;
}

quint8 SegmentLapMessage::avgLeftTorqueEffectiveness() const
{
    Q_D(const SegmentLapMessage);
    return d->avgLeftTorqueEffectiveness;
}

quint8 SegmentLapMessage::avgRightTorqueEffectiveness() const
{
    Q_D(const SegmentLapMessage);
    return d->avgRightTorqueEffectiveness;
}

quint8 SegmentLapMessage::avgLeftPedalSmoothness() const
{
    Q_D(const SegmentLapMessage);
    return d->avgLeftPedalSmoothness;
}

quint8 SegmentLapMessage::avgRightPedalSmoothness() const
{
    Q_D(const SegmentLapMessage);
    return d->avgRightPedalSmoothness;
}

quint8 SegmentLapMessage::avgCombinedPedalSmoothness() const
{
    Q_D(const SegmentLapMessage);
    return d->avgCombinedPedalSmoothness;
}

SegmentLapStatus SegmentLapMessage::status() const
{
    Q_D(const SegmentLapMessage);
    return d->status;
}

QString SegmentLapMessage::uuid() const
{
    Q_D(const SegmentLapMessage);
    return d->uuid;
}

quint8 SegmentLapMessage::avgFractionalCadence() const
{
    Q_D(const SegmentLapMessage);
    return d->avgFractionalCadence;
}

quint8 SegmentLapMessage::maxFractionalCadence() const
{
    Q_D(const SegmentLapMessage);
    return d->maxFractionalCadence;
}

quint8 SegmentLapMessage::totalFractionalCycles() const
{
    Q_D(const SegmentLapMessage);
    return d->totalFractionalCycles;
}

quint16 SegmentLapMessage::frontGearShiftCount() const
{
    Q_D(const SegmentLapMessage);
    return d->frontGearShiftCount;
}

quint16 SegmentLapMessage::rearGearShiftCount() const
{
    Q_D(const SegmentLapMessage);
    return d->rearGearShiftCount;
}

quint32 SegmentLapMessage::timeStanding() const
{
    Q_D(const SegmentLapMessage);
    return d->timeStanding;
}

quint16 SegmentLapMessage::standCount() const
{
    Q_D(const SegmentLapMessage);
    return d->standCount;
}

qint8 SegmentLapMessage::avgLeftPco() const
{
    Q_D(const SegmentLapMessage);
    return d->avgLeftPco;
}

qint8 SegmentLapMessage::avgRightPco() const
{
    Q_D(const SegmentLapMessage);
    return d->avgRightPco;
}

quint8 SegmentLapMessage::avgLeftPowerPhase() const
{
    Q_D(const SegmentLapMessage);
    return d->avgLeftPowerPhase;
}

quint8 SegmentLapMessage::avgLeftPowerPhasePeak() const
{
    Q_D(const SegmentLapMessage);
    return d->avgLeftPowerPhasePeak;
}

quint8 SegmentLapMessage::avgRightPowerPhase() const
{
    Q_D(const SegmentLapMessage);
    return d->avgRightPowerPhase;
}

quint8 SegmentLapMessage::avgRightPowerPhasePeak() const
{
    Q_D(const SegmentLapMessage);
    return d->avgRightPowerPhasePeak;
}

quint16 SegmentLapMessage::avgPowerPosition() const
{
    Q_D(const SegmentLapMessage);
    return d->avgPowerPosition;
}

quint16 SegmentLapMessage::maxPowerPosition() const
{
    Q_D(const SegmentLapMessage);
    return d->maxPowerPosition;
}

quint8 SegmentLapMessage::avgCadencePosition() const
{
    Q_D(const SegmentLapMessage);
    return d->avgCadencePosition;
}

quint8 SegmentLapMessage::maxCadencePosition() const
{
    Q_D(const SegmentLapMessage);
    return d->maxCadencePosition;
}

Manufacturer SegmentLapMessage::manufacturer() const
{
    Q_D(const SegmentLapMessage);
    return d->manufacturer;
}

float SegmentLapMessage::totalGrit() const
{
    Q_D(const SegmentLapMessage);
    return d->totalGrit;
}

float SegmentLapMessage::totalFlow() const
{
    Q_D(const SegmentLapMessage);
    return d->totalFlow;
}

float SegmentLapMessage::avgGrit() const
{
    Q_D(const SegmentLapMessage);
    return d->avgGrit;
}

float SegmentLapMessage::avgFlow() const
{
    Q_D(const SegmentLapMessage);
    return d->avgFlow;
}

quint8 SegmentLapMessage::totalFractionalAscent() const
{
    Q_D(const SegmentLapMessage);
    return d->totalFractionalAscent;
}

quint8 SegmentLapMessage::totalFractionalDescent() const
{
    Q_D(const SegmentLapMessage);
    return d->totalFractionalDescent;
}

void SegmentLapMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SegmentLapMessage);
    d->messageIndex = messageIndex;
}
void SegmentLapMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(SegmentLapMessage);
    d->timestamp = timestamp;
}
void SegmentLapMessage::setEvent(const Event event)
{
    Q_D(SegmentLapMessage);
    d->event = event;
}
void SegmentLapMessage::setEventType(const EventType eventType)
{
    Q_D(SegmentLapMessage);
    d->eventType = eventType;
}
void SegmentLapMessage::setStartTime(const DateTime startTime)
{
    Q_D(SegmentLapMessage);
    d->startTime = startTime;
}
void SegmentLapMessage::setStartPositionLat(const qint32 startPositionLat)
{
    Q_D(SegmentLapMessage);
    d->startPositionLat = startPositionLat;
}
void SegmentLapMessage::setStartPositionLong(const qint32 startPositionLong)
{
    Q_D(SegmentLapMessage);
    d->startPositionLong = startPositionLong;
}
void SegmentLapMessage::setEndPositionLat(const qint32 endPositionLat)
{
    Q_D(SegmentLapMessage);
    d->endPositionLat = endPositionLat;
}
void SegmentLapMessage::setEndPositionLong(const qint32 endPositionLong)
{
    Q_D(SegmentLapMessage);
    d->endPositionLong = endPositionLong;
}
void SegmentLapMessage::setTotalElapsedTime(const quint32 totalElapsedTime)
{
    Q_D(SegmentLapMessage);
    d->totalElapsedTime = totalElapsedTime;
}
void SegmentLapMessage::setTotalTimerTime(const quint32 totalTimerTime)
{
    Q_D(SegmentLapMessage);
    d->totalTimerTime = totalTimerTime;
}
void SegmentLapMessage::setTotalDistance(const quint32 totalDistance)
{
    Q_D(SegmentLapMessage);
    d->totalDistance = totalDistance;
}
void SegmentLapMessage::setTotalCycles(const quint32 totalCycles)
{
    Q_D(SegmentLapMessage);
    d->totalCycles = totalCycles;
}
void SegmentLapMessage::setTotalCalories(const quint16 totalCalories)
{
    Q_D(SegmentLapMessage);
    d->totalCalories = totalCalories;
}
void SegmentLapMessage::setTotalFatCalories(const quint16 totalFatCalories)
{
    Q_D(SegmentLapMessage);
    d->totalFatCalories = totalFatCalories;
}
void SegmentLapMessage::setAvgSpeed(const quint16 avgSpeed)
{
    Q_D(SegmentLapMessage);
    d->avgSpeed = avgSpeed;
}
void SegmentLapMessage::setMaxSpeed(const quint16 maxSpeed)
{
    Q_D(SegmentLapMessage);
    d->maxSpeed = maxSpeed;
}
void SegmentLapMessage::setAvgHeartRate(const quint8 avgHeartRate)
{
    Q_D(SegmentLapMessage);
    d->avgHeartRate = avgHeartRate;
}
void SegmentLapMessage::setMaxHeartRate(const quint8 maxHeartRate)
{
    Q_D(SegmentLapMessage);
    d->maxHeartRate = maxHeartRate;
}
void SegmentLapMessage::setAvgCadence(const quint8 avgCadence)
{
    Q_D(SegmentLapMessage);
    d->avgCadence = avgCadence;
}
void SegmentLapMessage::setMaxCadence(const quint8 maxCadence)
{
    Q_D(SegmentLapMessage);
    d->maxCadence = maxCadence;
}
void SegmentLapMessage::setAvgPower(const quint16 avgPower)
{
    Q_D(SegmentLapMessage);
    d->avgPower = avgPower;
}
void SegmentLapMessage::setMaxPower(const quint16 maxPower)
{
    Q_D(SegmentLapMessage);
    d->maxPower = maxPower;
}
void SegmentLapMessage::setTotalAscent(const quint16 totalAscent)
{
    Q_D(SegmentLapMessage);
    d->totalAscent = totalAscent;
}
void SegmentLapMessage::setTotalDescent(const quint16 totalDescent)
{
    Q_D(SegmentLapMessage);
    d->totalDescent = totalDescent;
}
void SegmentLapMessage::setSport(const Sport sport)
{
    Q_D(SegmentLapMessage);
    d->sport = sport;
}
void SegmentLapMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(SegmentLapMessage);
    d->eventGroup = eventGroup;
}
void SegmentLapMessage::setNecLat(const qint32 necLat)
{
    Q_D(SegmentLapMessage);
    d->necLat = necLat;
}
void SegmentLapMessage::setNecLong(const qint32 necLong)
{
    Q_D(SegmentLapMessage);
    d->necLong = necLong;
}
void SegmentLapMessage::setSwcLat(const qint32 swcLat)
{
    Q_D(SegmentLapMessage);
    d->swcLat = swcLat;
}
void SegmentLapMessage::setSwcLong(const qint32 swcLong)
{
    Q_D(SegmentLapMessage);
    d->swcLong = swcLong;
}
void SegmentLapMessage::setName(const QString name)
{
    Q_D(SegmentLapMessage);
    d->name = name;
}
void SegmentLapMessage::setNormalizedPower(const quint16 normalizedPower)
{
    Q_D(SegmentLapMessage);
    d->normalizedPower = normalizedPower;
}
void SegmentLapMessage::setLeftRightBalance(const LeftRightBalance100 leftRightBalance)
{
    Q_D(SegmentLapMessage);
    d->leftRightBalance = leftRightBalance;
}
void SegmentLapMessage::setSubSport(const SubSport subSport)
{
    Q_D(SegmentLapMessage);
    d->subSport = subSport;
}
void SegmentLapMessage::setTotalWork(const quint32 totalWork)
{
    Q_D(SegmentLapMessage);
    d->totalWork = totalWork;
}
void SegmentLapMessage::setAvgAltitude(const quint16 avgAltitude)
{
    Q_D(SegmentLapMessage);
    d->avgAltitude = avgAltitude;
}
void SegmentLapMessage::setMaxAltitude(const quint16 maxAltitude)
{
    Q_D(SegmentLapMessage);
    d->maxAltitude = maxAltitude;
}
void SegmentLapMessage::setGpsAccuracy(const quint8 gpsAccuracy)
{
    Q_D(SegmentLapMessage);
    d->gpsAccuracy = gpsAccuracy;
}
void SegmentLapMessage::setAvgGrade(const qint16 avgGrade)
{
    Q_D(SegmentLapMessage);
    d->avgGrade = avgGrade;
}
void SegmentLapMessage::setAvgPosGrade(const qint16 avgPosGrade)
{
    Q_D(SegmentLapMessage);
    d->avgPosGrade = avgPosGrade;
}
void SegmentLapMessage::setAvgNegGrade(const qint16 avgNegGrade)
{
    Q_D(SegmentLapMessage);
    d->avgNegGrade = avgNegGrade;
}
void SegmentLapMessage::setMaxPosGrade(const qint16 maxPosGrade)
{
    Q_D(SegmentLapMessage);
    d->maxPosGrade = maxPosGrade;
}
void SegmentLapMessage::setMaxNegGrade(const qint16 maxNegGrade)
{
    Q_D(SegmentLapMessage);
    d->maxNegGrade = maxNegGrade;
}
void SegmentLapMessage::setAvgTemperature(const qint8 avgTemperature)
{
    Q_D(SegmentLapMessage);
    d->avgTemperature = avgTemperature;
}
void SegmentLapMessage::setMaxTemperature(const qint8 maxTemperature)
{
    Q_D(SegmentLapMessage);
    d->maxTemperature = maxTemperature;
}
void SegmentLapMessage::setTotalMovingTime(const quint32 totalMovingTime)
{
    Q_D(SegmentLapMessage);
    d->totalMovingTime = totalMovingTime;
}
void SegmentLapMessage::setAvgPosVerticalSpeed(const qint16 avgPosVerticalSpeed)
{
    Q_D(SegmentLapMessage);
    d->avgPosVerticalSpeed = avgPosVerticalSpeed;
}
void SegmentLapMessage::setAvgNegVerticalSpeed(const qint16 avgNegVerticalSpeed)
{
    Q_D(SegmentLapMessage);
    d->avgNegVerticalSpeed = avgNegVerticalSpeed;
}
void SegmentLapMessage::setMaxPosVerticalSpeed(const qint16 maxPosVerticalSpeed)
{
    Q_D(SegmentLapMessage);
    d->maxPosVerticalSpeed = maxPosVerticalSpeed;
}
void SegmentLapMessage::setMaxNegVerticalSpeed(const qint16 maxNegVerticalSpeed)
{
    Q_D(SegmentLapMessage);
    d->maxNegVerticalSpeed = maxNegVerticalSpeed;
}
void SegmentLapMessage::setTimeInHrZone(const quint32 timeInHrZone)
{
    Q_D(SegmentLapMessage);
    d->timeInHrZone = timeInHrZone;
}
void SegmentLapMessage::setTimeInSpeedZone(const quint32 timeInSpeedZone)
{
    Q_D(SegmentLapMessage);
    d->timeInSpeedZone = timeInSpeedZone;
}
void SegmentLapMessage::setTimeInCadenceZone(const quint32 timeInCadenceZone)
{
    Q_D(SegmentLapMessage);
    d->timeInCadenceZone = timeInCadenceZone;
}
void SegmentLapMessage::setTimeInPowerZone(const quint32 timeInPowerZone)
{
    Q_D(SegmentLapMessage);
    d->timeInPowerZone = timeInPowerZone;
}
void SegmentLapMessage::setRepetitionNum(const quint16 repetitionNum)
{
    Q_D(SegmentLapMessage);
    d->repetitionNum = repetitionNum;
}
void SegmentLapMessage::setMinAltitude(const quint16 minAltitude)
{
    Q_D(SegmentLapMessage);
    d->minAltitude = minAltitude;
}
void SegmentLapMessage::setMinHeartRate(const quint8 minHeartRate)
{
    Q_D(SegmentLapMessage);
    d->minHeartRate = minHeartRate;
}
void SegmentLapMessage::setActiveTime(const quint32 activeTime)
{
    Q_D(SegmentLapMessage);
    d->activeTime = activeTime;
}
void SegmentLapMessage::setWktStepIndex(const MessageIndex wktStepIndex)
{
    Q_D(SegmentLapMessage);
    d->wktStepIndex = wktStepIndex;
}
void SegmentLapMessage::setSportEvent(const SportEvent sportEvent)
{
    Q_D(SegmentLapMessage);
    d->sportEvent = sportEvent;
}
void SegmentLapMessage::setAvgLeftTorqueEffectiveness(const quint8 avgLeftTorqueEffectiveness)
{
    Q_D(SegmentLapMessage);
    d->avgLeftTorqueEffectiveness = avgLeftTorqueEffectiveness;
}
void SegmentLapMessage::setAvgRightTorqueEffectiveness(const quint8 avgRightTorqueEffectiveness)
{
    Q_D(SegmentLapMessage);
    d->avgRightTorqueEffectiveness = avgRightTorqueEffectiveness;
}
void SegmentLapMessage::setAvgLeftPedalSmoothness(const quint8 avgLeftPedalSmoothness)
{
    Q_D(SegmentLapMessage);
    d->avgLeftPedalSmoothness = avgLeftPedalSmoothness;
}
void SegmentLapMessage::setAvgRightPedalSmoothness(const quint8 avgRightPedalSmoothness)
{
    Q_D(SegmentLapMessage);
    d->avgRightPedalSmoothness = avgRightPedalSmoothness;
}
void SegmentLapMessage::setAvgCombinedPedalSmoothness(const quint8 avgCombinedPedalSmoothness)
{
    Q_D(SegmentLapMessage);
    d->avgCombinedPedalSmoothness = avgCombinedPedalSmoothness;
}
void SegmentLapMessage::setStatus(const SegmentLapStatus status)
{
    Q_D(SegmentLapMessage);
    d->status = status;
}
void SegmentLapMessage::setUuid(const QString uuid)
{
    Q_D(SegmentLapMessage);
    d->uuid = uuid;
}
void SegmentLapMessage::setAvgFractionalCadence(const quint8 avgFractionalCadence)
{
    Q_D(SegmentLapMessage);
    d->avgFractionalCadence = avgFractionalCadence;
}
void SegmentLapMessage::setMaxFractionalCadence(const quint8 maxFractionalCadence)
{
    Q_D(SegmentLapMessage);
    d->maxFractionalCadence = maxFractionalCadence;
}
void SegmentLapMessage::setTotalFractionalCycles(const quint8 totalFractionalCycles)
{
    Q_D(SegmentLapMessage);
    d->totalFractionalCycles = totalFractionalCycles;
}
void SegmentLapMessage::setFrontGearShiftCount(const quint16 frontGearShiftCount)
{
    Q_D(SegmentLapMessage);
    d->frontGearShiftCount = frontGearShiftCount;
}
void SegmentLapMessage::setRearGearShiftCount(const quint16 rearGearShiftCount)
{
    Q_D(SegmentLapMessage);
    d->rearGearShiftCount = rearGearShiftCount;
}
void SegmentLapMessage::setTimeStanding(const quint32 timeStanding)
{
    Q_D(SegmentLapMessage);
    d->timeStanding = timeStanding;
}
void SegmentLapMessage::setStandCount(const quint16 standCount)
{
    Q_D(SegmentLapMessage);
    d->standCount = standCount;
}
void SegmentLapMessage::setAvgLeftPco(const qint8 avgLeftPco)
{
    Q_D(SegmentLapMessage);
    d->avgLeftPco = avgLeftPco;
}
void SegmentLapMessage::setAvgRightPco(const qint8 avgRightPco)
{
    Q_D(SegmentLapMessage);
    d->avgRightPco = avgRightPco;
}
void SegmentLapMessage::setAvgLeftPowerPhase(const quint8 avgLeftPowerPhase)
{
    Q_D(SegmentLapMessage);
    d->avgLeftPowerPhase = avgLeftPowerPhase;
}
void SegmentLapMessage::setAvgLeftPowerPhasePeak(const quint8 avgLeftPowerPhasePeak)
{
    Q_D(SegmentLapMessage);
    d->avgLeftPowerPhasePeak = avgLeftPowerPhasePeak;
}
void SegmentLapMessage::setAvgRightPowerPhase(const quint8 avgRightPowerPhase)
{
    Q_D(SegmentLapMessage);
    d->avgRightPowerPhase = avgRightPowerPhase;
}
void SegmentLapMessage::setAvgRightPowerPhasePeak(const quint8 avgRightPowerPhasePeak)
{
    Q_D(SegmentLapMessage);
    d->avgRightPowerPhasePeak = avgRightPowerPhasePeak;
}
void SegmentLapMessage::setAvgPowerPosition(const quint16 avgPowerPosition)
{
    Q_D(SegmentLapMessage);
    d->avgPowerPosition = avgPowerPosition;
}
void SegmentLapMessage::setMaxPowerPosition(const quint16 maxPowerPosition)
{
    Q_D(SegmentLapMessage);
    d->maxPowerPosition = maxPowerPosition;
}
void SegmentLapMessage::setAvgCadencePosition(const quint8 avgCadencePosition)
{
    Q_D(SegmentLapMessage);
    d->avgCadencePosition = avgCadencePosition;
}
void SegmentLapMessage::setMaxCadencePosition(const quint8 maxCadencePosition)
{
    Q_D(SegmentLapMessage);
    d->maxCadencePosition = maxCadencePosition;
}
void SegmentLapMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(SegmentLapMessage);
    d->manufacturer = manufacturer;
}
void SegmentLapMessage::setTotalGrit(const float totalGrit)
{
    Q_D(SegmentLapMessage);
    d->totalGrit = totalGrit;
}
void SegmentLapMessage::setTotalFlow(const float totalFlow)
{
    Q_D(SegmentLapMessage);
    d->totalFlow = totalFlow;
}
void SegmentLapMessage::setAvgGrit(const float avgGrit)
{
    Q_D(SegmentLapMessage);
    d->avgGrit = avgGrit;
}
void SegmentLapMessage::setAvgFlow(const float avgFlow)
{
    Q_D(SegmentLapMessage);
    d->avgFlow = avgFlow;
}
void SegmentLapMessage::setTotalFractionalAscent(const quint8 totalFractionalAscent)
{
    Q_D(SegmentLapMessage);
    d->totalFractionalAscent = totalFractionalAscent;
}
void SegmentLapMessage::setTotalFractionalDescent(const quint8 totalFractionalDescent)
{
    Q_D(SegmentLapMessage);
    d->totalFractionalDescent = totalFractionalDescent;
}

SegmentLapMessagePrivate::SegmentLapMessagePrivate(SegmentLapMessage * const q)
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
  , sport(static_cast<Sport>(-1))
  , eventGroup(0xFF)
  , necLat(0x7FFFFFFF)
  , necLong(0x7FFFFFFF)
  , swcLat(0x7FFFFFFF)
  , swcLong(0x7FFFFFFF)
  , normalizedPower(0xFFFF)
  , leftRightBalance(static_cast<LeftRightBalance100>(-1))
  , subSport(static_cast<SubSport>(-1))
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
  , activeTime(0xFFFFFFFF)
  , wktStepIndex(static_cast<MessageIndex>(-1))
  , sportEvent(static_cast<SportEvent>(-1))
  , avgLeftTorqueEffectiveness(0xFF)
  , avgRightTorqueEffectiveness(0xFF)
  , avgLeftPedalSmoothness(0xFF)
  , avgRightPedalSmoothness(0xFF)
  , avgCombinedPedalSmoothness(0xFF)
  , status(static_cast<SegmentLapStatus>(-1))
  , avgFractionalCadence(0xFF)
  , maxFractionalCadence(0xFF)
  , totalFractionalCycles(0xFF)
  , frontGearShiftCount(0xFFFF)
  , rearGearShiftCount(0xFFFF)
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
  , manufacturer(static_cast<Manufacturer>(-1))
  , totalGrit(static_cast<float>(-1))
  , totalFlow(static_cast<float>(-1))
  , avgGrit(static_cast<float>(-1))
  , avgFlow(static_cast<float>(-1))
  , totalFractionalAscent(0xFF)
  , totalFractionalDescent(0xFF)
{
    globalMessageNumber = MesgNum::SegmentLap;
}

SegmentLapMessagePrivate::~SegmentLapMessagePrivate()
{

}

/// @todo Generate implementation.
bool SegmentLapMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
