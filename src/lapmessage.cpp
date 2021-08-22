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

/*!
 * \class LapMessage
 *
 * The LapMessage class represents a FIT LapMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid LapMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
LapMessage::LapMessage() : AbstractDataMessage(new LapMessagePrivate(this))
{

}

/*!
 * Returns the LapMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex LapMessage::messageIndex() const
{
    Q_D(const LapMessage);
    return d->messageIndex;
}

/*!
 * Returns the LapMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime LapMessage::timestamp() const
{
    Q_D(const LapMessage);
    return d->timestamp;
}

/*!
 * Returns the LapMessage data message's \c event field's current value.
 *
 * \return the \c event field value.
 */
Event LapMessage::event() const
{
    Q_D(const LapMessage);
    return d->event;
}

/*!
 * Returns the LapMessage data message's \c eventType field's current value.
 *
 * \return the \c eventType field value.
 */
EventType LapMessage::eventType() const
{
    Q_D(const LapMessage);
    return d->eventType;
}

/*!
 * Returns the LapMessage data message's \c startTime field's current value.
 *
 * \return the \c startTime field value.
 */
DateTime LapMessage::startTime() const
{
    Q_D(const LapMessage);
    return d->startTime;
}

/*!
 * Returns the LapMessage data message's \c startPositionLat field's current value.
 *
 * \return the \c startPositionLat field value.
 */
qint32 LapMessage::startPositionLat() const
{
    Q_D(const LapMessage);
    return d->startPositionLat;
}

/*!
 * Returns the LapMessage data message's \c startPositionLong field's current value.
 *
 * \return the \c startPositionLong field value.
 */
qint32 LapMessage::startPositionLong() const
{
    Q_D(const LapMessage);
    return d->startPositionLong;
}

/*!
 * Returns the LapMessage data message's \c endPositionLat field's current value.
 *
 * \return the \c endPositionLat field value.
 */
qint32 LapMessage::endPositionLat() const
{
    Q_D(const LapMessage);
    return d->endPositionLat;
}

/*!
 * Returns the LapMessage data message's \c endPositionLong field's current value.
 *
 * \return the \c endPositionLong field value.
 */
qint32 LapMessage::endPositionLong() const
{
    Q_D(const LapMessage);
    return d->endPositionLong;
}

/*!
 * Returns the LapMessage data message's \c totalElapsedTime field's current value.
 *
 * \return the \c totalElapsedTime field value.
 */
quint32 LapMessage::totalElapsedTime() const
{
    Q_D(const LapMessage);
    return d->totalElapsedTime;
}

/*!
 * Returns the LapMessage data message's \c totalTimerTime field's current value.
 *
 * \return the \c totalTimerTime field value.
 */
quint32 LapMessage::totalTimerTime() const
{
    Q_D(const LapMessage);
    return d->totalTimerTime;
}

/*!
 * Returns the LapMessage data message's \c totalDistance field's current value.
 *
 * \return the \c totalDistance field value.
 */
quint32 LapMessage::totalDistance() const
{
    Q_D(const LapMessage);
    return d->totalDistance;
}

/*!
 * Returns the LapMessage data message's \c totalCycles field's current value.
 *
 * \return the \c totalCycles field value.
 */
quint32 LapMessage::totalCycles() const
{
    Q_D(const LapMessage);
    return d->totalCycles;
}

/*!
 * Returns the LapMessage data message's \c totalCalories field's current value.
 *
 * \return the \c totalCalories field value.
 */
quint16 LapMessage::totalCalories() const
{
    Q_D(const LapMessage);
    return d->totalCalories;
}

/*!
 * Returns the LapMessage data message's \c totalFatCalories field's current value.
 *
 * \return the \c totalFatCalories field value.
 */
quint16 LapMessage::totalFatCalories() const
{
    Q_D(const LapMessage);
    return d->totalFatCalories;
}

/*!
 * Returns the LapMessage data message's \c avgSpeed field's current value.
 *
 * \return the \c avgSpeed field value.
 */
quint16 LapMessage::avgSpeed() const
{
    Q_D(const LapMessage);
    return d->avgSpeed;
}

/*!
 * Returns the LapMessage data message's \c maxSpeed field's current value.
 *
 * \return the \c maxSpeed field value.
 */
quint16 LapMessage::maxSpeed() const
{
    Q_D(const LapMessage);
    return d->maxSpeed;
}

/*!
 * Returns the LapMessage data message's \c avgHeartRate field's current value.
 *
 * \return the \c avgHeartRate field value.
 */
quint8 LapMessage::avgHeartRate() const
{
    Q_D(const LapMessage);
    return d->avgHeartRate;
}

/*!
 * Returns the LapMessage data message's \c maxHeartRate field's current value.
 *
 * \return the \c maxHeartRate field value.
 */
quint8 LapMessage::maxHeartRate() const
{
    Q_D(const LapMessage);
    return d->maxHeartRate;
}

/*!
 * Returns the LapMessage data message's \c avgCadence field's current value.
 *
 * \return the \c avgCadence field value.
 */
quint8 LapMessage::avgCadence() const
{
    Q_D(const LapMessage);
    return d->avgCadence;
}

/*!
 * Returns the LapMessage data message's \c maxCadence field's current value.
 *
 * \return the \c maxCadence field value.
 */
quint8 LapMessage::maxCadence() const
{
    Q_D(const LapMessage);
    return d->maxCadence;
}

/*!
 * Returns the LapMessage data message's \c avgPower field's current value.
 *
 * \return the \c avgPower field value.
 */
quint16 LapMessage::avgPower() const
{
    Q_D(const LapMessage);
    return d->avgPower;
}

/*!
 * Returns the LapMessage data message's \c maxPower field's current value.
 *
 * \return the \c maxPower field value.
 */
quint16 LapMessage::maxPower() const
{
    Q_D(const LapMessage);
    return d->maxPower;
}

/*!
 * Returns the LapMessage data message's \c totalAscent field's current value.
 *
 * \return the \c totalAscent field value.
 */
quint16 LapMessage::totalAscent() const
{
    Q_D(const LapMessage);
    return d->totalAscent;
}

/*!
 * Returns the LapMessage data message's \c totalDescent field's current value.
 *
 * \return the \c totalDescent field value.
 */
quint16 LapMessage::totalDescent() const
{
    Q_D(const LapMessage);
    return d->totalDescent;
}

/*!
 * Returns the LapMessage data message's \c intensity field's current value.
 *
 * \return the \c intensity field value.
 */
Intensity LapMessage::intensity() const
{
    Q_D(const LapMessage);
    return d->intensity;
}

/*!
 * Returns the LapMessage data message's \c lapTrigger field's current value.
 *
 * \return the \c lapTrigger field value.
 */
LapTrigger LapMessage::lapTrigger() const
{
    Q_D(const LapMessage);
    return d->lapTrigger;
}

/*!
 * Returns the LapMessage data message's \c sport field's current value.
 *
 * \return the \c sport field value.
 */
Sport LapMessage::sport() const
{
    Q_D(const LapMessage);
    return d->sport;
}

/*!
 * Returns the LapMessage data message's \c eventGroup field's current value.
 *
 * \return the \c eventGroup field value.
 */
quint8 LapMessage::eventGroup() const
{
    Q_D(const LapMessage);
    return d->eventGroup;
}

/*!
 * Returns the LapMessage data message's \c numLengths field's current value.
 *
 * \return the \c numLengths field value.
 */
quint16 LapMessage::numLengths() const
{
    Q_D(const LapMessage);
    return d->numLengths;
}

/*!
 * Returns the LapMessage data message's \c normalizedPower field's current value.
 *
 * \return the \c normalizedPower field value.
 */
quint16 LapMessage::normalizedPower() const
{
    Q_D(const LapMessage);
    return d->normalizedPower;
}

/*!
 * Returns the LapMessage data message's \c leftRightBalance field's current value.
 *
 * \return the \c leftRightBalance field value.
 */
LeftRightBalance100 LapMessage::leftRightBalance() const
{
    Q_D(const LapMessage);
    return d->leftRightBalance;
}

/*!
 * Returns the LapMessage data message's \c firstLengthIndex field's current value.
 *
 * \return the \c firstLengthIndex field value.
 */
quint16 LapMessage::firstLengthIndex() const
{
    Q_D(const LapMessage);
    return d->firstLengthIndex;
}

/*!
 * Returns the LapMessage data message's \c avgStrokeDistance field's current value.
 *
 * \return the \c avgStrokeDistance field value.
 */
quint16 LapMessage::avgStrokeDistance() const
{
    Q_D(const LapMessage);
    return d->avgStrokeDistance;
}

/*!
 * Returns the LapMessage data message's \c swimStroke field's current value.
 *
 * \return the \c swimStroke field value.
 */
SwimStroke LapMessage::swimStroke() const
{
    Q_D(const LapMessage);
    return d->swimStroke;
}

/*!
 * Returns the LapMessage data message's \c subSport field's current value.
 *
 * \return the \c subSport field value.
 */
SubSport LapMessage::subSport() const
{
    Q_D(const LapMessage);
    return d->subSport;
}

/*!
 * Returns the LapMessage data message's \c numActiveLengths field's current value.
 *
 * \return the \c numActiveLengths field value.
 */
quint16 LapMessage::numActiveLengths() const
{
    Q_D(const LapMessage);
    return d->numActiveLengths;
}

/*!
 * Returns the LapMessage data message's \c totalWork field's current value.
 *
 * \return the \c totalWork field value.
 */
quint32 LapMessage::totalWork() const
{
    Q_D(const LapMessage);
    return d->totalWork;
}

/*!
 * Returns the LapMessage data message's \c avgAltitude field's current value.
 *
 * \return the \c avgAltitude field value.
 */
quint16 LapMessage::avgAltitude() const
{
    Q_D(const LapMessage);
    return d->avgAltitude;
}

/*!
 * Returns the LapMessage data message's \c maxAltitude field's current value.
 *
 * \return the \c maxAltitude field value.
 */
quint16 LapMessage::maxAltitude() const
{
    Q_D(const LapMessage);
    return d->maxAltitude;
}

/*!
 * Returns the LapMessage data message's \c gpsAccuracy field's current value.
 *
 * \return the \c gpsAccuracy field value.
 */
quint8 LapMessage::gpsAccuracy() const
{
    Q_D(const LapMessage);
    return d->gpsAccuracy;
}

/*!
 * Returns the LapMessage data message's \c avgGrade field's current value.
 *
 * \return the \c avgGrade field value.
 */
qint16 LapMessage::avgGrade() const
{
    Q_D(const LapMessage);
    return d->avgGrade;
}

