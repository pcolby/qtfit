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

#include <QDebug>
#include <QtEndian>

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

bool SegmentLapMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:segment_lap.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 253: // See Profile.xlsx::Messages:segment_lap.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:segment_lap.event
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_lap.event")) return false;
        this->event = static_cast<Event>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:segment_lap.eventType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_lap.eventType")) return false;
        this->eventType = static_cast<EventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:segment_lap.startTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.startTime")) return false;
        this->startTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:segment_lap.startPositionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "segment_lap.startPositionLat")) return false;
        this->startPositionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:segment_lap.startPositionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "segment_lap.startPositionLong")) return false;
        this->startPositionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:segment_lap.endPositionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "segment_lap.endPositionLat")) return false;
        this->endPositionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:segment_lap.endPositionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "segment_lap.endPositionLong")) return false;
        this->endPositionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:segment_lap.totalElapsedTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.totalElapsedTime")) return false;
        this->totalElapsedTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 8: // See Profile.xlsx::Messages:segment_lap.totalTimerTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.totalTimerTime")) return false;
        this->totalTimerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 9: // See Profile.xlsx::Messages:segment_lap.totalDistance
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.totalDistance")) return false;
        this->totalDistance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:segment_lap.totalCycles
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.totalCycles")) return false;
        this->totalCycles = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 11: // See Profile.xlsx::Messages:segment_lap.totalCalories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.totalCalories")) return false;
        this->totalCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 12: // See Profile.xlsx::Messages:segment_lap.totalFatCalories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.totalFatCalories")) return false;
        this->totalFatCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 13: // See Profile.xlsx::Messages:segment_lap.avgSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.avgSpeed")) return false;
        this->avgSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 14: // See Profile.xlsx::Messages:segment_lap.maxSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.maxSpeed")) return false;
        this->maxSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 15: // See Profile.xlsx::Messages:segment_lap.avgHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgHeartRate")) return false;
        this->avgHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 16: // See Profile.xlsx::Messages:segment_lap.maxHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.maxHeartRate")) return false;
        this->maxHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:segment_lap.avgCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgCadence")) return false;
        this->avgCadence = static_cast<quint8>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:segment_lap.maxCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.maxCadence")) return false;
        this->maxCadence = static_cast<quint8>(data.at(0));
        break;
    case 19: // See Profile.xlsx::Messages:segment_lap.avgPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.avgPower")) return false;
        this->avgPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 20: // See Profile.xlsx::Messages:segment_lap.maxPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.maxPower")) return false;
        this->maxPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 21: // See Profile.xlsx::Messages:segment_lap.totalAscent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.totalAscent")) return false;
        this->totalAscent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 22: // See Profile.xlsx::Messages:segment_lap.totalDescent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.totalDescent")) return false;
        this->totalDescent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 23: // See Profile.xlsx::Messages:segment_lap.sport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_lap.sport")) return false;
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 24: // See Profile.xlsx::Messages:segment_lap.eventGroup
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.eventGroup")) return false;
        this->eventGroup = static_cast<quint8>(data.at(0));
        break;
    case 25: // See Profile.xlsx::Messages:segment_lap.necLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "segment_lap.necLat")) return false;
        this->necLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 26: // See Profile.xlsx::Messages:segment_lap.necLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "segment_lap.necLong")) return false;
        this->necLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 27: // See Profile.xlsx::Messages:segment_lap.swcLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "segment_lap.swcLat")) return false;
        this->swcLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 28: // See Profile.xlsx::Messages:segment_lap.swcLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "segment_lap.swcLong")) return false;
        this->swcLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 29: // See Profile.xlsx::Messages:segment_lap.name
        if (!verify(data, baseType, 1, FitBaseType::String, "segment_lap.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    case 30: // See Profile.xlsx::Messages:segment_lap.normalizedPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.normalizedPower")) return false;
        this->normalizedPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 31: // See Profile.xlsx::Messages:segment_lap.leftRightBalance
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.leftRightBalance")) return false;
        this->leftRightBalance = static_cast<LeftRightBalance100>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 32: // See Profile.xlsx::Messages:segment_lap.subSport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_lap.subSport")) return false;
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 33: // See Profile.xlsx::Messages:segment_lap.totalWork
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.totalWork")) return false;
        this->totalWork = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 34: // See Profile.xlsx::Messages:segment_lap.avgAltitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.avgAltitude")) return false;
        this->avgAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 35: // See Profile.xlsx::Messages:segment_lap.maxAltitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.maxAltitude")) return false;
        this->maxAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 36: // See Profile.xlsx::Messages:segment_lap.gpsAccuracy
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.gpsAccuracy")) return false;
        this->gpsAccuracy = static_cast<quint8>(data.at(0));
        break;
    case 37: // See Profile.xlsx::Messages:segment_lap.avgGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "segment_lap.avgGrade")) return false;
        this->avgGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 38: // See Profile.xlsx::Messages:segment_lap.avgPosGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "segment_lap.avgPosGrade")) return false;
        this->avgPosGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 39: // See Profile.xlsx::Messages:segment_lap.avgNegGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "segment_lap.avgNegGrade")) return false;
        this->avgNegGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 40: // See Profile.xlsx::Messages:segment_lap.maxPosGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "segment_lap.maxPosGrade")) return false;
        this->maxPosGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 41: // See Profile.xlsx::Messages:segment_lap.maxNegGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "segment_lap.maxNegGrade")) return false;
        this->maxNegGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 42: // See Profile.xlsx::Messages:segment_lap.avgTemperature
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "segment_lap.avgTemperature")) return false;
        this->avgTemperature = static_cast<qint8>(data.at(0));
        break;
    case 43: // See Profile.xlsx::Messages:segment_lap.maxTemperature
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "segment_lap.maxTemperature")) return false;
        this->maxTemperature = static_cast<qint8>(data.at(0));
        break;
    case 44: // See Profile.xlsx::Messages:segment_lap.totalMovingTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.totalMovingTime")) return false;
        this->totalMovingTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 45: // See Profile.xlsx::Messages:segment_lap.avgPosVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "segment_lap.avgPosVerticalSpeed")) return false;
        this->avgPosVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 46: // See Profile.xlsx::Messages:segment_lap.avgNegVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "segment_lap.avgNegVerticalSpeed")) return false;
        this->avgNegVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 47: // See Profile.xlsx::Messages:segment_lap.maxPosVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "segment_lap.maxPosVerticalSpeed")) return false;
        this->maxPosVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 48: // See Profile.xlsx::Messages:segment_lap.maxNegVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "segment_lap.maxNegVerticalSpeed")) return false;
        this->maxNegVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 49: // See Profile.xlsx::Messages:segment_lap.timeInHrZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.timeInHrZone")) return false;
        this->timeInHrZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 50: // See Profile.xlsx::Messages:segment_lap.timeInSpeedZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.timeInSpeedZone")) return false;
        this->timeInSpeedZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 51: // See Profile.xlsx::Messages:segment_lap.timeInCadenceZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.timeInCadenceZone")) return false;
        this->timeInCadenceZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 52: // See Profile.xlsx::Messages:segment_lap.timeInPowerZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.timeInPowerZone")) return false;
        this->timeInPowerZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 53: // See Profile.xlsx::Messages:segment_lap.repetitionNum
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.repetitionNum")) return false;
        this->repetitionNum = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 54: // See Profile.xlsx::Messages:segment_lap.minAltitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.minAltitude")) return false;
        this->minAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 55: // See Profile.xlsx::Messages:segment_lap.minHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.minHeartRate")) return false;
        this->minHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 56: // See Profile.xlsx::Messages:segment_lap.activeTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.activeTime")) return false;
        this->activeTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 57: // See Profile.xlsx::Messages:segment_lap.wktStepIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.wktStepIndex")) return false;
        this->wktStepIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 58: // See Profile.xlsx::Messages:segment_lap.sportEvent
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_lap.sportEvent")) return false;
        this->sportEvent = static_cast<SportEvent>(data.at(0));
        break;
    case 59: // See Profile.xlsx::Messages:segment_lap.avgLeftTorqueEffectiveness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgLeftTorqueEffectiveness")) return false;
        this->avgLeftTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 60: // See Profile.xlsx::Messages:segment_lap.avgRightTorqueEffectiveness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgRightTorqueEffectiveness")) return false;
        this->avgRightTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 61: // See Profile.xlsx::Messages:segment_lap.avgLeftPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgLeftPedalSmoothness")) return false;
        this->avgLeftPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 62: // See Profile.xlsx::Messages:segment_lap.avgRightPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgRightPedalSmoothness")) return false;
        this->avgRightPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 63: // See Profile.xlsx::Messages:segment_lap.avgCombinedPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgCombinedPedalSmoothness")) return false;
        this->avgCombinedPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 64: // See Profile.xlsx::Messages:segment_lap.status
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_lap.status")) return false;
        this->status = static_cast<SegmentLapStatus>(data.at(0));
        break;
    case 65: // See Profile.xlsx::Messages:segment_lap.uuid
        if (!verify(data, baseType, 1, FitBaseType::String, "segment_lap.uuid")) return false;
        this->uuid = QString::fromUtf8(data);
        break;
    case 66: // See Profile.xlsx::Messages:segment_lap.avgFractionalCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgFractionalCadence")) return false;
        this->avgFractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 67: // See Profile.xlsx::Messages:segment_lap.maxFractionalCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.maxFractionalCadence")) return false;
        this->maxFractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 68: // See Profile.xlsx::Messages:segment_lap.totalFractionalCycles
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.totalFractionalCycles")) return false;
        this->totalFractionalCycles = static_cast<quint8>(data.at(0));
        break;
    case 69: // See Profile.xlsx::Messages:segment_lap.frontGearShiftCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.frontGearShiftCount")) return false;
        this->frontGearShiftCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 70: // See Profile.xlsx::Messages:segment_lap.rearGearShiftCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.rearGearShiftCount")) return false;
        this->rearGearShiftCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 71: // See Profile.xlsx::Messages:segment_lap.timeStanding
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_lap.timeStanding")) return false;
        this->timeStanding = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 72: // See Profile.xlsx::Messages:segment_lap.standCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.standCount")) return false;
        this->standCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 73: // See Profile.xlsx::Messages:segment_lap.avgLeftPco
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "segment_lap.avgLeftPco")) return false;
        this->avgLeftPco = static_cast<qint8>(data.at(0));
        break;
    case 74: // See Profile.xlsx::Messages:segment_lap.avgRightPco
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "segment_lap.avgRightPco")) return false;
        this->avgRightPco = static_cast<qint8>(data.at(0));
        break;
    case 75: // See Profile.xlsx::Messages:segment_lap.avgLeftPowerPhase
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgLeftPowerPhase")) return false;
        this->avgLeftPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 76: // See Profile.xlsx::Messages:segment_lap.avgLeftPowerPhasePeak
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgLeftPowerPhasePeak")) return false;
        this->avgLeftPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 77: // See Profile.xlsx::Messages:segment_lap.avgRightPowerPhase
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgRightPowerPhase")) return false;
        this->avgRightPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 78: // See Profile.xlsx::Messages:segment_lap.avgRightPowerPhasePeak
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgRightPowerPhasePeak")) return false;
        this->avgRightPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 79: // See Profile.xlsx::Messages:segment_lap.avgPowerPosition
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.avgPowerPosition")) return false;
        this->avgPowerPosition = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 80: // See Profile.xlsx::Messages:segment_lap.maxPowerPosition
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.maxPowerPosition")) return false;
        this->maxPowerPosition = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 81: // See Profile.xlsx::Messages:segment_lap.avgCadencePosition
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.avgCadencePosition")) return false;
        this->avgCadencePosition = static_cast<quint8>(data.at(0));
        break;
    case 82: // See Profile.xlsx::Messages:segment_lap.maxCadencePosition
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.maxCadencePosition")) return false;
        this->maxCadencePosition = static_cast<quint8>(data.at(0));
        break;
    case 83: // See Profile.xlsx::Messages:segment_lap.manufacturer
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_lap.manufacturer")) return false;
        this->manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 84: // See Profile.xlsx::Messages:segment_lap.totalGrit
        if (!verify(data, baseType, 4, FitBaseType::Float32, "segment_lap.totalGrit")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->totalGrit) == 4, "src and dst not the same size");
            memcpy(&this->totalGrit, &localEndian, data.size());
        }
        #else
        this->totalGrit = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 85: // See Profile.xlsx::Messages:segment_lap.totalFlow
        if (!verify(data, baseType, 4, FitBaseType::Float32, "segment_lap.totalFlow")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->totalFlow) == 4, "src and dst not the same size");
            memcpy(&this->totalFlow, &localEndian, data.size());
        }
        #else
        this->totalFlow = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 86: // See Profile.xlsx::Messages:segment_lap.avgGrit
        if (!verify(data, baseType, 4, FitBaseType::Float32, "segment_lap.avgGrit")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->avgGrit) == 4, "src and dst not the same size");
            memcpy(&this->avgGrit, &localEndian, data.size());
        }
        #else
        this->avgGrit = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 87: // See Profile.xlsx::Messages:segment_lap.avgFlow
        if (!verify(data, baseType, 4, FitBaseType::Float32, "segment_lap.avgFlow")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->avgFlow) == 4, "src and dst not the same size");
            memcpy(&this->avgFlow, &localEndian, data.size());
        }
        #else
        this->avgFlow = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 89: // See Profile.xlsx::Messages:segment_lap.totalFractionalAscent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.totalFractionalAscent")) return false;
        this->totalFractionalAscent = static_cast<quint8>(data.at(0));
        break;
    case 90: // See Profile.xlsx::Messages:segment_lap.totalFractionalDescent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_lap.totalFractionalDescent")) return false;
        this->totalFractionalDescent = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown segment_lap message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
