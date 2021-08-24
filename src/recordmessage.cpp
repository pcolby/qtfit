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

/*!
 * \class RecordMessage
 *
 * The RecordMessage class represents a FIT RecordMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid RecordMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
RecordMessage::RecordMessage() : AbstractDataMessage(new RecordMessagePrivate(this))
{

}

/*!
 * Returns the RecordMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime RecordMessage::timestamp() const
{
    Q_D(const RecordMessage);
    return d->timestamp;
}

/*!
 * Returns the RecordMessage data message's \c positionLat field's current value.
 *
 * \return the \c positionLat field value.
 */
qint32 RecordMessage::positionLat() const
{
    Q_D(const RecordMessage);
    return d->positionLat;
}

/*!
 * Returns the RecordMessage data message's \c positionLong field's current value.
 *
 * \return the \c positionLong field value.
 */
qint32 RecordMessage::positionLong() const
{
    Q_D(const RecordMessage);
    return d->positionLong;
}

/*!
 * Returns the RecordMessage data message's \c altitude field's current value.
 *
 * \return the \c altitude field value.
 */
quint16 RecordMessage::altitude() const
{
    Q_D(const RecordMessage);
    return d->altitude;
}

/*!
 * Returns the RecordMessage data message's \c heartRate field's current value.
 *
 * \return the \c heartRate field value.
 */
quint8 RecordMessage::heartRate() const
{
    Q_D(const RecordMessage);
    return d->heartRate;
}

/*!
 * Returns the RecordMessage data message's \c cadence field's current value.
 *
 * \return the \c cadence field value.
 */
quint8 RecordMessage::cadence() const
{
    Q_D(const RecordMessage);
    return d->cadence;
}

/*!
 * Returns the RecordMessage data message's \c distance field's current value.
 *
 * \return the \c distance field value.
 */
quint32 RecordMessage::distance() const
{
    Q_D(const RecordMessage);
    return d->distance;
}

/*!
 * Returns the RecordMessage data message's \c speed field's current value.
 *
 * \return the \c speed field value.
 */
quint16 RecordMessage::speed() const
{
    Q_D(const RecordMessage);
    return d->speed;
}

/*!
 * Returns the RecordMessage data message's \c power field's current value.
 *
 * \return the \c power field value.
 */
quint16 RecordMessage::power() const
{
    Q_D(const RecordMessage);
    return d->power;
}

/*!
 * Returns the RecordMessage data message's \c compressedSpeedDistance field's current value.
 *
 * \return the \c compressedSpeedDistance field value.
 */
quint8 RecordMessage::compressedSpeedDistance() const
{
    Q_D(const RecordMessage);
    return d->compressedSpeedDistance;
}

/*!
 * Returns the RecordMessage data message's \c grade field's current value.
 *
 * \return the \c grade field value.
 */
qint16 RecordMessage::grade() const
{
    Q_D(const RecordMessage);
    return d->grade;
}

/*!
 * Returns the RecordMessage data message's \c resistance field's current value.
 *
 * Relative. 0 is none  254 is Max.
 *
 * \return the \c resistance field value.
 */
quint8 RecordMessage::resistance() const
{
    Q_D(const RecordMessage);
    return d->resistance;
}

/*!
 * Returns the RecordMessage data message's \c timeFromCourse field's current value.
 *
 * \return the \c timeFromCourse field value.
 */
qint32 RecordMessage::timeFromCourse() const
{
    Q_D(const RecordMessage);
    return d->timeFromCourse;
}

/*!
 * Returns the RecordMessage data message's \c cycleLength field's current value.
 *
 * \return the \c cycleLength field value.
 */
quint8 RecordMessage::cycleLength() const
{
    Q_D(const RecordMessage);
    return d->cycleLength;
}

/*!
 * Returns the RecordMessage data message's \c temperature field's current value.
 *
 * \return the \c temperature field value.
 */
qint8 RecordMessage::temperature() const
{
    Q_D(const RecordMessage);
    return d->temperature;
}

/*!
 * Returns the RecordMessage data message's \c speed1s field's current value.
 *
 * Speed at 1s intervals.  Timestamp field indicates time of last array element.
 *
 * \return the \c speed1s field value.
 */
quint8 RecordMessage::speed1s() const
{
    Q_D(const RecordMessage);
    return d->speed1s;
}

/*!
 * Returns the RecordMessage data message's \c cycles field's current value.
 *
 * \return the \c cycles field value.
 */
quint8 RecordMessage::cycles() const
{
    Q_D(const RecordMessage);
    return d->cycles;
}

/*!
 * Returns the RecordMessage data message's \c totalCycles field's current value.
 *
 * \return the \c totalCycles field value.
 */
quint32 RecordMessage::totalCycles() const
{
    Q_D(const RecordMessage);
    return d->totalCycles;
}

/*!
 * Returns the RecordMessage data message's \c compressedAccumulatedPower field's current value.
 *
 * \return the \c compressedAccumulatedPower field value.
 */
quint16 RecordMessage::compressedAccumulatedPower() const
{
    Q_D(const RecordMessage);
    return d->compressedAccumulatedPower;
}

/*!
 * Returns the RecordMessage data message's \c accumulatedPower field's current value.
 *
 * \return the \c accumulatedPower field value.
 */
quint32 RecordMessage::accumulatedPower() const
{
    Q_D(const RecordMessage);
    return d->accumulatedPower;
}

/*!
 * Returns the RecordMessage data message's \c leftRightBalance field's current value.
 *
 * \return the \c leftRightBalance field value.
 */
LeftRightBalance RecordMessage::leftRightBalance() const
{
    Q_D(const RecordMessage);
    return d->leftRightBalance;
}

/*!
 * Returns the RecordMessage data message's \c gpsAccuracy field's current value.
 *
 * \return the \c gpsAccuracy field value.
 */
quint8 RecordMessage::gpsAccuracy() const
{
    Q_D(const RecordMessage);
    return d->gpsAccuracy;
}

/*!
 * Returns the RecordMessage data message's \c verticalSpeed field's current value.
 *
 * \return the \c verticalSpeed field value.
 */
qint16 RecordMessage::verticalSpeed() const
{
    Q_D(const RecordMessage);
    return d->verticalSpeed;
}

/*!
 * Returns the RecordMessage data message's \c calories field's current value.
 *
 * \return the \c calories field value.
 */
quint16 RecordMessage::calories() const
{
    Q_D(const RecordMessage);
    return d->calories;
}

/*!
 * Returns the RecordMessage data message's \c verticalOscillation field's current value.
 *
 * \return the \c verticalOscillation field value.
 */
quint16 RecordMessage::verticalOscillation() const
{
    Q_D(const RecordMessage);
    return d->verticalOscillation;
}

/*!
 * Returns the RecordMessage data message's \c stanceTimePercent field's current value.
 *
 * \return the \c stanceTimePercent field value.
 */