/*!
 * Returns the LapMessage data message's \c avgPosGrade field's current value.
 *
 * \return the \c avgPosGrade field value.
 */
qint16 LapMessage::avgPosGrade() const
{
    Q_D(const LapMessage);
    return d->avgPosGrade;
}

/*!
 * Returns the LapMessage data message's \c avgNegGrade field's current value.
 *
 * \return the \c avgNegGrade field value.
 */
qint16 LapMessage::avgNegGrade() const
{
    Q_D(const LapMessage);
    return d->avgNegGrade;
}

/*!
 * Returns the LapMessage data message's \c maxPosGrade field's current value.
 *
 * \return the \c maxPosGrade field value.
 */
qint16 LapMessage::maxPosGrade() const
{
    Q_D(const LapMessage);
    return d->maxPosGrade;
}

/*!
 * Returns the LapMessage data message's \c maxNegGrade field's current value.
 *
 * \return the \c maxNegGrade field value.
 */
qint16 LapMessage::maxNegGrade() const
{
    Q_D(const LapMessage);
    return d->maxNegGrade;
}

/*!
 * Returns the LapMessage data message's \c avgTemperature field's current value.
 *
 * \return the \c avgTemperature field value.
 */
qint8 LapMessage::avgTemperature() const
{
    Q_D(const LapMessage);
    return d->avgTemperature;
}

/*!
 * Returns the LapMessage data message's \c maxTemperature field's current value.
 *
 * \return the \c maxTemperature field value.
 */
qint8 LapMessage::maxTemperature() const
{
    Q_D(const LapMessage);
    return d->maxTemperature;
}

/*!
 * Returns the LapMessage data message's \c totalMovingTime field's current value.
 *
 * \return the \c totalMovingTime field value.
 */
quint32 LapMessage::totalMovingTime() const
{
    Q_D(const LapMessage);
    return d->totalMovingTime;
}

/*!
 * Returns the LapMessage data message's \c avgPosVerticalSpeed field's current value.
 *
 * \return the \c avgPosVerticalSpeed field value.
 */
qint16 LapMessage::avgPosVerticalSpeed() const
{
    Q_D(const LapMessage);
    return d->avgPosVerticalSpeed;
}

/*!
 * Returns the LapMessage data message's \c avgNegVerticalSpeed field's current value.
 *
 * \return the \c avgNegVerticalSpeed field value.
 */
qint16 LapMessage::avgNegVerticalSpeed() const
{
    Q_D(const LapMessage);
    return d->avgNegVerticalSpeed;
}

/*!
 * Returns the LapMessage data message's \c maxPosVerticalSpeed field's current value.
 *
 * \return the \c maxPosVerticalSpeed field value.
 */
qint16 LapMessage::maxPosVerticalSpeed() const
{
    Q_D(const LapMessage);
    return d->maxPosVerticalSpeed;
}

/*!
 * Returns the LapMessage data message's \c maxNegVerticalSpeed field's current value.
 *
 * \return the \c maxNegVerticalSpeed field value.
 */
qint16 LapMessage::maxNegVerticalSpeed() const
{
    Q_D(const LapMessage);
    return d->maxNegVerticalSpeed;
}

/*!
 * Returns the LapMessage data message's \c timeInHrZone field's current value.
 *
 * \return the \c timeInHrZone field value.
 */
quint32 LapMessage::timeInHrZone() const
{
    Q_D(const LapMessage);
    return d->timeInHrZone;
}

/*!
 * Returns the LapMessage data message's \c timeInSpeedZone field's current value.
 *
 * \return the \c timeInSpeedZone field value.
 */
quint32 LapMessage::timeInSpeedZone() const
{
    Q_D(const LapMessage);
    return d->timeInSpeedZone;
}

/*!
 * Returns the LapMessage data message's \c timeInCadenceZone field's current value.
 *
 * \return the \c timeInCadenceZone field value.
 */
quint32 LapMessage::timeInCadenceZone() const
{
    Q_D(const LapMessage);
    return d->timeInCadenceZone;
}

/*!
 * Returns the LapMessage data message's \c timeInPowerZone field's current value.
 *
 * \return the \c timeInPowerZone field value.
 */
quint32 LapMessage::timeInPowerZone() const
{
    Q_D(const LapMessage);
    return d->timeInPowerZone;
}

/*!
 * Returns the LapMessage data message's \c repetitionNum field's current value.
 *
 * \return the \c repetitionNum field value.
 */
quint16 LapMessage::repetitionNum() const
{
    Q_D(const LapMessage);
    return d->repetitionNum;
}

/*!
 * Returns the LapMessage data message's \c minAltitude field's current value.
 *
 * \return the \c minAltitude field value.
 */
quint16 LapMessage::minAltitude() const
{
    Q_D(const LapMessage);
    return d->minAltitude;
}

/*!
 * Returns the LapMessage data message's \c minHeartRate field's current value.
 *
 * \return the \c minHeartRate field value.
 */
quint8 LapMessage::minHeartRate() const
{
    Q_D(const LapMessage);
    return d->minHeartRate;
}

/*!
 * Returns the LapMessage data message's \c wktStepIndex field's current value.
 *
 * \return the \c wktStepIndex field value.
 */
MessageIndex LapMessage::wktStepIndex() const
{
    Q_D(const LapMessage);
    return d->wktStepIndex;
}

/*!
 * Returns the LapMessage data message's \c opponentScore field's current value.
 *
 * \return the \c opponentScore field value.
 */
quint16 LapMessage::opponentScore() const
{
    Q_D(const LapMessage);
    return d->opponentScore;
}

/*!
 * Returns the LapMessage data message's \c strokeCount field's current value.
 *
 * \return the \c strokeCount field value.
 */
quint16 LapMessage::strokeCount() const
{
    Q_D(const LapMessage);
    return d->strokeCount;
}

/*!
 * Returns the LapMessage data message's \c zoneCount field's current value.
 *
 * \return the \c zoneCount field value.
 */
quint16 LapMessage::zoneCount() const
{
    Q_D(const LapMessage);
    return d->zoneCount;
}

/*!
 * Returns the LapMessage data message's \c avgVerticalOscillation field's current value.
 *
 * \return the \c avgVerticalOscillation field value.
 */
quint16 LapMessage::avgVerticalOscillation() const
{
    Q_D(const LapMessage);
    return d->avgVerticalOscillation;
}

/*!
 * Returns the LapMessage data message's \c avgStanceTimePercent field's current value.
 *
 * \return the \c avgStanceTimePercent field value.
 */
quint16 LapMessage::avgStanceTimePercent() const
{
    Q_D(const LapMessage);
    return d->avgStanceTimePercent;
}

/*!
 * Returns the LapMessage data message's \c avgStanceTime field's current value.
 *
 * \return the \c avgStanceTime field value.
 */
quint16 LapMessage::avgStanceTime() const
{
    Q_D(const LapMessage);
    return d->avgStanceTime;
}

/*!
 * Returns the LapMessage data message's \c avgFractionalCadence field's current value.
 *
 * \return the \c avgFractionalCadence field value.
 */
quint8 LapMessage::avgFractionalCadence() const
{
    Q_D(const LapMessage);
    return d->avgFractionalCadence;
}

/*!
 * Returns the LapMessage data message's \c maxFractionalCadence field's current value.
 *
 * \return the \c maxFractionalCadence field value.
 */
quint8 LapMessage::maxFractionalCadence() const
{
    Q_D(const LapMessage);
    return d->maxFractionalCadence;
}

/*!
 * Returns the LapMessage data message's \c totalFractionalCycles field's current value.
 *
 * \return the \c totalFractionalCycles field value.
 */
quint8 LapMessage::totalFractionalCycles() const
{
    Q_D(const LapMessage);
    return d->totalFractionalCycles;
}

/*!
 * Returns the LapMessage data message's \c playerScore field's current value.
 *
 * \return the \c playerScore field value.
 */
quint16 LapMessage::playerScore() const
{
    Q_D(const LapMessage);
    return d->playerScore;
}

/*!
 * Returns the LapMessage data message's \c avgTotalHemoglobinConc field's current value.
 *
 * \return the \c avgTotalHemoglobinConc field value.
 */
quint16 LapMessage::avgTotalHemoglobinConc() const
{
    Q_D(const LapMessage);
    return d->avgTotalHemoglobinConc;
}

/*!
 * Returns the LapMessage data message's \c minTotalHemoglobinConc field's current value.
 *
 * \return the \c minTotalHemoglobinConc field value.
 */
quint16 LapMessage::minTotalHemoglobinConc() const
{
    Q_D(const LapMessage);
    return d->minTotalHemoglobinConc;
}

/*!
 * Returns the LapMessage data message's \c maxTotalHemoglobinConc field's current value.
 *
 * \return the \c maxTotalHemoglobinConc field value.
 */
quint16 LapMessage::maxTotalHemoglobinConc() const
{
    Q_D(const LapMessage);
    return d->maxTotalHemoglobinConc;
}

/*!
 * Returns the LapMessage data message's \c avgSaturatedHemoglobinPercent field's current value.
 *
 * \return the \c avgSaturatedHemoglobinPercent field value.
 */
quint16 LapMessage::avgSaturatedHemoglobinPercent() const
{
    Q_D(const LapMessage);
    return d->avgSaturatedHemoglobinPercent;
}

/*!
 * Returns the LapMessage data message's \c minSaturatedHemoglobinPercent field's current value.
 *
 * \return the \c minSaturatedHemoglobinPercent field value.
 */
quint16 LapMessage::minSaturatedHemoglobinPercent() const
{
    Q_D(const LapMessage);
    return d->minSaturatedHemoglobinPercent;
}

/*!
 * Returns the LapMessage data message's \c maxSaturatedHemoglobinPercent field's current value.
 *
 * \return the \c maxSaturatedHemoglobinPercent field value.
 */
quint16 LapMessage::maxSaturatedHemoglobinPercent() const
{
    Q_D(const LapMessage);
    return d->maxSaturatedHemoglobinPercent;
}

/*!
 * Returns the LapMessage data message's \c avgLeftTorqueEffectiveness field's current value.
 *
 * \return the \c avgLeftTorqueEffectiveness field value.
 */
quint8 LapMessage::avgLeftTorqueEffectiveness() const
{
    Q_D(const LapMessage);
    return d->avgLeftTorqueEffectiveness;
}

/*!
 * Returns the LapMessage data message's \c avgRightTorqueEffectiveness field's current value.
 *
 * \return the \c avgRightTorqueEffectiveness field value.
 */
