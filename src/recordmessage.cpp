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

#include "recordmessage.h"
#include "recordmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

RecordMessage::RecordMessage() : FitDataMessage(new RecordMessagePrivate(this))
{

}

DateTime RecordMessage::timestamp() const
{
    Q_D(const RecordMessage);
    return d->timestamp;
}

qint32 RecordMessage::positionLat() const
{
    Q_D(const RecordMessage);
    return d->positionLat;
}

qint32 RecordMessage::positionLong() const
{
    Q_D(const RecordMessage);
    return d->positionLong;
}

quint16 RecordMessage::altitude() const
{
    Q_D(const RecordMessage);
    return d->altitude;
}

quint8 RecordMessage::heartRate() const
{
    Q_D(const RecordMessage);
    return d->heartRate;
}

quint8 RecordMessage::cadence() const
{
    Q_D(const RecordMessage);
    return d->cadence;
}

quint32 RecordMessage::distance() const
{
    Q_D(const RecordMessage);
    return d->distance;
}

quint16 RecordMessage::speed() const
{
    Q_D(const RecordMessage);
    return d->speed;
}

quint16 RecordMessage::power() const
{
    Q_D(const RecordMessage);
    return d->power;
}

quint8 RecordMessage::compressedSpeedDistance() const
{
    Q_D(const RecordMessage);
    return d->compressedSpeedDistance;
}

qint16 RecordMessage::grade() const
{
    Q_D(const RecordMessage);
    return d->grade;
}

quint8 RecordMessage::resistance() const
{
    Q_D(const RecordMessage);
    return d->resistance;
}

qint32 RecordMessage::timeFromCourse() const
{
    Q_D(const RecordMessage);
    return d->timeFromCourse;
}

quint8 RecordMessage::cycleLength() const
{
    Q_D(const RecordMessage);
    return d->cycleLength;
}

qint8 RecordMessage::temperature() const
{
    Q_D(const RecordMessage);
    return d->temperature;
}

quint8 RecordMessage::speed1s() const
{
    Q_D(const RecordMessage);
    return d->speed1s;
}

quint8 RecordMessage::cycles() const
{
    Q_D(const RecordMessage);
    return d->cycles;
}

quint32 RecordMessage::totalCycles() const
{
    Q_D(const RecordMessage);
    return d->totalCycles;
}

quint16 RecordMessage::compressedAccumulatedPower() const
{
    Q_D(const RecordMessage);
    return d->compressedAccumulatedPower;
}

quint32 RecordMessage::accumulatedPower() const
{
    Q_D(const RecordMessage);
    return d->accumulatedPower;
}

LeftRightBalance RecordMessage::leftRightBalance() const
{
    Q_D(const RecordMessage);
    return d->leftRightBalance;
}

quint8 RecordMessage::gpsAccuracy() const
{
    Q_D(const RecordMessage);
    return d->gpsAccuracy;
}

qint16 RecordMessage::verticalSpeed() const
{
    Q_D(const RecordMessage);
    return d->verticalSpeed;
}

quint16 RecordMessage::calories() const
{
    Q_D(const RecordMessage);
    return d->calories;
}

quint16 RecordMessage::verticalOscillation() const
{
    Q_D(const RecordMessage);
    return d->verticalOscillation;
}

quint16 RecordMessage::stanceTimePercent() const
{
    Q_D(const RecordMessage);
    return d->stanceTimePercent;
}

quint16 RecordMessage::stanceTime() const
{
    Q_D(const RecordMessage);
    return d->stanceTime;
}

ActivityType RecordMessage::activityType() const
{
    Q_D(const RecordMessage);
    return d->activityType;
}

quint8 RecordMessage::leftTorqueEffectiveness() const
{
    Q_D(const RecordMessage);
    return d->leftTorqueEffectiveness;
}

quint8 RecordMessage::rightTorqueEffectiveness() const
{
    Q_D(const RecordMessage);
    return d->rightTorqueEffectiveness;
}

quint8 RecordMessage::leftPedalSmoothness() const
{
    Q_D(const RecordMessage);
    return d->leftPedalSmoothness;
}

quint8 RecordMessage::rightPedalSmoothness() const
{
    Q_D(const RecordMessage);
    return d->rightPedalSmoothness;
}

quint8 RecordMessage::combinedPedalSmoothness() const
{
    Q_D(const RecordMessage);
    return d->combinedPedalSmoothness;
}

quint8 RecordMessage::time128() const
{
    Q_D(const RecordMessage);
    return d->time128;
}

StrokeType RecordMessage::strokeType() const
{
    Q_D(const RecordMessage);
    return d->strokeType;
}

quint8 RecordMessage::zone() const
{
    Q_D(const RecordMessage);
    return d->zone;
}

quint16 RecordMessage::ballSpeed() const
{
    Q_D(const RecordMessage);
    return d->ballSpeed;
}

quint16 RecordMessage::cadence256() const
{
    Q_D(const RecordMessage);
    return d->cadence256;
}

quint8 RecordMessage::fractionalCadence() const
{
    Q_D(const RecordMessage);
    return d->fractionalCadence;
}