quint16 RecordMessage::stanceTimePercent() const
{
    Q_D(const RecordMessage);
    return d->stanceTimePercent;
}

/*!
 * Returns the RecordMessage data message's \c stanceTime field's current value.
 *
 * \return the \c stanceTime field value.
 */
quint16 RecordMessage::stanceTime() const
{
    Q_D(const RecordMessage);
    return d->stanceTime;
}

/*!
 * Returns the RecordMessage data message's \c activityType field's current value.
 *
 * \return the \c activityType field value.
 */
ActivityType RecordMessage::activityType() const
{
    Q_D(const RecordMessage);
    return d->activityType;
}

/*!
 * Returns the RecordMessage data message's \c leftTorqueEffectiveness field's current value.
 *
 * \return the \c leftTorqueEffectiveness field value.
 */
quint8 RecordMessage::leftTorqueEffectiveness() const
{
    Q_D(const RecordMessage);
    return d->leftTorqueEffectiveness;
}

/*!
 * Returns the RecordMessage data message's \c rightTorqueEffectiveness field's current value.
 *
 * \return the \c rightTorqueEffectiveness field value.
 */
quint8 RecordMessage::rightTorqueEffectiveness() const
{
    Q_D(const RecordMessage);
    return d->rightTorqueEffectiveness;
}

/*!
 * Returns the RecordMessage data message's \c leftPedalSmoothness field's current value.
 *
 * \return the \c leftPedalSmoothness field value.
 */
quint8 RecordMessage::leftPedalSmoothness() const
{
    Q_D(const RecordMessage);
    return d->leftPedalSmoothness;
}

/*!
 * Returns the RecordMessage data message's \c rightPedalSmoothness field's current value.
 *
 * \return the \c rightPedalSmoothness field value.
 */
quint8 RecordMessage::rightPedalSmoothness() const
{
    Q_D(const RecordMessage);
    return d->rightPedalSmoothness;
}

/*!
 * Returns the RecordMessage data message's \c combinedPedalSmoothness field's current value.
 *
 * \return the \c combinedPedalSmoothness field value.
 */
quint8 RecordMessage::combinedPedalSmoothness() const
{
    Q_D(const RecordMessage);
    return d->combinedPedalSmoothness;
}

/*!
 * Returns the RecordMessage data message's \c time128 field's current value.
 *
 * \return the \c time128 field value.
 */
quint8 RecordMessage::time128() const
{
    Q_D(const RecordMessage);
    return d->time128;
}

/*!
 * Returns the RecordMessage data message's \c strokeType field's current value.
 *
 * \return the \c strokeType field value.
 */
StrokeType RecordMessage::strokeType() const
{
    Q_D(const RecordMessage);
    return d->strokeType;
}

/*!
 * Returns the RecordMessage data message's \c zone field's current value.
 *
 * \return the \c zone field value.
 */
quint8 RecordMessage::zone() const
{
    Q_D(const RecordMessage);
    return d->zone;
}

/*!
 * Returns the RecordMessage data message's \c ballSpeed field's current value.
 *
 * \return the \c ballSpeed field value.
 */
quint16 RecordMessage::ballSpeed() const
{
    Q_D(const RecordMessage);
    return d->ballSpeed;
}

/*!
 * Returns the RecordMessage data message's \c cadence256 field's current value.
 *
 * Log cadence and fractional cadence for backwards compatability
 *
 * \return the \c cadence256 field value.
 */
quint16 RecordMessage::cadence256() const
{
    Q_D(const RecordMessage);
    return d->cadence256;
}

/*!
 * Returns the RecordMessage data message's \c fractionalCadence field's current value.
 *
 * \return the \c fractionalCadence field value.
 */
quint8 RecordMessage::fractionalCadence() const
{
    Q_D(const RecordMessage);
    return d->fractionalCadence;
}

/*!
 * Returns the RecordMessage data message's \c totalHemoglobinConc field's current value.
 *
 * Total saturated and unsaturated hemoglobin
 *
 * \return the \c totalHemoglobinConc field value.
 */
quint16 RecordMessage::totalHemoglobinConc() const
{
    Q_D(const RecordMessage);
    return d->totalHemoglobinConc;
}

/*!
 * Returns the RecordMessage data message's \c totalHemoglobinConcMin field's current value.
 *
 * Min saturated and unsaturated hemoglobin
 *
 * \return the \c totalHemoglobinConcMin field value.
 */
quint16 RecordMessage::totalHemoglobinConcMin() const
{
    Q_D(const RecordMessage);
    return d->totalHemoglobinConcMin;
}

/*!
 * Returns the RecordMessage data message's \c totalHemoglobinConcMax field's current value.
 *
 * Max saturated and unsaturated hemoglobin
 *
 * \return the \c totalHemoglobinConcMax field value.
 */
quint16 RecordMessage::totalHemoglobinConcMax() const
{
    Q_D(const RecordMessage);
    return d->totalHemoglobinConcMax;
}

/*!
 * Returns the RecordMessage data message's \c saturatedHemoglobinPercent field's current value.
 *
 * Percentage of hemoglobin saturated with oxygen
 *
 * \return the \c saturatedHemoglobinPercent field value.
 */
quint16 RecordMessage::saturatedHemoglobinPercent() const
{
    Q_D(const RecordMessage);
    return d->saturatedHemoglobinPercent;
}

/*!
 * Returns the RecordMessage data message's \c saturatedHemoglobinPercentMin field's current value.
 *
 * Min percentage of hemoglobin saturated with oxygen
 *
 * \return the \c saturatedHemoglobinPercentMin field value.
 */
quint16 RecordMessage::saturatedHemoglobinPercentMin() const
{
    Q_D(const RecordMessage);
    return d->saturatedHemoglobinPercentMin;
}

/*!
 * Returns the RecordMessage data message's \c saturatedHemoglobinPercentMax field's current value.
 *
 * Max percentage of hemoglobin saturated with oxygen
 *
 * \return the \c saturatedHemoglobinPercentMax field value.
 */
quint16 RecordMessage::saturatedHemoglobinPercentMax() const
{
    Q_D(const RecordMessage);
    return d->saturatedHemoglobinPercentMax;
}

/*!
 * Returns the RecordMessage data message's \c deviceIndex field's current value.
 *
 * \return the \c deviceIndex field value.
 */
DeviceIndex RecordMessage::deviceIndex() const
{
    Q_D(const RecordMessage);
    return d->deviceIndex;
}

/*!
 * Returns the RecordMessage data message's \c leftPco field's current value.
 *
 * Left platform center offset
 *
 * \return the \c leftPco field value.
 */
qint8 RecordMessage::leftPco() const
{
    Q_D(const RecordMessage);
    return d->leftPco;
}