quint8 LapMessage::avgRightTorqueEffectiveness() const
{
    Q_D(const LapMessage);
    return d->avgRightTorqueEffectiveness;
}

/*!
 * Returns the LapMessage data message's \c avgLeftPedalSmoothness field's current value.
 *
 * \return the \c avgLeftPedalSmoothness field value.
 */
quint8 LapMessage::avgLeftPedalSmoothness() const
{
    Q_D(const LapMessage);
    return d->avgLeftPedalSmoothness;
}

/*!
 * Returns the LapMessage data message's \c avgRightPedalSmoothness field's current value.
 *
 * \return the \c avgRightPedalSmoothness field value.
 */
quint8 LapMessage::avgRightPedalSmoothness() const
{
    Q_D(const LapMessage);
    return d->avgRightPedalSmoothness;
}

/*!
 * Returns the LapMessage data message's \c avgCombinedPedalSmoothness field's current value.
 *
 * \return the \c avgCombinedPedalSmoothness field value.
 */
quint8 LapMessage::avgCombinedPedalSmoothness() const
{
    Q_D(const LapMessage);
    return d->avgCombinedPedalSmoothness;
}

/*!
 * Returns the LapMessage data message's \c timeStanding field's current value.
 *
 * \return the \c timeStanding field value.
 */
quint32 LapMessage::timeStanding() const
{
    Q_D(const LapMessage);
    return d->timeStanding;
}

/*!
 * Returns the LapMessage data message's \c standCount field's current value.
 *
 * \return the \c standCount field value.
 */
quint16 LapMessage::standCount() const
{
    Q_D(const LapMessage);
    return d->standCount;
}

/*!
 * Returns the LapMessage data message's \c avgLeftPco field's current value.
 *
 * \return the \c avgLeftPco field value.
 */
qint8 LapMessage::avgLeftPco() const
{
    Q_D(const LapMessage);
    return d->avgLeftPco;
}

/*!
 * Returns the LapMessage data message's \c avgRightPco field's current value.
 *
 * \return the \c avgRightPco field value.
 */
qint8 LapMessage::avgRightPco() const
{
    Q_D(const LapMessage);
    return d->avgRightPco;
}

/*!
 * Returns the LapMessage data message's \c avgLeftPowerPhase field's current value.
 *
 * \return the \c avgLeftPowerPhase field value.
 */
quint8 LapMessage::avgLeftPowerPhase() const
{
    Q_D(const LapMessage);
    return d->avgLeftPowerPhase;
}

/*!
 * Returns the LapMessage data message's \c avgLeftPowerPhasePeak field's current value.
 *
 * \return the \c avgLeftPowerPhasePeak field value.
 */
quint8 LapMessage::avgLeftPowerPhasePeak() const
{
    Q_D(const LapMessage);
    return d->avgLeftPowerPhasePeak;
}

/*!
 * Returns the LapMessage data message's \c avgRightPowerPhase field's current value.
 *
 * \return the \c avgRightPowerPhase field value.
 */
quint8 LapMessage::avgRightPowerPhase() const
{
    Q_D(const LapMessage);
    return d->avgRightPowerPhase;
}

/*!
 * Returns the LapMessage data message's \c avgRightPowerPhasePeak field's current value.
 *
 * \return the \c avgRightPowerPhasePeak field value.
 */
quint8 LapMessage::avgRightPowerPhasePeak() const
{
    Q_D(const LapMessage);
    return d->avgRightPowerPhasePeak;
}

/*!
 * Returns the LapMessage data message's \c avgPowerPosition field's current value.
 *
 * \return the \c avgPowerPosition field value.
 */
quint16 LapMessage::avgPowerPosition() const
{
    Q_D(const LapMessage);
    return d->avgPowerPosition;
}

/*!
 * Returns the LapMessage data message's \c maxPowerPosition field's current value.
 *
 * \return the \c maxPowerPosition field value.
 */
quint16 LapMessage::maxPowerPosition() const
{
    Q_D(const LapMessage);
    return d->maxPowerPosition;
}

/*!
 * Returns the LapMessage data message's \c avgCadencePosition field's current value.
 *
 * \return the \c avgCadencePosition field value.
 */
quint8 LapMessage::avgCadencePosition() const
{
    Q_D(const LapMessage);
    return d->avgCadencePosition;
}

/*!
 * Returns the LapMessage data message's \c maxCadencePosition field's current value.
 *
 * \return the \c maxCadencePosition field value.
 */
quint8 LapMessage::maxCadencePosition() const
{
    Q_D(const LapMessage);
    return d->maxCadencePosition;
}

/*!
 * Returns the LapMessage data message's \c enhancedAvgSpeed field's current value.
 *
 * \return the \c enhancedAvgSpeed field value.
 */
quint32 LapMessage::enhancedAvgSpeed() const
{
    Q_D(const LapMessage);
    return d->enhancedAvgSpeed;
}

/*!
 * Returns the LapMessage data message's \c enhancedMaxSpeed field's current value.
 *
 * \return the \c enhancedMaxSpeed field value.
 */
quint32 LapMessage::enhancedMaxSpeed() const
{
    Q_D(const LapMessage);
    return d->enhancedMaxSpeed;
}

/*!
 * Returns the LapMessage data message's \c enhancedAvgAltitude field's current value.
 *
 * \return the \c enhancedAvgAltitude field value.
 */
quint32 LapMessage::enhancedAvgAltitude() const
{
    Q_D(const LapMessage);
    return d->enhancedAvgAltitude;
}

/*!
 * Returns the LapMessage data message's \c enhancedMinAltitude field's current value.
 *
 * \return the \c enhancedMinAltitude field value.
 */
quint32 LapMessage::enhancedMinAltitude() const
{
    Q_D(const LapMessage);
    return d->enhancedMinAltitude;
}

/*!
 * Returns the LapMessage data message's \c enhancedMaxAltitude field's current value.
 *
 * \return the \c enhancedMaxAltitude field value.
 */
quint32 LapMessage::enhancedMaxAltitude() const
{
    Q_D(const LapMessage);
    return d->enhancedMaxAltitude;
}

/*!
 * Returns the LapMessage data message's \c avgLevMotorPower field's current value.
 *
 * \return the \c avgLevMotorPower field value.
 */
quint16 LapMessage::avgLevMotorPower() const
{
    Q_D(const LapMessage);
    return d->avgLevMotorPower;
}

/*!
 * Returns the LapMessage data message's \c maxLevMotorPower field's current value.
 *
 * \return the \c maxLevMotorPower field value.
 */
quint16 LapMessage::maxLevMotorPower() const
{
    Q_D(const LapMessage);
    return d->maxLevMotorPower;
}

/*!
 * Returns the LapMessage data message's \c levBatteryConsumption field's current value.
 *
 * \return the \c levBatteryConsumption field value.
 */
quint8 LapMessage::levBatteryConsumption() const
{
    Q_D(const LapMessage);
    return d->levBatteryConsumption;
}

/*!
 * Returns the LapMessage data message's \c avgVerticalRatio field's current value.
 *
 * \return the \c avgVerticalRatio field value.
 */
quint16 LapMessage::avgVerticalRatio() const
{
    Q_D(const LapMessage);
    return d->avgVerticalRatio;
}

/*!
 * Returns the LapMessage data message's \c avgStanceTimeBalance field's current value.
 *
 * \return the \c avgStanceTimeBalance field value.
 */
quint16 LapMessage::avgStanceTimeBalance() const
{
    Q_D(const LapMessage);
    return d->avgStanceTimeBalance;
}

/*!
 * Returns the LapMessage data message's \c avgStepLength field's current value.
 *
 * \return the \c avgStepLength field value.
 */
quint16 LapMessage::avgStepLength() const
{
    Q_D(const LapMessage);
    return d->avgStepLength;
}

/*!
 * Returns the LapMessage data message's \c avgVam field's current value.
 *
 * \return the \c avgVam field value.
 */
quint16 LapMessage::avgVam() const
{
    Q_D(const LapMessage);
    return d->avgVam;
}

/*!
 * Returns the LapMessage data message's \c totalGrit field's current value.
 *
 * \return the \c totalGrit field value.
 */
float LapMessage::totalGrit() const
{
    Q_D(const LapMessage);
    return d->totalGrit;
}

/*!
 * Returns the LapMessage data message's \c totalFlow field's current value.
 *
 * \return the \c totalFlow field value.
 */
float LapMessage::totalFlow() const
{
    Q_D(const LapMessage);
    return d->totalFlow;
}

/*!
 * Returns the LapMessage data message's \c jumpCount field's current value.
 *
 * \return the \c jumpCount field value.
 */
quint16 LapMessage::jumpCount() const
{
    Q_D(const LapMessage);
    return d->jumpCount;
}

/*!
 * Returns the LapMessage data message's \c avgGrit field's current value.
 *
 * \return the \c avgGrit field value.
 */
float LapMessage::avgGrit() const
{
    Q_D(const LapMessage);
    return d->avgGrit;
}

/*!
 * Returns the LapMessage data message's \c avgFlow field's current value.
 *
 * \return the \c avgFlow field value.
 */
float LapMessage::avgFlow() const
{
    Q_D(const LapMessage);
    return d->avgFlow;
}

/*!
 * Returns the LapMessage data message's \c totalFractionalAscent field's current value.
 *
 * \return the \c totalFractionalAscent field value.
 */
quint8 LapMessage::totalFractionalAscent() const
{
    Q_D(const LapMessage);
    return d->totalFractionalAscent;
}

/*!
 * Returns the LapMessage data message's \c totalFractionalDescent field's current value.
 *
 * \return the \c totalFractionalDescent field value.
 */
quint8 LapMessage::totalFractionalDescent() const
{
    Q_D(const LapMessage);
    return d->totalFractionalDescent;
}

/*!
 * Returns the LapMessage data message's \c avgCoreTemperature field's current value.
 *
 * \return the \c avgCoreTemperature field value.
 */
quint16 LapMessage::avgCoreTemperature() const
{
    Q_D(const LapMessage);
    return d->avgCoreTemperature;
}

/*!
 * Returns the LapMessage data message's \c minCoreTemperature field's current value.
 *
 * \return the \c minCoreTemperature field value.
 */
quint16 LapMessage::minCoreTemperature() const
{
    Q_D(const LapMessage);
    return d->minCoreTemperature;
}

/*!
 * Returns the LapMessage data message's \c maxCoreTemperature field's current value.
 *
 * \return the \c maxCoreTemperature field value.
 */
