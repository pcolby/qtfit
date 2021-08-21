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
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 253: // See Profile.xlsx::Messages:segment_lap.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:segment_lap.event
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.event has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.event size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->event = static_cast<Event>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:segment_lap.eventType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.eventType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.eventType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->eventType = static_cast<EventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:segment_lap.startTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.startTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.startTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->startTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:segment_lap.startPositionLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.startPositionLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.startPositionLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->startPositionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:segment_lap.startPositionLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.startPositionLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.startPositionLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->startPositionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:segment_lap.endPositionLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.endPositionLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.endPositionLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->endPositionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:segment_lap.endPositionLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.endPositionLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.endPositionLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->endPositionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:segment_lap.totalElapsedTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalElapsedTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.totalElapsedTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalElapsedTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 8: // See Profile.xlsx::Messages:segment_lap.totalTimerTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalTimerTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.totalTimerTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalTimerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 9: // See Profile.xlsx::Messages:segment_lap.totalDistance
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalDistance has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.totalDistance size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalDistance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:segment_lap.totalCycles
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalCycles has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.totalCycles size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalCycles = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 11: // See Profile.xlsx::Messages:segment_lap.totalCalories
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalCalories has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.totalCalories size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->totalCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 12: // See Profile.xlsx::Messages:segment_lap.totalFatCalories
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalFatCalories has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.totalFatCalories size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->totalFatCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 13: // See Profile.xlsx::Messages:segment_lap.avgSpeed
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgSpeed has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.avgSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 14: // See Profile.xlsx::Messages:segment_lap.maxSpeed
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxSpeed has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.maxSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 15: // See Profile.xlsx::Messages:segment_lap.avgHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 16: // See Profile.xlsx::Messages:segment_lap.maxHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.maxHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->maxHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:segment_lap.avgCadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgCadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgCadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgCadence = static_cast<quint8>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:segment_lap.maxCadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxCadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.maxCadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->maxCadence = static_cast<quint8>(data.at(0));
        break;
    case 19: // See Profile.xlsx::Messages:segment_lap.avgPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.avgPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 20: // See Profile.xlsx::Messages:segment_lap.maxPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.maxPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 21: // See Profile.xlsx::Messages:segment_lap.totalAscent
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalAscent has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.totalAscent size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->totalAscent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 22: // See Profile.xlsx::Messages:segment_lap.totalDescent
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalDescent has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.totalDescent size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->totalDescent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 23: // See Profile.xlsx::Messages:segment_lap.sport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.sport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.sport size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 24: // See Profile.xlsx::Messages:segment_lap.eventGroup
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.eventGroup has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.eventGroup size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->eventGroup = static_cast<quint8>(data.at(0));
        break;
    case 25: // See Profile.xlsx::Messages:segment_lap.necLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.necLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.necLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->necLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 26: // See Profile.xlsx::Messages:segment_lap.necLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.necLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.necLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->necLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 27: // See Profile.xlsx::Messages:segment_lap.swcLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.swcLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.swcLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->swcLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 28: // See Profile.xlsx::Messages:segment_lap.swcLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.swcLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.swcLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->swcLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 29: // See Profile.xlsx::Messages:segment_lap.name
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.name has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.name size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->name = QString::fromUtf8(data);
        break;
    case 30: // See Profile.xlsx::Messages:segment_lap.normalizedPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.normalizedPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.normalizedPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->normalizedPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 31: // See Profile.xlsx::Messages:segment_lap.leftRightBalance
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.leftRightBalance has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.leftRightBalance size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->leftRightBalance = static_cast<LeftRightBalance100>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 32: // See Profile.xlsx::Messages:segment_lap.subSport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.subSport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.subSport size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 33: // See Profile.xlsx::Messages:segment_lap.totalWork
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalWork has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.totalWork size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalWork = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 34: // See Profile.xlsx::Messages:segment_lap.avgAltitude
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgAltitude has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.avgAltitude size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 35: // See Profile.xlsx::Messages:segment_lap.maxAltitude
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxAltitude has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.maxAltitude size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 36: // See Profile.xlsx::Messages:segment_lap.gpsAccuracy
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.gpsAccuracy has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.gpsAccuracy size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->gpsAccuracy = static_cast<quint8>(data.at(0));
        break;
    case 37: // See Profile.xlsx::Messages:segment_lap.avgGrade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgGrade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.avgGrade size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 38: // See Profile.xlsx::Messages:segment_lap.avgPosGrade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgPosGrade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.avgPosGrade size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgPosGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 39: // See Profile.xlsx::Messages:segment_lap.avgNegGrade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgNegGrade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.avgNegGrade size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgNegGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 40: // See Profile.xlsx::Messages:segment_lap.maxPosGrade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxPosGrade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.maxPosGrade size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxPosGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 41: // See Profile.xlsx::Messages:segment_lap.maxNegGrade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxNegGrade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.maxNegGrade size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxNegGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 42: // See Profile.xlsx::Messages:segment_lap.avgTemperature
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgTemperature has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgTemperature size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgTemperature = static_cast<qint8>(data.at(0));
        break;
    case 43: // See Profile.xlsx::Messages:segment_lap.maxTemperature
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxTemperature has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.maxTemperature size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->maxTemperature = static_cast<qint8>(data.at(0));
        break;
    case 44: // See Profile.xlsx::Messages:segment_lap.totalMovingTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalMovingTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.totalMovingTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalMovingTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 45: // See Profile.xlsx::Messages:segment_lap.avgPosVerticalSpeed
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgPosVerticalSpeed has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.avgPosVerticalSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgPosVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 46: // See Profile.xlsx::Messages:segment_lap.avgNegVerticalSpeed
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgNegVerticalSpeed has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.avgNegVerticalSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgNegVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 47: // See Profile.xlsx::Messages:segment_lap.maxPosVerticalSpeed
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxPosVerticalSpeed has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.maxPosVerticalSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxPosVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 48: // See Profile.xlsx::Messages:segment_lap.maxNegVerticalSpeed
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxNegVerticalSpeed has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.maxNegVerticalSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxNegVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 49: // See Profile.xlsx::Messages:segment_lap.timeInHrZone
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.timeInHrZone has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.timeInHrZone size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeInHrZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 50: // See Profile.xlsx::Messages:segment_lap.timeInSpeedZone
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.timeInSpeedZone has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.timeInSpeedZone size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeInSpeedZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 51: // See Profile.xlsx::Messages:segment_lap.timeInCadenceZone
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.timeInCadenceZone has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.timeInCadenceZone size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeInCadenceZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 52: // See Profile.xlsx::Messages:segment_lap.timeInPowerZone
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.timeInPowerZone has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.timeInPowerZone size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeInPowerZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 53: // See Profile.xlsx::Messages:segment_lap.repetitionNum
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.repetitionNum has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.repetitionNum size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->repetitionNum = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 54: // See Profile.xlsx::Messages:segment_lap.minAltitude
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.minAltitude has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.minAltitude size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->minAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 55: // See Profile.xlsx::Messages:segment_lap.minHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.minHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.minHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->minHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 56: // See Profile.xlsx::Messages:segment_lap.activeTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.activeTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.activeTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->activeTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 57: // See Profile.xlsx::Messages:segment_lap.wktStepIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.wktStepIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.wktStepIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->wktStepIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 58: // See Profile.xlsx::Messages:segment_lap.sportEvent
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.sportEvent has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.sportEvent size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->sportEvent = static_cast<SportEvent>(data.at(0));
        break;
    case 59: // See Profile.xlsx::Messages:segment_lap.avgLeftTorqueEffectiveness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgLeftTorqueEffectiveness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgLeftTorqueEffectiveness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgLeftTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 60: // See Profile.xlsx::Messages:segment_lap.avgRightTorqueEffectiveness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgRightTorqueEffectiveness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgRightTorqueEffectiveness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgRightTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 61: // See Profile.xlsx::Messages:segment_lap.avgLeftPedalSmoothness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgLeftPedalSmoothness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgLeftPedalSmoothness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgLeftPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 62: // See Profile.xlsx::Messages:segment_lap.avgRightPedalSmoothness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgRightPedalSmoothness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgRightPedalSmoothness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgRightPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 63: // See Profile.xlsx::Messages:segment_lap.avgCombinedPedalSmoothness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgCombinedPedalSmoothness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgCombinedPedalSmoothness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgCombinedPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 64: // See Profile.xlsx::Messages:segment_lap.status
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.status has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.status size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->status = static_cast<SegmentLapStatus>(data.at(0));
        break;
    case 65: // See Profile.xlsx::Messages:segment_lap.uuid
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.uuid has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.uuid size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->uuid = QString::fromUtf8(data);
        break;
    case 66: // See Profile.xlsx::Messages:segment_lap.avgFractionalCadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgFractionalCadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgFractionalCadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgFractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 67: // See Profile.xlsx::Messages:segment_lap.maxFractionalCadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxFractionalCadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.maxFractionalCadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->maxFractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 68: // See Profile.xlsx::Messages:segment_lap.totalFractionalCycles
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalFractionalCycles has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.totalFractionalCycles size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->totalFractionalCycles = static_cast<quint8>(data.at(0));
        break;
    case 69: // See Profile.xlsx::Messages:segment_lap.frontGearShiftCount
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.frontGearShiftCount has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.frontGearShiftCount size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->frontGearShiftCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 70: // See Profile.xlsx::Messages:segment_lap.rearGearShiftCount
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.rearGearShiftCount has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.rearGearShiftCount size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->rearGearShiftCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 71: // See Profile.xlsx::Messages:segment_lap.timeStanding
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.timeStanding has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.timeStanding size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timeStanding = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 72: // See Profile.xlsx::Messages:segment_lap.standCount
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.standCount has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.standCount size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->standCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 73: // See Profile.xlsx::Messages:segment_lap.avgLeftPco
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgLeftPco has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgLeftPco size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgLeftPco = static_cast<qint8>(data.at(0));
        break;
    case 74: // See Profile.xlsx::Messages:segment_lap.avgRightPco
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgRightPco has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgRightPco size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgRightPco = static_cast<qint8>(data.at(0));
        break;
    case 75: // See Profile.xlsx::Messages:segment_lap.avgLeftPowerPhase
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgLeftPowerPhase has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgLeftPowerPhase size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgLeftPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 76: // See Profile.xlsx::Messages:segment_lap.avgLeftPowerPhasePeak
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgLeftPowerPhasePeak has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgLeftPowerPhasePeak size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgLeftPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 77: // See Profile.xlsx::Messages:segment_lap.avgRightPowerPhase
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgRightPowerPhase has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgRightPowerPhase size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgRightPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 78: // See Profile.xlsx::Messages:segment_lap.avgRightPowerPhasePeak
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgRightPowerPhasePeak has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgRightPowerPhasePeak size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgRightPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 79: // See Profile.xlsx::Messages:segment_lap.avgPowerPosition
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgPowerPosition has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.avgPowerPosition size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->avgPowerPosition = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 80: // See Profile.xlsx::Messages:segment_lap.maxPowerPosition
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxPowerPosition has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.maxPowerPosition size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->maxPowerPosition = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 81: // See Profile.xlsx::Messages:segment_lap.avgCadencePosition
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgCadencePosition has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.avgCadencePosition size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->avgCadencePosition = static_cast<quint8>(data.at(0));
        break;
    case 82: // See Profile.xlsx::Messages:segment_lap.maxCadencePosition
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.maxCadencePosition has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.maxCadencePosition size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->maxCadencePosition = static_cast<quint8>(data.at(0));
        break;
    case 83: // See Profile.xlsx::Messages:segment_lap.manufacturer
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.manufacturer has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_lap.manufacturer size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 84: // See Profile.xlsx::Messages:segment_lap.totalGrit
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalGrit has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.totalGrit size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalGrit = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 85: // See Profile.xlsx::Messages:segment_lap.totalFlow
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalFlow has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.totalFlow size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->totalFlow = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 86: // See Profile.xlsx::Messages:segment_lap.avgGrit
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgGrit has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.avgGrit size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->avgGrit = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 87: // See Profile.xlsx::Messages:segment_lap.avgFlow
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.avgFlow has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_lap.avgFlow size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->avgFlow = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 89: // See Profile.xlsx::Messages:segment_lap.totalFractionalAscent
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalFractionalAscent has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.totalFractionalAscent size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->totalFractionalAscent = static_cast<quint8>(data.at(0));
        break;
    case 90: // See Profile.xlsx::Messages:segment_lap.totalFractionalDescent
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_lap.totalFractionalDescent has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_lap.totalFractionalDescent size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->totalFractionalDescent = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown segment_lap message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