/*!
 * Returns the RecordMessage data message's \c rightPco field's current value.
 *
 * Right platform center offset
 *
 * \return the \c rightPco field value.
 */
qint8 RecordMessage::rightPco() const
{
    Q_D(const RecordMessage);
    return d->rightPco;
}

/*!
 * Returns the RecordMessage data message's \c leftPowerPhase field's current value.
 *
 * Left power phase angles. Data value indexes defined by power_phase_type.
 *
 * \return the \c leftPowerPhase field value.
 */
quint8 RecordMessage::leftPowerPhase() const
{
    Q_D(const RecordMessage);
    return d->leftPowerPhase;
}

/*!
 * Returns the RecordMessage data message's \c leftPowerPhasePeak field's current value.
 *
 * Left power phase peak angles. Data value indexes defined by power_phase_type.
 *
 * \return the \c leftPowerPhasePeak field value.
 */
quint8 RecordMessage::leftPowerPhasePeak() const
{
    Q_D(const RecordMessage);
    return d->leftPowerPhasePeak;
}

/*!
 * Returns the RecordMessage data message's \c rightPowerPhase field's current value.
 *
 * Right power phase angles. Data value indexes defined by power_phase_type.
 *
 * \return the \c rightPowerPhase field value.
 */
quint8 RecordMessage::rightPowerPhase() const
{
    Q_D(const RecordMessage);
    return d->rightPowerPhase;
}

/*!
 * Returns the RecordMessage data message's \c rightPowerPhasePeak field's current value.
 *
 * Right power phase peak angles. Data value indexes defined by power_phase_type.
 *
 * \return the \c rightPowerPhasePeak field value.
 */
quint8 RecordMessage::rightPowerPhasePeak() const
{
    Q_D(const RecordMessage);
    return d->rightPowerPhasePeak;
}

/*!
 * Returns the RecordMessage data message's \c enhancedSpeed field's current value.
 *
 * \return the \c enhancedSpeed field value.
 */
quint32 RecordMessage::enhancedSpeed() const
{
    Q_D(const RecordMessage);
    return d->enhancedSpeed;
}

/*!
 * Returns the RecordMessage data message's \c enhancedAltitude field's current value.
 *
 * \return the \c enhancedAltitude field value.
 */
quint32 RecordMessage::enhancedAltitude() const
{
    Q_D(const RecordMessage);
    return d->enhancedAltitude;
}

/*!
 * Returns the RecordMessage data message's \c batterySoc field's current value.
 *
 * lev battery state of charge
 *
 * \return the \c batterySoc field value.
 */
quint8 RecordMessage::batterySoc() const
{
    Q_D(const RecordMessage);
    return d->batterySoc;
}

/*!
 * Returns the RecordMessage data message's \c motorPower field's current value.
 *
 * lev motor power
 *
 * \return the \c motorPower field value.
 */
quint16 RecordMessage::motorPower() const
{
    Q_D(const RecordMessage);
    return d->motorPower;
}

/*!
 * Returns the RecordMessage data message's \c verticalRatio field's current value.
 *
 * \return the \c verticalRatio field value.
 */
quint16 RecordMessage::verticalRatio() const
{
    Q_D(const RecordMessage);
    return d->verticalRatio;
}

/*!
 * Returns the RecordMessage data message's \c stanceTimeBalance field's current value.
 *
 * \return the \c stanceTimeBalance field value.
 */
quint16 RecordMessage::stanceTimeBalance() const
{
    Q_D(const RecordMessage);
    return d->stanceTimeBalance;
}

/*!
 * Returns the RecordMessage data message's \c stepLength field's current value.
 *
 * \return the \c stepLength field value.
 */
quint16 RecordMessage::stepLength() const
{
    Q_D(const RecordMessage);
    return d->stepLength;
}

/*!
 * Returns the RecordMessage data message's \c absolutePressure field's current value.
 *
 * Includes atmospheric pressure
 *
 * \return the \c absolutePressure field value.
 */
quint32 RecordMessage::absolutePressure() const
{
    Q_D(const RecordMessage);
    return d->absolutePressure;
}

/*!
 * Returns the RecordMessage data message's \c depth field's current value.
 *
 * 0 if above water
 *
 * \return the \c depth field value.
 */
quint32 RecordMessage::depth() const
{
    Q_D(const RecordMessage);
    return d->depth;
}

/*!
 * Returns the RecordMessage data message's \c nextStopDepth field's current value.
 *
 * 0 if above water
 *
 * \return the \c nextStopDepth field value.
 */
quint32 RecordMessage::nextStopDepth() const
{
    Q_D(const RecordMessage);
    return d->nextStopDepth;
}

/*!
 * Returns the RecordMessage data message's \c nextStopTime field's current value.
 *
 * \return the \c nextStopTime field value.
 */
quint32 RecordMessage::nextStopTime() const
{
    Q_D(const RecordMessage);
    return d->nextStopTime;
}

/*!
 * Returns the RecordMessage data message's \c timeToSurface field's current value.
 *
 * \return the \c timeToSurface field value.
 */
quint32 RecordMessage::timeToSurface() const
{
    Q_D(const RecordMessage);
    return d->timeToSurface;
}

/*!
 * Returns the RecordMessage data message's \c ndlTime field's current value.
 *
 * \return the \c ndlTime field value.
 */
quint32 RecordMessage::ndlTime() const
{
    Q_D(const RecordMessage);
    return d->ndlTime;
}

/*!
 * Returns the RecordMessage data message's \c cnsLoad field's current value.
 *
 * \return the \c cnsLoad field value.
 */
quint8 RecordMessage::cnsLoad() const
{
    Q_D(const RecordMessage);
    return d->cnsLoad;
}

/*!
 * Returns the RecordMessage data message's \c n2Load field's current value.
 *
 * \return the \c n2Load field value.
 */
quint16 RecordMessage::n2Load() const
{
    Q_D(const RecordMessage);
    return d->n2Load;
}

/*!
 * Returns the RecordMessage data message's \c grit field's current value.
 *
 * The grit score estimates how challenging a route could be for a cyclist in terms of time
 * spent going over sharp turns or large grade slopes.
 *
 * \return the \c grit field value.
 */
float RecordMessage::grit() const
{
    Q_D(const RecordMessage);
    return d->grit;
}

/*!
 * Returns the RecordMessage data message's \c flow field's current value.
 *
 * The flow score estimates how long distance wise a cyclist deaccelerates over intervals where
 * deacceleration is unnecessary such as smooth turns or small grade angle intervals.
 *
 * \return the \c flow field value.
 */
float RecordMessage::flow() const
{
    Q_D(const RecordMessage);
    return d->flow;
}

/*!
 * Returns the RecordMessage data message's \c ebikeTravelRange field's current value.
 *
 * \return the \c ebikeTravelRange field value.
 */