quint16 LapMessage::maxCoreTemperature() const
{
    Q_D(const LapMessage);
    return d->maxCoreTemperature;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void LapMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(LapMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void LapMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(LapMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c event field to \a event.
 *
 * \param event The field value to set.
 */
void LapMessage::setEvent(const Event event)
{
    Q_D(LapMessage);
    d->event = event;
}
/*!
 * Sets the \c eventType field to \a eventType.
 *
 * \param eventType The field value to set.
 */
void LapMessage::setEventType(const EventType eventType)
{
    Q_D(LapMessage);
    d->eventType = eventType;
}
/*!
 * Sets the \c startTime field to \a startTime.
 *
 * \param startTime The field value to set.
 */
void LapMessage::setStartTime(const DateTime startTime)
{
    Q_D(LapMessage);
    d->startTime = startTime;
}
/*!
 * Sets the \c startPositionLat field to \a startPositionLat.
 *
 * \param startPositionLat The field value to set.
 */
void LapMessage::setStartPositionLat(const qint32 startPositionLat)
{
    Q_D(LapMessage);
    d->startPositionLat = startPositionLat;
}
/*!
 * Sets the \c startPositionLong field to \a startPositionLong.
 *
 * \param startPositionLong The field value to set.
 */
void LapMessage::setStartPositionLong(const qint32 startPositionLong)
{
    Q_D(LapMessage);
    d->startPositionLong = startPositionLong;
}
/*!
 * Sets the \c endPositionLat field to \a endPositionLat.
 *
 * \param endPositionLat The field value to set.
 */
void LapMessage::setEndPositionLat(const qint32 endPositionLat)
{
    Q_D(LapMessage);
    d->endPositionLat = endPositionLat;
}
/*!
 * Sets the \c endPositionLong field to \a endPositionLong.
 *
 * \param endPositionLong The field value to set.
 */
void LapMessage::setEndPositionLong(const qint32 endPositionLong)
{
    Q_D(LapMessage);
    d->endPositionLong = endPositionLong;
}
/*!
 * Sets the \c totalElapsedTime field to \a totalElapsedTime.
 *
 * \param totalElapsedTime The field value to set.
 */
void LapMessage::setTotalElapsedTime(const quint32 totalElapsedTime)
{
    Q_D(LapMessage);
    d->totalElapsedTime = totalElapsedTime;
}
/*!
 * Sets the \c totalTimerTime field to \a totalTimerTime.
 *
 * \param totalTimerTime The field value to set.
 */
void LapMessage::setTotalTimerTime(const quint32 totalTimerTime)
{
    Q_D(LapMessage);
    d->totalTimerTime = totalTimerTime;
}
/*!
 * Sets the \c totalDistance field to \a totalDistance.
 *
 * \param totalDistance The field value to set.
 */
void LapMessage::setTotalDistance(const quint32 totalDistance)
{
    Q_D(LapMessage);
    d->totalDistance = totalDistance;
}
/*!
 * Sets the \c totalCycles field to \a totalCycles.
 *
 * \param totalCycles The field value to set.
 */
void LapMessage::setTotalCycles(const quint32 totalCycles)
{
    Q_D(LapMessage);
    d->totalCycles = totalCycles;
}
/*!
 * Sets the \c totalCalories field to \a totalCalories.
 *
 * \param totalCalories The field value to set.
 */
void LapMessage::setTotalCalories(const quint16 totalCalories)
{
    Q_D(LapMessage);
    d->totalCalories = totalCalories;
}
/*!
 * Sets the \c totalFatCalories field to \a totalFatCalories.
 *
 * \param totalFatCalories The field value to set.
 */
void LapMessage::setTotalFatCalories(const quint16 totalFatCalories)
{
    Q_D(LapMessage);
    d->totalFatCalories = totalFatCalories;
}
/*!
 * Sets the \c avgSpeed field to \a avgSpeed.
 *
 * \param avgSpeed The field value to set.
 */
void LapMessage::setAvgSpeed(const quint16 avgSpeed)
{
    Q_D(LapMessage);
    d->avgSpeed = avgSpeed;
}
/*!
 * Sets the \c maxSpeed field to \a maxSpeed.
 *
 * \param maxSpeed The field value to set.
 */
void LapMessage::setMaxSpeed(const quint16 maxSpeed)
{
    Q_D(LapMessage);
    d->maxSpeed = maxSpeed;
}
/*!
 * Sets the \c avgHeartRate field to \a avgHeartRate.
 *
 * \param avgHeartRate The field value to set.
 */
void LapMessage::setAvgHeartRate(const quint8 avgHeartRate)
{
    Q_D(LapMessage);
    d->avgHeartRate = avgHeartRate;
}
/*!
 * Sets the \c maxHeartRate field to \a maxHeartRate.
 *
 * \param maxHeartRate The field value to set.
 */
void LapMessage::setMaxHeartRate(const quint8 maxHeartRate)
{
    Q_D(LapMessage);
    d->maxHeartRate = maxHeartRate;
}
/*!
 * Sets the \c avgCadence field to \a avgCadence.
 *
 * \param avgCadence The field value to set.
 */
void LapMessage::setAvgCadence(const quint8 avgCadence)
{
    Q_D(LapMessage);
    d->avgCadence = avgCadence;
}
/*!
 * Sets the \c maxCadence field to \a maxCadence.
 *
 * \param maxCadence The field value to set.
 */
void LapMessage::setMaxCadence(const quint8 maxCadence)
{
    Q_D(LapMessage);
    d->maxCadence = maxCadence;
}
/*!
 * Sets the \c avgPower field to \a avgPower.
 *
 * \param avgPower The field value to set.
 */
void LapMessage::setAvgPower(const quint16 avgPower)
{
    Q_D(LapMessage);
    d->avgPower = avgPower;
}
/*!
 * Sets the \c maxPower field to \a maxPower.
 *
 * \param maxPower The field value to set.
 */
void LapMessage::setMaxPower(const quint16 maxPower)
{
    Q_D(LapMessage);
    d->maxPower = maxPower;
}
/*!
 * Sets the \c totalAscent field to \a totalAscent.
 *
 * \param totalAscent The field value to set.
 */
void LapMessage::setTotalAscent(const quint16 totalAscent)
{
    Q_D(LapMessage);
    d->totalAscent = totalAscent;
}
/*!
 * Sets the \c totalDescent field to \a totalDescent.
 *
 * \param totalDescent The field value to set.
 */
void LapMessage::setTotalDescent(const quint16 totalDescent)
{
    Q_D(LapMessage);
    d->totalDescent = totalDescent;
}
/*!
 * Sets the \c intensity field to \a intensity.
 *
 * \param intensity The field value to set.
 */
void LapMessage::setIntensity(const Intensity intensity)
{
    Q_D(LapMessage);
    d->intensity = intensity;
}
/*!
 * Sets the \c lapTrigger field to \a lapTrigger.
 *
 * \param lapTrigger The field value to set.
 */
void LapMessage::setLapTrigger(const LapTrigger lapTrigger)
{
    Q_D(LapMessage);
    d->lapTrigger = lapTrigger;
}
/*!
 * Sets the \c sport field to \a sport.
 *
 * \param sport The field value to set.
 */
void LapMessage::setSport(const Sport sport)
{
    Q_D(LapMessage);
    d->sport = sport;
}
/*!
 * Sets the \c eventGroup field to \a eventGroup.
 *
 * \param eventGroup The field value to set.
 */
void LapMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(LapMessage);
    d->eventGroup = eventGroup;
}
/*!
 * Sets the \c numLengths field to \a numLengths.
 *
 * \param numLengths The field value to set.
 */
void LapMessage::setNumLengths(const quint16 numLengths)
{
    Q_D(LapMessage);
    d->numLengths = numLengths;
}
/*!
 * Sets the \c normalizedPower field to \a normalizedPower.
 *
 * \param normalizedPower The field value to set.
 */
void LapMessage::setNormalizedPower(const quint16 normalizedPower)
{
    Q_D(LapMessage);
    d->normalizedPower = normalizedPower;
}
/*!
 * Sets the \c leftRightBalance field to \a leftRightBalance.
 *
 * \param leftRightBalance The field value to set.
 */
void LapMessage::setLeftRightBalance(const LeftRightBalance100 leftRightBalance)
{
    Q_D(LapMessage);
    d->leftRightBalance = leftRightBalance;
}
/*!
 * Sets the \c firstLengthIndex field to \a firstLengthIndex.
 *
 * \param firstLengthIndex The field value to set.
 */
void LapMessage::setFirstLengthIndex(const quint16 firstLengthIndex)
{
    Q_D(LapMessage);
    d->firstLengthIndex = firstLengthIndex;
}
/*!
 * Sets the \c avgStrokeDistance field to \a avgStrokeDistance.
 *
 * \param avgStrokeDistance The field value to set.
 */
void LapMessage::setAvgStrokeDistance(const quint16 avgStrokeDistance)
{
    Q_D(LapMessage);
    d->avgStrokeDistance = avgStrokeDistance;
}
/*!
 * Sets the \c swimStroke field to \a swimStroke.
 *
 * \param swimStroke The field value to set.
 */
void LapMessage::setSwimStroke(const SwimStroke swimStroke)
{
    Q_D(LapMessage);
    d->swimStroke = swimStroke;
}
/*!
 * Sets the \c subSport field to \a subSport.
 *
 * \param subSport The field value to set.
 */
void LapMessage::setSubSport(const SubSport subSport)
{
    Q_D(LapMessage);
    d->subSport = subSport;
}
/*!
 * Sets the \c numActiveLengths field to \a numActiveLengths.
 *
 * \param numActiveLengths The field value to set.
 */
void LapMessage::setNumActiveLengths(const quint16 numActiveLengths)
{
    Q_D(LapMessage);
    d->numActiveLengths = numActiveLengths;
}
/*!
 * Sets the \c totalWork field to \a totalWork.
 *
 * \param totalWork The field value to set.
 */
void LapMessage::setTotalWork(const quint32 totalWork)
{
    Q_D(LapMessage);
    d->totalWork = totalWork;
}
/*!
 * Sets the \c avgAltitude field to \a avgAltitude.
 *
 * \param avgAltitude The field value to set.
 */
void LapMessage::setAvgAltitude(const quint16 avgAltitude)
{
    Q_D(LapMessage);
    d->avgAltitude = avgAltitude;
}
/*!
 * Sets the \c maxAltitude field to \a maxAltitude.
 *
 * \param maxAltitude The field value to set.
 */
void LapMessage::setMaxAltitude(const quint16 maxAltitude)
{
    Q_D(LapMessage);
    d->maxAltitude = maxAltitude;
}
/*!
 * Sets the \c gpsAccuracy field to \a gpsAccuracy.
 *
 * \param gpsAccuracy The field value to set.
 */
void LapMessage::setGpsAccuracy(const quint8 gpsAccuracy)
{
    Q_D(LapMessage);
    d->gpsAccuracy = gpsAccuracy;
}
/*!
 * Sets the \c avgGrade field to \a avgGrade.
 *
 * \param avgGrade The field value to set.
 */
void LapMessage::setAvgGrade(const qint16 avgGrade)
{
    Q_D(LapMessage);
    d->avgGrade = avgGrade;
}
/*!
 * Sets the \c avgPosGrade field to \a avgPosGrade.
 *
 * \param avgPosGrade The field value to set.
 */
void LapMessage::setAvgPosGrade(const qint16 avgPosGrade)
{
    Q_D(LapMessage);
    d->avgPosGrade = avgPosGrade;
}
/*!
 * Sets the \c avgNegGrade field to \a avgNegGrade.
 *
 * \param avgNegGrade The field value to set.
 */
void LapMessage::setAvgNegGrade(const qint16 avgNegGrade)
{
    Q_D(LapMessage);
    d->avgNegGrade = avgNegGrade;
}
/*!
 * Sets the \c maxPosGrade field to \a maxPosGrade.
 *
 * \param maxPosGrade The field value to set.
 */
void LapMessage::setMaxPosGrade(const qint16 maxPosGrade)
{
    Q_D(LapMessage);
    d->maxPosGrade = maxPosGrade;
}
/*!
 * Sets the \c maxNegGrade field to \a maxNegGrade.
 *
 * \param maxNegGrade The field value to set.
 */
void LapMessage::setMaxNegGrade(const qint16 maxNegGrade)
{
    Q_D(LapMessage);
    d->maxNegGrade = maxNegGrade;
}
/*!
 * Sets the \c avgTemperature field to \a avgTemperature.
 *
 * \param avgTemperature The field value to set.
 */
void LapMessage::setAvgTemperature(const qint8 avgTemperature)
{
    Q_D(LapMessage);
    d->avgTemperature = avgTemperature;
}
/*!
 * Sets the \c maxTemperature field to \a maxTemperature.
 *
 * \param maxTemperature The field value to set.
 */
void LapMessage::setMaxTemperature(const qint8 maxTemperature)
{
    Q_D(LapMessage);
    d->maxTemperature = maxTemperature;
}
/*!
 * Sets the \c totalMovingTime field to \a totalMovingTime.
 *
 * \param totalMovingTime The field value to set.
 */
void LapMessage::setTotalMovingTime(const quint32 totalMovingTime)
{
    Q_D(LapMessage);
    d->totalMovingTime = totalMovingTime;
}
/*!
 * Sets the \c avgPosVerticalSpeed field to \a avgPosVerticalSpeed.
 *
 * \param avgPosVerticalSpeed The field value to set.
 */
void LapMessage::setAvgPosVerticalSpeed(const qint16 avgPosVerticalSpeed)
{
    Q_D(LapMessage);
    d->avgPosVerticalSpeed = avgPosVerticalSpeed;
}
/*!
 * Sets the \c avgNegVerticalSpeed field to \a avgNegVerticalSpeed.
 *
 * \param avgNegVerticalSpeed The field value to set.
 */
void LapMessage::setAvgNegVerticalSpeed(const qint16 avgNegVerticalSpeed)
{
    Q_D(LapMessage);
    d->avgNegVerticalSpeed = avgNegVerticalSpeed;
}
/*!
 * Sets the \c maxPosVerticalSpeed field to \a maxPosVerticalSpeed.
 *
 * \param maxPosVerticalSpeed The field value to set.
 */
void LapMessage::setMaxPosVerticalSpeed(const qint16 maxPosVerticalSpeed)
{
    Q_D(LapMessage);
    d->maxPosVerticalSpeed = maxPosVerticalSpeed;
}
/*!
 * Sets the \c maxNegVerticalSpeed field to \a maxNegVerticalSpeed.
 *
 * \param maxNegVerticalSpeed The field value to set.
 */
void LapMessage::setMaxNegVerticalSpeed(const qint16 maxNegVerticalSpeed)
{
    Q_D(LapMessage);
    d->maxNegVerticalSpeed = maxNegVerticalSpeed;
}
/*!
 * Sets the \c timeInHrZone field to \a timeInHrZone.
 *
 * \param timeInHrZone The field value to set.
 */
void LapMessage::setTimeInHrZone(const quint32 timeInHrZone)
{
    Q_D(LapMessage);
    d->timeInHrZone = timeInHrZone;
}
/*!
 * Sets the \c timeInSpeedZone field to \a timeInSpeedZone.
 *
 * \param timeInSpeedZone The field value to set.
 */
void LapMessage::setTimeInSpeedZone(const quint32 timeInSpeedZone)
{
    Q_D(LapMessage);
    d->timeInSpeedZone = timeInSpeedZone;
}
/*!
 * Sets the \c timeInCadenceZone field to \a timeInCadenceZone.
 *
 * \param timeInCadenceZone The field value to set.
 */
void LapMessage::setTimeInCadenceZone(const quint32 timeInCadenceZone)
{
    Q_D(LapMessage);
    d->timeInCadenceZone = timeInCadenceZone;
}
/*!
 * Sets the \c timeInPowerZone field to \a timeInPowerZone.
 *
 * \param timeInPowerZone The field value to set.
 */
void LapMessage::setTimeInPowerZone(const quint32 timeInPowerZone)
{
    Q_D(LapMessage);
    d->timeInPowerZone = timeInPowerZone;
}
/*!
 * Sets the \c repetitionNum field to \a repetitionNum.
 *
 * \param repetitionNum The field value to set.
 */
void LapMessage::setRepetitionNum(const quint16 repetitionNum)
{
    Q_D(LapMessage);
    d->repetitionNum = repetitionNum;
}
/*!
 * Sets the \c minAltitude field to \a minAltitude.
 *
 * \param minAltitude The field value to set.
 */
void LapMessage::setMinAltitude(const quint16 minAltitude)
{
    Q_D(LapMessage);
    d->minAltitude = minAltitude;
}
/*!
 * Sets the \c minHeartRate field to \a minHeartRate.
 *
 * \param minHeartRate The field value to set.
 */
void LapMessage::setMinHeartRate(const quint8 minHeartRate)
{
    Q_D(LapMessage);
    d->minHeartRate = minHeartRate;
}
/*!
 * Sets the \c wktStepIndex field to \a wktStepIndex.
 *
 * \param wktStepIndex The field value to set.
 */
void LapMessage::setWktStepIndex(const MessageIndex wktStepIndex)
{
    Q_D(LapMessage);
    d->wktStepIndex = wktStepIndex;
}
/*!
 * Sets the \c opponentScore field to \a opponentScore.
 *
 * \param opponentScore The field value to set.
 */
void LapMessage::setOpponentScore(const quint16 opponentScore)
{
    Q_D(LapMessage);
    d->opponentScore = opponentScore;
}
/*!
 * Sets the \c strokeCount field to \a strokeCount.
 *
 * \param strokeCount The field value to set.
 */
void LapMessage::setStrokeCount(const quint16 strokeCount)
{
    Q_D(LapMessage);
    d->strokeCount = strokeCount;
}
/*!
 * Sets the \c zoneCount field to \a zoneCount.
 *
 * \param zoneCount The field value to set.
 */
void LapMessage::setZoneCount(const quint16 zoneCount)
{
    Q_D(LapMessage);
    d->zoneCount = zoneCount;
}
/*!
 * Sets the \c avgVerticalOscillation field to \a avgVerticalOscillation.
 *
 * \param avgVerticalOscillation The field value to set.
 */
void LapMessage::setAvgVerticalOscillation(const quint16 avgVerticalOscillation)
{
    Q_D(LapMessage);
    d->avgVerticalOscillation = avgVerticalOscillation;
}
/*!
 * Sets the \c avgStanceTimePercent field to \a avgStanceTimePercent.
 *
 * \param avgStanceTimePercent The field value to set.
 */
void LapMessage::setAvgStanceTimePercent(const quint16 avgStanceTimePercent)
{
    Q_D(LapMessage);
    d->avgStanceTimePercent = avgStanceTimePercent;
}
/*!
 * Sets the \c avgStanceTime field to \a avgStanceTime.
 *
 * \param avgStanceTime The field value to set.
 */
void LapMessage::setAvgStanceTime(const quint16 avgStanceTime)
{
    Q_D(LapMessage);
    d->avgStanceTime = avgStanceTime;
}
/*!
 * Sets the \c avgFractionalCadence field to \a avgFractionalCadence.
 *
 * \param avgFractionalCadence The field value to set.
 */
void LapMessage::setAvgFractionalCadence(const quint8 avgFractionalCadence)
{
    Q_D(LapMessage);
    d->avgFractionalCadence = avgFractionalCadence;
}
/*!
 * Sets the \c maxFractionalCadence field to \a maxFractionalCadence.
 *
 * \param maxFractionalCadence The field value to set.
 */
void LapMessage::setMaxFractionalCadence(const quint8 maxFractionalCadence)
{
    Q_D(LapMessage);
    d->maxFractionalCadence = maxFractionalCadence;
}
/*!
 * Sets the \c totalFractionalCycles field to \a totalFractionalCycles.
 *
 * \param totalFractionalCycles The field value to set.
 */
void LapMessage::setTotalFractionalCycles(const quint8 totalFractionalCycles)
{
    Q_D(LapMessage);
    d->totalFractionalCycles = totalFractionalCycles;
}
/*!
 * Sets the \c playerScore field to \a playerScore.
 *
 * \param playerScore The field value to set.
 */
void LapMessage::setPlayerScore(const quint16 playerScore)
{
    Q_D(LapMessage);
    d->playerScore = playerScore;
}
/*!
 * Sets the \c avgTotalHemoglobinConc field to \a avgTotalHemoglobinConc.
 *
 * \param avgTotalHemoglobinConc The field value to set.
 */
void LapMessage::setAvgTotalHemoglobinConc(const quint16 avgTotalHemoglobinConc)
{
    Q_D(LapMessage);
    d->avgTotalHemoglobinConc = avgTotalHemoglobinConc;
}
/*!
 * Sets the \c minTotalHemoglobinConc field to \a minTotalHemoglobinConc.
 *
 * \param minTotalHemoglobinConc The field value to set.
 */
void LapMessage::setMinTotalHemoglobinConc(const quint16 minTotalHemoglobinConc)
{
    Q_D(LapMessage);
    d->minTotalHemoglobinConc = minTotalHemoglobinConc;
}
/*!
 * Sets the \c maxTotalHemoglobinConc field to \a maxTotalHemoglobinConc.
 *
 * \param maxTotalHemoglobinConc The field value to set.
 */
void LapMessage::setMaxTotalHemoglobinConc(const quint16 maxTotalHemoglobinConc)
{
    Q_D(LapMessage);
    d->maxTotalHemoglobinConc = maxTotalHemoglobinConc;
}
/*!
 * Sets the \c avgSaturatedHemoglobinPercent field to \a avgSaturatedHemoglobinPercent.
 *
 * \param avgSaturatedHemoglobinPercent The field value to set.
 */
void LapMessage::setAvgSaturatedHemoglobinPercent(const quint16 avgSaturatedHemoglobinPercent)
{
    Q_D(LapMessage);
    d->avgSaturatedHemoglobinPercent = avgSaturatedHemoglobinPercent;
}
/*!
 * Sets the \c minSaturatedHemoglobinPercent field to \a minSaturatedHemoglobinPercent.
 *
 * \param minSaturatedHemoglobinPercent The field value to set.
 */
void LapMessage::setMinSaturatedHemoglobinPercent(const quint16 minSaturatedHemoglobinPercent)
{
    Q_D(LapMessage);
    d->minSaturatedHemoglobinPercent = minSaturatedHemoglobinPercent;
}
/*!
 * Sets the \c maxSaturatedHemoglobinPercent field to \a maxSaturatedHemoglobinPercent.
 *
 * \param maxSaturatedHemoglobinPercent The field value to set.
 */
void LapMessage::setMaxSaturatedHemoglobinPercent(const quint16 maxSaturatedHemoglobinPercent)
{
    Q_D(LapMessage);
    d->maxSaturatedHemoglobinPercent = maxSaturatedHemoglobinPercent;
}
/*!
 * Sets the \c avgLeftTorqueEffectiveness field to \a avgLeftTorqueEffectiveness.
 *
 * \param avgLeftTorqueEffectiveness The field value to set.
 */
void LapMessage::setAvgLeftTorqueEffectiveness(const quint8 avgLeftTorqueEffectiveness)
{
    Q_D(LapMessage);
    d->avgLeftTorqueEffectiveness = avgLeftTorqueEffectiveness;
}
/*!
 * Sets the \c avgRightTorqueEffectiveness field to \a avgRightTorqueEffectiveness.
 *
 * \param avgRightTorqueEffectiveness The field value to set.
 */
void LapMessage::setAvgRightTorqueEffectiveness(const quint8 avgRightTorqueEffectiveness)
{
    Q_D(LapMessage);
    d->avgRightTorqueEffectiveness = avgRightTorqueEffectiveness;
}
/*!
 * Sets the \c avgLeftPedalSmoothness field to \a avgLeftPedalSmoothness.
 *
 * \param avgLeftPedalSmoothness The field value to set.
 */
void LapMessage::setAvgLeftPedalSmoothness(const quint8 avgLeftPedalSmoothness)
{
    Q_D(LapMessage);
    d->avgLeftPedalSmoothness = avgLeftPedalSmoothness;
}
/*!
 * Sets the \c avgRightPedalSmoothness field to \a avgRightPedalSmoothness.
 *
 * \param avgRightPedalSmoothness The field value to set.
 */
void LapMessage::setAvgRightPedalSmoothness(const quint8 avgRightPedalSmoothness)
{
    Q_D(LapMessage);
    d->avgRightPedalSmoothness = avgRightPedalSmoothness;
}
/*!
 * Sets the \c avgCombinedPedalSmoothness field to \a avgCombinedPedalSmoothness.
 *
 * \param avgCombinedPedalSmoothness The field value to set.
 */
void LapMessage::setAvgCombinedPedalSmoothness(const quint8 avgCombinedPedalSmoothness)
{
    Q_D(LapMessage);
    d->avgCombinedPedalSmoothness = avgCombinedPedalSmoothness;
}
/*!
 * Sets the \c timeStanding field to \a timeStanding.
 *
 * \param timeStanding The field value to set.
 */
void LapMessage::setTimeStanding(const quint32 timeStanding)
{
    Q_D(LapMessage);
    d->timeStanding = timeStanding;
}
/*!
 * Sets the \c standCount field to \a standCount.
 *
 * \param standCount The field value to set.
 */
void LapMessage::setStandCount(const quint16 standCount)
{
    Q_D(LapMessage);
    d->standCount = standCount;
}
/*!
 * Sets the \c avgLeftPco field to \a avgLeftPco.
 *
 * \param avgLeftPco The field value to set.
 */
void LapMessage::setAvgLeftPco(const qint8 avgLeftPco)
{
    Q_D(LapMessage);
    d->avgLeftPco = avgLeftPco;
}
/*!
 * Sets the \c avgRightPco field to \a avgRightPco.
 *
 * \param avgRightPco The field value to set.
 */
void LapMessage::setAvgRightPco(const qint8 avgRightPco)
{
    Q_D(LapMessage);
    d->avgRightPco = avgRightPco;
}
/*!
 * Sets the \c avgLeftPowerPhase field to \a avgLeftPowerPhase.
 *
 * \param avgLeftPowerPhase The field value to set.
 */
void LapMessage::setAvgLeftPowerPhase(const quint8 avgLeftPowerPhase)
{
    Q_D(LapMessage);
    d->avgLeftPowerPhase = avgLeftPowerPhase;
}
/*!
 * Sets the \c avgLeftPowerPhasePeak field to \a avgLeftPowerPhasePeak.
 *
 * \param avgLeftPowerPhasePeak The field value to set.
 */
void LapMessage::setAvgLeftPowerPhasePeak(const quint8 avgLeftPowerPhasePeak)
{
    Q_D(LapMessage);
    d->avgLeftPowerPhasePeak = avgLeftPowerPhasePeak;
}
/*!
 * Sets the \c avgRightPowerPhase field to \a avgRightPowerPhase.
 *
 * \param avgRightPowerPhase The field value to set.
 */
void LapMessage::setAvgRightPowerPhase(const quint8 avgRightPowerPhase)
{
    Q_D(LapMessage);
    d->avgRightPowerPhase = avgRightPowerPhase;
}
/*!
 * Sets the \c avgRightPowerPhasePeak field to \a avgRightPowerPhasePeak.
 *
 * \param avgRightPowerPhasePeak The field value to set.
 */
void LapMessage::setAvgRightPowerPhasePeak(const quint8 avgRightPowerPhasePeak)
{
    Q_D(LapMessage);
    d->avgRightPowerPhasePeak = avgRightPowerPhasePeak;
}
/*!
 * Sets the \c avgPowerPosition field to \a avgPowerPosition.
 *
 * \param avgPowerPosition The field value to set.
 */
void LapMessage::setAvgPowerPosition(const quint16 avgPowerPosition)
{
    Q_D(LapMessage);
    d->avgPowerPosition = avgPowerPosition;
}
/*!
 * Sets the \c maxPowerPosition field to \a maxPowerPosition.
 *
 * \param maxPowerPosition The field value to set.
 */
void LapMessage::setMaxPowerPosition(const quint16 maxPowerPosition)
{
    Q_D(LapMessage);
    d->maxPowerPosition = maxPowerPosition;
}
/*!
 * Sets the \c avgCadencePosition field to \a avgCadencePosition.
 *
 * \param avgCadencePosition The field value to set.
 */
void LapMessage::setAvgCadencePosition(const quint8 avgCadencePosition)
{
    Q_D(LapMessage);
    d->avgCadencePosition = avgCadencePosition;
}
/*!
 * Sets the \c maxCadencePosition field to \a maxCadencePosition.
 *
 * \param maxCadencePosition The field value to set.
 */
void LapMessage::setMaxCadencePosition(const quint8 maxCadencePosition)
{
    Q_D(LapMessage);
    d->maxCadencePosition = maxCadencePosition;
}
/*!
 * Sets the \c enhancedAvgSpeed field to \a enhancedAvgSpeed.
 *
 * \param enhancedAvgSpeed The field value to set.
 */
void LapMessage::setEnhancedAvgSpeed(const quint32 enhancedAvgSpeed)
{
    Q_D(LapMessage);
    d->enhancedAvgSpeed = enhancedAvgSpeed;
}
/*!
 * Sets the \c enhancedMaxSpeed field to \a enhancedMaxSpeed.
 *
 * \param enhancedMaxSpeed The field value to set.
 */
void LapMessage::setEnhancedMaxSpeed(const quint32 enhancedMaxSpeed)
{
    Q_D(LapMessage);
    d->enhancedMaxSpeed = enhancedMaxSpeed;
}
/*!
 * Sets the \c enhancedAvgAltitude field to \a enhancedAvgAltitude.
 *
 * \param enhancedAvgAltitude The field value to set.
 */
void LapMessage::setEnhancedAvgAltitude(const quint32 enhancedAvgAltitude)
{
    Q_D(LapMessage);
    d->enhancedAvgAltitude = enhancedAvgAltitude;
}
/*!
 * Sets the \c enhancedMinAltitude field to \a enhancedMinAltitude.
 *
 * \param enhancedMinAltitude The field value to set.
 */
void LapMessage::setEnhancedMinAltitude(const quint32 enhancedMinAltitude)
{
    Q_D(LapMessage);
    d->enhancedMinAltitude = enhancedMinAltitude;
}
/*!
 * Sets the \c enhancedMaxAltitude field to \a enhancedMaxAltitude.
 *
 * \param enhancedMaxAltitude The field value to set.
 */
void LapMessage::setEnhancedMaxAltitude(const quint32 enhancedMaxAltitude)
{
    Q_D(LapMessage);
    d->enhancedMaxAltitude = enhancedMaxAltitude;
}
/*!
 * Sets the \c avgLevMotorPower field to \a avgLevMotorPower.
 *
 * \param avgLevMotorPower The field value to set.
 */
void LapMessage::setAvgLevMotorPower(const quint16 avgLevMotorPower)
{
    Q_D(LapMessage);
    d->avgLevMotorPower = avgLevMotorPower;
}
/*!
 * Sets the \c maxLevMotorPower field to \a maxLevMotorPower.
 *
 * \param maxLevMotorPower The field value to set.
 */
void LapMessage::setMaxLevMotorPower(const quint16 maxLevMotorPower)
{
    Q_D(LapMessage);
    d->maxLevMotorPower = maxLevMotorPower;
}
/*!
 * Sets the \c levBatteryConsumption field to \a levBatteryConsumption.
 *
 * \param levBatteryConsumption The field value to set.
 */
void LapMessage::setLevBatteryConsumption(const quint8 levBatteryConsumption)
{
    Q_D(LapMessage);
    d->levBatteryConsumption = levBatteryConsumption;
}
/*!
 * Sets the \c avgVerticalRatio field to \a avgVerticalRatio.
 *
 * \param avgVerticalRatio The field value to set.
 */
void LapMessage::setAvgVerticalRatio(const quint16 avgVerticalRatio)
{
    Q_D(LapMessage);
    d->avgVerticalRatio = avgVerticalRatio;
}
/*!
 * Sets the \c avgStanceTimeBalance field to \a avgStanceTimeBalance.
 *
 * \param avgStanceTimeBalance The field value to set.
 */
void LapMessage::setAvgStanceTimeBalance(const quint16 avgStanceTimeBalance)
{
    Q_D(LapMessage);
    d->avgStanceTimeBalance = avgStanceTimeBalance;
}
/*!
 * Sets the \c avgStepLength field to \a avgStepLength.
 *
 * \param avgStepLength The field value to set.
 */
void LapMessage::setAvgStepLength(const quint16 avgStepLength)
{
    Q_D(LapMessage);
    d->avgStepLength = avgStepLength;
}
/*!
 * Sets the \c avgVam field to \a avgVam.
 *
 * \param avgVam The field value to set.
 */
void LapMessage::setAvgVam(const quint16 avgVam)
{
    Q_D(LapMessage);
    d->avgVam = avgVam;
}
/*!
 * Sets the \c totalGrit field to \a totalGrit.
 *
 * \param totalGrit The field value to set.
 */
void LapMessage::setTotalGrit(const float totalGrit)
{
    Q_D(LapMessage);
    d->totalGrit = totalGrit;
}
/*!
 * Sets the \c totalFlow field to \a totalFlow.
 *
 * \param totalFlow The field value to set.
 */
void LapMessage::setTotalFlow(const float totalFlow)
{
    Q_D(LapMessage);
    d->totalFlow = totalFlow;
}
/*!
 * Sets the \c jumpCount field to \a jumpCount.
 *
 * \param jumpCount The field value to set.
 */
void LapMessage::setJumpCount(const quint16 jumpCount)
{
    Q_D(LapMessage);
    d->jumpCount = jumpCount;
}
/*!
 * Sets the \c avgGrit field to \a avgGrit.
 *
 * \param avgGrit The field value to set.
 */
void LapMessage::setAvgGrit(const float avgGrit)
{
    Q_D(LapMessage);
    d->avgGrit = avgGrit;
}
/*!
 * Sets the \c avgFlow field to \a avgFlow.
 *
 * \param avgFlow The field value to set.
 */
void LapMessage::setAvgFlow(const float avgFlow)
{
    Q_D(LapMessage);
    d->avgFlow = avgFlow;
}
/*!
 * Sets the \c totalFractionalAscent field to \a totalFractionalAscent.
 *
 * \param totalFractionalAscent The field value to set.
 */
void LapMessage::setTotalFractionalAscent(const quint8 totalFractionalAscent)
{
    Q_D(LapMessage);
    d->totalFractionalAscent = totalFractionalAscent;
}
/*!
 * Sets the \c totalFractionalDescent field to \a totalFractionalDescent.
 *
 * \param totalFractionalDescent The field value to set.
 */
void LapMessage::setTotalFractionalDescent(const quint8 totalFractionalDescent)
{
    Q_D(LapMessage);
    d->totalFractionalDescent = totalFractionalDescent;
}
/*!
 * Sets the \c avgCoreTemperature field to \a avgCoreTemperature.
 *
 * \param avgCoreTemperature The field value to set.
 */
void LapMessage::setAvgCoreTemperature(const quint16 avgCoreTemperature)
{
    Q_D(LapMessage);
    d->avgCoreTemperature = avgCoreTemperature;
}
/*!
 * Sets the \c minCoreTemperature field to \a minCoreTemperature.
 *
 * \param minCoreTemperature The field value to set.
 */
void LapMessage::setMinCoreTemperature(const quint16 minCoreTemperature)
{
    Q_D(LapMessage);
    d->minCoreTemperature = minCoreTemperature;
}
/*!
 * Sets the \c maxCoreTemperature field to \a maxCoreTemperature.
 *
 * \param maxCoreTemperature The field value to set.
 */
void LapMessage::setMaxCoreTemperature(const quint16 maxCoreTemperature)
{
    Q_D(LapMessage);
    d->maxCoreTemperature = maxCoreTemperature;
}

/*!
 * \internal
 *
 * \class LapMessagePrivate
 *
 * The LapMessagePrivate class provides private implementation for the LapMessage.
 *
 * \sa LapMessage
 */

/*!
 * \internal
 *
 * Constructs a LapMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
LapMessagePrivate::LapMessagePrivate(LapMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the LapMessagePrivate object.
 */
LapMessagePrivate::~LapMessagePrivate()
{

}

bool LapMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:lap.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 253: // See Profile.xlsx::Messages:lap.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:lap.event
        if (!verify(data, baseType, 1, FitBaseType::Enum, "lap.event")) return false;
        this->event = static_cast<Event>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:lap.eventType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "lap.eventType")) return false;
        this->eventType = static_cast<EventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:lap.startTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.startTime")) return false;
        this->startTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:lap.startPositionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "lap.startPositionLat")) return false;
        this->startPositionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:lap.startPositionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "lap.startPositionLong")) return false;
        this->startPositionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:lap.endPositionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "lap.endPositionLat")) return false;
        this->endPositionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:lap.endPositionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "lap.endPositionLong")) return false;
        this->endPositionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:lap.totalElapsedTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.totalElapsedTime")) return false;
        this->totalElapsedTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 8: // See Profile.xlsx::Messages:lap.totalTimerTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.totalTimerTime")) return false;
        this->totalTimerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 9: // See Profile.xlsx::Messages:lap.totalDistance
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.totalDistance")) return false;
        this->totalDistance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:lap.totalCycles
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.totalCycles")) return false;
        this->totalCycles = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 11: // See Profile.xlsx::Messages:lap.totalCalories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.totalCalories")) return false;
        this->totalCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 12: // See Profile.xlsx::Messages:lap.totalFatCalories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.totalFatCalories")) return false;
        this->totalFatCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 13: // See Profile.xlsx::Messages:lap.avgSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgSpeed")) return false;
        this->avgSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 14: // See Profile.xlsx::Messages:lap.maxSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.maxSpeed")) return false;
        this->maxSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 15: // See Profile.xlsx::Messages:lap.avgHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgHeartRate")) return false;
        this->avgHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 16: // See Profile.xlsx::Messages:lap.maxHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.maxHeartRate")) return false;
        this->maxHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:lap.avgCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgCadence")) return false;
        this->avgCadence = static_cast<quint8>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:lap.maxCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.maxCadence")) return false;
        this->maxCadence = static_cast<quint8>(data.at(0));
        break;
    case 19: // See Profile.xlsx::Messages:lap.avgPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgPower")) return false;
        this->avgPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 20: // See Profile.xlsx::Messages:lap.maxPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.maxPower")) return false;
        this->maxPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 21: // See Profile.xlsx::Messages:lap.totalAscent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.totalAscent")) return false;
        this->totalAscent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 22: // See Profile.xlsx::Messages:lap.totalDescent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.totalDescent")) return false;
        this->totalDescent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 23: // See Profile.xlsx::Messages:lap.intensity
        if (!verify(data, baseType, 1, FitBaseType::Enum, "lap.intensity")) return false;
        this->intensity = static_cast<Intensity>(data.at(0));
        break;
    case 24: // See Profile.xlsx::Messages:lap.lapTrigger
        if (!verify(data, baseType, 1, FitBaseType::Enum, "lap.lapTrigger")) return false;
        this->lapTrigger = static_cast<LapTrigger>(data.at(0));
        break;
    case 25: // See Profile.xlsx::Messages:lap.sport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "lap.sport")) return false;
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 26: // See Profile.xlsx::Messages:lap.eventGroup
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.eventGroup")) return false;
        this->eventGroup = static_cast<quint8>(data.at(0));
        break;
    case 32: // See Profile.xlsx::Messages:lap.numLengths
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.numLengths")) return false;
        this->numLengths = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 33: // See Profile.xlsx::Messages:lap.normalizedPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.normalizedPower")) return false;
        this->normalizedPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 34: // See Profile.xlsx::Messages:lap.leftRightBalance
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.leftRightBalance")) return false;
        this->leftRightBalance = static_cast<LeftRightBalance100>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 35: // See Profile.xlsx::Messages:lap.firstLengthIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.firstLengthIndex")) return false;
        this->firstLengthIndex = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 37: // See Profile.xlsx::Messages:lap.avgStrokeDistance
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgStrokeDistance")) return false;
        this->avgStrokeDistance = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 38: // See Profile.xlsx::Messages:lap.swimStroke
        if (!verify(data, baseType, 1, FitBaseType::Enum, "lap.swimStroke")) return false;
        this->swimStroke = static_cast<SwimStroke>(data.at(0));
        break;
    case 39: // See Profile.xlsx::Messages:lap.subSport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "lap.subSport")) return false;
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 40: // See Profile.xlsx::Messages:lap.numActiveLengths
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.numActiveLengths")) return false;
        this->numActiveLengths = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 41: // See Profile.xlsx::Messages:lap.totalWork
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.totalWork")) return false;
        this->totalWork = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 42: // See Profile.xlsx::Messages:lap.avgAltitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgAltitude")) return false;
        this->avgAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 43: // See Profile.xlsx::Messages:lap.maxAltitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.maxAltitude")) return false;
        this->maxAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 44: // See Profile.xlsx::Messages:lap.gpsAccuracy
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.gpsAccuracy")) return false;
        this->gpsAccuracy = static_cast<quint8>(data.at(0));
        break;
    case 45: // See Profile.xlsx::Messages:lap.avgGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "lap.avgGrade")) return false;
        this->avgGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 46: // See Profile.xlsx::Messages:lap.avgPosGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "lap.avgPosGrade")) return false;
        this->avgPosGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 47: // See Profile.xlsx::Messages:lap.avgNegGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "lap.avgNegGrade")) return false;
        this->avgNegGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 48: // See Profile.xlsx::Messages:lap.maxPosGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "lap.maxPosGrade")) return false;
        this->maxPosGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 49: // See Profile.xlsx::Messages:lap.maxNegGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "lap.maxNegGrade")) return false;
        this->maxNegGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 50: // See Profile.xlsx::Messages:lap.avgTemperature
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "lap.avgTemperature")) return false;
        this->avgTemperature = static_cast<qint8>(data.at(0));
        break;
    case 51: // See Profile.xlsx::Messages:lap.maxTemperature
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "lap.maxTemperature")) return false;
        this->maxTemperature = static_cast<qint8>(data.at(0));
        break;
    case 52: // See Profile.xlsx::Messages:lap.totalMovingTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.totalMovingTime")) return false;
        this->totalMovingTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 53: // See Profile.xlsx::Messages:lap.avgPosVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "lap.avgPosVerticalSpeed")) return false;
        this->avgPosVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 54: // See Profile.xlsx::Messages:lap.avgNegVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "lap.avgNegVerticalSpeed")) return false;
        this->avgNegVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 55: // See Profile.xlsx::Messages:lap.maxPosVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "lap.maxPosVerticalSpeed")) return false;
        this->maxPosVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 56: // See Profile.xlsx::Messages:lap.maxNegVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "lap.maxNegVerticalSpeed")) return false;
        this->maxNegVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 57: // See Profile.xlsx::Messages:lap.timeInHrZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.timeInHrZone")) return false;
        this->timeInHrZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 58: // See Profile.xlsx::Messages:lap.timeInSpeedZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.timeInSpeedZone")) return false;
        this->timeInSpeedZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 59: // See Profile.xlsx::Messages:lap.timeInCadenceZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.timeInCadenceZone")) return false;
        this->timeInCadenceZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 60: // See Profile.xlsx::Messages:lap.timeInPowerZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.timeInPowerZone")) return false;
        this->timeInPowerZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 61: // See Profile.xlsx::Messages:lap.repetitionNum
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.repetitionNum")) return false;
        this->repetitionNum = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 62: // See Profile.xlsx::Messages:lap.minAltitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.minAltitude")) return false;
        this->minAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 63: // See Profile.xlsx::Messages:lap.minHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.minHeartRate")) return false;
        this->minHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 71: // See Profile.xlsx::Messages:lap.wktStepIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.wktStepIndex")) return false;
        this->wktStepIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 74: // See Profile.xlsx::Messages:lap.opponentScore
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.opponentScore")) return false;
        this->opponentScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 75: // See Profile.xlsx::Messages:lap.strokeCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.strokeCount")) return false;
        this->strokeCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 76: // See Profile.xlsx::Messages:lap.zoneCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.zoneCount")) return false;
        this->zoneCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 77: // See Profile.xlsx::Messages:lap.avgVerticalOscillation
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgVerticalOscillation")) return false;
        this->avgVerticalOscillation = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 78: // See Profile.xlsx::Messages:lap.avgStanceTimePercent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgStanceTimePercent")) return false;
        this->avgStanceTimePercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 79: // See Profile.xlsx::Messages:lap.avgStanceTime
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgStanceTime")) return false;
        this->avgStanceTime = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 80: // See Profile.xlsx::Messages:lap.avgFractionalCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgFractionalCadence")) return false;
        this->avgFractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 81: // See Profile.xlsx::Messages:lap.maxFractionalCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.maxFractionalCadence")) return false;
        this->maxFractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 82: // See Profile.xlsx::Messages:lap.totalFractionalCycles
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.totalFractionalCycles")) return false;
        this->totalFractionalCycles = static_cast<quint8>(data.at(0));
        break;
    case 83: // See Profile.xlsx::Messages:lap.playerScore
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.playerScore")) return false;
        this->playerScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 84: // See Profile.xlsx::Messages:lap.avgTotalHemoglobinConc
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgTotalHemoglobinConc")) return false;
        this->avgTotalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 85: // See Profile.xlsx::Messages:lap.minTotalHemoglobinConc
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.minTotalHemoglobinConc")) return false;
        this->minTotalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 86: // See Profile.xlsx::Messages:lap.maxTotalHemoglobinConc
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.maxTotalHemoglobinConc")) return false;
        this->maxTotalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 87: // See Profile.xlsx::Messages:lap.avgSaturatedHemoglobinPercent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgSaturatedHemoglobinPercent")) return false;
        this->avgSaturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 88: // See Profile.xlsx::Messages:lap.minSaturatedHemoglobinPercent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.minSaturatedHemoglobinPercent")) return false;
        this->minSaturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 89: // See Profile.xlsx::Messages:lap.maxSaturatedHemoglobinPercent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.maxSaturatedHemoglobinPercent")) return false;
        this->maxSaturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 91: // See Profile.xlsx::Messages:lap.avgLeftTorqueEffectiveness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgLeftTorqueEffectiveness")) return false;
        this->avgLeftTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 92: // See Profile.xlsx::Messages:lap.avgRightTorqueEffectiveness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgRightTorqueEffectiveness")) return false;
        this->avgRightTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 93: // See Profile.xlsx::Messages:lap.avgLeftPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgLeftPedalSmoothness")) return false;
        this->avgLeftPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 94: // See Profile.xlsx::Messages:lap.avgRightPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgRightPedalSmoothness")) return false;
        this->avgRightPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 95: // See Profile.xlsx::Messages:lap.avgCombinedPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgCombinedPedalSmoothness")) return false;
        this->avgCombinedPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 98: // See Profile.xlsx::Messages:lap.timeStanding
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.timeStanding")) return false;
        this->timeStanding = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 99: // See Profile.xlsx::Messages:lap.standCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.standCount")) return false;
        this->standCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 100: // See Profile.xlsx::Messages:lap.avgLeftPco
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "lap.avgLeftPco")) return false;
        this->avgLeftPco = static_cast<qint8>(data.at(0));
        break;
    case 101: // See Profile.xlsx::Messages:lap.avgRightPco
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "lap.avgRightPco")) return false;
        this->avgRightPco = static_cast<qint8>(data.at(0));
        break;
    case 102: // See Profile.xlsx::Messages:lap.avgLeftPowerPhase
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgLeftPowerPhase")) return false;
        this->avgLeftPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 103: // See Profile.xlsx::Messages:lap.avgLeftPowerPhasePeak
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgLeftPowerPhasePeak")) return false;
        this->avgLeftPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 104: // See Profile.xlsx::Messages:lap.avgRightPowerPhase
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgRightPowerPhase")) return false;
        this->avgRightPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 105: // See Profile.xlsx::Messages:lap.avgRightPowerPhasePeak
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgRightPowerPhasePeak")) return false;
        this->avgRightPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 106: // See Profile.xlsx::Messages:lap.avgPowerPosition
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgPowerPosition")) return false;
        this->avgPowerPosition = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 107: // See Profile.xlsx::Messages:lap.maxPowerPosition
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.maxPowerPosition")) return false;
        this->maxPowerPosition = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 108: // See Profile.xlsx::Messages:lap.avgCadencePosition
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.avgCadencePosition")) return false;
        this->avgCadencePosition = static_cast<quint8>(data.at(0));
        break;
    case 109: // See Profile.xlsx::Messages:lap.maxCadencePosition
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.maxCadencePosition")) return false;
        this->maxCadencePosition = static_cast<quint8>(data.at(0));
        break;
    case 110: // See Profile.xlsx::Messages:lap.enhancedAvgSpeed
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.enhancedAvgSpeed")) return false;
        this->enhancedAvgSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 111: // See Profile.xlsx::Messages:lap.enhancedMaxSpeed
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.enhancedMaxSpeed")) return false;
        this->enhancedMaxSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 112: // See Profile.xlsx::Messages:lap.enhancedAvgAltitude
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.enhancedAvgAltitude")) return false;
        this->enhancedAvgAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 113: // See Profile.xlsx::Messages:lap.enhancedMinAltitude
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.enhancedMinAltitude")) return false;
        this->enhancedMinAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 114: // See Profile.xlsx::Messages:lap.enhancedMaxAltitude
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "lap.enhancedMaxAltitude")) return false;
        this->enhancedMaxAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 115: // See Profile.xlsx::Messages:lap.avgLevMotorPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgLevMotorPower")) return false;
        this->avgLevMotorPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 116: // See Profile.xlsx::Messages:lap.maxLevMotorPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.maxLevMotorPower")) return false;
        this->maxLevMotorPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 117: // See Profile.xlsx::Messages:lap.levBatteryConsumption
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.levBatteryConsumption")) return false;
        this->levBatteryConsumption = static_cast<quint8>(data.at(0));
        break;
    case 118: // See Profile.xlsx::Messages:lap.avgVerticalRatio
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgVerticalRatio")) return false;
        this->avgVerticalRatio = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 119: // See Profile.xlsx::Messages:lap.avgStanceTimeBalance
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgStanceTimeBalance")) return false;
        this->avgStanceTimeBalance = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 120: // See Profile.xlsx::Messages:lap.avgStepLength
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgStepLength")) return false;
        this->avgStepLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 121: // See Profile.xlsx::Messages:lap.avgVam
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgVam")) return false;
        this->avgVam = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 149: // See Profile.xlsx::Messages:lap.totalGrit
        if (!verify(data, baseType, 4, FitBaseType::Float32, "lap.totalGrit")) return false;
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
    case 150: // See Profile.xlsx::Messages:lap.totalFlow
        if (!verify(data, baseType, 4, FitBaseType::Float32, "lap.totalFlow")) return false;
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
    case 151: // See Profile.xlsx::Messages:lap.jumpCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.jumpCount")) return false;
        this->jumpCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 153: // See Profile.xlsx::Messages:lap.avgGrit
        if (!verify(data, baseType, 4, FitBaseType::Float32, "lap.avgGrit")) return false;
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
    case 154: // See Profile.xlsx::Messages:lap.avgFlow
        if (!verify(data, baseType, 4, FitBaseType::Float32, "lap.avgFlow")) return false;
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
    case 156: // See Profile.xlsx::Messages:lap.totalFractionalAscent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.totalFractionalAscent")) return false;
        this->totalFractionalAscent = static_cast<quint8>(data.at(0));
        break;
    case 157: // See Profile.xlsx::Messages:lap.totalFractionalDescent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "lap.totalFractionalDescent")) return false;
        this->totalFractionalDescent = static_cast<quint8>(data.at(0));
        break;
    case 158: // See Profile.xlsx::Messages:lap.avgCoreTemperature
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.avgCoreTemperature")) return false;
        this->avgCoreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 159: // See Profile.xlsx::Messages:lap.minCoreTemperature
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.minCoreTemperature")) return false;
        this->minCoreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 160: // See Profile.xlsx::Messages:lap.maxCoreTemperature
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "lap.maxCoreTemperature")) return false;
        this->maxCoreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "ignoring unknown lap message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

QTFIT_END_NAMESPACE