quint16 RecordMessage::totalHemoglobinConc() const
{
    Q_D(const RecordMessage);
    return d->totalHemoglobinConc;
}

quint16 RecordMessage::totalHemoglobinConcMin() const
{
    Q_D(const RecordMessage);
    return d->totalHemoglobinConcMin;
}

quint16 RecordMessage::totalHemoglobinConcMax() const
{
    Q_D(const RecordMessage);
    return d->totalHemoglobinConcMax;
}

quint16 RecordMessage::saturatedHemoglobinPercent() const
{
    Q_D(const RecordMessage);
    return d->saturatedHemoglobinPercent;
}

quint16 RecordMessage::saturatedHemoglobinPercentMin() const
{
    Q_D(const RecordMessage);
    return d->saturatedHemoglobinPercentMin;
}

quint16 RecordMessage::saturatedHemoglobinPercentMax() const
{
    Q_D(const RecordMessage);
    return d->saturatedHemoglobinPercentMax;
}

DeviceIndex RecordMessage::deviceIndex() const
{
    Q_D(const RecordMessage);
    return d->deviceIndex;
}

qint8 RecordMessage::leftPco() const
{
    Q_D(const RecordMessage);
    return d->leftPco;
}

qint8 RecordMessage::rightPco() const
{
    Q_D(const RecordMessage);
    return d->rightPco;
}

quint8 RecordMessage::leftPowerPhase() const
{
    Q_D(const RecordMessage);
    return d->leftPowerPhase;
}

quint8 RecordMessage::leftPowerPhasePeak() const
{
    Q_D(const RecordMessage);
    return d->leftPowerPhasePeak;
}

quint8 RecordMessage::rightPowerPhase() const
{
    Q_D(const RecordMessage);
    return d->rightPowerPhase;
}

quint8 RecordMessage::rightPowerPhasePeak() const
{
    Q_D(const RecordMessage);
    return d->rightPowerPhasePeak;
}

quint32 RecordMessage::enhancedSpeed() const
{
    Q_D(const RecordMessage);
    return d->enhancedSpeed;
}

quint32 RecordMessage::enhancedAltitude() const
{
    Q_D(const RecordMessage);
    return d->enhancedAltitude;
}

quint8 RecordMessage::batterySoc() const
{
    Q_D(const RecordMessage);
    return d->batterySoc;
}

quint16 RecordMessage::motorPower() const
{
    Q_D(const RecordMessage);
    return d->motorPower;
}

quint16 RecordMessage::verticalRatio() const
{
    Q_D(const RecordMessage);
    return d->verticalRatio;
}

quint16 RecordMessage::stanceTimeBalance() const
{
    Q_D(const RecordMessage);
    return d->stanceTimeBalance;
}

quint16 RecordMessage::stepLength() const
{
    Q_D(const RecordMessage);
    return d->stepLength;
}

quint32 RecordMessage::absolutePressure() const
{
    Q_D(const RecordMessage);
    return d->absolutePressure;
}

quint32 RecordMessage::depth() const
{
    Q_D(const RecordMessage);
    return d->depth;
}

quint32 RecordMessage::nextStopDepth() const
{
    Q_D(const RecordMessage);
    return d->nextStopDepth;
}

quint32 RecordMessage::nextStopTime() const
{
    Q_D(const RecordMessage);
    return d->nextStopTime;
}

quint32 RecordMessage::timeToSurface() const
{
    Q_D(const RecordMessage);
    return d->timeToSurface;
}

quint32 RecordMessage::ndlTime() const
{
    Q_D(const RecordMessage);
    return d->ndlTime;
}

quint8 RecordMessage::cnsLoad() const
{
    Q_D(const RecordMessage);
    return d->cnsLoad;
}

quint16 RecordMessage::n2Load() const
{
    Q_D(const RecordMessage);
    return d->n2Load;
}

float RecordMessage::grit() const
{
    Q_D(const RecordMessage);
    return d->grit;
}

float RecordMessage::flow() const
{
    Q_D(const RecordMessage);
    return d->flow;
}

quint16 RecordMessage::ebikeTravelRange() const
{
    Q_D(const RecordMessage);
    return d->ebikeTravelRange;
}

quint8 RecordMessage::ebikeBatteryLevel() const
{
    Q_D(const RecordMessage);
    return d->ebikeBatteryLevel;
}

quint8 RecordMessage::ebikeAssistMode() const
{
    Q_D(const RecordMessage);
    return d->ebikeAssistMode;
}

quint8 RecordMessage::ebikeAssistLevelPercent() const
{
    Q_D(const RecordMessage);
    return d->ebikeAssistLevelPercent;
}

quint16 RecordMessage::coreTemperature() const
{
    Q_D(const RecordMessage);
    return d->coreTemperature;
}

void RecordMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(RecordMessage);
    d->timestamp = timestamp;
}
void RecordMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(RecordMessage);
    d->positionLat = positionLat;
}
void RecordMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(RecordMessage);
    d->positionLong = positionLong;
}
void RecordMessage::setAltitude(const quint16 altitude)
{
    Q_D(RecordMessage);
    d->altitude = altitude;
}
void RecordMessage::setHeartRate(const quint8 heartRate)
{
    Q_D(RecordMessage);
    d->heartRate = heartRate;
}
void RecordMessage::setCadence(const quint8 cadence)
{
    Q_D(RecordMessage);
    d->cadence = cadence;
}
void RecordMessage::setDistance(const quint32 distance)
{
    Q_D(RecordMessage);
    d->distance = distance;
}
void RecordMessage::setSpeed(const quint16 speed)
{
    Q_D(RecordMessage);
    d->speed = speed;
}
void RecordMessage::setPower(const quint16 power)
{
    Q_D(RecordMessage);
    d->power = power;
}
void RecordMessage::setCompressedSpeedDistance(const quint8 compressedSpeedDistance)
{
    Q_D(RecordMessage);
    d->compressedSpeedDistance = compressedSpeedDistance;
}
void RecordMessage::setGrade(const qint16 grade)
{
    Q_D(RecordMessage);
    d->grade = grade;
}
void RecordMessage::setResistance(const quint8 resistance)
{
    Q_D(RecordMessage);
    d->resistance = resistance;
}
void RecordMessage::setTimeFromCourse(const qint32 timeFromCourse)
{
    Q_D(RecordMessage);
    d->timeFromCourse = timeFromCourse;
}
void RecordMessage::setCycleLength(const quint8 cycleLength)
{
    Q_D(RecordMessage);
    d->cycleLength = cycleLength;
}
void RecordMessage::setTemperature(const qint8 temperature)
{
    Q_D(RecordMessage);
    d->temperature = temperature;
}
void RecordMessage::setSpeed1s(const quint8 speed1s)
{
    Q_D(RecordMessage);
    d->speed1s = speed1s;
}
void RecordMessage::setCycles(const quint8 cycles)
{
    Q_D(RecordMessage);
    d->cycles = cycles;
}
void RecordMessage::setTotalCycles(const quint32 totalCycles)
{
    Q_D(RecordMessage);
    d->totalCycles = totalCycles;
}
void RecordMessage::setCompressedAccumulatedPower(const quint16 compressedAccumulatedPower)
{
    Q_D(RecordMessage);
    d->compressedAccumulatedPower = compressedAccumulatedPower;
}
void RecordMessage::setAccumulatedPower(const quint32 accumulatedPower)
{
    Q_D(RecordMessage);
    d->accumulatedPower = accumulatedPower;
}
void RecordMessage::setLeftRightBalance(const LeftRightBalance leftRightBalance)
{
    Q_D(RecordMessage);
    d->leftRightBalance = leftRightBalance;
}
void RecordMessage::setGpsAccuracy(const quint8 gpsAccuracy)
{
    Q_D(RecordMessage);
    d->gpsAccuracy = gpsAccuracy;
}
void RecordMessage::setVerticalSpeed(const qint16 verticalSpeed)
{
    Q_D(RecordMessage);
    d->verticalSpeed = verticalSpeed;
}
void RecordMessage::setCalories(const quint16 calories)
{
    Q_D(RecordMessage);
    d->calories = calories;
}
void RecordMessage::setVerticalOscillation(const quint16 verticalOscillation)
{
    Q_D(RecordMessage);
    d->verticalOscillation = verticalOscillation;
}
void RecordMessage::setStanceTimePercent(const quint16 stanceTimePercent)
{
    Q_D(RecordMessage);
    d->stanceTimePercent = stanceTimePercent;
}
void RecordMessage::setStanceTime(const quint16 stanceTime)
{
    Q_D(RecordMessage);
    d->stanceTime = stanceTime;
}
void RecordMessage::setActivityType(const ActivityType activityType)
{
    Q_D(RecordMessage);
    d->activityType = activityType;
}
void RecordMessage::setLeftTorqueEffectiveness(const quint8 leftTorqueEffectiveness)
{
    Q_D(RecordMessage);
    d->leftTorqueEffectiveness = leftTorqueEffectiveness;
}
void RecordMessage::setRightTorqueEffectiveness(const quint8 rightTorqueEffectiveness)
{
    Q_D(RecordMessage);
    d->rightTorqueEffectiveness = rightTorqueEffectiveness;
}
void RecordMessage::setLeftPedalSmoothness(const quint8 leftPedalSmoothness)
{
    Q_D(RecordMessage);
    d->leftPedalSmoothness = leftPedalSmoothness;
}
void RecordMessage::setRightPedalSmoothness(const quint8 rightPedalSmoothness)
{
    Q_D(RecordMessage);
    d->rightPedalSmoothness = rightPedalSmoothness;
}
void RecordMessage::setCombinedPedalSmoothness(const quint8 combinedPedalSmoothness)
{
    Q_D(RecordMessage);
    d->combinedPedalSmoothness = combinedPedalSmoothness;
}
void RecordMessage::setTime128(const quint8 time128)
{
    Q_D(RecordMessage);
    d->time128 = time128;
}
void RecordMessage::setStrokeType(const StrokeType strokeType)
{
    Q_D(RecordMessage);
    d->strokeType = strokeType;
}
void RecordMessage::setZone(const quint8 zone)
{
    Q_D(RecordMessage);
    d->zone = zone;
}
void RecordMessage::setBallSpeed(const quint16 ballSpeed)
{
    Q_D(RecordMessage);
    d->ballSpeed = ballSpeed;
}
void RecordMessage::setCadence256(const quint16 cadence256)
{
    Q_D(RecordMessage);
    d->cadence256 = cadence256;
}
void RecordMessage::setFractionalCadence(const quint8 fractionalCadence)
{
    Q_D(RecordMessage);
    d->fractionalCadence = fractionalCadence;
}
void RecordMessage::setTotalHemoglobinConc(const quint16 totalHemoglobinConc)
{
    Q_D(RecordMessage);
    d->totalHemoglobinConc = totalHemoglobinConc;
}
void RecordMessage::setTotalHemoglobinConcMin(const quint16 totalHemoglobinConcMin)
{
    Q_D(RecordMessage);
    d->totalHemoglobinConcMin = totalHemoglobinConcMin;
}
void RecordMessage::setTotalHemoglobinConcMax(const quint16 totalHemoglobinConcMax)
{
    Q_D(RecordMessage);
    d->totalHemoglobinConcMax = totalHemoglobinConcMax;
}
void RecordMessage::setSaturatedHemoglobinPercent(const quint16 saturatedHemoglobinPercent)
{
    Q_D(RecordMessage);
    d->saturatedHemoglobinPercent = saturatedHemoglobinPercent;
}
void RecordMessage::setSaturatedHemoglobinPercentMin(const quint16 saturatedHemoglobinPercentMin)
{
    Q_D(RecordMessage);
    d->saturatedHemoglobinPercentMin = saturatedHemoglobinPercentMin;
}
void RecordMessage::setSaturatedHemoglobinPercentMax(const quint16 saturatedHemoglobinPercentMax)
{
    Q_D(RecordMessage);
    d->saturatedHemoglobinPercentMax = saturatedHemoglobinPercentMax;
}
void RecordMessage::setDeviceIndex(const DeviceIndex deviceIndex)
{
    Q_D(RecordMessage);
    d->deviceIndex = deviceIndex;
}
void RecordMessage::setLeftPco(const qint8 leftPco)
{
    Q_D(RecordMessage);
    d->leftPco = leftPco;
}
void RecordMessage::setRightPco(const qint8 rightPco)
{
    Q_D(RecordMessage);
    d->rightPco = rightPco;
}
void RecordMessage::setLeftPowerPhase(const quint8 leftPowerPhase)
{
    Q_D(RecordMessage);
    d->leftPowerPhase = leftPowerPhase;
}
void RecordMessage::setLeftPowerPhasePeak(const quint8 leftPowerPhasePeak)
{
    Q_D(RecordMessage);
    d->leftPowerPhasePeak = leftPowerPhasePeak;
}
void RecordMessage::setRightPowerPhase(const quint8 rightPowerPhase)
{
    Q_D(RecordMessage);
    d->rightPowerPhase = rightPowerPhase;
}
void RecordMessage::setRightPowerPhasePeak(const quint8 rightPowerPhasePeak)
{
    Q_D(RecordMessage);
    d->rightPowerPhasePeak = rightPowerPhasePeak;
}
void RecordMessage::setEnhancedSpeed(const quint32 enhancedSpeed)
{
    Q_D(RecordMessage);
    d->enhancedSpeed = enhancedSpeed;
}
void RecordMessage::setEnhancedAltitude(const quint32 enhancedAltitude)
{
    Q_D(RecordMessage);
    d->enhancedAltitude = enhancedAltitude;
}
void RecordMessage::setBatterySoc(const quint8 batterySoc)
{
    Q_D(RecordMessage);
    d->batterySoc = batterySoc;
}
void RecordMessage::setMotorPower(const quint16 motorPower)
{
    Q_D(RecordMessage);
    d->motorPower = motorPower;
}
void RecordMessage::setVerticalRatio(const quint16 verticalRatio)
{
    Q_D(RecordMessage);
    d->verticalRatio = verticalRatio;
}
void RecordMessage::setStanceTimeBalance(const quint16 stanceTimeBalance)
{
    Q_D(RecordMessage);
    d->stanceTimeBalance = stanceTimeBalance;
}
void RecordMessage::setStepLength(const quint16 stepLength)
{
    Q_D(RecordMessage);
    d->stepLength = stepLength;
}
void RecordMessage::setAbsolutePressure(const quint32 absolutePressure)
{
    Q_D(RecordMessage);
    d->absolutePressure = absolutePressure;
}
void RecordMessage::setDepth(const quint32 depth)
{
    Q_D(RecordMessage);
    d->depth = depth;
}
void RecordMessage::setNextStopDepth(const quint32 nextStopDepth)
{
    Q_D(RecordMessage);
    d->nextStopDepth = nextStopDepth;
}
void RecordMessage::setNextStopTime(const quint32 nextStopTime)
{
    Q_D(RecordMessage);
    d->nextStopTime = nextStopTime;
}
void RecordMessage::setTimeToSurface(const quint32 timeToSurface)
{
    Q_D(RecordMessage);
    d->timeToSurface = timeToSurface;
}
void RecordMessage::setNdlTime(const quint32 ndlTime)
{
    Q_D(RecordMessage);
    d->ndlTime = ndlTime;
}
void RecordMessage::setCnsLoad(const quint8 cnsLoad)
{
    Q_D(RecordMessage);
    d->cnsLoad = cnsLoad;
}
void RecordMessage::setN2Load(const quint16 n2Load)
{
    Q_D(RecordMessage);
    d->n2Load = n2Load;
}
void RecordMessage::setGrit(const float grit)
{
    Q_D(RecordMessage);
    d->grit = grit;
}
void RecordMessage::setFlow(const float flow)
{
    Q_D(RecordMessage);
    d->flow = flow;
}
void RecordMessage::setEbikeTravelRange(const quint16 ebikeTravelRange)
{
    Q_D(RecordMessage);
    d->ebikeTravelRange = ebikeTravelRange;
}
void RecordMessage::setEbikeBatteryLevel(const quint8 ebikeBatteryLevel)
{
    Q_D(RecordMessage);
    d->ebikeBatteryLevel = ebikeBatteryLevel;
}
void RecordMessage::setEbikeAssistMode(const quint8 ebikeAssistMode)
{
    Q_D(RecordMessage);
    d->ebikeAssistMode = ebikeAssistMode;
}
void RecordMessage::setEbikeAssistLevelPercent(const quint8 ebikeAssistLevelPercent)
{
    Q_D(RecordMessage);
    d->ebikeAssistLevelPercent = ebikeAssistLevelPercent;
}
void RecordMessage::setCoreTemperature(const quint16 coreTemperature)
{
    Q_D(RecordMessage);
    d->coreTemperature = coreTemperature;
}