quint16 RecordMessage::ebikeTravelRange() const
{
    Q_D(const RecordMessage);
    return d->ebikeTravelRange;
}

/*!
 * Returns the RecordMessage data message's \c ebikeBatteryLevel field's current value.
 *
 * \return the \c ebikeBatteryLevel field value.
 */
quint8 RecordMessage::ebikeBatteryLevel() const
{
    Q_D(const RecordMessage);
    return d->ebikeBatteryLevel;
}

/*!
 * Returns the RecordMessage data message's \c ebikeAssistMode field's current value.
 *
 * \return the \c ebikeAssistMode field value.
 */
quint8 RecordMessage::ebikeAssistMode() const
{
    Q_D(const RecordMessage);
    return d->ebikeAssistMode;
}

/*!
 * Returns the RecordMessage data message's \c ebikeAssistLevelPercent field's current value.
 *
 * \return the \c ebikeAssistLevelPercent field value.
 */
quint8 RecordMessage::ebikeAssistLevelPercent() const
{
    Q_D(const RecordMessage);
    return d->ebikeAssistLevelPercent;
}

/*!
 * Returns the RecordMessage data message's \c coreTemperature field's current value.
 *
 * \return the \c coreTemperature field value.
 */
quint16 RecordMessage::coreTemperature() const
{
    Q_D(const RecordMessage);
    return d->coreTemperature;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void RecordMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(RecordMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c positionLat field to \a positionLat.
 *
 * \param positionLat The field value to set.
 */
void RecordMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(RecordMessage);
    d->positionLat = positionLat;
}
/*!
 * Sets the \c positionLong field to \a positionLong.
 *
 * \param positionLong The field value to set.
 */
void RecordMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(RecordMessage);
    d->positionLong = positionLong;
}
/*!
 * Sets the \c altitude field to \a altitude.
 *
 * \param altitude The field value to set.
 */
void RecordMessage::setAltitude(const quint16 altitude)
{
    Q_D(RecordMessage);
    d->altitude = altitude;
}
/*!
 * Sets the \c heartRate field to \a heartRate.
 *
 * \param heartRate The field value to set.
 */
void RecordMessage::setHeartRate(const quint8 heartRate)
{
    Q_D(RecordMessage);
    d->heartRate = heartRate;
}
/*!
 * Sets the \c cadence field to \a cadence.
 *
 * \param cadence The field value to set.
 */
void RecordMessage::setCadence(const quint8 cadence)
{
    Q_D(RecordMessage);
    d->cadence = cadence;
}
/*!
 * Sets the \c distance field to \a distance.
 *
 * \param distance The field value to set.
 */
void RecordMessage::setDistance(const quint32 distance)
{
    Q_D(RecordMessage);
    d->distance = distance;
}
/*!
 * Sets the \c speed field to \a speed.
 *
 * \param speed The field value to set.
 */
void RecordMessage::setSpeed(const quint16 speed)
{
    Q_D(RecordMessage);
    d->speed = speed;
}
/*!
 * Sets the \c power field to \a power.
 *
 * \param power The field value to set.
 */
void RecordMessage::setPower(const quint16 power)
{
    Q_D(RecordMessage);
    d->power = power;
}
/*!
 * Sets the \c compressedSpeedDistance field to \a compressedSpeedDistance.
 *
 * \param compressedSpeedDistance The field value to set.
 */
void RecordMessage::setCompressedSpeedDistance(const quint8 compressedSpeedDistance)
{
    Q_D(RecordMessage);
    d->compressedSpeedDistance = compressedSpeedDistance;
}
/*!
 * Sets the \c grade field to \a grade.
 *
 * \param grade The field value to set.
 */
void RecordMessage::setGrade(const qint16 grade)
{
    Q_D(RecordMessage);
    d->grade = grade;
}
/*!
 * Sets the \c resistance field to \a resistance.
 *
 * \param resistance The field value to set.
 */
void RecordMessage::setResistance(const quint8 resistance)
{
    Q_D(RecordMessage);
    d->resistance = resistance;
}
/*!
 * Sets the \c timeFromCourse field to \a timeFromCourse.
 *
 * \param timeFromCourse The field value to set.
 */
void RecordMessage::setTimeFromCourse(const qint32 timeFromCourse)
{
    Q_D(RecordMessage);
    d->timeFromCourse = timeFromCourse;
}
/*!
 * Sets the \c cycleLength field to \a cycleLength.
 *
 * \param cycleLength The field value to set.
 */
void RecordMessage::setCycleLength(const quint8 cycleLength)
{
    Q_D(RecordMessage);
    d->cycleLength = cycleLength;
}
/*!
 * Sets the \c temperature field to \a temperature.
 *
 * \param temperature The field value to set.
 */
void RecordMessage::setTemperature(const qint8 temperature)
{
    Q_D(RecordMessage);
    d->temperature = temperature;
}
/*!
 * Sets the \c speed1s field to \a speed1s.
 *
 * \param speed1s The field value to set.
 */
void RecordMessage::setSpeed1s(const quint8 speed1s)
{
    Q_D(RecordMessage);
    d->speed1s = speed1s;
}
/*!
 * Sets the \c cycles field to \a cycles.
 *
 * \param cycles The field value to set.
 */
void RecordMessage::setCycles(const quint8 cycles)
{
    Q_D(RecordMessage);
    d->cycles = cycles;
}
/*!
 * Sets the \c totalCycles field to \a totalCycles.
 *
 * \param totalCycles The field value to set.
 */
void RecordMessage::setTotalCycles(const quint32 totalCycles)
{
    Q_D(RecordMessage);
    d->totalCycles = totalCycles;
}
/*!
 * Sets the \c compressedAccumulatedPower field to \a compressedAccumulatedPower.
 *
 * \param compressedAccumulatedPower The field value to set.
 */
void RecordMessage::setCompressedAccumulatedPower(const quint16 compressedAccumulatedPower)
{
    Q_D(RecordMessage);
    d->compressedAccumulatedPower = compressedAccumulatedPower;
}
/*!
 * Sets the \c accumulatedPower field to \a accumulatedPower.
 *
 * \param accumulatedPower The field value to set.
 */
void RecordMessage::setAccumulatedPower(const quint32 accumulatedPower)
{
    Q_D(RecordMessage);
    d->accumulatedPower = accumulatedPower;
}
/*!
 * Sets the \c leftRightBalance field to \a leftRightBalance.
 *
 * \param leftRightBalance The field value to set.
 */
void RecordMessage::setLeftRightBalance(const LeftRightBalance leftRightBalance)
{
    Q_D(RecordMessage);
    d->leftRightBalance = leftRightBalance;
}
/*!
 * Sets the \c gpsAccuracy field to \a gpsAccuracy.
 *
 * \param gpsAccuracy The field value to set.
 */
