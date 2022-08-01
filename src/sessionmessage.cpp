// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the SessionMessage, and SessionMessagePrivate classes.
 */

#include <qtfit/sessionmessage.h>
#include "sessionmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class SessionMessage
 *
 * The SessionMessage class represents a FIT SessionMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a SessionMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SessionMessage::SessionMessage() : AbstractDataMessage(new SessionMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a SessionMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
SessionMessage::SessionMessage(SessionMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the SessionMessage data message's \c messageIndex field's current value.
 *
 * Selected bit is set for the current session.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex SessionMessage::messageIndex() const
{
    Q_D(const SessionMessage);
    return d->messageIndex;
}

/*!
 * Returns the SessionMessage data message's \c timestamp field's current value.
 *
 * Sesson end time.
 *
 * \return the \c timestamp field value.
 */
DateTime SessionMessage::timestamp() const
{
    Q_D(const SessionMessage);
    return d->timestamp;
}

/*!
 * Returns the SessionMessage data message's \c event field's current value.
 *
 * session
 *
 * \return the \c event field value.
 */
Event SessionMessage::event() const
{
    Q_D(const SessionMessage);
    return d->event;
}

/*!
 * Returns the SessionMessage data message's \c eventType field's current value.
 *
 * stop
 *
 * \return the \c eventType field value.
 */
EventType SessionMessage::eventType() const
{
    Q_D(const SessionMessage);
    return d->eventType;
}

/*!
 * Returns the SessionMessage data message's \c startTime field's current value.
 *
 * \return the \c startTime field value.
 */
DateTime SessionMessage::startTime() const
{
    Q_D(const SessionMessage);
    return d->startTime;
}

/*!
 * Returns the SessionMessage data message's \c startPositionLat field's current value.
 *
 * \return the \c startPositionLat field value.
 */
qint32 SessionMessage::startPositionLat() const
{
    Q_D(const SessionMessage);
    return d->startPositionLat;
}

/*!
 * Returns the SessionMessage data message's \c startPositionLong field's current value.
 *
 * \return the \c startPositionLong field value.
 */
qint32 SessionMessage::startPositionLong() const
{
    Q_D(const SessionMessage);
    return d->startPositionLong;
}

/*!
 * Returns the SessionMessage data message's \c sport field's current value.
 *
 * \return the \c sport field value.
 */
Sport SessionMessage::sport() const
{
    Q_D(const SessionMessage);
    return d->sport;
}

/*!
 * Returns the SessionMessage data message's \c subSport field's current value.
 *
 * \return the \c subSport field value.
 */
SubSport SessionMessage::subSport() const
{
    Q_D(const SessionMessage);
    return d->subSport;
}

/*!
 * Returns the SessionMessage data message's \c totalElapsedTime field's current value.
 *
 * Time (includes pauses)
 *
 * \return the \c totalElapsedTime field value.
 */
quint32 SessionMessage::totalElapsedTime() const
{
    Q_D(const SessionMessage);
    return d->totalElapsedTime;
}

/*!
 * Returns the SessionMessage data message's \c totalTimerTime field's current value.
 *
 * Timer Time (excludes pauses)
 *
 * \return the \c totalTimerTime field value.
 */
quint32 SessionMessage::totalTimerTime() const
{
    Q_D(const SessionMessage);
    return d->totalTimerTime;
}

/*!
 * Returns the SessionMessage data message's \c totalDistance field's current value.
 *
 * \return the \c totalDistance field value.
 */
quint32 SessionMessage::totalDistance() const
{
    Q_D(const SessionMessage);
    return d->totalDistance;
}

/*!
 * Returns the SessionMessage data message's \c totalCycles field's current value.
 *
 * \return the \c totalCycles field value.
 */
quint32 SessionMessage::totalCycles() const
{
    Q_D(const SessionMessage);
    return d->totalCycles;
}

/*!
 * Returns the SessionMessage data message's \c totalCalories field's current value.
 *
 * \return the \c totalCalories field value.
 */
quint16 SessionMessage::totalCalories() const
{
    Q_D(const SessionMessage);
    return d->totalCalories;
}

/*!
 * Returns the SessionMessage data message's \c totalFatCalories field's current value.
 *
 * \return the \c totalFatCalories field value.
 */
quint16 SessionMessage::totalFatCalories() const
{
    Q_D(const SessionMessage);
    return d->totalFatCalories;
}

/*!
 * Returns the SessionMessage data message's \c avgSpeed field's current value.
 *
 * total_distance / total_timer_time
 *
 * \return the \c avgSpeed field value.
 */
quint16 SessionMessage::avgSpeed() const
{
    Q_D(const SessionMessage);
    return d->avgSpeed;
}

/*!
 * Returns the SessionMessage data message's \c maxSpeed field's current value.
 *
 * \return the \c maxSpeed field value.
 */
quint16 SessionMessage::maxSpeed() const
{
    Q_D(const SessionMessage);
    return d->maxSpeed;
}

/*!
 * Returns the SessionMessage data message's \c avgHeartRate field's current value.
 *
 * average heart rate (excludes pause time)
 *
 * \return the \c avgHeartRate field value.
 */
quint8 SessionMessage::avgHeartRate() const
{
    Q_D(const SessionMessage);
    return d->avgHeartRate;
}

/*!
 * Returns the SessionMessage data message's \c maxHeartRate field's current value.
 *
 * \return the \c maxHeartRate field value.
 */
quint8 SessionMessage::maxHeartRate() const
{
    Q_D(const SessionMessage);
    return d->maxHeartRate;
}

/*!
 * Returns the SessionMessage data message's \c avgCadence field's current value.
 *
 * total_cycles / total_timer_time if non_zero_avg_cadence otherwise total_cycles /
 * total_elapsed_time
 *
 * \return the \c avgCadence field value.
 */
quint8 SessionMessage::avgCadence() const
{
    Q_D(const SessionMessage);
    return d->avgCadence;
}

/*!
 * Returns the SessionMessage data message's \c maxCadence field's current value.
 *
 * \return the \c maxCadence field value.
 */
quint8 SessionMessage::maxCadence() const
{
    Q_D(const SessionMessage);
    return d->maxCadence;
}

/*!
 * Returns the SessionMessage data message's \c avgPower field's current value.
 *
 * total_power / total_timer_time if non_zero_avg_power otherwise total_power /
 * total_elapsed_time
 *
 * \return the \c avgPower field value.
 */
quint16 SessionMessage::avgPower() const
{
    Q_D(const SessionMessage);
    return d->avgPower;
}

/*!
 * Returns the SessionMessage data message's \c maxPower field's current value.
 *
 * \return the \c maxPower field value.
 */
quint16 SessionMessage::maxPower() const
{
    Q_D(const SessionMessage);
    return d->maxPower;
}

/*!
 * Returns the SessionMessage data message's \c totalAscent field's current value.
 *
 * \return the \c totalAscent field value.
 */
quint16 SessionMessage::totalAscent() const
{
    Q_D(const SessionMessage);
    return d->totalAscent;
}

/*!
 * Returns the SessionMessage data message's \c totalDescent field's current value.
 *
 * \return the \c totalDescent field value.
 */
quint16 SessionMessage::totalDescent() const
{
    Q_D(const SessionMessage);
    return d->totalDescent;
}

/*!
 * Returns the SessionMessage data message's \c totalTrainingEffect field's current value.
 *
 * \return the \c totalTrainingEffect field value.
 */
quint8 SessionMessage::totalTrainingEffect() const
{
    Q_D(const SessionMessage);
    return d->totalTrainingEffect;
}

/*!
 * Returns the SessionMessage data message's \c firstLapIndex field's current value.
 *
 * \return the \c firstLapIndex field value.
 */
quint16 SessionMessage::firstLapIndex() const
{
    Q_D(const SessionMessage);
    return d->firstLapIndex;
}

/*!
 * Returns the SessionMessage data message's \c numLaps field's current value.
 *
 * \return the \c numLaps field value.
 */
quint16 SessionMessage::numLaps() const
{
    Q_D(const SessionMessage);
    return d->numLaps;
}

/*!
 * Returns the SessionMessage data message's \c eventGroup field's current value.
 *
 * \return the \c eventGroup field value.
 */
quint8 SessionMessage::eventGroup() const
{
    Q_D(const SessionMessage);
    return d->eventGroup;
}

/*!
 * Returns the SessionMessage data message's \c trigger field's current value.
 *
 * \return the \c trigger field value.
 */
SessionTrigger SessionMessage::trigger() const
{
    Q_D(const SessionMessage);
    return d->trigger;
}

/*!
 * Returns the SessionMessage data message's \c necLat field's current value.
 *
 * North east corner latitude
 *
 * \return the \c necLat field value.
 */
qint32 SessionMessage::necLat() const
{
    Q_D(const SessionMessage);
    return d->necLat;
}

/*!
 * Returns the SessionMessage data message's \c necLong field's current value.
 *
 * North east corner longitude
 *
 * \return the \c necLong field value.
 */
qint32 SessionMessage::necLong() const
{
    Q_D(const SessionMessage);
    return d->necLong;
}

/*!
 * Returns the SessionMessage data message's \c swcLat field's current value.
 *
 * South west corner latitude
 *
 * \return the \c swcLat field value.
 */
qint32 SessionMessage::swcLat() const
{
    Q_D(const SessionMessage);
    return d->swcLat;
}

/*!
 * Returns the SessionMessage data message's \c swcLong field's current value.
 *
 * South west corner longitude
 *
 * \return the \c swcLong field value.
 */
qint32 SessionMessage::swcLong() const
{
    Q_D(const SessionMessage);
    return d->swcLong;
}

/*!
 * Returns the SessionMessage data message's \c numLengths field's current value.
 *
 * # of lengths of swim pool
 *
 * \return the \c numLengths field value.
 */
quint16 SessionMessage::numLengths() const
{
    Q_D(const SessionMessage);
    return d->numLengths;
}

/*!
 * Returns the SessionMessage data message's \c normalizedPower field's current value.
 *
 * \return the \c normalizedPower field value.
 */
quint16 SessionMessage::normalizedPower() const
{
    Q_D(const SessionMessage);
    return d->normalizedPower;
}

/*!
 * Returns the SessionMessage data message's \c trainingStressScore field's current value.
 *
 * \return the \c trainingStressScore field value.
 */
quint16 SessionMessage::trainingStressScore() const
{
    Q_D(const SessionMessage);
    return d->trainingStressScore;
}

/*!
 * Returns the SessionMessage data message's \c intensityFactor field's current value.
 *
 * \return the \c intensityFactor field value.
 */
quint16 SessionMessage::intensityFactor() const
{
    Q_D(const SessionMessage);
    return d->intensityFactor;
}

/*!
 * Returns the SessionMessage data message's \c leftRightBalance field's current value.
 *
 * \return the \c leftRightBalance field value.
 */
LeftRightBalance100 SessionMessage::leftRightBalance() const
{
    Q_D(const SessionMessage);
    return d->leftRightBalance;
}

/*!
 * Returns the SessionMessage data message's \c avgStrokeCount field's current value.
 *
 * \return the \c avgStrokeCount field value.
 */
quint32 SessionMessage::avgStrokeCount() const
{
    Q_D(const SessionMessage);
    return d->avgStrokeCount;
}

/*!
 * Returns the SessionMessage data message's \c avgStrokeDistance field's current value.
 *
 * \return the \c avgStrokeDistance field value.
 */
quint16 SessionMessage::avgStrokeDistance() const
{
    Q_D(const SessionMessage);
    return d->avgStrokeDistance;
}

/*!
 * Returns the SessionMessage data message's \c swimStroke field's current value.
 *
 * \return the \c swimStroke field value.
 */
SwimStroke SessionMessage::swimStroke() const
{
    Q_D(const SessionMessage);
    return d->swimStroke;
}

/*!
 * Returns the SessionMessage data message's \c poolLength field's current value.
 *
 * \return the \c poolLength field value.
 */
quint16 SessionMessage::poolLength() const
{
    Q_D(const SessionMessage);
    return d->poolLength;
}

/*!
 * Returns the SessionMessage data message's \c thresholdPower field's current value.
 *
 * \return the \c thresholdPower field value.
 */
quint16 SessionMessage::thresholdPower() const
{
    Q_D(const SessionMessage);
    return d->thresholdPower;
}

/*!
 * Returns the SessionMessage data message's \c poolLengthUnit field's current value.
 *
 * \return the \c poolLengthUnit field value.
 */
DisplayMeasure SessionMessage::poolLengthUnit() const
{
    Q_D(const SessionMessage);
    return d->poolLengthUnit;
}

/*!
 * Returns the SessionMessage data message's \c numActiveLengths field's current value.
 *
 * # of active lengths of swim pool
 *
 * \return the \c numActiveLengths field value.
 */
quint16 SessionMessage::numActiveLengths() const
{
    Q_D(const SessionMessage);
    return d->numActiveLengths;
}

/*!
 * Returns the SessionMessage data message's \c totalWork field's current value.
 *
 * \return the \c totalWork field value.
 */
quint32 SessionMessage::totalWork() const
{
    Q_D(const SessionMessage);
    return d->totalWork;
}

/*!
 * Returns the SessionMessage data message's \c avgAltitude field's current value.
 *
 * \return the \c avgAltitude field value.
 */
quint16 SessionMessage::avgAltitude() const
{
    Q_D(const SessionMessage);
    return d->avgAltitude;
}

/*!
 * Returns the SessionMessage data message's \c maxAltitude field's current value.
 *
 * \return the \c maxAltitude field value.
 */
quint16 SessionMessage::maxAltitude() const
{
    Q_D(const SessionMessage);
    return d->maxAltitude;
}

/*!
 * Returns the SessionMessage data message's \c gpsAccuracy field's current value.
 *
 * \return the \c gpsAccuracy field value.
 */
quint8 SessionMessage::gpsAccuracy() const
{
    Q_D(const SessionMessage);
    return d->gpsAccuracy;
}

/*!
 * Returns the SessionMessage data message's \c avgGrade field's current value.
 *
 * \return the \c avgGrade field value.
 */
qint16 SessionMessage::avgGrade() const
{
    Q_D(const SessionMessage);
    return d->avgGrade;
}

/*!
 * Returns the SessionMessage data message's \c avgPosGrade field's current value.
 *
 * \return the \c avgPosGrade field value.
 */
qint16 SessionMessage::avgPosGrade() const
{
    Q_D(const SessionMessage);
    return d->avgPosGrade;
}

/*!
 * Returns the SessionMessage data message's \c avgNegGrade field's current value.
 *
 * \return the \c avgNegGrade field value.
 */
qint16 SessionMessage::avgNegGrade() const
{
    Q_D(const SessionMessage);
    return d->avgNegGrade;
}

/*!
 * Returns the SessionMessage data message's \c maxPosGrade field's current value.
 *
 * \return the \c maxPosGrade field value.
 */
qint16 SessionMessage::maxPosGrade() const
{
    Q_D(const SessionMessage);
    return d->maxPosGrade;
}

/*!
 * Returns the SessionMessage data message's \c maxNegGrade field's current value.
 *
 * \return the \c maxNegGrade field value.
 */
qint16 SessionMessage::maxNegGrade() const
{
    Q_D(const SessionMessage);
    return d->maxNegGrade;
}

/*!
 * Returns the SessionMessage data message's \c avgTemperature field's current value.
 *
 * \return the \c avgTemperature field value.
 */
qint8 SessionMessage::avgTemperature() const
{
    Q_D(const SessionMessage);
    return d->avgTemperature;
}

/*!
 * Returns the SessionMessage data message's \c maxTemperature field's current value.
 *
 * \return the \c maxTemperature field value.
 */
qint8 SessionMessage::maxTemperature() const
{
    Q_D(const SessionMessage);
    return d->maxTemperature;
}

/*!
 * Returns the SessionMessage data message's \c totalMovingTime field's current value.
 *
 * \return the \c totalMovingTime field value.
 */
quint32 SessionMessage::totalMovingTime() const
{
    Q_D(const SessionMessage);
    return d->totalMovingTime;
}

/*!
 * Returns the SessionMessage data message's \c avgPosVerticalSpeed field's current value.
 *
 * \return the \c avgPosVerticalSpeed field value.
 */
qint16 SessionMessage::avgPosVerticalSpeed() const
{
    Q_D(const SessionMessage);
    return d->avgPosVerticalSpeed;
}

/*!
 * Returns the SessionMessage data message's \c avgNegVerticalSpeed field's current value.
 *
 * \return the \c avgNegVerticalSpeed field value.
 */
qint16 SessionMessage::avgNegVerticalSpeed() const
{
    Q_D(const SessionMessage);
    return d->avgNegVerticalSpeed;
}

/*!
 * Returns the SessionMessage data message's \c maxPosVerticalSpeed field's current value.
 *
 * \return the \c maxPosVerticalSpeed field value.
 */
qint16 SessionMessage::maxPosVerticalSpeed() const
{
    Q_D(const SessionMessage);
    return d->maxPosVerticalSpeed;
}

/*!
 * Returns the SessionMessage data message's \c maxNegVerticalSpeed field's current value.
 *
 * \return the \c maxNegVerticalSpeed field value.
 */
qint16 SessionMessage::maxNegVerticalSpeed() const
{
    Q_D(const SessionMessage);
    return d->maxNegVerticalSpeed;
}

/*!
 * Returns the SessionMessage data message's \c minHeartRate field's current value.
 *
 * \return the \c minHeartRate field value.
 */
quint8 SessionMessage::minHeartRate() const
{
    Q_D(const SessionMessage);
    return d->minHeartRate;
}

/*!
 * Returns the SessionMessage data message's \c timeInHrZone field's current value.
 *
 * \return the \c timeInHrZone field value.
 */
quint32 SessionMessage::timeInHrZone() const
{
    Q_D(const SessionMessage);
    return d->timeInHrZone;
}

/*!
 * Returns the SessionMessage data message's \c timeInSpeedZone field's current value.
 *
 * \return the \c timeInSpeedZone field value.
 */
quint32 SessionMessage::timeInSpeedZone() const
{
    Q_D(const SessionMessage);
    return d->timeInSpeedZone;
}

/*!
 * Returns the SessionMessage data message's \c timeInCadenceZone field's current value.
 *
 * \return the \c timeInCadenceZone field value.
 */
quint32 SessionMessage::timeInCadenceZone() const
{
    Q_D(const SessionMessage);
    return d->timeInCadenceZone;
}

/*!
 * Returns the SessionMessage data message's \c timeInPowerZone field's current value.
 *
 * \return the \c timeInPowerZone field value.
 */
quint32 SessionMessage::timeInPowerZone() const
{
    Q_D(const SessionMessage);
    return d->timeInPowerZone;
}

/*!
 * Returns the SessionMessage data message's \c avgLapTime field's current value.
 *
 * \return the \c avgLapTime field value.
 */
quint32 SessionMessage::avgLapTime() const
{
    Q_D(const SessionMessage);
    return d->avgLapTime;
}

/*!
 * Returns the SessionMessage data message's \c bestLapIndex field's current value.
 *
 * \return the \c bestLapIndex field value.
 */
quint16 SessionMessage::bestLapIndex() const
{
    Q_D(const SessionMessage);
    return d->bestLapIndex;
}

/*!
 * Returns the SessionMessage data message's \c minAltitude field's current value.
 *
 * \return the \c minAltitude field value.
 */
quint16 SessionMessage::minAltitude() const
{
    Q_D(const SessionMessage);
    return d->minAltitude;
}

/*!
 * Returns the SessionMessage data message's \c playerScore field's current value.
 *
 * \return the \c playerScore field value.
 */
quint16 SessionMessage::playerScore() const
{
    Q_D(const SessionMessage);
    return d->playerScore;
}

/*!
 * Returns the SessionMessage data message's \c opponentScore field's current value.
 *
 * \return the \c opponentScore field value.
 */
quint16 SessionMessage::opponentScore() const
{
    Q_D(const SessionMessage);
    return d->opponentScore;
}

/*!
 * Returns the SessionMessage data message's \c opponentName field's current value.
 *
 * \return the \c opponentName field value.
 */
QString SessionMessage::opponentName() const
{
    Q_D(const SessionMessage);
    return d->opponentName;
}

/*!
 * Returns the SessionMessage data message's \c strokeCount field's current value.
 *
 * stroke_type enum used as the index
 *
 * \return the \c strokeCount field value.
 */
quint16 SessionMessage::strokeCount() const
{
    Q_D(const SessionMessage);
    return d->strokeCount;
}

/*!
 * Returns the SessionMessage data message's \c zoneCount field's current value.
 *
 * zone number used as the index
 *
 * \return the \c zoneCount field value.
 */
quint16 SessionMessage::zoneCount() const
{
    Q_D(const SessionMessage);
    return d->zoneCount;
}

/*!
 * Returns the SessionMessage data message's \c maxBallSpeed field's current value.
 *
 * \return the \c maxBallSpeed field value.
 */
quint16 SessionMessage::maxBallSpeed() const
{
    Q_D(const SessionMessage);
    return d->maxBallSpeed;
}

/*!
 * Returns the SessionMessage data message's \c avgBallSpeed field's current value.
 *
 * \return the \c avgBallSpeed field value.
 */
quint16 SessionMessage::avgBallSpeed() const
{
    Q_D(const SessionMessage);
    return d->avgBallSpeed;
}

/*!
 * Returns the SessionMessage data message's \c avgVerticalOscillation field's current value.
 *
 * \return the \c avgVerticalOscillation field value.
 */
quint16 SessionMessage::avgVerticalOscillation() const
{
    Q_D(const SessionMessage);
    return d->avgVerticalOscillation;
}

/*!
 * Returns the SessionMessage data message's \c avgStanceTimePercent field's current value.
 *
 * \return the \c avgStanceTimePercent field value.
 */
quint16 SessionMessage::avgStanceTimePercent() const
{
    Q_D(const SessionMessage);
    return d->avgStanceTimePercent;
}

/*!
 * Returns the SessionMessage data message's \c avgStanceTime field's current value.
 *
 * \return the \c avgStanceTime field value.
 */
quint16 SessionMessage::avgStanceTime() const
{
    Q_D(const SessionMessage);
    return d->avgStanceTime;
}

/*!
 * Returns the SessionMessage data message's \c avgFractionalCadence field's current value.
 *
 * fractional part of the avg_cadence
 *
 * \return the \c avgFractionalCadence field value.
 */
quint8 SessionMessage::avgFractionalCadence() const
{
    Q_D(const SessionMessage);
    return d->avgFractionalCadence;
}

/*!
 * Returns the SessionMessage data message's \c maxFractionalCadence field's current value.
 *
 * fractional part of the max_cadence
 *
 * \return the \c maxFractionalCadence field value.
 */
quint8 SessionMessage::maxFractionalCadence() const
{
    Q_D(const SessionMessage);
    return d->maxFractionalCadence;
}

/*!
 * Returns the SessionMessage data message's \c totalFractionalCycles field's current value.
 *
 * fractional part of the total_cycles
 *
 * \return the \c totalFractionalCycles field value.
 */
quint8 SessionMessage::totalFractionalCycles() const
{
    Q_D(const SessionMessage);
    return d->totalFractionalCycles;
}

/*!
 * Returns the SessionMessage data message's \c avgTotalHemoglobinConc field's current value.
 *
 * Avg saturated and unsaturated hemoglobin
 *
 * \return the \c avgTotalHemoglobinConc field value.
 */
quint16 SessionMessage::avgTotalHemoglobinConc() const
{
    Q_D(const SessionMessage);
    return d->avgTotalHemoglobinConc;
}

/*!
 * Returns the SessionMessage data message's \c minTotalHemoglobinConc field's current value.
 *
 * Min saturated and unsaturated hemoglobin
 *
 * \return the \c minTotalHemoglobinConc field value.
 */
quint16 SessionMessage::minTotalHemoglobinConc() const
{
    Q_D(const SessionMessage);
    return d->minTotalHemoglobinConc;
}

/*!
 * Returns the SessionMessage data message's \c maxTotalHemoglobinConc field's current value.
 *
 * Max saturated and unsaturated hemoglobin
 *
 * \return the \c maxTotalHemoglobinConc field value.
 */
quint16 SessionMessage::maxTotalHemoglobinConc() const
{
    Q_D(const SessionMessage);
    return d->maxTotalHemoglobinConc;
}

/*!
 * Returns the SessionMessage data message's \c avgSaturatedHemoglobinPercent field's current value.
 *
 * Avg percentage of hemoglobin saturated with oxygen
 *
 * \return the \c avgSaturatedHemoglobinPercent field value.
 */
quint16 SessionMessage::avgSaturatedHemoglobinPercent() const
{
    Q_D(const SessionMessage);
    return d->avgSaturatedHemoglobinPercent;
}

/*!
 * Returns the SessionMessage data message's \c minSaturatedHemoglobinPercent field's current value.
 *
 * Min percentage of hemoglobin saturated with oxygen
 *
 * \return the \c minSaturatedHemoglobinPercent field value.
 */
quint16 SessionMessage::minSaturatedHemoglobinPercent() const
{
    Q_D(const SessionMessage);
    return d->minSaturatedHemoglobinPercent;
}

/*!
 * Returns the SessionMessage data message's \c maxSaturatedHemoglobinPercent field's current value.
 *
 * Max percentage of hemoglobin saturated with oxygen
 *
 * \return the \c maxSaturatedHemoglobinPercent field value.
 */
quint16 SessionMessage::maxSaturatedHemoglobinPercent() const
{
    Q_D(const SessionMessage);
    return d->maxSaturatedHemoglobinPercent;
}

/*!
 * Returns the SessionMessage data message's \c avgLeftTorqueEffectiveness field's current value.
 *
 * \return the \c avgLeftTorqueEffectiveness field value.
 */
quint8 SessionMessage::avgLeftTorqueEffectiveness() const
{
    Q_D(const SessionMessage);
    return d->avgLeftTorqueEffectiveness;
}

/*!
 * Returns the SessionMessage data message's \c avgRightTorqueEffectiveness field's current value.
 *
 * \return the \c avgRightTorqueEffectiveness field value.
 */
quint8 SessionMessage::avgRightTorqueEffectiveness() const
{
    Q_D(const SessionMessage);
    return d->avgRightTorqueEffectiveness;
}

/*!
 * Returns the SessionMessage data message's \c avgLeftPedalSmoothness field's current value.
 *
 * \return the \c avgLeftPedalSmoothness field value.
 */
quint8 SessionMessage::avgLeftPedalSmoothness() const
{
    Q_D(const SessionMessage);
    return d->avgLeftPedalSmoothness;
}

/*!
 * Returns the SessionMessage data message's \c avgRightPedalSmoothness field's current value.
 *
 * \return the \c avgRightPedalSmoothness field value.
 */
quint8 SessionMessage::avgRightPedalSmoothness() const
{
    Q_D(const SessionMessage);
    return d->avgRightPedalSmoothness;
}

/*!
 * Returns the SessionMessage data message's \c avgCombinedPedalSmoothness field's current value.
 *
 * \return the \c avgCombinedPedalSmoothness field value.
 */
quint8 SessionMessage::avgCombinedPedalSmoothness() const
{
    Q_D(const SessionMessage);
    return d->avgCombinedPedalSmoothness;
}

/*!
 * Returns the SessionMessage data message's \c sportIndex field's current value.
 *
 * \return the \c sportIndex field value.
 */
quint8 SessionMessage::sportIndex() const
{
    Q_D(const SessionMessage);
    return d->sportIndex;
}

/*!
 * Returns the SessionMessage data message's \c timeStanding field's current value.
 *
 * Total time spend in the standing position
 *
 * \return the \c timeStanding field value.
 */
quint32 SessionMessage::timeStanding() const
{
    Q_D(const SessionMessage);
    return d->timeStanding;
}

/*!
 * Returns the SessionMessage data message's \c standCount field's current value.
 *
 * Number of transitions to the standing state
 *
 * \return the \c standCount field value.
 */
quint16 SessionMessage::standCount() const
{
    Q_D(const SessionMessage);
    return d->standCount;
}

/*!
 * Returns the SessionMessage data message's \c avgLeftPco field's current value.
 *
 * Average platform center offset Left
 *
 * \return the \c avgLeftPco field value.
 */
qint8 SessionMessage::avgLeftPco() const
{
    Q_D(const SessionMessage);
    return d->avgLeftPco;
}

/*!
 * Returns the SessionMessage data message's \c avgRightPco field's current value.
 *
 * Average platform center offset Right
 *
 * \return the \c avgRightPco field value.
 */
qint8 SessionMessage::avgRightPco() const
{
    Q_D(const SessionMessage);
    return d->avgRightPco;
}

/*!
 * Returns the SessionMessage data message's \c avgLeftPowerPhase field's current value.
 *
 * Average left power phase angles. Indexes defined by power_phase_type.
 *
 * \return the \c avgLeftPowerPhase field value.
 */
quint8 SessionMessage::avgLeftPowerPhase() const
{
    Q_D(const SessionMessage);
    return d->avgLeftPowerPhase;
}

/*!
 * Returns the SessionMessage data message's \c avgLeftPowerPhasePeak field's current value.
 *
 * Average left power phase peak angles. Data value indexes defined by power_phase_type.
 *
 * \return the \c avgLeftPowerPhasePeak field value.
 */
quint8 SessionMessage::avgLeftPowerPhasePeak() const
{
    Q_D(const SessionMessage);
    return d->avgLeftPowerPhasePeak;
}

/*!
 * Returns the SessionMessage data message's \c avgRightPowerPhase field's current value.
 *
 * Average right power phase angles. Data value indexes defined by power_phase_type.
 *
 * \return the \c avgRightPowerPhase field value.
 */
quint8 SessionMessage::avgRightPowerPhase() const
{
    Q_D(const SessionMessage);
    return d->avgRightPowerPhase;
}

/*!
 * Returns the SessionMessage data message's \c avgRightPowerPhasePeak field's current value.
 *
 * Average right power phase peak angles data value indexes  defined by power_phase_type.
 *
 * \return the \c avgRightPowerPhasePeak field value.
 */
quint8 SessionMessage::avgRightPowerPhasePeak() const
{
    Q_D(const SessionMessage);
    return d->avgRightPowerPhasePeak;
}

/*!
 * Returns the SessionMessage data message's \c avgPowerPosition field's current value.
 *
 * Average power by position. Data value indexes defined by rider_position_type.
 *
 * \return the \c avgPowerPosition field value.
 */
quint16 SessionMessage::avgPowerPosition() const
{
    Q_D(const SessionMessage);
    return d->avgPowerPosition;
}

/*!
 * Returns the SessionMessage data message's \c maxPowerPosition field's current value.
 *
 * Maximum power by position. Data value indexes defined by rider_position_type.
 *
 * \return the \c maxPowerPosition field value.
 */
quint16 SessionMessage::maxPowerPosition() const
{
    Q_D(const SessionMessage);
    return d->maxPowerPosition;
}

/*!
 * Returns the SessionMessage data message's \c avgCadencePosition field's current value.
 *
 * Average cadence by position. Data value indexes defined by rider_position_type.
 *
 * \return the \c avgCadencePosition field value.
 */
quint8 SessionMessage::avgCadencePosition() const
{
    Q_D(const SessionMessage);
    return d->avgCadencePosition;
}

/*!
 * Returns the SessionMessage data message's \c maxCadencePosition field's current value.
 *
 * Maximum cadence by position. Data value indexes defined by rider_position_type.
 *
 * \return the \c maxCadencePosition field value.
 */
quint8 SessionMessage::maxCadencePosition() const
{
    Q_D(const SessionMessage);
    return d->maxCadencePosition;
}

/*!
 * Returns the SessionMessage data message's \c enhancedAvgSpeed field's current value.
 *
 * total_distance / total_timer_time
 *
 * \return the \c enhancedAvgSpeed field value.
 */
quint32 SessionMessage::enhancedAvgSpeed() const
{
    Q_D(const SessionMessage);
    return d->enhancedAvgSpeed;
}

/*!
 * Returns the SessionMessage data message's \c enhancedMaxSpeed field's current value.
 *
 * \return the \c enhancedMaxSpeed field value.
 */
quint32 SessionMessage::enhancedMaxSpeed() const
{
    Q_D(const SessionMessage);
    return d->enhancedMaxSpeed;
}

/*!
 * Returns the SessionMessage data message's \c enhancedAvgAltitude field's current value.
 *
 * \return the \c enhancedAvgAltitude field value.
 */
quint32 SessionMessage::enhancedAvgAltitude() const
{
    Q_D(const SessionMessage);
    return d->enhancedAvgAltitude;
}

/*!
 * Returns the SessionMessage data message's \c enhancedMinAltitude field's current value.
 *
 * \return the \c enhancedMinAltitude field value.
 */
quint32 SessionMessage::enhancedMinAltitude() const
{
    Q_D(const SessionMessage);
    return d->enhancedMinAltitude;
}

/*!
 * Returns the SessionMessage data message's \c enhancedMaxAltitude field's current value.
 *
 * \return the \c enhancedMaxAltitude field value.
 */
quint32 SessionMessage::enhancedMaxAltitude() const
{
    Q_D(const SessionMessage);
    return d->enhancedMaxAltitude;
}

/*!
 * Returns the SessionMessage data message's \c avgLevMotorPower field's current value.
 *
 * lev average motor power during session
 *
 * \return the \c avgLevMotorPower field value.
 */
quint16 SessionMessage::avgLevMotorPower() const
{
    Q_D(const SessionMessage);
    return d->avgLevMotorPower;
}

/*!
 * Returns the SessionMessage data message's \c maxLevMotorPower field's current value.
 *
 * lev maximum motor power during session
 *
 * \return the \c maxLevMotorPower field value.
 */
quint16 SessionMessage::maxLevMotorPower() const
{
    Q_D(const SessionMessage);
    return d->maxLevMotorPower;
}

/*!
 * Returns the SessionMessage data message's \c levBatteryConsumption field's current value.
 *
 * lev battery consumption during session
 *
 * \return the \c levBatteryConsumption field value.
 */
quint8 SessionMessage::levBatteryConsumption() const
{
    Q_D(const SessionMessage);
    return d->levBatteryConsumption;
}

/*!
 * Returns the SessionMessage data message's \c avgVerticalRatio field's current value.
 *
 * \return the \c avgVerticalRatio field value.
 */
quint16 SessionMessage::avgVerticalRatio() const
{
    Q_D(const SessionMessage);
    return d->avgVerticalRatio;
}

/*!
 * Returns the SessionMessage data message's \c avgStanceTimeBalance field's current value.
 *
 * \return the \c avgStanceTimeBalance field value.
 */
quint16 SessionMessage::avgStanceTimeBalance() const
{
    Q_D(const SessionMessage);
    return d->avgStanceTimeBalance;
}

/*!
 * Returns the SessionMessage data message's \c avgStepLength field's current value.
 *
 * \return the \c avgStepLength field value.
 */
quint16 SessionMessage::avgStepLength() const
{
    Q_D(const SessionMessage);
    return d->avgStepLength;
}

/*!
 * Returns the SessionMessage data message's \c totalAnaerobicTrainingEffect field's current value.
 *
 * \return the \c totalAnaerobicTrainingEffect field value.
 */
quint8 SessionMessage::totalAnaerobicTrainingEffect() const
{
    Q_D(const SessionMessage);
    return d->totalAnaerobicTrainingEffect;
}

/*!
 * Returns the SessionMessage data message's \c avgVam field's current value.
 *
 * \return the \c avgVam field value.
 */
quint16 SessionMessage::avgVam() const
{
    Q_D(const SessionMessage);
    return d->avgVam;
}

/*!
 * Returns the SessionMessage data message's \c totalGrit field's current value.
 *
 * The grit score estimates how challenging a route could be for a cyclist in terms of time
 * spent going over sharp turns or large grade slopes.
 *
 * \return the \c totalGrit field value.
 */
float SessionMessage::totalGrit() const
{
    Q_D(const SessionMessage);
    return d->totalGrit;
}

/*!
 * Returns the SessionMessage data message's \c totalFlow field's current value.
 *
 * The flow score estimates how long distance wise a cyclist deaccelerates over intervals where
 * deacceleration is unnecessary such as smooth turns or small grade angle intervals.
 *
 * \return the \c totalFlow field value.
 */
float SessionMessage::totalFlow() const
{
    Q_D(const SessionMessage);
    return d->totalFlow;
}

/*!
 * Returns the SessionMessage data message's \c jumpCount field's current value.
 *
 * \return the \c jumpCount field value.
 */
quint16 SessionMessage::jumpCount() const
{
    Q_D(const SessionMessage);
    return d->jumpCount;
}

/*!
 * Returns the SessionMessage data message's \c avgGrit field's current value.
 *
 * The grit score estimates how challenging a route could be for a cyclist in terms of time
 * spent going over sharp turns or large grade slopes.
 *
 * \return the \c avgGrit field value.
 */
float SessionMessage::avgGrit() const
{
    Q_D(const SessionMessage);
    return d->avgGrit;
}

/*!
 * Returns the SessionMessage data message's \c avgFlow field's current value.
 *
 * The flow score estimates how long distance wise a cyclist deaccelerates over intervals where
 * deacceleration is unnecessary such as smooth turns or small grade angle intervals.
 *
 * \return the \c avgFlow field value.
 */
float SessionMessage::avgFlow() const
{
    Q_D(const SessionMessage);
    return d->avgFlow;
}

/*!
 * Returns the SessionMessage data message's \c totalFractionalAscent field's current value.
 *
 * fractional part of total_ascent
 *
 * \return the \c totalFractionalAscent field value.
 */
quint8 SessionMessage::totalFractionalAscent() const
{
    Q_D(const SessionMessage);
    return d->totalFractionalAscent;
}

/*!
 * Returns the SessionMessage data message's \c totalFractionalDescent field's current value.
 *
 * fractional part of total_descent
 *
 * \return the \c totalFractionalDescent field value.
 */
quint8 SessionMessage::totalFractionalDescent() const
{
    Q_D(const SessionMessage);
    return d->totalFractionalDescent;
}

/*!
 * Returns the SessionMessage data message's \c avgCoreTemperature field's current value.
 *
 * \return the \c avgCoreTemperature field value.
 */
quint16 SessionMessage::avgCoreTemperature() const
{
    Q_D(const SessionMessage);
    return d->avgCoreTemperature;
}

/*!
 * Returns the SessionMessage data message's \c minCoreTemperature field's current value.
 *
 * \return the \c minCoreTemperature field value.
 */
quint16 SessionMessage::minCoreTemperature() const
{
    Q_D(const SessionMessage);
    return d->minCoreTemperature;
}

/*!
 * Returns the SessionMessage data message's \c maxCoreTemperature field's current value.
 *
 * \return the \c maxCoreTemperature field value.
 */
quint16 SessionMessage::maxCoreTemperature() const
{
    Q_D(const SessionMessage);
    return d->maxCoreTemperature;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void SessionMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SessionMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void SessionMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(SessionMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c event field to \a event.
 *
 * \param event The field value to set.
 */
void SessionMessage::setEvent(const Event event)
{
    Q_D(SessionMessage);
    d->event = event;
}
/*!
 * Sets the \c eventType field to \a eventType.
 *
 * \param eventType The field value to set.
 */
void SessionMessage::setEventType(const EventType eventType)
{
    Q_D(SessionMessage);
    d->eventType = eventType;
}
/*!
 * Sets the \c startTime field to \a startTime.
 *
 * \param startTime The field value to set.
 */
void SessionMessage::setStartTime(const DateTime startTime)
{
    Q_D(SessionMessage);
    d->startTime = startTime;
}
/*!
 * Sets the \c startPositionLat field to \a startPositionLat.
 *
 * \param startPositionLat The field value to set.
 */
void SessionMessage::setStartPositionLat(const qint32 startPositionLat)
{
    Q_D(SessionMessage);
    d->startPositionLat = startPositionLat;
}
/*!
 * Sets the \c startPositionLong field to \a startPositionLong.
 *
 * \param startPositionLong The field value to set.
 */
void SessionMessage::setStartPositionLong(const qint32 startPositionLong)
{
    Q_D(SessionMessage);
    d->startPositionLong = startPositionLong;
}
/*!
 * Sets the \c sport field to \a sport.
 *
 * \param sport The field value to set.
 */
void SessionMessage::setSport(const Sport sport)
{
    Q_D(SessionMessage);
    d->sport = sport;
}
/*!
 * Sets the \c subSport field to \a subSport.
 *
 * \param subSport The field value to set.
 */
void SessionMessage::setSubSport(const SubSport subSport)
{
    Q_D(SessionMessage);
    d->subSport = subSport;
}
/*!
 * Sets the \c totalElapsedTime field to \a totalElapsedTime.
 *
 * \param totalElapsedTime The field value to set.
 */
void SessionMessage::setTotalElapsedTime(const quint32 totalElapsedTime)
{
    Q_D(SessionMessage);
    d->totalElapsedTime = totalElapsedTime;
}
/*!
 * Sets the \c totalTimerTime field to \a totalTimerTime.
 *
 * \param totalTimerTime The field value to set.
 */
void SessionMessage::setTotalTimerTime(const quint32 totalTimerTime)
{
    Q_D(SessionMessage);
    d->totalTimerTime = totalTimerTime;
}
/*!
 * Sets the \c totalDistance field to \a totalDistance.
 *
 * \param totalDistance The field value to set.
 */
void SessionMessage::setTotalDistance(const quint32 totalDistance)
{
    Q_D(SessionMessage);
    d->totalDistance = totalDistance;
}
/*!
 * Sets the \c totalCycles field to \a totalCycles.
 *
 * \param totalCycles The field value to set.
 */
void SessionMessage::setTotalCycles(const quint32 totalCycles)
{
    Q_D(SessionMessage);
    d->totalCycles = totalCycles;
}
/*!
 * Sets the \c totalCalories field to \a totalCalories.
 *
 * \param totalCalories The field value to set.
 */
void SessionMessage::setTotalCalories(const quint16 totalCalories)
{
    Q_D(SessionMessage);
    d->totalCalories = totalCalories;
}
/*!
 * Sets the \c totalFatCalories field to \a totalFatCalories.
 *
 * \param totalFatCalories The field value to set.
 */
void SessionMessage::setTotalFatCalories(const quint16 totalFatCalories)
{
    Q_D(SessionMessage);
    d->totalFatCalories = totalFatCalories;
}
/*!
 * Sets the \c avgSpeed field to \a avgSpeed.
 *
 * \param avgSpeed The field value to set.
 */
void SessionMessage::setAvgSpeed(const quint16 avgSpeed)
{
    Q_D(SessionMessage);
    d->avgSpeed = avgSpeed;
}
/*!
 * Sets the \c maxSpeed field to \a maxSpeed.
 *
 * \param maxSpeed The field value to set.
 */
void SessionMessage::setMaxSpeed(const quint16 maxSpeed)
{
    Q_D(SessionMessage);
    d->maxSpeed = maxSpeed;
}
/*!
 * Sets the \c avgHeartRate field to \a avgHeartRate.
 *
 * \param avgHeartRate The field value to set.
 */
void SessionMessage::setAvgHeartRate(const quint8 avgHeartRate)
{
    Q_D(SessionMessage);
    d->avgHeartRate = avgHeartRate;
}
/*!
 * Sets the \c maxHeartRate field to \a maxHeartRate.
 *
 * \param maxHeartRate The field value to set.
 */
void SessionMessage::setMaxHeartRate(const quint8 maxHeartRate)
{
    Q_D(SessionMessage);
    d->maxHeartRate = maxHeartRate;
}
/*!
 * Sets the \c avgCadence field to \a avgCadence.
 *
 * \param avgCadence The field value to set.
 */
void SessionMessage::setAvgCadence(const quint8 avgCadence)
{
    Q_D(SessionMessage);
    d->avgCadence = avgCadence;
}
/*!
 * Sets the \c maxCadence field to \a maxCadence.
 *
 * \param maxCadence The field value to set.
 */
void SessionMessage::setMaxCadence(const quint8 maxCadence)
{
    Q_D(SessionMessage);
    d->maxCadence = maxCadence;
}
/*!
 * Sets the \c avgPower field to \a avgPower.
 *
 * \param avgPower The field value to set.
 */
void SessionMessage::setAvgPower(const quint16 avgPower)
{
    Q_D(SessionMessage);
    d->avgPower = avgPower;
}
/*!
 * Sets the \c maxPower field to \a maxPower.
 *
 * \param maxPower The field value to set.
 */
void SessionMessage::setMaxPower(const quint16 maxPower)
{
    Q_D(SessionMessage);
    d->maxPower = maxPower;
}
/*!
 * Sets the \c totalAscent field to \a totalAscent.
 *
 * \param totalAscent The field value to set.
 */
void SessionMessage::setTotalAscent(const quint16 totalAscent)
{
    Q_D(SessionMessage);
    d->totalAscent = totalAscent;
}
/*!
 * Sets the \c totalDescent field to \a totalDescent.
 *
 * \param totalDescent The field value to set.
 */
void SessionMessage::setTotalDescent(const quint16 totalDescent)
{
    Q_D(SessionMessage);
    d->totalDescent = totalDescent;
}
/*!
 * Sets the \c totalTrainingEffect field to \a totalTrainingEffect.
 *
 * \param totalTrainingEffect The field value to set.
 */
void SessionMessage::setTotalTrainingEffect(const quint8 totalTrainingEffect)
{
    Q_D(SessionMessage);
    d->totalTrainingEffect = totalTrainingEffect;
}
/*!
 * Sets the \c firstLapIndex field to \a firstLapIndex.
 *
 * \param firstLapIndex The field value to set.
 */
void SessionMessage::setFirstLapIndex(const quint16 firstLapIndex)
{
    Q_D(SessionMessage);
    d->firstLapIndex = firstLapIndex;
}
/*!
 * Sets the \c numLaps field to \a numLaps.
 *
 * \param numLaps The field value to set.
 */
void SessionMessage::setNumLaps(const quint16 numLaps)
{
    Q_D(SessionMessage);
    d->numLaps = numLaps;
}
/*!
 * Sets the \c eventGroup field to \a eventGroup.
 *
 * \param eventGroup The field value to set.
 */
void SessionMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(SessionMessage);
    d->eventGroup = eventGroup;
}
/*!
 * Sets the \c trigger field to \a trigger.
 *
 * \param trigger The field value to set.
 */
void SessionMessage::setTrigger(const SessionTrigger trigger)
{
    Q_D(SessionMessage);
    d->trigger = trigger;
}
/*!
 * Sets the \c necLat field to \a necLat.
 *
 * \param necLat The field value to set.
 */
void SessionMessage::setNecLat(const qint32 necLat)
{
    Q_D(SessionMessage);
    d->necLat = necLat;
}
/*!
 * Sets the \c necLong field to \a necLong.
 *
 * \param necLong The field value to set.
 */
void SessionMessage::setNecLong(const qint32 necLong)
{
    Q_D(SessionMessage);
    d->necLong = necLong;
}
/*!
 * Sets the \c swcLat field to \a swcLat.
 *
 * \param swcLat The field value to set.
 */
void SessionMessage::setSwcLat(const qint32 swcLat)
{
    Q_D(SessionMessage);
    d->swcLat = swcLat;
}
/*!
 * Sets the \c swcLong field to \a swcLong.
 *
 * \param swcLong The field value to set.
 */
void SessionMessage::setSwcLong(const qint32 swcLong)
{
    Q_D(SessionMessage);
    d->swcLong = swcLong;
}
/*!
 * Sets the \c numLengths field to \a numLengths.
 *
 * \param numLengths The field value to set.
 */
void SessionMessage::setNumLengths(const quint16 numLengths)
{
    Q_D(SessionMessage);
    d->numLengths = numLengths;
}
/*!
 * Sets the \c normalizedPower field to \a normalizedPower.
 *
 * \param normalizedPower The field value to set.
 */
void SessionMessage::setNormalizedPower(const quint16 normalizedPower)
{
    Q_D(SessionMessage);
    d->normalizedPower = normalizedPower;
}
/*!
 * Sets the \c trainingStressScore field to \a trainingStressScore.
 *
 * \param trainingStressScore The field value to set.
 */
void SessionMessage::setTrainingStressScore(const quint16 trainingStressScore)
{
    Q_D(SessionMessage);
    d->trainingStressScore = trainingStressScore;
}
/*!
 * Sets the \c intensityFactor field to \a intensityFactor.
 *
 * \param intensityFactor The field value to set.
 */
void SessionMessage::setIntensityFactor(const quint16 intensityFactor)
{
    Q_D(SessionMessage);
    d->intensityFactor = intensityFactor;
}
/*!
 * Sets the \c leftRightBalance field to \a leftRightBalance.
 *
 * \param leftRightBalance The field value to set.
 */
void SessionMessage::setLeftRightBalance(const LeftRightBalance100 leftRightBalance)
{
    Q_D(SessionMessage);
    d->leftRightBalance = leftRightBalance;
}
/*!
 * Sets the \c avgStrokeCount field to \a avgStrokeCount.
 *
 * \param avgStrokeCount The field value to set.
 */
void SessionMessage::setAvgStrokeCount(const quint32 avgStrokeCount)
{
    Q_D(SessionMessage);
    d->avgStrokeCount = avgStrokeCount;
}
/*!
 * Sets the \c avgStrokeDistance field to \a avgStrokeDistance.
 *
 * \param avgStrokeDistance The field value to set.
 */
void SessionMessage::setAvgStrokeDistance(const quint16 avgStrokeDistance)
{
    Q_D(SessionMessage);
    d->avgStrokeDistance = avgStrokeDistance;
}
/*!
 * Sets the \c swimStroke field to \a swimStroke.
 *
 * \param swimStroke The field value to set.
 */
void SessionMessage::setSwimStroke(const SwimStroke swimStroke)
{
    Q_D(SessionMessage);
    d->swimStroke = swimStroke;
}
/*!
 * Sets the \c poolLength field to \a poolLength.
 *
 * \param poolLength The field value to set.
 */
void SessionMessage::setPoolLength(const quint16 poolLength)
{
    Q_D(SessionMessage);
    d->poolLength = poolLength;
}
/*!
 * Sets the \c thresholdPower field to \a thresholdPower.
 *
 * \param thresholdPower The field value to set.
 */
void SessionMessage::setThresholdPower(const quint16 thresholdPower)
{
    Q_D(SessionMessage);
    d->thresholdPower = thresholdPower;
}
/*!
 * Sets the \c poolLengthUnit field to \a poolLengthUnit.
 *
 * \param poolLengthUnit The field value to set.
 */
void SessionMessage::setPoolLengthUnit(const DisplayMeasure poolLengthUnit)
{
    Q_D(SessionMessage);
    d->poolLengthUnit = poolLengthUnit;
}
/*!
 * Sets the \c numActiveLengths field to \a numActiveLengths.
 *
 * \param numActiveLengths The field value to set.
 */
void SessionMessage::setNumActiveLengths(const quint16 numActiveLengths)
{
    Q_D(SessionMessage);
    d->numActiveLengths = numActiveLengths;
}
/*!
 * Sets the \c totalWork field to \a totalWork.
 *
 * \param totalWork The field value to set.
 */
void SessionMessage::setTotalWork(const quint32 totalWork)
{
    Q_D(SessionMessage);
    d->totalWork = totalWork;
}
/*!
 * Sets the \c avgAltitude field to \a avgAltitude.
 *
 * \param avgAltitude The field value to set.
 */
void SessionMessage::setAvgAltitude(const quint16 avgAltitude)
{
    Q_D(SessionMessage);
    d->avgAltitude = avgAltitude;
}
/*!
 * Sets the \c maxAltitude field to \a maxAltitude.
 *
 * \param maxAltitude The field value to set.
 */
void SessionMessage::setMaxAltitude(const quint16 maxAltitude)
{
    Q_D(SessionMessage);
    d->maxAltitude = maxAltitude;
}
/*!
 * Sets the \c gpsAccuracy field to \a gpsAccuracy.
 *
 * \param gpsAccuracy The field value to set.
 */
void SessionMessage::setGpsAccuracy(const quint8 gpsAccuracy)
{
    Q_D(SessionMessage);
    d->gpsAccuracy = gpsAccuracy;
}
/*!
 * Sets the \c avgGrade field to \a avgGrade.
 *
 * \param avgGrade The field value to set.
 */
void SessionMessage::setAvgGrade(const qint16 avgGrade)
{
    Q_D(SessionMessage);
    d->avgGrade = avgGrade;
}
/*!
 * Sets the \c avgPosGrade field to \a avgPosGrade.
 *
 * \param avgPosGrade The field value to set.
 */
void SessionMessage::setAvgPosGrade(const qint16 avgPosGrade)
{
    Q_D(SessionMessage);
    d->avgPosGrade = avgPosGrade;
}
/*!
 * Sets the \c avgNegGrade field to \a avgNegGrade.
 *
 * \param avgNegGrade The field value to set.
 */
void SessionMessage::setAvgNegGrade(const qint16 avgNegGrade)
{
    Q_D(SessionMessage);
    d->avgNegGrade = avgNegGrade;
}
/*!
 * Sets the \c maxPosGrade field to \a maxPosGrade.
 *
 * \param maxPosGrade The field value to set.
 */
void SessionMessage::setMaxPosGrade(const qint16 maxPosGrade)
{
    Q_D(SessionMessage);
    d->maxPosGrade = maxPosGrade;
}
/*!
 * Sets the \c maxNegGrade field to \a maxNegGrade.
 *
 * \param maxNegGrade The field value to set.
 */
void SessionMessage::setMaxNegGrade(const qint16 maxNegGrade)
{
    Q_D(SessionMessage);
    d->maxNegGrade = maxNegGrade;
}
/*!
 * Sets the \c avgTemperature field to \a avgTemperature.
 *
 * \param avgTemperature The field value to set.
 */
void SessionMessage::setAvgTemperature(const qint8 avgTemperature)
{
    Q_D(SessionMessage);
    d->avgTemperature = avgTemperature;
}
/*!
 * Sets the \c maxTemperature field to \a maxTemperature.
 *
 * \param maxTemperature The field value to set.
 */
void SessionMessage::setMaxTemperature(const qint8 maxTemperature)
{
    Q_D(SessionMessage);
    d->maxTemperature = maxTemperature;
}
/*!
 * Sets the \c totalMovingTime field to \a totalMovingTime.
 *
 * \param totalMovingTime The field value to set.
 */
void SessionMessage::setTotalMovingTime(const quint32 totalMovingTime)
{
    Q_D(SessionMessage);
    d->totalMovingTime = totalMovingTime;
}
/*!
 * Sets the \c avgPosVerticalSpeed field to \a avgPosVerticalSpeed.
 *
 * \param avgPosVerticalSpeed The field value to set.
 */
void SessionMessage::setAvgPosVerticalSpeed(const qint16 avgPosVerticalSpeed)
{
    Q_D(SessionMessage);
    d->avgPosVerticalSpeed = avgPosVerticalSpeed;
}
/*!
 * Sets the \c avgNegVerticalSpeed field to \a avgNegVerticalSpeed.
 *
 * \param avgNegVerticalSpeed The field value to set.
 */
void SessionMessage::setAvgNegVerticalSpeed(const qint16 avgNegVerticalSpeed)
{
    Q_D(SessionMessage);
    d->avgNegVerticalSpeed = avgNegVerticalSpeed;
}
/*!
 * Sets the \c maxPosVerticalSpeed field to \a maxPosVerticalSpeed.
 *
 * \param maxPosVerticalSpeed The field value to set.
 */
void SessionMessage::setMaxPosVerticalSpeed(const qint16 maxPosVerticalSpeed)
{
    Q_D(SessionMessage);
    d->maxPosVerticalSpeed = maxPosVerticalSpeed;
}
/*!
 * Sets the \c maxNegVerticalSpeed field to \a maxNegVerticalSpeed.
 *
 * \param maxNegVerticalSpeed The field value to set.
 */
void SessionMessage::setMaxNegVerticalSpeed(const qint16 maxNegVerticalSpeed)
{
    Q_D(SessionMessage);
    d->maxNegVerticalSpeed = maxNegVerticalSpeed;
}
/*!
 * Sets the \c minHeartRate field to \a minHeartRate.
 *
 * \param minHeartRate The field value to set.
 */
void SessionMessage::setMinHeartRate(const quint8 minHeartRate)
{
    Q_D(SessionMessage);
    d->minHeartRate = minHeartRate;
}
/*!
 * Sets the \c timeInHrZone field to \a timeInHrZone.
 *
 * \param timeInHrZone The field value to set.
 */
void SessionMessage::setTimeInHrZone(const quint32 timeInHrZone)
{
    Q_D(SessionMessage);
    d->timeInHrZone = timeInHrZone;
}
/*!
 * Sets the \c timeInSpeedZone field to \a timeInSpeedZone.
 *
 * \param timeInSpeedZone The field value to set.
 */
void SessionMessage::setTimeInSpeedZone(const quint32 timeInSpeedZone)
{
    Q_D(SessionMessage);
    d->timeInSpeedZone = timeInSpeedZone;
}
/*!
 * Sets the \c timeInCadenceZone field to \a timeInCadenceZone.
 *
 * \param timeInCadenceZone The field value to set.
 */
void SessionMessage::setTimeInCadenceZone(const quint32 timeInCadenceZone)
{
    Q_D(SessionMessage);
    d->timeInCadenceZone = timeInCadenceZone;
}
/*!
 * Sets the \c timeInPowerZone field to \a timeInPowerZone.
 *
 * \param timeInPowerZone The field value to set.
 */
void SessionMessage::setTimeInPowerZone(const quint32 timeInPowerZone)
{
    Q_D(SessionMessage);
    d->timeInPowerZone = timeInPowerZone;
}
/*!
 * Sets the \c avgLapTime field to \a avgLapTime.
 *
 * \param avgLapTime The field value to set.
 */
void SessionMessage::setAvgLapTime(const quint32 avgLapTime)
{
    Q_D(SessionMessage);
    d->avgLapTime = avgLapTime;
}
/*!
 * Sets the \c bestLapIndex field to \a bestLapIndex.
 *
 * \param bestLapIndex The field value to set.
 */
void SessionMessage::setBestLapIndex(const quint16 bestLapIndex)
{
    Q_D(SessionMessage);
    d->bestLapIndex = bestLapIndex;
}
/*!
 * Sets the \c minAltitude field to \a minAltitude.
 *
 * \param minAltitude The field value to set.
 */
void SessionMessage::setMinAltitude(const quint16 minAltitude)
{
    Q_D(SessionMessage);
    d->minAltitude = minAltitude;
}
/*!
 * Sets the \c playerScore field to \a playerScore.
 *
 * \param playerScore The field value to set.
 */
void SessionMessage::setPlayerScore(const quint16 playerScore)
{
    Q_D(SessionMessage);
    d->playerScore = playerScore;
}
/*!
 * Sets the \c opponentScore field to \a opponentScore.
 *
 * \param opponentScore The field value to set.
 */
void SessionMessage::setOpponentScore(const quint16 opponentScore)
{
    Q_D(SessionMessage);
    d->opponentScore = opponentScore;
}
/*!
 * Sets the \c opponentName field to \a opponentName.
 *
 * \param opponentName The field value to set.
 */
void SessionMessage::setOpponentName(const QString opponentName)
{
    Q_D(SessionMessage);
    d->opponentName = opponentName;
}
/*!
 * Sets the \c strokeCount field to \a strokeCount.
 *
 * \param strokeCount The field value to set.
 */
void SessionMessage::setStrokeCount(const quint16 strokeCount)
{
    Q_D(SessionMessage);
    d->strokeCount = strokeCount;
}
/*!
 * Sets the \c zoneCount field to \a zoneCount.
 *
 * \param zoneCount The field value to set.
 */
void SessionMessage::setZoneCount(const quint16 zoneCount)
{
    Q_D(SessionMessage);
    d->zoneCount = zoneCount;
}
/*!
 * Sets the \c maxBallSpeed field to \a maxBallSpeed.
 *
 * \param maxBallSpeed The field value to set.
 */
void SessionMessage::setMaxBallSpeed(const quint16 maxBallSpeed)
{
    Q_D(SessionMessage);
    d->maxBallSpeed = maxBallSpeed;
}
/*!
 * Sets the \c avgBallSpeed field to \a avgBallSpeed.
 *
 * \param avgBallSpeed The field value to set.
 */
void SessionMessage::setAvgBallSpeed(const quint16 avgBallSpeed)
{
    Q_D(SessionMessage);
    d->avgBallSpeed = avgBallSpeed;
}
/*!
 * Sets the \c avgVerticalOscillation field to \a avgVerticalOscillation.
 *
 * \param avgVerticalOscillation The field value to set.
 */
void SessionMessage::setAvgVerticalOscillation(const quint16 avgVerticalOscillation)
{
    Q_D(SessionMessage);
    d->avgVerticalOscillation = avgVerticalOscillation;
}
/*!
 * Sets the \c avgStanceTimePercent field to \a avgStanceTimePercent.
 *
 * \param avgStanceTimePercent The field value to set.
 */
void SessionMessage::setAvgStanceTimePercent(const quint16 avgStanceTimePercent)
{
    Q_D(SessionMessage);
    d->avgStanceTimePercent = avgStanceTimePercent;
}
/*!
 * Sets the \c avgStanceTime field to \a avgStanceTime.
 *
 * \param avgStanceTime The field value to set.
 */
void SessionMessage::setAvgStanceTime(const quint16 avgStanceTime)
{
    Q_D(SessionMessage);
    d->avgStanceTime = avgStanceTime;
}
/*!
 * Sets the \c avgFractionalCadence field to \a avgFractionalCadence.
 *
 * \param avgFractionalCadence The field value to set.
 */
void SessionMessage::setAvgFractionalCadence(const quint8 avgFractionalCadence)
{
    Q_D(SessionMessage);
    d->avgFractionalCadence = avgFractionalCadence;
}
/*!
 * Sets the \c maxFractionalCadence field to \a maxFractionalCadence.
 *
 * \param maxFractionalCadence The field value to set.
 */
void SessionMessage::setMaxFractionalCadence(const quint8 maxFractionalCadence)
{
    Q_D(SessionMessage);
    d->maxFractionalCadence = maxFractionalCadence;
}
/*!
 * Sets the \c totalFractionalCycles field to \a totalFractionalCycles.
 *
 * \param totalFractionalCycles The field value to set.
 */
void SessionMessage::setTotalFractionalCycles(const quint8 totalFractionalCycles)
{
    Q_D(SessionMessage);
    d->totalFractionalCycles = totalFractionalCycles;
}
/*!
 * Sets the \c avgTotalHemoglobinConc field to \a avgTotalHemoglobinConc.
 *
 * \param avgTotalHemoglobinConc The field value to set.
 */
void SessionMessage::setAvgTotalHemoglobinConc(const quint16 avgTotalHemoglobinConc)
{
    Q_D(SessionMessage);
    d->avgTotalHemoglobinConc = avgTotalHemoglobinConc;
}
/*!
 * Sets the \c minTotalHemoglobinConc field to \a minTotalHemoglobinConc.
 *
 * \param minTotalHemoglobinConc The field value to set.
 */
void SessionMessage::setMinTotalHemoglobinConc(const quint16 minTotalHemoglobinConc)
{
    Q_D(SessionMessage);
    d->minTotalHemoglobinConc = minTotalHemoglobinConc;
}
/*!
 * Sets the \c maxTotalHemoglobinConc field to \a maxTotalHemoglobinConc.
 *
 * \param maxTotalHemoglobinConc The field value to set.
 */
void SessionMessage::setMaxTotalHemoglobinConc(const quint16 maxTotalHemoglobinConc)
{
    Q_D(SessionMessage);
    d->maxTotalHemoglobinConc = maxTotalHemoglobinConc;
}
/*!
 * Sets the \c avgSaturatedHemoglobinPercent field to \a avgSaturatedHemoglobinPercent.
 *
 * \param avgSaturatedHemoglobinPercent The field value to set.
 */
void SessionMessage::setAvgSaturatedHemoglobinPercent(const quint16 avgSaturatedHemoglobinPercent)
{
    Q_D(SessionMessage);
    d->avgSaturatedHemoglobinPercent = avgSaturatedHemoglobinPercent;
}
/*!
 * Sets the \c minSaturatedHemoglobinPercent field to \a minSaturatedHemoglobinPercent.
 *
 * \param minSaturatedHemoglobinPercent The field value to set.
 */
void SessionMessage::setMinSaturatedHemoglobinPercent(const quint16 minSaturatedHemoglobinPercent)
{
    Q_D(SessionMessage);
    d->minSaturatedHemoglobinPercent = minSaturatedHemoglobinPercent;
}
/*!
 * Sets the \c maxSaturatedHemoglobinPercent field to \a maxSaturatedHemoglobinPercent.
 *
 * \param maxSaturatedHemoglobinPercent The field value to set.
 */
void SessionMessage::setMaxSaturatedHemoglobinPercent(const quint16 maxSaturatedHemoglobinPercent)
{
    Q_D(SessionMessage);
    d->maxSaturatedHemoglobinPercent = maxSaturatedHemoglobinPercent;
}
/*!
 * Sets the \c avgLeftTorqueEffectiveness field to \a avgLeftTorqueEffectiveness.
 *
 * \param avgLeftTorqueEffectiveness The field value to set.
 */
void SessionMessage::setAvgLeftTorqueEffectiveness(const quint8 avgLeftTorqueEffectiveness)
{
    Q_D(SessionMessage);
    d->avgLeftTorqueEffectiveness = avgLeftTorqueEffectiveness;
}
/*!
 * Sets the \c avgRightTorqueEffectiveness field to \a avgRightTorqueEffectiveness.
 *
 * \param avgRightTorqueEffectiveness The field value to set.
 */
void SessionMessage::setAvgRightTorqueEffectiveness(const quint8 avgRightTorqueEffectiveness)
{
    Q_D(SessionMessage);
    d->avgRightTorqueEffectiveness = avgRightTorqueEffectiveness;
}
/*!
 * Sets the \c avgLeftPedalSmoothness field to \a avgLeftPedalSmoothness.
 *
 * \param avgLeftPedalSmoothness The field value to set.
 */
void SessionMessage::setAvgLeftPedalSmoothness(const quint8 avgLeftPedalSmoothness)
{
    Q_D(SessionMessage);
    d->avgLeftPedalSmoothness = avgLeftPedalSmoothness;
}
/*!
 * Sets the \c avgRightPedalSmoothness field to \a avgRightPedalSmoothness.
 *
 * \param avgRightPedalSmoothness The field value to set.
 */
void SessionMessage::setAvgRightPedalSmoothness(const quint8 avgRightPedalSmoothness)
{
    Q_D(SessionMessage);
    d->avgRightPedalSmoothness = avgRightPedalSmoothness;
}
/*!
 * Sets the \c avgCombinedPedalSmoothness field to \a avgCombinedPedalSmoothness.
 *
 * \param avgCombinedPedalSmoothness The field value to set.
 */
void SessionMessage::setAvgCombinedPedalSmoothness(const quint8 avgCombinedPedalSmoothness)
{
    Q_D(SessionMessage);
    d->avgCombinedPedalSmoothness = avgCombinedPedalSmoothness;
}
/*!
 * Sets the \c sportIndex field to \a sportIndex.
 *
 * \param sportIndex The field value to set.
 */
void SessionMessage::setSportIndex(const quint8 sportIndex)
{
    Q_D(SessionMessage);
    d->sportIndex = sportIndex;
}
/*!
 * Sets the \c timeStanding field to \a timeStanding.
 *
 * \param timeStanding The field value to set.
 */
void SessionMessage::setTimeStanding(const quint32 timeStanding)
{
    Q_D(SessionMessage);
    d->timeStanding = timeStanding;
}
/*!
 * Sets the \c standCount field to \a standCount.
 *
 * \param standCount The field value to set.
 */
void SessionMessage::setStandCount(const quint16 standCount)
{
    Q_D(SessionMessage);
    d->standCount = standCount;
}
/*!
 * Sets the \c avgLeftPco field to \a avgLeftPco.
 *
 * \param avgLeftPco The field value to set.
 */
void SessionMessage::setAvgLeftPco(const qint8 avgLeftPco)
{
    Q_D(SessionMessage);
    d->avgLeftPco = avgLeftPco;
}
/*!
 * Sets the \c avgRightPco field to \a avgRightPco.
 *
 * \param avgRightPco The field value to set.
 */
void SessionMessage::setAvgRightPco(const qint8 avgRightPco)
{
    Q_D(SessionMessage);
    d->avgRightPco = avgRightPco;
}
/*!
 * Sets the \c avgLeftPowerPhase field to \a avgLeftPowerPhase.
 *
 * \param avgLeftPowerPhase The field value to set.
 */
void SessionMessage::setAvgLeftPowerPhase(const quint8 avgLeftPowerPhase)
{
    Q_D(SessionMessage);
    d->avgLeftPowerPhase = avgLeftPowerPhase;
}
/*!
 * Sets the \c avgLeftPowerPhasePeak field to \a avgLeftPowerPhasePeak.
 *
 * \param avgLeftPowerPhasePeak The field value to set.
 */
void SessionMessage::setAvgLeftPowerPhasePeak(const quint8 avgLeftPowerPhasePeak)
{
    Q_D(SessionMessage);
    d->avgLeftPowerPhasePeak = avgLeftPowerPhasePeak;
}
/*!
 * Sets the \c avgRightPowerPhase field to \a avgRightPowerPhase.
 *
 * \param avgRightPowerPhase The field value to set.
 */
void SessionMessage::setAvgRightPowerPhase(const quint8 avgRightPowerPhase)
{
    Q_D(SessionMessage);
    d->avgRightPowerPhase = avgRightPowerPhase;
}
/*!
 * Sets the \c avgRightPowerPhasePeak field to \a avgRightPowerPhasePeak.
 *
 * \param avgRightPowerPhasePeak The field value to set.
 */
void SessionMessage::setAvgRightPowerPhasePeak(const quint8 avgRightPowerPhasePeak)
{
    Q_D(SessionMessage);
    d->avgRightPowerPhasePeak = avgRightPowerPhasePeak;
}
/*!
 * Sets the \c avgPowerPosition field to \a avgPowerPosition.
 *
 * \param avgPowerPosition The field value to set.
 */
void SessionMessage::setAvgPowerPosition(const quint16 avgPowerPosition)
{
    Q_D(SessionMessage);
    d->avgPowerPosition = avgPowerPosition;
}
/*!
 * Sets the \c maxPowerPosition field to \a maxPowerPosition.
 *
 * \param maxPowerPosition The field value to set.
 */
void SessionMessage::setMaxPowerPosition(const quint16 maxPowerPosition)
{
    Q_D(SessionMessage);
    d->maxPowerPosition = maxPowerPosition;
}
/*!
 * Sets the \c avgCadencePosition field to \a avgCadencePosition.
 *
 * \param avgCadencePosition The field value to set.
 */
void SessionMessage::setAvgCadencePosition(const quint8 avgCadencePosition)
{
    Q_D(SessionMessage);
    d->avgCadencePosition = avgCadencePosition;
}
/*!
 * Sets the \c maxCadencePosition field to \a maxCadencePosition.
 *
 * \param maxCadencePosition The field value to set.
 */
void SessionMessage::setMaxCadencePosition(const quint8 maxCadencePosition)
{
    Q_D(SessionMessage);
    d->maxCadencePosition = maxCadencePosition;
}
/*!
 * Sets the \c enhancedAvgSpeed field to \a enhancedAvgSpeed.
 *
 * \param enhancedAvgSpeed The field value to set.
 */
void SessionMessage::setEnhancedAvgSpeed(const quint32 enhancedAvgSpeed)
{
    Q_D(SessionMessage);
    d->enhancedAvgSpeed = enhancedAvgSpeed;
}
/*!
 * Sets the \c enhancedMaxSpeed field to \a enhancedMaxSpeed.
 *
 * \param enhancedMaxSpeed The field value to set.
 */
void SessionMessage::setEnhancedMaxSpeed(const quint32 enhancedMaxSpeed)
{
    Q_D(SessionMessage);
    d->enhancedMaxSpeed = enhancedMaxSpeed;
}
/*!
 * Sets the \c enhancedAvgAltitude field to \a enhancedAvgAltitude.
 *
 * \param enhancedAvgAltitude The field value to set.
 */
void SessionMessage::setEnhancedAvgAltitude(const quint32 enhancedAvgAltitude)
{
    Q_D(SessionMessage);
    d->enhancedAvgAltitude = enhancedAvgAltitude;
}
/*!
 * Sets the \c enhancedMinAltitude field to \a enhancedMinAltitude.
 *
 * \param enhancedMinAltitude The field value to set.
 */
void SessionMessage::setEnhancedMinAltitude(const quint32 enhancedMinAltitude)
{
    Q_D(SessionMessage);
    d->enhancedMinAltitude = enhancedMinAltitude;
}
/*!
 * Sets the \c enhancedMaxAltitude field to \a enhancedMaxAltitude.
 *
 * \param enhancedMaxAltitude The field value to set.
 */
void SessionMessage::setEnhancedMaxAltitude(const quint32 enhancedMaxAltitude)
{
    Q_D(SessionMessage);
    d->enhancedMaxAltitude = enhancedMaxAltitude;
}
/*!
 * Sets the \c avgLevMotorPower field to \a avgLevMotorPower.
 *
 * \param avgLevMotorPower The field value to set.
 */
void SessionMessage::setAvgLevMotorPower(const quint16 avgLevMotorPower)
{
    Q_D(SessionMessage);
    d->avgLevMotorPower = avgLevMotorPower;
}
/*!
 * Sets the \c maxLevMotorPower field to \a maxLevMotorPower.
 *
 * \param maxLevMotorPower The field value to set.
 */
void SessionMessage::setMaxLevMotorPower(const quint16 maxLevMotorPower)
{
    Q_D(SessionMessage);
    d->maxLevMotorPower = maxLevMotorPower;
}
/*!
 * Sets the \c levBatteryConsumption field to \a levBatteryConsumption.
 *
 * \param levBatteryConsumption The field value to set.
 */
void SessionMessage::setLevBatteryConsumption(const quint8 levBatteryConsumption)
{
    Q_D(SessionMessage);
    d->levBatteryConsumption = levBatteryConsumption;
}
/*!
 * Sets the \c avgVerticalRatio field to \a avgVerticalRatio.
 *
 * \param avgVerticalRatio The field value to set.
 */
void SessionMessage::setAvgVerticalRatio(const quint16 avgVerticalRatio)
{
    Q_D(SessionMessage);
    d->avgVerticalRatio = avgVerticalRatio;
}
/*!
 * Sets the \c avgStanceTimeBalance field to \a avgStanceTimeBalance.
 *
 * \param avgStanceTimeBalance The field value to set.
 */
void SessionMessage::setAvgStanceTimeBalance(const quint16 avgStanceTimeBalance)
{
    Q_D(SessionMessage);
    d->avgStanceTimeBalance = avgStanceTimeBalance;
}
/*!
 * Sets the \c avgStepLength field to \a avgStepLength.
 *
 * \param avgStepLength The field value to set.
 */
void SessionMessage::setAvgStepLength(const quint16 avgStepLength)
{
    Q_D(SessionMessage);
    d->avgStepLength = avgStepLength;
}
/*!
 * Sets the \c totalAnaerobicTrainingEffect field to \a totalAnaerobicTrainingEffect.
 *
 * \param totalAnaerobicTrainingEffect The field value to set.
 */
void SessionMessage::setTotalAnaerobicTrainingEffect(const quint8 totalAnaerobicTrainingEffect)
{
    Q_D(SessionMessage);
    d->totalAnaerobicTrainingEffect = totalAnaerobicTrainingEffect;
}
/*!
 * Sets the \c avgVam field to \a avgVam.
 *
 * \param avgVam The field value to set.
 */
void SessionMessage::setAvgVam(const quint16 avgVam)
{
    Q_D(SessionMessage);
    d->avgVam = avgVam;
}
/*!
 * Sets the \c totalGrit field to \a totalGrit.
 *
 * \param totalGrit The field value to set.
 */
void SessionMessage::setTotalGrit(const float totalGrit)
{
    Q_D(SessionMessage);
    d->totalGrit = totalGrit;
}
/*!
 * Sets the \c totalFlow field to \a totalFlow.
 *
 * \param totalFlow The field value to set.
 */
void SessionMessage::setTotalFlow(const float totalFlow)
{
    Q_D(SessionMessage);
    d->totalFlow = totalFlow;
}
/*!
 * Sets the \c jumpCount field to \a jumpCount.
 *
 * \param jumpCount The field value to set.
 */
void SessionMessage::setJumpCount(const quint16 jumpCount)
{
    Q_D(SessionMessage);
    d->jumpCount = jumpCount;
}
/*!
 * Sets the \c avgGrit field to \a avgGrit.
 *
 * \param avgGrit The field value to set.
 */
void SessionMessage::setAvgGrit(const float avgGrit)
{
    Q_D(SessionMessage);
    d->avgGrit = avgGrit;
}
/*!
 * Sets the \c avgFlow field to \a avgFlow.
 *
 * \param avgFlow The field value to set.
 */
void SessionMessage::setAvgFlow(const float avgFlow)
{
    Q_D(SessionMessage);
    d->avgFlow = avgFlow;
}
/*!
 * Sets the \c totalFractionalAscent field to \a totalFractionalAscent.
 *
 * \param totalFractionalAscent The field value to set.
 */
void SessionMessage::setTotalFractionalAscent(const quint8 totalFractionalAscent)
{
    Q_D(SessionMessage);
    d->totalFractionalAscent = totalFractionalAscent;
}
/*!
 * Sets the \c totalFractionalDescent field to \a totalFractionalDescent.
 *
 * \param totalFractionalDescent The field value to set.
 */
void SessionMessage::setTotalFractionalDescent(const quint8 totalFractionalDescent)
{
    Q_D(SessionMessage);
    d->totalFractionalDescent = totalFractionalDescent;
}
/*!
 * Sets the \c avgCoreTemperature field to \a avgCoreTemperature.
 *
 * \param avgCoreTemperature The field value to set.
 */
void SessionMessage::setAvgCoreTemperature(const quint16 avgCoreTemperature)
{
    Q_D(SessionMessage);
    d->avgCoreTemperature = avgCoreTemperature;
}
/*!
 * Sets the \c minCoreTemperature field to \a minCoreTemperature.
 *
 * \param minCoreTemperature The field value to set.
 */
void SessionMessage::setMinCoreTemperature(const quint16 minCoreTemperature)
{
    Q_D(SessionMessage);
    d->minCoreTemperature = minCoreTemperature;
}
/*!
 * Sets the \c maxCoreTemperature field to \a maxCoreTemperature.
 *
 * \param maxCoreTemperature The field value to set.
 */
void SessionMessage::setMaxCoreTemperature(const quint16 maxCoreTemperature)
{
    Q_D(SessionMessage);
    d->maxCoreTemperature = maxCoreTemperature;
}

/// \cond internal

/*!
 * \internal
 *
 * \class SessionMessagePrivate
 *
 * The SessionMessagePrivate class provides private implementation for the SessionMessage.
 *
 * \sa SessionMessage
 */

/*!
 * \internal
 *
 * Constructs a SessionMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SessionMessagePrivate::SessionMessagePrivate(SessionMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the SessionMessagePrivate object.
 */
SessionMessagePrivate::~SessionMessagePrivate()
{

}

bool SessionMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:session.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 253: // See Profile.xlsx::Messages:session.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:session.event
        if (!verify(data, baseType, 1, FitBaseType::Enum, "session.event")) return false;
        this->event = static_cast<Event>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:session.eventType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "session.eventType")) return false;
        this->eventType = static_cast<EventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:session.startTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.startTime")) return false;
        this->startTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:session.startPositionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "session.startPositionLat")) return false;
        this->startPositionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:session.startPositionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "session.startPositionLong")) return false;
        this->startPositionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:session.sport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "session.sport")) return false;
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:session.subSport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "session.subSport")) return false;
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:session.totalElapsedTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.totalElapsedTime")) return false;
        this->totalElapsedTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 8: // See Profile.xlsx::Messages:session.totalTimerTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.totalTimerTime")) return false;
        this->totalTimerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 9: // See Profile.xlsx::Messages:session.totalDistance
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.totalDistance")) return false;
        this->totalDistance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:session.totalCycles
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.totalCycles")) return false;
        this->totalCycles = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 11: // See Profile.xlsx::Messages:session.totalCalories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.totalCalories")) return false;
        this->totalCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 13: // See Profile.xlsx::Messages:session.totalFatCalories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.totalFatCalories")) return false;
        this->totalFatCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 14: // See Profile.xlsx::Messages:session.avgSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgSpeed")) return false;
        this->avgSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 15: // See Profile.xlsx::Messages:session.maxSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.maxSpeed")) return false;
        this->maxSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 16: // See Profile.xlsx::Messages:session.avgHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgHeartRate")) return false;
        this->avgHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:session.maxHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.maxHeartRate")) return false;
        this->maxHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:session.avgCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgCadence")) return false;
        this->avgCadence = static_cast<quint8>(data.at(0));
        break;
    case 19: // See Profile.xlsx::Messages:session.maxCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.maxCadence")) return false;
        this->maxCadence = static_cast<quint8>(data.at(0));
        break;
    case 20: // See Profile.xlsx::Messages:session.avgPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgPower")) return false;
        this->avgPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 21: // See Profile.xlsx::Messages:session.maxPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.maxPower")) return false;
        this->maxPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 22: // See Profile.xlsx::Messages:session.totalAscent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.totalAscent")) return false;
        this->totalAscent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 23: // See Profile.xlsx::Messages:session.totalDescent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.totalDescent")) return false;
        this->totalDescent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 24: // See Profile.xlsx::Messages:session.totalTrainingEffect
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.totalTrainingEffect")) return false;
        this->totalTrainingEffect = static_cast<quint8>(data.at(0));
        break;
    case 25: // See Profile.xlsx::Messages:session.firstLapIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.firstLapIndex")) return false;
        this->firstLapIndex = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 26: // See Profile.xlsx::Messages:session.numLaps
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.numLaps")) return false;
        this->numLaps = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 27: // See Profile.xlsx::Messages:session.eventGroup
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.eventGroup")) return false;
        this->eventGroup = static_cast<quint8>(data.at(0));
        break;
    case 28: // See Profile.xlsx::Messages:session.trigger
        if (!verify(data, baseType, 1, FitBaseType::Enum, "session.trigger")) return false;
        this->trigger = static_cast<SessionTrigger>(data.at(0));
        break;
    case 29: // See Profile.xlsx::Messages:session.necLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "session.necLat")) return false;
        this->necLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 30: // See Profile.xlsx::Messages:session.necLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "session.necLong")) return false;
        this->necLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 31: // See Profile.xlsx::Messages:session.swcLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "session.swcLat")) return false;
        this->swcLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 32: // See Profile.xlsx::Messages:session.swcLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "session.swcLong")) return false;
        this->swcLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 33: // See Profile.xlsx::Messages:session.numLengths
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.numLengths")) return false;
        this->numLengths = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 34: // See Profile.xlsx::Messages:session.normalizedPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.normalizedPower")) return false;
        this->normalizedPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 35: // See Profile.xlsx::Messages:session.trainingStressScore
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.trainingStressScore")) return false;
        this->trainingStressScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 36: // See Profile.xlsx::Messages:session.intensityFactor
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.intensityFactor")) return false;
        this->intensityFactor = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 37: // See Profile.xlsx::Messages:session.leftRightBalance
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.leftRightBalance")) return false;
        this->leftRightBalance = static_cast<LeftRightBalance100>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 41: // See Profile.xlsx::Messages:session.avgStrokeCount
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.avgStrokeCount")) return false;
        this->avgStrokeCount = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 42: // See Profile.xlsx::Messages:session.avgStrokeDistance
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgStrokeDistance")) return false;
        this->avgStrokeDistance = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 43: // See Profile.xlsx::Messages:session.swimStroke
        if (!verify(data, baseType, 1, FitBaseType::Enum, "session.swimStroke")) return false;
        this->swimStroke = static_cast<SwimStroke>(data.at(0));
        break;
    case 44: // See Profile.xlsx::Messages:session.poolLength
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.poolLength")) return false;
        this->poolLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 45: // See Profile.xlsx::Messages:session.thresholdPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.thresholdPower")) return false;
        this->thresholdPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 46: // See Profile.xlsx::Messages:session.poolLengthUnit
        if (!verify(data, baseType, 1, FitBaseType::Enum, "session.poolLengthUnit")) return false;
        this->poolLengthUnit = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 47: // See Profile.xlsx::Messages:session.numActiveLengths
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.numActiveLengths")) return false;
        this->numActiveLengths = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 48: // See Profile.xlsx::Messages:session.totalWork
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.totalWork")) return false;
        this->totalWork = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 49: // See Profile.xlsx::Messages:session.avgAltitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgAltitude")) return false;
        this->avgAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 50: // See Profile.xlsx::Messages:session.maxAltitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.maxAltitude")) return false;
        this->maxAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 51: // See Profile.xlsx::Messages:session.gpsAccuracy
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.gpsAccuracy")) return false;
        this->gpsAccuracy = static_cast<quint8>(data.at(0));
        break;
    case 52: // See Profile.xlsx::Messages:session.avgGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "session.avgGrade")) return false;
        this->avgGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 53: // See Profile.xlsx::Messages:session.avgPosGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "session.avgPosGrade")) return false;
        this->avgPosGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 54: // See Profile.xlsx::Messages:session.avgNegGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "session.avgNegGrade")) return false;
        this->avgNegGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 55: // See Profile.xlsx::Messages:session.maxPosGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "session.maxPosGrade")) return false;
        this->maxPosGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 56: // See Profile.xlsx::Messages:session.maxNegGrade
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "session.maxNegGrade")) return false;
        this->maxNegGrade = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 57: // See Profile.xlsx::Messages:session.avgTemperature
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "session.avgTemperature")) return false;
        this->avgTemperature = static_cast<qint8>(data.at(0));
        break;
    case 58: // See Profile.xlsx::Messages:session.maxTemperature
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "session.maxTemperature")) return false;
        this->maxTemperature = static_cast<qint8>(data.at(0));
        break;
    case 59: // See Profile.xlsx::Messages:session.totalMovingTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.totalMovingTime")) return false;
        this->totalMovingTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 60: // See Profile.xlsx::Messages:session.avgPosVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "session.avgPosVerticalSpeed")) return false;
        this->avgPosVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 61: // See Profile.xlsx::Messages:session.avgNegVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "session.avgNegVerticalSpeed")) return false;
        this->avgNegVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 62: // See Profile.xlsx::Messages:session.maxPosVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "session.maxPosVerticalSpeed")) return false;
        this->maxPosVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 63: // See Profile.xlsx::Messages:session.maxNegVerticalSpeed
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "session.maxNegVerticalSpeed")) return false;
        this->maxNegVerticalSpeed = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 64: // See Profile.xlsx::Messages:session.minHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.minHeartRate")) return false;
        this->minHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 65: // See Profile.xlsx::Messages:session.timeInHrZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.timeInHrZone")) return false;
        this->timeInHrZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 66: // See Profile.xlsx::Messages:session.timeInSpeedZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.timeInSpeedZone")) return false;
        this->timeInSpeedZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 67: // See Profile.xlsx::Messages:session.timeInCadenceZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.timeInCadenceZone")) return false;
        this->timeInCadenceZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 68: // See Profile.xlsx::Messages:session.timeInPowerZone
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.timeInPowerZone")) return false;
        this->timeInPowerZone = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 69: // See Profile.xlsx::Messages:session.avgLapTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.avgLapTime")) return false;
        this->avgLapTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 70: // See Profile.xlsx::Messages:session.bestLapIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.bestLapIndex")) return false;
        this->bestLapIndex = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 71: // See Profile.xlsx::Messages:session.minAltitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.minAltitude")) return false;
        this->minAltitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 82: // See Profile.xlsx::Messages:session.playerScore
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.playerScore")) return false;
        this->playerScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 83: // See Profile.xlsx::Messages:session.opponentScore
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.opponentScore")) return false;
        this->opponentScore = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 84: // See Profile.xlsx::Messages:session.opponentName
        if (!verify(data, baseType, 1, FitBaseType::String, "session.opponentName")) return false;
        this->opponentName = QString::fromUtf8(data);
        break;
    case 85: // See Profile.xlsx::Messages:session.strokeCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.strokeCount")) return false;
        this->strokeCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 86: // See Profile.xlsx::Messages:session.zoneCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.zoneCount")) return false;
        this->zoneCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 87: // See Profile.xlsx::Messages:session.maxBallSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.maxBallSpeed")) return false;
        this->maxBallSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 88: // See Profile.xlsx::Messages:session.avgBallSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgBallSpeed")) return false;
        this->avgBallSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 89: // See Profile.xlsx::Messages:session.avgVerticalOscillation
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgVerticalOscillation")) return false;
        this->avgVerticalOscillation = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 90: // See Profile.xlsx::Messages:session.avgStanceTimePercent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgStanceTimePercent")) return false;
        this->avgStanceTimePercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 91: // See Profile.xlsx::Messages:session.avgStanceTime
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgStanceTime")) return false;
        this->avgStanceTime = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 92: // See Profile.xlsx::Messages:session.avgFractionalCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgFractionalCadence")) return false;
        this->avgFractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 93: // See Profile.xlsx::Messages:session.maxFractionalCadence
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.maxFractionalCadence")) return false;
        this->maxFractionalCadence = static_cast<quint8>(data.at(0));
        break;
    case 94: // See Profile.xlsx::Messages:session.totalFractionalCycles
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.totalFractionalCycles")) return false;
        this->totalFractionalCycles = static_cast<quint8>(data.at(0));
        break;
    case 95: // See Profile.xlsx::Messages:session.avgTotalHemoglobinConc
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgTotalHemoglobinConc")) return false;
        this->avgTotalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 96: // See Profile.xlsx::Messages:session.minTotalHemoglobinConc
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.minTotalHemoglobinConc")) return false;
        this->minTotalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 97: // See Profile.xlsx::Messages:session.maxTotalHemoglobinConc
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.maxTotalHemoglobinConc")) return false;
        this->maxTotalHemoglobinConc = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 98: // See Profile.xlsx::Messages:session.avgSaturatedHemoglobinPercent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgSaturatedHemoglobinPercent")) return false;
        this->avgSaturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 99: // See Profile.xlsx::Messages:session.minSaturatedHemoglobinPercent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.minSaturatedHemoglobinPercent")) return false;
        this->minSaturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 100: // See Profile.xlsx::Messages:session.maxSaturatedHemoglobinPercent
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.maxSaturatedHemoglobinPercent")) return false;
        this->maxSaturatedHemoglobinPercent = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 101: // See Profile.xlsx::Messages:session.avgLeftTorqueEffectiveness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgLeftTorqueEffectiveness")) return false;
        this->avgLeftTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 102: // See Profile.xlsx::Messages:session.avgRightTorqueEffectiveness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgRightTorqueEffectiveness")) return false;
        this->avgRightTorqueEffectiveness = static_cast<quint8>(data.at(0));
        break;
    case 103: // See Profile.xlsx::Messages:session.avgLeftPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgLeftPedalSmoothness")) return false;
        this->avgLeftPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 104: // See Profile.xlsx::Messages:session.avgRightPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgRightPedalSmoothness")) return false;
        this->avgRightPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 105: // See Profile.xlsx::Messages:session.avgCombinedPedalSmoothness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgCombinedPedalSmoothness")) return false;
        this->avgCombinedPedalSmoothness = static_cast<quint8>(data.at(0));
        break;
    case 111: // See Profile.xlsx::Messages:session.sportIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.sportIndex")) return false;
        this->sportIndex = static_cast<quint8>(data.at(0));
        break;
    case 112: // See Profile.xlsx::Messages:session.timeStanding
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.timeStanding")) return false;
        this->timeStanding = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 113: // See Profile.xlsx::Messages:session.standCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.standCount")) return false;
        this->standCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 114: // See Profile.xlsx::Messages:session.avgLeftPco
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "session.avgLeftPco")) return false;
        this->avgLeftPco = static_cast<qint8>(data.at(0));
        break;
    case 115: // See Profile.xlsx::Messages:session.avgRightPco
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "session.avgRightPco")) return false;
        this->avgRightPco = static_cast<qint8>(data.at(0));
        break;
    case 116: // See Profile.xlsx::Messages:session.avgLeftPowerPhase
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgLeftPowerPhase")) return false;
        this->avgLeftPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 117: // See Profile.xlsx::Messages:session.avgLeftPowerPhasePeak
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgLeftPowerPhasePeak")) return false;
        this->avgLeftPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 118: // See Profile.xlsx::Messages:session.avgRightPowerPhase
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgRightPowerPhase")) return false;
        this->avgRightPowerPhase = static_cast<quint8>(data.at(0));
        break;
    case 119: // See Profile.xlsx::Messages:session.avgRightPowerPhasePeak
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgRightPowerPhasePeak")) return false;
        this->avgRightPowerPhasePeak = static_cast<quint8>(data.at(0));
        break;
    case 120: // See Profile.xlsx::Messages:session.avgPowerPosition
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgPowerPosition")) return false;
        this->avgPowerPosition = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 121: // See Profile.xlsx::Messages:session.maxPowerPosition
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.maxPowerPosition")) return false;
        this->maxPowerPosition = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 122: // See Profile.xlsx::Messages:session.avgCadencePosition
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.avgCadencePosition")) return false;
        this->avgCadencePosition = static_cast<quint8>(data.at(0));
        break;
    case 123: // See Profile.xlsx::Messages:session.maxCadencePosition
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.maxCadencePosition")) return false;
        this->maxCadencePosition = static_cast<quint8>(data.at(0));
        break;
    case 124: // See Profile.xlsx::Messages:session.enhancedAvgSpeed
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.enhancedAvgSpeed")) return false;
        this->enhancedAvgSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 125: // See Profile.xlsx::Messages:session.enhancedMaxSpeed
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.enhancedMaxSpeed")) return false;
        this->enhancedMaxSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 126: // See Profile.xlsx::Messages:session.enhancedAvgAltitude
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.enhancedAvgAltitude")) return false;
        this->enhancedAvgAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 127: // See Profile.xlsx::Messages:session.enhancedMinAltitude
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.enhancedMinAltitude")) return false;
        this->enhancedMinAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 128: // See Profile.xlsx::Messages:session.enhancedMaxAltitude
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "session.enhancedMaxAltitude")) return false;
        this->enhancedMaxAltitude = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 129: // See Profile.xlsx::Messages:session.avgLevMotorPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgLevMotorPower")) return false;
        this->avgLevMotorPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 130: // See Profile.xlsx::Messages:session.maxLevMotorPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.maxLevMotorPower")) return false;
        this->maxLevMotorPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 131: // See Profile.xlsx::Messages:session.levBatteryConsumption
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.levBatteryConsumption")) return false;
        this->levBatteryConsumption = static_cast<quint8>(data.at(0));
        break;
    case 132: // See Profile.xlsx::Messages:session.avgVerticalRatio
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgVerticalRatio")) return false;
        this->avgVerticalRatio = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 133: // See Profile.xlsx::Messages:session.avgStanceTimeBalance
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgStanceTimeBalance")) return false;
        this->avgStanceTimeBalance = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 134: // See Profile.xlsx::Messages:session.avgStepLength
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgStepLength")) return false;
        this->avgStepLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 137: // See Profile.xlsx::Messages:session.totalAnaerobicTrainingEffect
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.totalAnaerobicTrainingEffect")) return false;
        this->totalAnaerobicTrainingEffect = static_cast<quint8>(data.at(0));
        break;
    case 139: // See Profile.xlsx::Messages:session.avgVam
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgVam")) return false;
        this->avgVam = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 181: // See Profile.xlsx::Messages:session.totalGrit
        if (!verify(data, baseType, 4, FitBaseType::Float32, "session.totalGrit")) return false;
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
    case 182: // See Profile.xlsx::Messages:session.totalFlow
        if (!verify(data, baseType, 4, FitBaseType::Float32, "session.totalFlow")) return false;
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
    case 183: // See Profile.xlsx::Messages:session.jumpCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.jumpCount")) return false;
        this->jumpCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 186: // See Profile.xlsx::Messages:session.avgGrit
        if (!verify(data, baseType, 4, FitBaseType::Float32, "session.avgGrit")) return false;
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
    case 187: // See Profile.xlsx::Messages:session.avgFlow
        if (!verify(data, baseType, 4, FitBaseType::Float32, "session.avgFlow")) return false;
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
    case 199: // See Profile.xlsx::Messages:session.totalFractionalAscent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.totalFractionalAscent")) return false;
        this->totalFractionalAscent = static_cast<quint8>(data.at(0));
        break;
    case 200: // See Profile.xlsx::Messages:session.totalFractionalDescent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "session.totalFractionalDescent")) return false;
        this->totalFractionalDescent = static_cast<quint8>(data.at(0));
        break;
    case 208: // See Profile.xlsx::Messages:session.avgCoreTemperature
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.avgCoreTemperature")) return false;
        this->avgCoreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 209: // See Profile.xlsx::Messages:session.minCoreTemperature
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.minCoreTemperature")) return false;
        this->minCoreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 210: // See Profile.xlsx::Messages:session.maxCoreTemperature
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "session.maxCoreTemperature")) return false;
        this->maxCoreTemperature = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "ignoring unknown session message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