RecordMessagePrivate::RecordMessagePrivate(RecordMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , positionLat(0x7FFFFFFF)
  , positionLong(0x7FFFFFFF)
  , altitude(0xFFFF)
  , heartRate(0xFF)
  , cadence(0xFF)
  , distance(0xFFFFFFFF)
  , speed(0xFFFF)
  , power(0xFFFF)
  , compressedSpeedDistance(0xFF)
  , grade(0x7FFF)
  , resistance(0xFF)
  , timeFromCourse(0x7FFFFFFF)
  , cycleLength(0xFF)
  , temperature(0x7F)
  , speed1s(0xFF)
  , cycles(0xFF)
  , totalCycles(0xFFFFFFFF)
  , compressedAccumulatedPower(0xFFFF)
  , accumulatedPower(0xFFFFFFFF)
  , leftRightBalance(static_cast<LeftRightBalance>(-1))
  , gpsAccuracy(0xFF)
  , verticalSpeed(0x7FFF)
  , calories(0xFFFF)
  , verticalOscillation(0xFFFF)
  , stanceTimePercent(0xFFFF)
  , stanceTime(0xFFFF)
  , activityType(static_cast<ActivityType>(-1))
  , leftTorqueEffectiveness(0xFF)
  , rightTorqueEffectiveness(0xFF)
  , leftPedalSmoothness(0xFF)
  , rightPedalSmoothness(0xFF)
  , combinedPedalSmoothness(0xFF)
  , time128(0xFF)
  , strokeType(static_cast<StrokeType>(-1))
  , zone(0xFF)
  , ballSpeed(0xFFFF)
  , cadence256(0xFFFF)
  , fractionalCadence(0xFF)
  , totalHemoglobinConc(0xFFFF)
  , totalHemoglobinConcMin(0xFFFF)
  , totalHemoglobinConcMax(0xFFFF)
  , saturatedHemoglobinPercent(0xFFFF)
  , saturatedHemoglobinPercentMin(0xFFFF)
  , saturatedHemoglobinPercentMax(0xFFFF)
  , deviceIndex(static_cast<DeviceIndex>(-1))
  , leftPco(0x7F)
  , rightPco(0x7F)
  , leftPowerPhase(0xFF)
  , leftPowerPhasePeak(0xFF)
  , rightPowerPhase(0xFF)
  , rightPowerPhasePeak(0xFF)
  , enhancedSpeed(0xFFFFFFFF)
  , enhancedAltitude(0xFFFFFFFF)
  , batterySoc(0xFF)
  , motorPower(0xFFFF)
  , verticalRatio(0xFFFF)
  , stanceTimeBalance(0xFFFF)
  , stepLength(0xFFFF)
  , absolutePressure(0xFFFFFFFF)
  , depth(0xFFFFFFFF)
  , nextStopDepth(0xFFFFFFFF)
  , nextStopTime(0xFFFFFFFF)
  , timeToSurface(0xFFFFFFFF)
  , ndlTime(0xFFFFFFFF)
  , cnsLoad(0xFF)
  , n2Load(0xFFFF)
  , grit(static_cast<float>(-1))
  , flow(static_cast<float>(-1))
  , ebikeTravelRange(0xFFFF)
  , ebikeBatteryLevel(0xFF)
  , ebikeAssistMode(0xFF)
  , ebikeAssistLevelPercent(0xFF)
  , coreTemperature(0xFFFF)
{
    globalMessageNumber = MesgNum::Record;
}

RecordMessagePrivate::~RecordMessagePrivate()
{

}

bool RecordMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:record.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:record.positionLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.positionLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.positionLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        positionLat = static_cast<qint32>(bigEndian ? qFromBigEndian<qint32>(data) : qFromLittleEndian<qint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:record.positionLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.positionLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.positionLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        positionLong = static_cast<qint32>(bigEndian ? qFromBigEndian<qint32>(data) : qFromLittleEndian<qint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:record.altitude
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.altitude has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.altitude size is" << data.size() << "but should be" << 2;
            return false;
        }
        altitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:record.heartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.heartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.heartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        heartRate = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:record.cadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.cadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.cadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        cadence = static_cast<quint8>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:record.distance
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.distance has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.distance size is" << data.size() << "but should be" << 4;
            return false;
        }
        distance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:record.speed
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.speed has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.speed size is" << data.size() << "but should be" << 2;
            return false;
        }
        speed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 7: // See Profile.xlsx::Messages:record.power
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.power has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.power size is" << data.size() << "but should be" << 2;
            return false;
        }
        power = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:record.compressedSpeedDistance
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.compressedSpeedDistance has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.compressedSpeedDistance size is" << data.size() << "but should be" << 1;
            return false;
        }
        compressedSpeedDistance = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:record.grade
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.grade has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.grade size is" << data.size() << "but should be" << 2;
            return false;
        }
        grade = static_cast<qint16>(bigEndian ? qFromBigEndian<qint16>(data) : qFromLittleEndian<qint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:record.resistance
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.resistance has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.resistance size is" << data.size() << "but should be" << 1;
            return false;
        }
        resistance = static_cast<quint8>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:record.timeFromCourse
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.timeFromCourse has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.timeFromCourse size is" << data.size() << "but should be" << 4;
            return false;
        }
        timeFromCourse = static_cast<qint32>(bigEndian ? qFromBigEndian<qint32>(data) : qFromLittleEndian<qint32>(data));
        break;
    case 12: // See Profile.xlsx::Messages:record.cycleLength
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.cycleLength has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.cycleLength size is" << data.size() << "but should be" << 1;
            return false;
        }
        cycleLength = static_cast<quint8>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:record.temperature
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.temperature has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.temperature size is" << data.size() << "but should be" << 1;
            return false;
        }
        temperature = static_cast<qint8>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:record.speed1s
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.speed1s has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.speed1s size is" << data.size() << "but should be" << 1;
            return false;
        }
        speed1s = static_cast<quint8>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:record.cycles
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.cycles has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.cycles size is" << data.size() << "but should be" << 1;
            return false;
        }
        cycles = static_cast<quint8>(data.at(0));
        break;
    case 19: // See Profile.xlsx::Messages:record.totalCycles
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.totalCycles has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.totalCycles size is" << data.size() << "but should be" << 4;
            return false;
        }
        totalCycles = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 28: // See Profile.xlsx::Messages:record.compressedAccumulatedPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.compressedAccumulatedPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.compressedAccumulatedPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        compressedAccumulatedPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 29: // See Profile.xlsx::Messages:record.accumulatedPower
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.accumulatedPower has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.accumulatedPower size is" << data.size() << "but should be" << 4;
            return false;
        }
        accumulatedPower = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 30: // See Profile.xlsx::Messages:record.leftRightBalance
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.leftRightBalance has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.leftRightBalance size is" << data.size() << "but should be" << 1;
            return false;
        }
        leftRightBalance = static_cast<LeftRightBalance>(data.at(0));
        break;
    case 31: // See Profile.xlsx::Messages:record.gpsAccuracy
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.gpsAccuracy has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.gpsAccuracy size is" << data.size() << "but should be" << 1;
            return false;
        }
        gpsAccuracy = static_cast<quint8>(data.at(0));
        break;
    case 32: // See Profile.xlsx::Messages:record.verticalSpeed
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.verticalSpeed has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.verticalSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        verticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian<qint16>(data) : qFromLittleEndian<qint16>(data));
        break;
    case 33: // See Profile.xlsx::Messages:record.calories
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.calories has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.calories size is" << data.size() << "but should be" << 2;
            return false;
        }
        calories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 39: // See Profile.xlsx::Messages:record.verticalOscillation
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.verticalOscillation has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.verticalOscillation size is" << data.size() << "but should be" << 2;
            return false;
        }
        verticalOscillation = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 40: // See Profile.xlsx::Messages:record.stanceTimePercent
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.stanceTimePercent has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.stanceTimePercent size is" << data.size() << "but should be" << 2;
            return false;
        }
        stanceTimePercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 41: // See Profile.xlsx::Messages:record.stanceTime
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.stanceTime has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.stanceTime size is" << data.size() << "but should be" << 2;
            return false;
        }
        stanceTime = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 42: // See Profile.xlsx::Messages:record.activityType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.activityType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.activityType size is" << data.size() << "but should be" << 1;
            return false;
        }
        activityType = static_cast<ActivityType>(data.at(0));
        break;
    case 43: // See Profile.xlsx::Messages:record.leftTorqueEffectiveness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.leftTorqueEffectiveness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.leftTorqueEffectiveness size is" << data.size() << "but should be" << 1;
            return false;
        }
        leftTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 44: // See Profile.xlsx::Messages:record.rightTorqueEffectiveness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.rightTorqueEffectiveness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.rightTorqueEffectiveness size is" << data.size() << "but should be" << 1;
            return false;
        }
        rightTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 45: // See Profile.xlsx::Messages:record.leftPedalSmoothness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.leftPedalSmoothness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.leftPedalSmoothness size is" << data.size() << "but should be" << 1;
            return false;
        }
        leftPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 46: // See Profile.xlsx::Messages:record.rightPedalSmoothness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.rightPedalSmoothness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.rightPedalSmoothness size is" << data.size() << "but should be" << 1;
            return false;
        }
        rightPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 47: // See Profile.xlsx::Messages:record.combinedPedalSmoothness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.combinedPedalSmoothness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.combinedPedalSmoothness size is" << data.size() << "but should be" << 1;
            return false;
        }
        combinedPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 48: // See Profile.xlsx::Messages:record.time128
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.time128 has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.time128 size is" << data.size() << "but should be" << 1;
            return false;
        }
        time128 = static_cast<quint8>(data.at(0));
        break;
    case 49: // See Profile.xlsx::Messages:record.strokeType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.strokeType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.strokeType size is" << data.size() << "but should be" << 1;
            return false;
        }
        strokeType = static_cast<StrokeType>(data.at(0));
        break;
    case 50: // See Profile.xlsx::Messages:record.zone
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.zone has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.zone size is" << data.size() << "but should be" << 1;
            return false;
        }
        zone = static_cast<quint8>(data.at(0));
        break;
    case 51: // See Profile.xlsx::Messages:record.ballSpeed
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.ballSpeed has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.ballSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        ballSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 52: // See Profile.xlsx::Messages:record.cadence256
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.cadence256 has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.cadence256 size is" << data.size() << "but should be" << 2;
            return false;
        }
        cadence256 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 53: // See Profile.xlsx::Messages:record.fractionalCadence
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.fractionalCadence has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.fractionalCadence size is" << data.size() << "but should be" << 1;
            return false;
        }
        fractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 54: // See Profile.xlsx::Messages:record.totalHemoglobinConc
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.totalHemoglobinConc has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.totalHemoglobinConc size is" << data.size() << "but should be" << 2;
            return false;
        }
        totalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 55: // See Profile.xlsx::Messages:record.totalHemoglobinConcMin
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.totalHemoglobinConcMin has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.totalHemoglobinConcMin size is" << data.size() << "but should be" << 2;
            return false;
        }
        totalHemoglobinConcMin = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 56: // See Profile.xlsx::Messages:record.totalHemoglobinConcMax
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.totalHemoglobinConcMax has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.totalHemoglobinConcMax size is" << data.size() << "but should be" << 2;
            return false;
        }
        totalHemoglobinConcMax = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 57: // See Profile.xlsx::Messages:record.saturatedHemoglobinPercent
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.saturatedHemoglobinPercent has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.saturatedHemoglobinPercent size is" << data.size() << "but should be" << 2;
            return false;
        }
        saturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 58: // See Profile.xlsx::Messages:record.saturatedHemoglobinPercentMin
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.saturatedHemoglobinPercentMin has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.saturatedHemoglobinPercentMin size is" << data.size() << "but should be" << 2;
            return false;
        }
        saturatedHemoglobinPercentMin = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 59: // See Profile.xlsx::Messages:record.saturatedHemoglobinPercentMax
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.saturatedHemoglobinPercentMax has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.saturatedHemoglobinPercentMax size is" << data.size() << "but should be" << 2;
            return false;
        }
        saturatedHemoglobinPercentMax = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 62: // See Profile.xlsx::Messages:record.deviceIndex
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.deviceIndex has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.deviceIndex size is" << data.size() << "but should be" << 1;
            return false;
        }
        deviceIndex = static_cast<DeviceIndex>(data.at(0));
        break;
    case 67: // See Profile.xlsx::Messages:record.leftPco
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.leftPco has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.leftPco size is" << data.size() << "but should be" << 1;
            return false;
        }
        leftPco = static_cast<qint8>(data.at(0));
        break;
    case 68: // See Profile.xlsx::Messages:record.rightPco
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.rightPco has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.rightPco size is" << data.size() << "but should be" << 1;
            return false;
        }
        rightPco = static_cast<qint8>(data.at(0));
        break;
    case 69: // See Profile.xlsx::Messages:record.leftPowerPhase
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.leftPowerPhase has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.leftPowerPhase size is" << data.size() << "but should be" << 1;
            return false;
        }
        leftPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 70: // See Profile.xlsx::Messages:record.leftPowerPhasePeak
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.leftPowerPhasePeak has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.leftPowerPhasePeak size is" << data.size() << "but should be" << 1;
            return false;
        }
        leftPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 71: // See Profile.xlsx::Messages:record.rightPowerPhase
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.rightPowerPhase has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.rightPowerPhase size is" << data.size() << "but should be" << 1;
            return false;
        }
        rightPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 72: // See Profile.xlsx::Messages:record.rightPowerPhasePeak
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.rightPowerPhasePeak has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.rightPowerPhasePeak size is" << data.size() << "but should be" << 1;
            return false;
        }
        rightPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 73: // See Profile.xlsx::Messages:record.enhancedSpeed
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.enhancedSpeed has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.enhancedSpeed size is" << data.size() << "but should be" << 4;
            return false;
        }
        enhancedSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 78: // See Profile.xlsx::Messages:record.enhancedAltitude
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.enhancedAltitude has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.enhancedAltitude size is" << data.size() << "but should be" << 4;
            return false;
        }
        enhancedAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 81: // See Profile.xlsx::Messages:record.batterySoc
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.batterySoc has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.batterySoc size is" << data.size() << "but should be" << 1;
            return false;
        }
        batterySoc = static_cast<quint8>(data.at(0));
        break;
    case 82: // See Profile.xlsx::Messages:record.motorPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.motorPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.motorPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        motorPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 83: // See Profile.xlsx::Messages:record.verticalRatio
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.verticalRatio has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.verticalRatio size is" << data.size() << "but should be" << 2;
            return false;
        }
        verticalRatio = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 84: // See Profile.xlsx::Messages:record.stanceTimeBalance
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.stanceTimeBalance has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.stanceTimeBalance size is" << data.size() << "but should be" << 2;
            return false;
        }
        stanceTimeBalance = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 85: // See Profile.xlsx::Messages:record.stepLength
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.stepLength has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.stepLength size is" << data.size() << "but should be" << 2;
            return false;
        }
        stepLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 91: // See Profile.xlsx::Messages:record.absolutePressure
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.absolutePressure has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.absolutePressure size is" << data.size() << "but should be" << 4;
            return false;
        }
        absolutePressure = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 92: // See Profile.xlsx::Messages:record.depth
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.depth has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.depth size is" << data.size() << "but should be" << 4;
            return false;
        }
        depth = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 93: // See Profile.xlsx::Messages:record.nextStopDepth
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.nextStopDepth has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.nextStopDepth size is" << data.size() << "but should be" << 4;
            return false;
        }
        nextStopDepth = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 94: // See Profile.xlsx::Messages:record.nextStopTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.nextStopTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.nextStopTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        nextStopTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 95: // See Profile.xlsx::Messages:record.timeToSurface
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.timeToSurface has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.timeToSurface size is" << data.size() << "but should be" << 4;
            return false;
        }
        timeToSurface = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 96: // See Profile.xlsx::Messages:record.ndlTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.ndlTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.ndlTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        ndlTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 97: // See Profile.xlsx::Messages:record.cnsLoad
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.cnsLoad has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.cnsLoad size is" << data.size() << "but should be" << 1;
            return false;
        }
        cnsLoad = static_cast<quint8>(data.at(0));
        break;
    case 98: // See Profile.xlsx::Messages:record.n2Load
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.n2Load has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.n2Load size is" << data.size() << "but should be" << 2;
            return false;
        }
        n2Load = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 114: // See Profile.xlsx::Messages:record.grit
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.grit has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.grit size is" << data.size() << "but should be" << 4;
            return false;
        }
        grit = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 115: // See Profile.xlsx::Messages:record.flow
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.flow has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "record.flow size is" << data.size() << "but should be" << 4;
            return false;
        }
        flow = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 117: // See Profile.xlsx::Messages:record.ebikeTravelRange
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.ebikeTravelRange has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.ebikeTravelRange size is" << data.size() << "but should be" << 2;
            return false;
        }
        ebikeTravelRange = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 118: // See Profile.xlsx::Messages:record.ebikeBatteryLevel
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.ebikeBatteryLevel has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.ebikeBatteryLevel size is" << data.size() << "but should be" << 1;
            return false;
        }
        ebikeBatteryLevel = static_cast<quint8>(data.at(0));
        break;
    case 119: // See Profile.xlsx::Messages:record.ebikeAssistMode
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.ebikeAssistMode has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.ebikeAssistMode size is" << data.size() << "but should be" << 1;
            return false;
        }
        ebikeAssistMode = static_cast<quint8>(data.at(0));
        break;
    case 120: // See Profile.xlsx::Messages:record.ebikeAssistLevelPercent
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.ebikeAssistLevelPercent has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "record.ebikeAssistLevelPercent size is" << data.size() << "but should be" << 1;
            return false;
        }
        ebikeAssistLevelPercent = static_cast<quint8>(data.at(0));
        break;
    case 139: // See Profile.xlsx::Messages:record.coreTemperature
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "record.coreTemperature has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "record.coreTemperature size is" << data.size() << "but should be" << 2;
            return false;
        }
        coreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown record message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