void RecordMessage::setGpsAccuracy(const quint8 gpsAccuracy)
{
    Q_D(RecordMessage);
    d->gpsAccuracy = gpsAccuracy;
}
/*!
 * Sets the \c verticalSpeed field to \a verticalSpeed.
 *
 * \param verticalSpeed The field value to set.
 */
void RecordMessage::setVerticalSpeed(const qint16 verticalSpeed)
{
    Q_D(RecordMessage);
    d->verticalSpeed = verticalSpeed;
}
/*!
 * Sets the \c calories field to \a calories.
 *
 * \param calories The field value to set.
 */
void RecordMessage::setCalories(const quint16 calories)
{
    Q_D(RecordMessage);
    d->calories = calories;
}
/*!
 * Sets the \c verticalOscillation field to \a verticalOscillation.
 *
 * \param verticalOscillation The field value to set.
 */
void RecordMessage::setVerticalOscillation(const quint16 verticalOscillation)
{
    Q_D(RecordMessage);
    d->verticalOscillation = verticalOscillation;
}
/*!
 * Sets the \c stanceTimePercent field to \a stanceTimePercent.
 *
 * \param stanceTimePercent The field value to set.
 */
void RecordMessage::setStanceTimePercent(const quint16 stanceTimePercent)
{
    Q_D(RecordMessage);
    d->stanceTimePercent = stanceTimePercent;
}
/*!
 * Sets the \c stanceTime field to \a stanceTime.
 *
 * \param stanceTime The field value to set.
 */
void RecordMessage::setStanceTime(const quint16 stanceTime)
{
    Q_D(RecordMessage);
    d->stanceTime = stanceTime;
}
/*!
 * Sets the \c activityType field to \a activityType.
 *
 * \param activityType The field value to set.
 */
void RecordMessage::setActivityType(const ActivityType activityType)
{
    Q_D(RecordMessage);
    d->activityType = activityType;
}
/*!
 * Sets the \c leftTorqueEffectiveness field to \a leftTorqueEffectiveness.
 *
 * \param leftTorqueEffectiveness The field value to set.
 */
void RecordMessage::setLeftTorqueEffectiveness(const quint8 leftTorqueEffectiveness)
{
    Q_D(RecordMessage);
    d->leftTorqueEffectiveness = leftTorqueEffectiveness;
}
/*!
 * Sets the \c rightTorqueEffectiveness field to \a rightTorqueEffectiveness.
 *
 * \param rightTorqueEffectiveness The field value to set.
 */
void RecordMessage::setRightTorqueEffectiveness(const quint8 rightTorqueEffectiveness)
{
    Q_D(RecordMessage);
    d->rightTorqueEffectiveness = rightTorqueEffectiveness;
}
/*!
 * Sets the \c leftPedalSmoothness field to \a leftPedalSmoothness.
 *
 * \param leftPedalSmoothness The field value to set.
 */
void RecordMessage::setLeftPedalSmoothness(const quint8 leftPedalSmoothness)
{
    Q_D(RecordMessage);
    d->leftPedalSmoothness = leftPedalSmoothness;
}
/*!
 * Sets the \c rightPedalSmoothness field to \a rightPedalSmoothness.
 *
 * \param rightPedalSmoothness The field value to set.
 */
void RecordMessage::setRightPedalSmoothness(const quint8 rightPedalSmoothness)
{
    Q_D(RecordMessage);
    d->rightPedalSmoothness = rightPedalSmoothness;
}
/*!
 * Sets the \c combinedPedalSmoothness field to \a combinedPedalSmoothness.
 *
 * \param combinedPedalSmoothness The field value to set.
 */
void RecordMessage::setCombinedPedalSmoothness(const quint8 combinedPedalSmoothness)
{
    Q_D(RecordMessage);
    d->combinedPedalSmoothness = combinedPedalSmoothness;
}
/*!
 * Sets the \c time128 field to \a time128.
 *
 * \param time128 The field value to set.
 */
void RecordMessage::setTime128(const quint8 time128)
{
    Q_D(RecordMessage);
    d->time128 = time128;
}
/*!
 * Sets the \c strokeType field to \a strokeType.
 *
 * \param strokeType The field value to set.
 */
void RecordMessage::setStrokeType(const StrokeType strokeType)
{
    Q_D(RecordMessage);
    d->strokeType = strokeType;
}
/*!
 * Sets the \c zone field to \a zone.
 *
 * \param zone The field value to set.
 */
void RecordMessage::setZone(const quint8 zone)
{
    Q_D(RecordMessage);
    d->zone = zone;
}
/*!
 * Sets the \c ballSpeed field to \a ballSpeed.
 *
 * \param ballSpeed The field value to set.
 */
void RecordMessage::setBallSpeed(const quint16 ballSpeed)
{
    Q_D(RecordMessage);
    d->ballSpeed = ballSpeed;
}
/*!
 * Sets the \c cadence256 field to \a cadence256.
 *
 * \param cadence256 The field value to set.
 */
void RecordMessage::setCadence256(const quint16 cadence256)
{
    Q_D(RecordMessage);
    d->cadence256 = cadence256;
}
/*!
 * Sets the \c fractionalCadence field to \a fractionalCadence.
 *
 * \param fractionalCadence The field value to set.
 */
void RecordMessage::setFractionalCadence(const quint8 fractionalCadence)
{
    Q_D(RecordMessage);
    d->fractionalCadence = fractionalCadence;
}
/*!
 * Sets the \c totalHemoglobinConc field to \a totalHemoglobinConc.
 *
 * \param totalHemoglobinConc The field value to set.
 */
void RecordMessage::setTotalHemoglobinConc(const quint16 totalHemoglobinConc)
{
    Q_D(RecordMessage);
    d->totalHemoglobinConc = totalHemoglobinConc;
}
/*!
 * Sets the \c totalHemoglobinConcMin field to \a totalHemoglobinConcMin.
 *
 * \param totalHemoglobinConcMin The field value to set.
 */
void RecordMessage::setTotalHemoglobinConcMin(const quint16 totalHemoglobinConcMin)
{
    Q_D(RecordMessage);
    d->totalHemoglobinConcMin = totalHemoglobinConcMin;
}
/*!
 * Sets the \c totalHemoglobinConcMax field to \a totalHemoglobinConcMax.
 *
 * \param totalHemoglobinConcMax The field value to set.
 */
void RecordMessage::setTotalHemoglobinConcMax(const quint16 totalHemoglobinConcMax)
{
    Q_D(RecordMessage);
    d->totalHemoglobinConcMax = totalHemoglobinConcMax;
}
/*!
 * Sets the \c saturatedHemoglobinPercent field to \a saturatedHemoglobinPercent.
 *
 * \param saturatedHemoglobinPercent The field value to set.
 */
void RecordMessage::setSaturatedHemoglobinPercent(const quint16 saturatedHemoglobinPercent)
{
    Q_D(RecordMessage);
    d->saturatedHemoglobinPercent = saturatedHemoglobinPercent;
}
/*!
 * Sets the \c saturatedHemoglobinPercentMin field to \a saturatedHemoglobinPercentMin.
 *
 * \param saturatedHemoglobinPercentMin The field value to set.
 */
void RecordMessage::setSaturatedHemoglobinPercentMin(const quint16 saturatedHemoglobinPercentMin)
{
    Q_D(RecordMessage);
    d->saturatedHemoglobinPercentMin = saturatedHemoglobinPercentMin;
}
/*!
 * Sets the \c saturatedHemoglobinPercentMax field to \a saturatedHemoglobinPercentMax.
 *
 * \param saturatedHemoglobinPercentMax The field value to set.
 */
void RecordMessage::setSaturatedHemoglobinPercentMax(const quint16 saturatedHemoglobinPercentMax)
{
    Q_D(RecordMessage);
    d->saturatedHemoglobinPercentMax = saturatedHemoglobinPercentMax;
}
/*!
 * Sets the \c deviceIndex field to \a deviceIndex.
 *
 * \param deviceIndex The field value to set.
 */
void RecordMessage::setDeviceIndex(const DeviceIndex deviceIndex)
{
    Q_D(RecordMessage);
    d->deviceIndex = deviceIndex;
}
/*!
 * Sets the \c leftPco field to \a leftPco.
 *
 * \param leftPco The field value to set.
 */
void RecordMessage::setLeftPco(const qint8 leftPco)
{
    Q_D(RecordMessage);
    d->leftPco = leftPco;
}
/*!
 * Sets the \c rightPco field to \a rightPco.
 *
 * \param rightPco The field value to set.
 */
void RecordMessage::setRightPco(const qint8 rightPco)
{
    Q_D(RecordMessage);
    d->rightPco = rightPco;
}
/*!
 * Sets the \c leftPowerPhase field to \a leftPowerPhase.
 *
 * \param leftPowerPhase The field value to set.
 */
void RecordMessage::setLeftPowerPhase(const quint8 leftPowerPhase)
{
    Q_D(RecordMessage);
    d->leftPowerPhase = leftPowerPhase;
}
/*!
 * Sets the \c leftPowerPhasePeak field to \a leftPowerPhasePeak.
 *
 * \param leftPowerPhasePeak The field value to set.
 */
void RecordMessage::setLeftPowerPhasePeak(const quint8 leftPowerPhasePeak)
{
    Q_D(RecordMessage);
    d->leftPowerPhasePeak = leftPowerPhasePeak;
}
/*!
 * Sets the \c rightPowerPhase field to \a rightPowerPhase.
 *
 * \param rightPowerPhase The field value to set.
 */
void RecordMessage::setRightPowerPhase(const quint8 rightPowerPhase)
{
    Q_D(RecordMessage);
    d->rightPowerPhase = rightPowerPhase;
}
/*!
 * Sets the \c rightPowerPhasePeak field to \a rightPowerPhasePeak.
 *
 * \param rightPowerPhasePeak The field value to set.
 */
void RecordMessage::setRightPowerPhasePeak(const quint8 rightPowerPhasePeak)
{
    Q_D(RecordMessage);
    d->rightPowerPhasePeak = rightPowerPhasePeak;
}
/*!
 * Sets the \c enhancedSpeed field to \a enhancedSpeed.
 *
 * \param enhancedSpeed The field value to set.
 */
void RecordMessage::setEnhancedSpeed(const quint32 enhancedSpeed)
{
    Q_D(RecordMessage);
    d->enhancedSpeed = enhancedSpeed;
}
/*!
 * Sets the \c enhancedAltitude field to \a enhancedAltitude.
 *
 * \param enhancedAltitude The field value to set.
 */
void RecordMessage::setEnhancedAltitude(const quint32 enhancedAltitude)
{
    Q_D(RecordMessage);
    d->enhancedAltitude = enhancedAltitude;
}
/*!
 * Sets the \c batterySoc field to \a batterySoc.
 *
 * \param batterySoc The field value to set.
 */
void RecordMessage::setBatterySoc(const quint8 batterySoc)
{
    Q_D(RecordMessage);
    d->batterySoc = batterySoc;
}
/*!
 * Sets the \c motorPower field to \a motorPower.
 *
 * \param motorPower The field value to set.
 */
void RecordMessage::setMotorPower(const quint16 motorPower)
{
    Q_D(RecordMessage);
    d->motorPower = motorPower;
}
/*!
 * Sets the \c verticalRatio field to \a verticalRatio.
 *
 * \param verticalRatio The field value to set.
 */
void RecordMessage::setVerticalRatio(const quint16 verticalRatio)
{
    Q_D(RecordMessage);
    d->verticalRatio = verticalRatio;
}
/*!
 * Sets the \c stanceTimeBalance field to \a stanceTimeBalance.
 *
 * \param stanceTimeBalance The field value to set.
 */
void RecordMessage::setStanceTimeBalance(const quint16 stanceTimeBalance)
{
    Q_D(RecordMessage);
    d->stanceTimeBalance = stanceTimeBalance;
}
/*!
 * Sets the \c stepLength field to \a stepLength.
 *
 * \param stepLength The field value to set.
 */
void RecordMessage::setStepLength(const quint16 stepLength)
{
    Q_D(RecordMessage);
    d->stepLength = stepLength;
}
/*!
 * Sets the \c absolutePressure field to \a absolutePressure.
 *
 * \param absolutePressure The field value to set.
 */
void RecordMessage::setAbsolutePressure(const quint32 absolutePressure)
{
    Q_D(RecordMessage);
    d->absolutePressure = absolutePressure;
}
/*!
 * Sets the \c depth field to \a depth.
 *
 * \param depth The field value to set.
 */
void RecordMessage::setDepth(const quint32 depth)
{
    Q_D(RecordMessage);
    d->depth = depth;
}
/*!
 * Sets the \c nextStopDepth field to \a nextStopDepth.
 *
 * \param nextStopDepth The field value to set.
 */
void RecordMessage::setNextStopDepth(const quint32 nextStopDepth)
{
    Q_D(RecordMessage);
    d->nextStopDepth = nextStopDepth;
}
/*!
 * Sets the \c nextStopTime field to \a nextStopTime.
 *
 * \param nextStopTime The field value to set.
 */
void RecordMessage::setNextStopTime(const quint32 nextStopTime)
{
    Q_D(RecordMessage);
    d->nextStopTime = nextStopTime;
}
/*!
 * Sets the \c timeToSurface field to \a timeToSurface.
 *
 * \param timeToSurface The field value to set.
 */
void RecordMessage::setTimeToSurface(const quint32 timeToSurface)
{
    Q_D(RecordMessage);
    d->timeToSurface = timeToSurface;
}
/*!
 * Sets the \c ndlTime field to \a ndlTime.
 *
 * \param ndlTime The field value to set.
 */
void RecordMessage::setNdlTime(const quint32 ndlTime)
{
    Q_D(RecordMessage);
    d->ndlTime = ndlTime;
}
/*!
 * Sets the \c cnsLoad field to \a cnsLoad.
 *
 * \param cnsLoad The field value to set.
 */
void RecordMessage::setCnsLoad(const quint8 cnsLoad)
{
    Q_D(RecordMessage);
    d->cnsLoad = cnsLoad;
}
/*!
 * Sets the \c n2Load field to \a n2Load.
 *
 * \param n2Load The field value to set.
 */
void RecordMessage::setN2Load(const quint16 n2Load)
{
    Q_D(RecordMessage);
    d->n2Load = n2Load;
}
/*!
 * Sets the \c grit field to \a grit.
 *
 * \param grit The field value to set.
 */
void RecordMessage::setGrit(const float grit)
{
    Q_D(RecordMessage);
    d->grit = grit;
}
/*!
 * Sets the \c flow field to \a flow.
 *
 * \param flow The field value to set.
 */
void RecordMessage::setFlow(const float flow)
{
    Q_D(RecordMessage);
    d->flow = flow;
}
/*!
 * Sets the \c ebikeTravelRange field to \a ebikeTravelRange.
 *
 * \param ebikeTravelRange The field value to set.
 */
void RecordMessage::setEbikeTravelRange(const quint16 ebikeTravelRange)
{
    Q_D(RecordMessage);
    d->ebikeTravelRange = ebikeTravelRange;
}
/*!
 * Sets the \c ebikeBatteryLevel field to \a ebikeBatteryLevel.
 *
 * \param ebikeBatteryLevel The field value to set.
 */
void RecordMessage::setEbikeBatteryLevel(const quint8 ebikeBatteryLevel)
{
    Q_D(RecordMessage);
    d->ebikeBatteryLevel = ebikeBatteryLevel;
}
/*!
 * Sets the \c ebikeAssistMode field to \a ebikeAssistMode.
 *
 * \param ebikeAssistMode The field value to set.
 */
void RecordMessage::setEbikeAssistMode(const quint8 ebikeAssistMode)
{
    Q_D(RecordMessage);
    d->ebikeAssistMode = ebikeAssistMode;
}
/*!
 * Sets the \c ebikeAssistLevelPercent field to \a ebikeAssistLevelPercent.
 *
 * \param ebikeAssistLevelPercent The field value to set.
 */
void RecordMessage::setEbikeAssistLevelPercent(const quint8 ebikeAssistLevelPercent)
{
    Q_D(RecordMessage);
    d->ebikeAssistLevelPercent = ebikeAssistLevelPercent;
}
/*!
 * Sets the \c coreTemperature field to \a coreTemperature.
 *
 * \param coreTemperature The field value to set.
 */
void RecordMessage::setCoreTemperature(const quint16 coreTemperature)
{
    Q_D(RecordMessage);
    d->coreTemperature = coreTemperature;
}

/// \cond internal

/*!
 * \internal
 *
 * \class RecordMessagePrivate
 *
 * The RecordMessagePrivate class provides private implementation for the RecordMessage.
 *
 * \sa RecordMessage
 */

/*!
 * \internal
 *
 * Constructs a RecordMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
RecordMessagePrivate::RecordMessagePrivate(RecordMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the RecordMessagePrivate object.
 */
RecordMessagePrivate::~RecordMessagePrivate()
{

}

bool RecordMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:record.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:record.positionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "record.positionLat")) return false;
        this->positionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:record.positionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "record.positionLong")) return false;
        this->positionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:record.altitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.altitude")) return false;
        this->altitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:record.heartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.heartRate")) return false;
        this->heartRate = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:record.cadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.cadence")) return false;
        this->cadence = static_cast<quint8>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:record.distance
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.distance")) return false;
        this->distance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:record.speed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.speed")) return false;
        this->speed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 7: // See Profile.xlsx::Messages:record.power
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.power")) return false;
        this->power = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:record.compressedSpeedDistance
        if (!verify(data, baseType, 1, FitBaseType::Byte, "record.compressedSpeedDistance")) return false;
        this->compressedSpeedDistance = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:record.grade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "record.grade")) return false;
        this->grade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:record.resistance
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.resistance")) return false;
        this->resistance = static_cast<quint8>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:record.timeFromCourse
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "record.timeFromCourse")) return false;
        this->timeFromCourse = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 12: // See Profile.xlsx::Messages:record.cycleLength
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.cycleLength")) return false;
        this->cycleLength = static_cast<quint8>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:record.temperature
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "record.temperature")) return false;
        this->temperature = static_cast<qint8>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:record.speed1s
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.speed1s")) return false;
        this->speed1s = static_cast<quint8>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:record.cycles
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.cycles")) return false;
        this->cycles = static_cast<quint8>(data.at(0));
        break;
    case 19: // See Profile.xlsx::Messages:record.totalCycles
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.totalCycles")) return false;
        this->totalCycles = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 28: // See Profile.xlsx::Messages:record.compressedAccumulatedPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.compressedAccumulatedPower")) return false;
        this->compressedAccumulatedPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 29: // See Profile.xlsx::Messages:record.accumulatedPower
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.accumulatedPower")) return false;
        this->accumulatedPower = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 30: // See Profile.xlsx::Messages:record.leftRightBalance
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.leftRightBalance")) return false;
        this->leftRightBalance = static_cast<LeftRightBalance>(data.at(0));
        break;
    case 31: // See Profile.xlsx::Messages:record.gpsAccuracy
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.gpsAccuracy")) return false;
        this->gpsAccuracy = static_cast<quint8>(data.at(0));
        break;
    case 32: // See Profile.xlsx::Messages:record.verticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "record.verticalSpeed")) return false;
        this->verticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 33: // See Profile.xlsx::Messages:record.calories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.calories")) return false;
        this->calories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 39: // See Profile.xlsx::Messages:record.verticalOscillation
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.verticalOscillation")) return false;
        this->verticalOscillation = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 40: // See Profile.xlsx::Messages:record.stanceTimePercent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.stanceTimePercent")) return false;
        this->stanceTimePercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 41: // See Profile.xlsx::Messages:record.stanceTime
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.stanceTime")) return false;
        this->stanceTime = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 42: // See Profile.xlsx::Messages:record.activityType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "record.activityType")) return false;
        this->activityType = static_cast<ActivityType>(data.at(0));
        break;
    case 43: // See Profile.xlsx::Messages:record.leftTorqueEffectiveness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.leftTorqueEffectiveness")) return false;
        this->leftTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 44: // See Profile.xlsx::Messages:record.rightTorqueEffectiveness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.rightTorqueEffectiveness")) return false;
        this->rightTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 45: // See Profile.xlsx::Messages:record.leftPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.leftPedalSmoothness")) return false;
        this->leftPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 46: // See Profile.xlsx::Messages:record.rightPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.rightPedalSmoothness")) return false;
        this->rightPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 47: // See Profile.xlsx::Messages:record.combinedPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.combinedPedalSmoothness")) return false;
        this->combinedPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 48: // See Profile.xlsx::Messages:record.time128
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.time128")) return false;
        this->time128 = static_cast<quint8>(data.at(0));
        break;
    case 49: // See Profile.xlsx::Messages:record.strokeType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "record.strokeType")) return false;
        this->strokeType = static_cast<StrokeType>(data.at(0));
        break;
    case 50: // See Profile.xlsx::Messages:record.zone
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.zone")) return false;
        this->zone = static_cast<quint8>(data.at(0));
        break;
    case 51: // See Profile.xlsx::Messages:record.ballSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.ballSpeed")) return false;
        this->ballSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 52: // See Profile.xlsx::Messages:record.cadence256
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.cadence256")) return false;
        this->cadence256 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 53: // See Profile.xlsx::Messages:record.fractionalCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.fractionalCadence")) return false;
        this->fractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 54: // See Profile.xlsx::Messages:record.totalHemoglobinConc
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.totalHemoglobinConc")) return false;
        this->totalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 55: // See Profile.xlsx::Messages:record.totalHemoglobinConcMin
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.totalHemoglobinConcMin")) return false;
        this->totalHemoglobinConcMin = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 56: // See Profile.xlsx::Messages:record.totalHemoglobinConcMax
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.totalHemoglobinConcMax")) return false;
        this->totalHemoglobinConcMax = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 57: // See Profile.xlsx::Messages:record.saturatedHemoglobinPercent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.saturatedHemoglobinPercent")) return false;
        this->saturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 58: // See Profile.xlsx::Messages:record.saturatedHemoglobinPercentMin
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.saturatedHemoglobinPercentMin")) return false;
        this->saturatedHemoglobinPercentMin = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 59: // See Profile.xlsx::Messages:record.saturatedHemoglobinPercentMax
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.saturatedHemoglobinPercentMax")) return false;
        this->saturatedHemoglobinPercentMax = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 62: // See Profile.xlsx::Messages:record.deviceIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.deviceIndex")) return false;
        this->deviceIndex = static_cast<DeviceIndex>(data.at(0));
        break;
    case 67: // See Profile.xlsx::Messages:record.leftPco
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "record.leftPco")) return false;
        this->leftPco = static_cast<qint8>(data.at(0));
        break;
    case 68: // See Profile.xlsx::Messages:record.rightPco
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "record.rightPco")) return false;
        this->rightPco = static_cast<qint8>(data.at(0));
        break;
    case 69: // See Profile.xlsx::Messages:record.leftPowerPhase
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.leftPowerPhase")) return false;
        this->leftPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 70: // See Profile.xlsx::Messages:record.leftPowerPhasePeak
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.leftPowerPhasePeak")) return false;
        this->leftPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 71: // See Profile.xlsx::Messages:record.rightPowerPhase
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.rightPowerPhase")) return false;
        this->rightPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 72: // See Profile.xlsx::Messages:record.rightPowerPhasePeak
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.rightPowerPhasePeak")) return false;
        this->rightPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 73: // See Profile.xlsx::Messages:record.enhancedSpeed
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.enhancedSpeed")) return false;
        this->enhancedSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 78: // See Profile.xlsx::Messages:record.enhancedAltitude
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.enhancedAltitude")) return false;
        this->enhancedAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 81: // See Profile.xlsx::Messages:record.batterySoc
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.batterySoc")) return false;
        this->batterySoc = static_cast<quint8>(data.at(0));
        break;
    case 82: // See Profile.xlsx::Messages:record.motorPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.motorPower")) return false;
        this->motorPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 83: // See Profile.xlsx::Messages:record.verticalRatio
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.verticalRatio")) return false;
        this->verticalRatio = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 84: // See Profile.xlsx::Messages:record.stanceTimeBalance
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.stanceTimeBalance")) return false;
        this->stanceTimeBalance = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 85: // See Profile.xlsx::Messages:record.stepLength
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.stepLength")) return false;
        this->stepLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 91: // See Profile.xlsx::Messages:record.absolutePressure
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.absolutePressure")) return false;
        this->absolutePressure = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 92: // See Profile.xlsx::Messages:record.depth
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.depth")) return false;
        this->depth = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 93: // See Profile.xlsx::Messages:record.nextStopDepth
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.nextStopDepth")) return false;
        this->nextStopDepth = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 94: // See Profile.xlsx::Messages:record.nextStopTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.nextStopTime")) return false;
        this->nextStopTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 95: // See Profile.xlsx::Messages:record.timeToSurface
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.timeToSurface")) return false;
        this->timeToSurface = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 96: // See Profile.xlsx::Messages:record.ndlTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "record.ndlTime")) return false;
        this->ndlTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 97: // See Profile.xlsx::Messages:record.cnsLoad
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.cnsLoad")) return false;
        this->cnsLoad = static_cast<quint8>(data.at(0));
        break;
    case 98: // See Profile.xlsx::Messages:record.n2Load
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.n2Load")) return false;
        this->n2Load = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 114: // See Profile.xlsx::Messages:record.grit
        if (!verify(data, baseType, 4, FitBaseType::Float32, "record.grit")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->grit) == 4, "src and dst not the same size");
            memcpy(&this->grit, &localEndian, data.size());
        }
        #else
        this->grit = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 115: // See Profile.xlsx::Messages:record.flow
        if (!verify(data, baseType, 4, FitBaseType::Float32, "record.flow")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->flow) == 4, "src and dst not the same size");
            memcpy(&this->flow, &localEndian, data.size());
        }
        #else
        this->flow = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 117: // See Profile.xlsx::Messages:record.ebikeTravelRange
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.ebikeTravelRange")) return false;
        this->ebikeTravelRange = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 118: // See Profile.xlsx::Messages:record.ebikeBatteryLevel
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.ebikeBatteryLevel")) return false;
        this->ebikeBatteryLevel = static_cast<quint8>(data.at(0));
        break;
    case 119: // See Profile.xlsx::Messages:record.ebikeAssistMode
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.ebikeAssistMode")) return false;
        this->ebikeAssistMode = static_cast<quint8>(data.at(0));
        break;
    case 120: // See Profile.xlsx::Messages:record.ebikeAssistLevelPercent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "record.ebikeAssistLevelPercent")) return false;
        this->ebikeAssistLevelPercent = static_cast<quint8>(data.at(0));
        break;
    case 139: // See Profile.xlsx::Messages:record.coreTemperature
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "record.coreTemperature")) return false;
        this->coreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "ignoring unknown record message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
