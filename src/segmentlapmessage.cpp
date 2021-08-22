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

/*!
 * \class SegmentLapMessage
 *
 * The SegmentLapMessage class represents a FIT SegmentLapMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid SegmentLapMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SegmentLapMessage::SegmentLapMessage() : AbstractDataMessage(new SegmentLapMessagePrivate(this))
{

}

/*!
 * Returns the SegmentLapMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex SegmentLapMessage::messageIndex() const
{
    Q_D(const SegmentLapMessage);
    return d->messageIndex;
}

/*!
 * Returns the SegmentLapMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime SegmentLapMessage::timestamp() const
{
    Q_D(const SegmentLapMessage);
    return d->timestamp;
}

/*!
 * Returns the SegmentLapMessage data message's \c event field's current value.
 *
 * \return the \c event field value.
 */
Event SegmentLapMessage::event() const
{
    Q_D(const SegmentLapMessage);
    return d->event;
}

/*!
 * Returns the SegmentLapMessage data message's \c eventType field's current value.
 *
 * \return the \c eventType field value.
 */
EventType SegmentLapMessage::eventType() const
{
    Q_D(const SegmentLapMessage);
    return d->eventType;
}

/*!
 * Returns the SegmentLapMessage data message's \c startTime field's current value.
 *
 * \return the \c startTime field value.
 */
DateTime SegmentLapMessage::startTime() const
{
    Q_D(const SegmentLapMessage);
    return d->startTime;
}

/*!
 * Returns the SegmentLapMessage data message's \c startPositionLat field's current value.
 *
 * \return the \c startPositionLat field value.
 */
qint32 SegmentLapMessage::startPositionLat() const
{
    Q_D(const SegmentLapMessage);
    return d->startPositionLat;
}

/*!
 * Returns the SegmentLapMessage data message's \c startPositionLong field's current value.
 *
 * \return the \c startPositionLong field value.
 */
qint32 SegmentLapMessage::startPositionLong() const
{
    Q_D(const SegmentLapMessage);
    return d->startPositionLong;
}

/*!
 * Returns the SegmentLapMessage data message's \c endPositionLat field's current value.
 *
 * \return the \c endPositionLat field value.
 */
qint32 SegmentLapMessage::endPositionLat() const
{
    Q_D(const SegmentLapMessage);
    return d->endPositionLat;
}

/*!
 * Returns the SegmentLapMessage data message's \c endPositionLong field's current value.
 *
 * \return the \c endPositionLong field value.
 */
qint32 SegmentLapMessage::endPositionLong() const
{
    Q_D(const SegmentLapMessage);
    return d->endPositionLong;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalElapsedTime field's current value.
 *
 * \return the \c totalElapsedTime field value.
 */
quint32 SegmentLapMessage::totalElapsedTime() const
{
    Q_D(const SegmentLapMessage);
    return d->totalElapsedTime;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalTimerTime field's current value.
 *
 * \return the \c totalTimerTime field value.
 */
quint32 SegmentLapMessage::totalTimerTime() const
{
    Q_D(const SegmentLapMessage);
    return d->totalTimerTime;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalDistance field's current value.
 *
 * \return the \c totalDistance field value.
 */
quint32 SegmentLapMessage::totalDistance() const
{
    Q_D(const SegmentLapMessage);
    return d->totalDistance;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalCycles field's current value.
 *
 * \return the \c totalCycles field value.
 */
quint32 SegmentLapMessage::totalCycles() const
{
    Q_D(const SegmentLapMessage);
    return d->totalCycles;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalCalories field's current value.
 *
 * \return the \c totalCalories field value.
 */
quint16 SegmentLapMessage::totalCalories() const
{
    Q_D(const SegmentLapMessage);
    return d->totalCalories;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalFatCalories field's current value.
 *
 * \return the \c totalFatCalories field value.
 */
quint16 SegmentLapMessage::totalFatCalories() const
{
    Q_D(const SegmentLapMessage);
    return d->totalFatCalories;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgSpeed field's current value.
 *
 * \return the \c avgSpeed field value.
 */
quint16 SegmentLapMessage::avgSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->avgSpeed;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxSpeed field's current value.
 *
 * \return the \c maxSpeed field value.
 */
quint16 SegmentLapMessage::maxSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->maxSpeed;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgHeartRate field's current value.
 *
 * \return the \c avgHeartRate field value.
 */
quint8 SegmentLapMessage::avgHeartRate() const
{
    Q_D(const SegmentLapMessage);
    return d->avgHeartRate;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxHeartRate field's current value.
 *
 * \return the \c maxHeartRate field value.
 */
quint8 SegmentLapMessage::maxHeartRate() const
{
    Q_D(const SegmentLapMessage);
    return d->maxHeartRate;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgCadence field's current value.
 *
 * \return the \c avgCadence field value.
 */
quint8 SegmentLapMessage::avgCadence() const
{
    Q_D(const SegmentLapMessage);
    return d->avgCadence;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxCadence field's current value.
 *
 * \return the \c maxCadence field value.
 */
quint8 SegmentLapMessage::maxCadence() const
{
    Q_D(const SegmentLapMessage);
    return d->maxCadence;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgPower field's current value.
 *
 * \return the \c avgPower field value.
 */
quint16 SegmentLapMessage::avgPower() const
{
    Q_D(const SegmentLapMessage);
    return d->avgPower;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxPower field's current value.
 *
 * \return the \c maxPower field value.
 */
quint16 SegmentLapMessage::maxPower() const
{
    Q_D(const SegmentLapMessage);
    return d->maxPower;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalAscent field's current value.
 *
 * \return the \c totalAscent field value.
 */
quint16 SegmentLapMessage::totalAscent() const
{
    Q_D(const SegmentLapMessage);
    return d->totalAscent;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalDescent field's current value.
 *
 * \return the \c totalDescent field value.
 */
quint16 SegmentLapMessage::totalDescent() const
{
    Q_D(const SegmentLapMessage);
    return d->totalDescent;
}

/*!
 * Returns the SegmentLapMessage data message's \c sport field's current value.
 *
 * \return the \c sport field value.
 */
Sport SegmentLapMessage::sport() const
{
    Q_D(const SegmentLapMessage);
    return d->sport;
}

/*!
 * Returns the SegmentLapMessage data message's \c eventGroup field's current value.
 *
 * \return the \c eventGroup field value.
 */
quint8 SegmentLapMessage::eventGroup() const
{
    Q_D(const SegmentLapMessage);
    return d->eventGroup;
}

/*!
 * Returns the SegmentLapMessage data message's \c necLat field's current value.
 *
 * \return the \c necLat field value.
 */
qint32 SegmentLapMessage::necLat() const
{
    Q_D(const SegmentLapMessage);
    return d->necLat;
}

/*!
 * Returns the SegmentLapMessage data message's \c necLong field's current value.
 *
 * \return the \c necLong field value.
 */
qint32 SegmentLapMessage::necLong() const
{
    Q_D(const SegmentLapMessage);
    return d->necLong;
}

/*!
 * Returns the SegmentLapMessage data message's \c swcLat field's current value.
 *
 * \return the \c swcLat field value.
 */
qint32 SegmentLapMessage::swcLat() const
{
    Q_D(const SegmentLapMessage);
    return d->swcLat;
}

/*!
 * Returns the SegmentLapMessage data message's \c swcLong field's current value.
 *
 * \return the \c swcLong field value.
 */
qint32 SegmentLapMessage::swcLong() const
{
    Q_D(const SegmentLapMessage);
    return d->swcLong;
}

/*!
 * Returns the SegmentLapMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString SegmentLapMessage::name() const
{
    Q_D(const SegmentLapMessage);
    return d->name;
}

/*!
 * Returns the SegmentLapMessage data message's \c normalizedPower field's current value.
 *
 * \return the \c normalizedPower field value.
 */
quint16 SegmentLapMessage::normalizedPower() const
{
    Q_D(const SegmentLapMessage);
    return d->normalizedPower;
}

/*!
 * Returns the SegmentLapMessage data message's \c leftRightBalance field's current value.
 *
 * \return the \c leftRightBalance field value.
 */
LeftRightBalance100 SegmentLapMessage::leftRightBalance() const
{
    Q_D(const SegmentLapMessage);
    return d->leftRightBalance;
}

/*!
 * Returns the SegmentLapMessage data message's \c subSport field's current value.
 *
 * \return the \c subSport field value.
 */
SubSport SegmentLapMessage::subSport() const
{
    Q_D(const SegmentLapMessage);
    return d->subSport;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalWork field's current value.
 *
 * \return the \c totalWork field value.
 */
quint32 SegmentLapMessage::totalWork() const
{
    Q_D(const SegmentLapMessage);
    return d->totalWork;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgAltitude field's current value.
 *
 * \return the \c avgAltitude field value.
 */
quint16 SegmentLapMessage::avgAltitude() const
{
    Q_D(const SegmentLapMessage);
    return d->avgAltitude;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxAltitude field's current value.
 *
 * \return the \c maxAltitude field value.
 */
quint16 SegmentLapMessage::maxAltitude() const
{
    Q_D(const SegmentLapMessage);
    return d->maxAltitude;
}

/*!
 * Returns the SegmentLapMessage data message's \c gpsAccuracy field's current value.
 *
 * \return the \c gpsAccuracy field value.
 */
quint8 SegmentLapMessage::gpsAccuracy() const
{
    Q_D(const SegmentLapMessage);
    return d->gpsAccuracy;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgGrade field's current value.
 *
 * \return the \c avgGrade field value.
 */
qint16 SegmentLapMessage::avgGrade() const
{
    Q_D(const SegmentLapMessage);
    return d->avgGrade;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgPosGrade field's current value.
 *
 * \return the \c avgPosGrade field value.
 */
qint16 SegmentLapMessage::avgPosGrade() const
{
    Q_D(const SegmentLapMessage);
    return d->avgPosGrade;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgNegGrade field's current value.
 *
 * \return the \c avgNegGrade field value.
 */
qint16 SegmentLapMessage::avgNegGrade() const
{
    Q_D(const SegmentLapMessage);
    return d->avgNegGrade;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxPosGrade field's current value.
 *
 * \return the \c maxPosGrade field value.
 */
qint16 SegmentLapMessage::maxPosGrade() const
{
    Q_D(const SegmentLapMessage);
    return d->maxPosGrade;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxNegGrade field's current value.
 *
 * \return the \c maxNegGrade field value.
 */
qint16 SegmentLapMessage::maxNegGrade() const
{
    Q_D(const SegmentLapMessage);
    return d->maxNegGrade;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgTemperature field's current value.
 *
 * \return the \c avgTemperature field value.
 */
qint8 SegmentLapMessage::avgTemperature() const
{
    Q_D(const SegmentLapMessage);
    return d->avgTemperature;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxTemperature field's current value.
 *
 * \return the \c maxTemperature field value.
 */
qint8 SegmentLapMessage::maxTemperature() const
{
    Q_D(const SegmentLapMessage);
    return d->maxTemperature;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalMovingTime field's current value.
 *
 * \return the \c totalMovingTime field value.
 */
quint32 SegmentLapMessage::totalMovingTime() const
{
    Q_D(const SegmentLapMessage);
    return d->totalMovingTime;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgPosVerticalSpeed field's current value.
 *
 * \return the \c avgPosVerticalSpeed field value.
 */
qint16 SegmentLapMessage::avgPosVerticalSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->avgPosVerticalSpeed;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgNegVerticalSpeed field's current value.
 *
 * \return the \c avgNegVerticalSpeed field value.
 */
qint16 SegmentLapMessage::avgNegVerticalSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->avgNegVerticalSpeed;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxPosVerticalSpeed field's current value.
 *
 * \return the \c maxPosVerticalSpeed field value.
 */
qint16 SegmentLapMessage::maxPosVerticalSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->maxPosVerticalSpeed;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxNegVerticalSpeed field's current value.
 *
 * \return the \c maxNegVerticalSpeed field value.
 */
qint16 SegmentLapMessage::maxNegVerticalSpeed() const
{
    Q_D(const SegmentLapMessage);
    return d->maxNegVerticalSpeed;
}

/*!
 * Returns the SegmentLapMessage data message's \c timeInHrZone field's current value.
 *
 * \return the \c timeInHrZone field value.
 */
quint32 SegmentLapMessage::timeInHrZone() const
{
    Q_D(const SegmentLapMessage);
    return d->timeInHrZone;
}

/*!
 * Returns the SegmentLapMessage data message's \c timeInSpeedZone field's current value.
 *
 * \return the \c timeInSpeedZone field value.
 */
quint32 SegmentLapMessage::timeInSpeedZone() const
{
    Q_D(const SegmentLapMessage);
    return d->timeInSpeedZone;
}

/*!
 * Returns the SegmentLapMessage data message's \c timeInCadenceZone field's current value.
 *
 * \return the \c timeInCadenceZone field value.
 */
quint32 SegmentLapMessage::timeInCadenceZone() const
{
    Q_D(const SegmentLapMessage);
    return d->timeInCadenceZone;
}

/*!
 * Returns the SegmentLapMessage data message's \c timeInPowerZone field's current value.
 *
 * \return the \c timeInPowerZone field value.
 */
quint32 SegmentLapMessage::timeInPowerZone() const
{
    Q_D(const SegmentLapMessage);
    return d->timeInPowerZone;
}

/*!
 * Returns the SegmentLapMessage data message's \c repetitionNum field's current value.
 *
 * \return the \c repetitionNum field value.
 */
quint16 SegmentLapMessage::repetitionNum() const
{
    Q_D(const SegmentLapMessage);
    return d->repetitionNum;
}

/*!
 * Returns the SegmentLapMessage data message's \c minAltitude field's current value.
 *
 * \return the \c minAltitude field value.
 */
quint16 SegmentLapMessage::minAltitude() const
{
    Q_D(const SegmentLapMessage);
    return d->minAltitude;
}

/*!
 * Returns the SegmentLapMessage data message's \c minHeartRate field's current value.
 *
 * \return the \c minHeartRate field value.
 */
quint8 SegmentLapMessage::minHeartRate() const
{
    Q_D(const SegmentLapMessage);
    return d->minHeartRate;
}

/*!
 * Returns the SegmentLapMessage data message's \c activeTime field's current value.
 *
 * \return the \c activeTime field value.
 */
quint32 SegmentLapMessage::activeTime() const
{
    Q_D(const SegmentLapMessage);
    return d->activeTime;
}

/*!
 * Returns the SegmentLapMessage data message's \c wktStepIndex field's current value.
 *
 * \return the \c wktStepIndex field value.
 */
MessageIndex SegmentLapMessage::wktStepIndex() const
{
    Q_D(const SegmentLapMessage);
    return d->wktStepIndex;
}

/*!
 * Returns the SegmentLapMessage data message's \c sportEvent field's current value.
 *
 * \return the \c sportEvent field value.
 */
SportEvent SegmentLapMessage::sportEvent() const
{
    Q_D(const SegmentLapMessage);
    return d->sportEvent;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgLeftTorqueEffectiveness field's current value.
 *
 * \return the \c avgLeftTorqueEffectiveness field value.
 */
quint8 SegmentLapMessage::avgLeftTorqueEffectiveness() const
{
    Q_D(const SegmentLapMessage);
    return d->avgLeftTorqueEffectiveness;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgRightTorqueEffectiveness field's current value.
 *
 * \return the \c avgRightTorqueEffectiveness field value.
 */
quint8 SegmentLapMessage::avgRightTorqueEffectiveness() const
{
    Q_D(const SegmentLapMessage);
    return d->avgRightTorqueEffectiveness;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgLeftPedalSmoothness field's current value.
 *
 * \return the \c avgLeftPedalSmoothness field value.
 */
quint8 SegmentLapMessage::avgLeftPedalSmoothness() const
{
    Q_D(const SegmentLapMessage);
    return d->avgLeftPedalSmoothness;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgRightPedalSmoothness field's current value.
 *
 * \return the \c avgRightPedalSmoothness field value.
 */
quint8 SegmentLapMessage::avgRightPedalSmoothness() const
{
    Q_D(const SegmentLapMessage);
    return d->avgRightPedalSmoothness;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgCombinedPedalSmoothness field's current value.
 *
 * \return the \c avgCombinedPedalSmoothness field value.
 */
quint8 SegmentLapMessage::avgCombinedPedalSmoothness() const
{
    Q_D(const SegmentLapMessage);
    return d->avgCombinedPedalSmoothness;
}

/*!
 * Returns the SegmentLapMessage data message's \c status field's current value.
 *
 * \return the \c status field value.
 */
SegmentLapStatus SegmentLapMessage::status() const
{
    Q_D(const SegmentLapMessage);
    return d->status;
}

/*!
 * Returns the SegmentLapMessage data message's \c uuid field's current value.
 *
 * \return the \c uuid field value.
 */
QString SegmentLapMessage::uuid() const
{
    Q_D(const SegmentLapMessage);
    return d->uuid;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgFractionalCadence field's current value.
 *
 * \return the \c avgFractionalCadence field value.
 */
quint8 SegmentLapMessage::avgFractionalCadence() const
{
    Q_D(const SegmentLapMessage);
    return d->avgFractionalCadence;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxFractionalCadence field's current value.
 *
 * \return the \c maxFractionalCadence field value.
 */
quint8 SegmentLapMessage::maxFractionalCadence() const
{
    Q_D(const SegmentLapMessage);
    return d->maxFractionalCadence;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalFractionalCycles field's current value.
 *
 * \return the \c totalFractionalCycles field value.
 */
quint8 SegmentLapMessage::totalFractionalCycles() const
{
    Q_D(const SegmentLapMessage);
    return d->totalFractionalCycles;
}

/*!
 * Returns the SegmentLapMessage data message's \c frontGearShiftCount field's current value.
 *
 * \return the \c frontGearShiftCount field value.
 */
quint16 SegmentLapMessage::frontGearShiftCount() const
{
    Q_D(const SegmentLapMessage);
    return d->frontGearShiftCount;
}

/*!
 * Returns the SegmentLapMessage data message's \c rearGearShiftCount field's current value.
 *
 * \return the \c rearGearShiftCount field value.
 */
quint16 SegmentLapMessage::rearGearShiftCount() const
{
    Q_D(const SegmentLapMessage);
    return d->rearGearShiftCount;
}

/*!
 * Returns the SegmentLapMessage data message's \c timeStanding field's current value.
 *
 * \return the \c timeStanding field value.
 */
quint32 SegmentLapMessage::timeStanding() const
{
    Q_D(const SegmentLapMessage);
    return d->timeStanding;
}

/*!
 * Returns the SegmentLapMessage data message's \c standCount field's current value.
 *
 * \return the \c standCount field value.
 */
quint16 SegmentLapMessage::standCount() const
{
    Q_D(const SegmentLapMessage);
    return d->standCount;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgLeftPco field's current value.
 *
 * \return the \c avgLeftPco field value.
 */
qint8 SegmentLapMessage::avgLeftPco() const
{
    Q_D(const SegmentLapMessage);
    return d->avgLeftPco;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgRightPco field's current value.
 *
 * \return the \c avgRightPco field value.
 */
qint8 SegmentLapMessage::avgRightPco() const
{
    Q_D(const SegmentLapMessage);
    return d->avgRightPco;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgLeftPowerPhase field's current value.
 *
 * \return the \c avgLeftPowerPhase field value.
 */
quint8 SegmentLapMessage::avgLeftPowerPhase() const
{
    Q_D(const SegmentLapMessage);
    return d->avgLeftPowerPhase;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgLeftPowerPhasePeak field's current value.
 *
 * \return the \c avgLeftPowerPhasePeak field value.
 */
quint8 SegmentLapMessage::avgLeftPowerPhasePeak() const
{
    Q_D(const SegmentLapMessage);
    return d->avgLeftPowerPhasePeak;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgRightPowerPhase field's current value.
 *
 * \return the \c avgRightPowerPhase field value.
 */
quint8 SegmentLapMessage::avgRightPowerPhase() const
{
    Q_D(const SegmentLapMessage);
    return d->avgRightPowerPhase;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgRightPowerPhasePeak field's current value.
 *
 * \return the \c avgRightPowerPhasePeak field value.
 */
quint8 SegmentLapMessage::avgRightPowerPhasePeak() const
{
    Q_D(const SegmentLapMessage);
    return d->avgRightPowerPhasePeak;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgPowerPosition field's current value.
 *
 * \return the \c avgPowerPosition field value.
 */
quint16 SegmentLapMessage::avgPowerPosition() const
{
    Q_D(const SegmentLapMessage);
    return d->avgPowerPosition;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxPowerPosition field's current value.
 *
 * \return the \c maxPowerPosition field value.
 */
quint16 SegmentLapMessage::maxPowerPosition() const
{
    Q_D(const SegmentLapMessage);
    return d->maxPowerPosition;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgCadencePosition field's current value.
 *
 * \return the \c avgCadencePosition field value.
 */
quint8 SegmentLapMessage::avgCadencePosition() const
{
    Q_D(const SegmentLapMessage);
    return d->avgCadencePosition;
}

/*!
 * Returns the SegmentLapMessage data message's \c maxCadencePosition field's current value.
 *
 * \return the \c maxCadencePosition field value.
 */
quint8 SegmentLapMessage::maxCadencePosition() const
{
    Q_D(const SegmentLapMessage);
    return d->maxCadencePosition;
}

/*!
 * Returns the SegmentLapMessage data message's \c manufacturer field's current value.
 *
 * \return the \c manufacturer field value.
 */
Manufacturer SegmentLapMessage::manufacturer() const
{
    Q_D(const SegmentLapMessage);
    return d->manufacturer;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalGrit field's current value.
 *
 * \return the \c totalGrit field value.
 */
float SegmentLapMessage::totalGrit() const
{
    Q_D(const SegmentLapMessage);
    return d->totalGrit;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalFlow field's current value.
 *
 * \return the \c totalFlow field value.
 */
float SegmentLapMessage::totalFlow() const
{
    Q_D(const SegmentLapMessage);
    return d->totalFlow;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgGrit field's current value.
 *
 * \return the \c avgGrit field value.
 */
float SegmentLapMessage::avgGrit() const
{
    Q_D(const SegmentLapMessage);
    return d->avgGrit;
}

/*!
 * Returns the SegmentLapMessage data message's \c avgFlow field's current value.
 *
 * \return the \c avgFlow field value.
 */
float SegmentLapMessage::avgFlow() const
{
    Q_D(const SegmentLapMessage);
    return d->avgFlow;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalFractionalAscent field's current value.
 *
 * \return the \c totalFractionalAscent field value.
 */
quint8 SegmentLapMessage::totalFractionalAscent() const
{
    Q_D(const SegmentLapMessage);
    return d->totalFractionalAscent;
}

/*!
 * Returns the SegmentLapMessage data message's \c totalFractionalDescent field's current value.
 *
 * \return the \c totalFractionalDescent field value.
 */
quint8 SegmentLapMessage::totalFractionalDescent() const
{
    Q_D(const SegmentLapMessage);
    return d->totalFractionalDescent;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void SegmentLapMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SegmentLapMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void SegmentLapMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(SegmentLapMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c event field to \a event.
 *
 * \param event The field value to set.
 */
void SegmentLapMessage::setEvent(const Event event)
{
    Q_D(SegmentLapMessage);
    d->event = event;
}
/*!
 * Sets the \c eventType field to \a eventType.
 *
 * \param eventType The field value to set.
 */
void SegmentLapMessage::setEventType(const EventType eventType)
{
    Q_D(SegmentLapMessage);
    d->eventType = eventType;
}
/*!
 * Sets the \c startTime field to \a startTime.
 *
 * \param startTime The field value to set.
 */
void SegmentLapMessage::setStartTime(const DateTime startTime)
{
    Q_D(SegmentLapMessage);
    d->startTime = startTime;
}
/*!
 * Sets the \c startPositionLat field to \a startPositionLat.
 *
 * \param startPositionLat The field value to set.
 */
void SegmentLapMessage::setStartPositionLat(const qint32 startPositionLat)
{
    Q_D(SegmentLapMessage);
    d->startPositionLat = startPositionLat;
}
/*!
 * Sets the \c startPositionLong field to \a startPositionLong.
 *
 * \param startPositionLong The field value to set.
 */
void SegmentLapMessage::setStartPositionLong(const qint32 startPositionLong)
{
    Q_D(SegmentLapMessage);
    d->startPositionLong = startPositionLong;
}
/*!
 * Sets the \c endPositionLat field to \a endPositionLat.
 *
 * \param endPositionLat The field value to set.
 */
void SegmentLapMessage::setEndPositionLat(const qint32 endPositionLat)
{
    Q_D(SegmentLapMessage);
    d->endPositionLat = endPositionLat;
}
/*!
 * Sets the \c endPositionLong field to \a endPositionLong.
 *
 * \param endPositionLong The field value to set.
 */
void SegmentLapMessage::setEndPositionLong(const qint32 endPositionLong)
{
    Q_D(SegmentLapMessage);
    d->endPositionLong = endPositionLong;
}
/*!
 * Sets the \c totalElapsedTime field to \a totalElapsedTime.
 *
 * \param totalElapsedTime The field value to set.
 */
void SegmentLapMessage::setTotalElapsedTime(const quint32 totalElapsedTime)
{
    Q_D(SegmentLapMessage);
    d->totalElapsedTime = totalElapsedTime;
}
/*!
 * Sets the \c totalTimerTime field to \a totalTimerTime.
 *
 * \param totalTimerTime The field value to set.
 */
void SegmentLapMessage::setTotalTimerTime(const quint32 totalTimerTime)
{
    Q_D(SegmentLapMessage);
    d->totalTimerTime = totalTimerTime;
}
/*!
 * Sets the \c totalDistance field to \a totalDistance.
 *
 * \param totalDistance The field value to set.
 */
void SegmentLapMessage::setTotalDistance(const quint32 totalDistance)
{
    Q_D(SegmentLapMessage);
    d->totalDistance = totalDistance;
}
/*!
 * Sets the \c totalCycles field to \a totalCycles.
 *
 * \param totalCycles The field value to set.
 */
void SegmentLapMessage::setTotalCycles(const quint32 totalCycles)
{
    Q_D(SegmentLapMessage);
    d->totalCycles = totalCycles;
}
/*!
 * Sets the \c totalCalories field to \a totalCalories.
 *
 * \param totalCalories The field value to set.
 */
void SegmentLapMessage::setTotalCalories(const quint16 totalCalories)
{
    Q_D(SegmentLapMessage);
    d->totalCalories = totalCalories;
}
/*!
 * Sets the \c totalFatCalories field to \a totalFatCalories.
 *
 * \param totalFatCalories The field value to set.
 */
void SegmentLapMessage::setTotalFatCalories(const quint16 totalFatCalories)
{
    Q_D(SegmentLapMessage);
    d->totalFatCalories = totalFatCalories;
}
/*!
 * Sets the \c avgSpeed field to \a avgSpeed.
 *
 * \param avgSpeed The field value to set.
 */
void SegmentLapMessage::setAvgSpeed(const quint16 avgSpeed)
{
    Q_D(SegmentLapMessage);
    d->avgSpeed = avgSpeed;
}
/*!
 * Sets the \c maxSpeed field to \a maxSpeed.
 *
 * \param maxSpeed The field value to set.
 */
void SegmentLapMessage::setMaxSpeed(const quint16 maxSpeed)
{
    Q_D(SegmentLapMessage);
    d->maxSpeed = maxSpeed;
}
/*!
 * Sets the \c avgHeartRate field to \a avgHeartRate.
 *
 * \param avgHeartRate The field value to set.
 */
void SegmentLapMessage::setAvgHeartRate(const quint8 avgHeartRate)
{
    Q_D(SegmentLapMessage);
    d->avgHeartRate = avgHeartRate;
}
/*!
 * Sets the \c maxHeartRate field to \a maxHeartRate.
 *
 * \param maxHeartRate The field value to set.
 */
void SegmentLapMessage::setMaxHeartRate(const quint8 maxHeartRate)
{
    Q_D(SegmentLapMessage);
    d->maxHeartRate = maxHeartRate;
}
/*!
 * Sets the \c avgCadence field to \a avgCadence.
 *
 * \param avgCadence The field value to set.
 */
void SegmentLapMessage::setAvgCadence(const quint8 avgCadence)
{
    Q_D(SegmentLapMessage);
    d->avgCadence = avgCadence;
}
/*!
 * Sets the \c maxCadence field to \a maxCadence.
 *
 * \param maxCadence The field value to set.
 */
void SegmentLapMessage::setMaxCadence(const quint8 maxCadence)
{
    Q_D(SegmentLapMessage);
    d->maxCadence = maxCadence;
}
/*!
 * Sets the \c avgPower field to \a avgPower.
 *
 * \param avgPower The field value to set.
 */
void SegmentLapMessage::setAvgPower(const quint16 avgPower)
{
    Q_D(SegmentLapMessage);
    d->avgPower = avgPower;
}
/*!
 * Sets the \c maxPower field to \a maxPower.
 *
 * \param maxPower The field value to set.
 */
void SegmentLapMessage::setMaxPower(const quint16 maxPower)
{
    Q_D(SegmentLapMessage);
    d->maxPower = maxPower;
}
/*!
 * Sets the \c totalAscent field to \a totalAscent.
 *
 * \param totalAscent The field value to set.
 */
void SegmentLapMessage::setTotalAscent(const quint16 totalAscent)
{
    Q_D(SegmentLapMessage);
    d->totalAscent = totalAscent;
}
/*!
 * Sets the \c totalDescent field to \a totalDescent.
 *
 * \param totalDescent The field value to set.
 */
void SegmentLapMessage::setTotalDescent(const quint16 totalDescent)
{
    Q_D(SegmentLapMessage);
    d->totalDescent = totalDescent;
}
/*!
 * Sets the \c sport field to \a sport.
 *
 * \param sport The field value to set.
 */
void SegmentLapMessage::setSport(const Sport sport)
{
    Q_D(SegmentLapMessage);
    d->sport = sport;
}
/*!
 * Sets the \c eventGroup field to \a eventGroup.
 *
 * \param eventGroup The field value to set.
 */
void SegmentLapMessage::setEventGroup(const quint8 eventGroup)
{
    Q_D(SegmentLapMessage);
    d->eventGroup = eventGroup;
}
/*!
 * Sets the \c necLat field to \a necLat.
 *
 * \param necLat The field value to set.
 */
void SegmentLapMessage::setNecLat(const qint32 necLat)
{
    Q_D(SegmentLapMessage);
    d->necLat = necLat;
}
/*!
 * Sets the \c necLong field to \a necLong.
 *
 * \param necLong The field value to set.
 */
void SegmentLapMessage::setNecLong(const qint32 necLong)
{
    Q_D(SegmentLapMessage);
    d->necLong = necLong;
}
/*!
 * Sets the \c swcLat field to \a swcLat.
 *
 * \param swcLat The field value to set.
 */
void SegmentLapMessage::setSwcLat(const qint32 swcLat)
{
    Q_D(SegmentLapMessage);
    d->swcLat = swcLat;
}
/*!
 * Sets the \c swcLong field to \a swcLong.
 *
 * \param swcLong The field value to set.
 */
void SegmentLapMessage::setSwcLong(const qint32 swcLong)
{
    Q_D(SegmentLapMessage);
    d->swcLong = swcLong;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void SegmentLapMessage::setName(const QString name)
{
    Q_D(SegmentLapMessage);
    d->name = name;
}
/*!
 * Sets the \c normalizedPower field to \a normalizedPower.
 *
 * \param normalizedPower The field value to set.
 */
void SegmentLapMessage::setNormalizedPower(const quint16 normalizedPower)
{
    Q_D(SegmentLapMessage);
    d->normalizedPower = normalizedPower;
}
/*!
 * Sets the \c leftRightBalance field to \a leftRightBalance.
 *
 * \param leftRightBalance The field value to set.
 */
void SegmentLapMessage::setLeftRightBalance(const LeftRightBalance100 leftRightBalance)
{
    Q_D(SegmentLapMessage);
    d->leftRightBalance = leftRightBalance;
}
/*!
 * Sets the \c subSport field to \a subSport.
 *
 * \param subSport The field value to set.
 */
void SegmentLapMessage::setSubSport(const SubSport subSport)
{
    Q_D(SegmentLapMessage);
    d->subSport = subSport;
}
/*!
 * Sets the \c totalWork field to \a totalWork.
 *
 * \param totalWork The field value to set.
 */
void SegmentLapMessage::setTotalWork(const quint32 totalWork)
{
    Q_D(SegmentLapMessage);
    d->totalWork = totalWork;
}
/*!
 * Sets the \c avgAltitude field to \a avgAltitude.
 *
 * \param avgAltitude The field value to set.
 */
void SegmentLapMessage::setAvgAltitude(const quint16 avgAltitude)
{
    Q_D(SegmentLapMessage);
    d->avgAltitude = avgAltitude;
}
/*!
 * Sets the \c maxAltitude field to \a maxAltitude.
 *
 * \param maxAltitude The field value to set.
 */
void SegmentLapMessage::setMaxAltitude(const quint16 maxAltitude)
{
    Q_D(SegmentLapMessage);
    d->maxAltitude = maxAltitude;
}
/*!
 * Sets the \c gpsAccuracy field to \a gpsAccuracy.
 *
 * \param gpsAccuracy The field value to set.
 */
void SegmentLapMessage::setGpsAccuracy(const quint8 gpsAccuracy)
{
    Q_D(SegmentLapMessage);
    d->gpsAccuracy = gpsAccuracy;
}
/*!
 * Sets the \c avgGrade field to \a avgGrade.
 *
 * \param avgGrade The field value to set.
 */
void SegmentLapMessage::setAvgGrade(const qint16 avgGrade)
{
    Q_D(SegmentLapMessage);
    d->avgGrade = avgGrade;
}
/*!
 * Sets the \c avgPosGrade field to \a avgPosGrade.
 *
 * \param avgPosGrade The field value to set.
 */
void SegmentLapMessage::setAvgPosGrade(const qint16 avgPosGrade)
{
    Q_D(SegmentLapMessage);
    d->avgPosGrade = avgPosGrade;
}
/*!
 * Sets the \c avgNegGrade field to \a avgNegGrade.
 *
 * \param avgNegGrade The field value to set.
 */
void SegmentLapMessage::setAvgNegGrade(const qint16 avgNegGrade)
{
    Q_D(SegmentLapMessage);
    d->avgNegGrade = avgNegGrade;
}
/*!
 * Sets the \c maxPosGrade field to \a maxPosGrade.
 *
 * \param maxPosGrade The field value to set.
 */
void SegmentLapMessage::setMaxPosGrade(const qint16 maxPosGrade)
{
    Q_D(SegmentLapMessage);
    d->maxPosGrade = maxPosGrade;
}
/*!
 * Sets the \c maxNegGrade field to \a maxNegGrade.
 *
 * \param maxNegGrade The field value to set.
 */
void SegmentLapMessage::setMaxNegGrade(const qint16 maxNegGrade)
{
    Q_D(SegmentLapMessage);
    d->maxNegGrade = maxNegGrade;
}
/*!
 * Sets the \c avgTemperature field to \a avgTemperature.
 *
 * \param avgTemperature The field value to set.
 */
void SegmentLapMessage::setAvgTemperature(const qint8 avgTemperature)
{
    Q_D(SegmentLapMessage);
    d->avgTemperature = avgTemperature;
}
/*!
 * Sets the \c maxTemperature field to \a maxTemperature.
 *
 * \param maxTemperature The field value to set.
 */
void SegmentLapMessage::setMaxTemperature(const qint8 maxTemperature)
{
    Q_D(SegmentLapMessage);
    d->maxTemperature = maxTemperature;
}
/*!
 * Sets the \c totalMovingTime field to \a totalMovingTime.
 *
 * \param totalMovingTime The field value to set.
 */
void SegmentLapMessage::setTotalMovingTime(const quint32 totalMovingTime)
{
    Q_D(SegmentLapMessage);
    d->totalMovingTime = totalMovingTime;
}
/*!
 * Sets the \c avgPosVerticalSpeed field to \a avgPosVerticalSpeed.
 *
 * \param avgPosVerticalSpeed The field value to set.
 */
void SegmentLapMessage::setAvgPosVerticalSpeed(const qint16 avgPosVerticalSpeed)
{
    Q_D(SegmentLapMessage);
    d->avgPosVerticalSpeed = avgPosVerticalSpeed;
}
/*!
 * Sets the \c avgNegVerticalSpeed field to \a avgNegVerticalSpeed.
 *
 * \param avgNegVerticalSpeed The field value to set.
 */
void SegmentLapMessage::setAvgNegVerticalSpeed(const qint16 avgNegVerticalSpeed)
{
    Q_D(SegmentLapMessage);
    d->avgNegVerticalSpeed = avgNegVerticalSpeed;
}
/*!
 * Sets the \c maxPosVerticalSpeed field to \a maxPosVerticalSpeed.
 *
 * \param maxPosVerticalSpeed The field value to set.
 */
void SegmentLapMessage::setMaxPosVerticalSpeed(const qint16 maxPosVerticalSpeed)
{
    Q_D(SegmentLapMessage);
    d->maxPosVerticalSpeed = maxPosVerticalSpeed;
}
/*!
 * Sets the \c maxNegVerticalSpeed field to \a maxNegVerticalSpeed.
 *
 * \param maxNegVerticalSpeed The field value to set.
 */
void SegmentLapMessage::setMaxNegVerticalSpeed(const qint16 maxNegVerticalSpeed)
{
    Q_D(SegmentLapMessage);
    d->maxNegVerticalSpeed = maxNegVerticalSpeed;
}
/*!
 * Sets the \c timeInHrZone field to \a timeInHrZone.
 *
 * \param timeInHrZone The field value to set.
 */
void SegmentLapMessage::setTimeInHrZone(const quint32 timeInHrZone)
{
    Q_D(SegmentLapMessage);
    d->timeInHrZone = timeInHrZone;
}
/*!
 * Sets the \c timeInSpeedZone field to \a timeInSpeedZone.
 *
 * \param timeInSpeedZone The field value to set.
 */
void SegmentLapMessage::setTimeInSpeedZone(const quint32 timeInSpeedZone)
{
    Q_D(SegmentLapMessage);
    d->timeInSpeedZone = timeInSpeedZone;
}
/*!
 * Sets the \c timeInCadenceZone field to \a timeInCadenceZone.
 *
 * \param timeInCadenceZone The field value to set.
 */
void SegmentLapMessage::setTimeInCadenceZone(const quint32 timeInCadenceZone)
{
    Q_D(SegmentLapMessage);
    d->timeInCadenceZone = timeInCadenceZone;
}
/*!
 * Sets the \c timeInPowerZone field to \a timeInPowerZone.
 *
 * \param timeInPowerZone The field value to set.
 */
void SegmentLapMessage::setTimeInPowerZone(const quint32 timeInPowerZone)
{
    Q_D(SegmentLapMessage);
    d->timeInPowerZone = timeInPowerZone;
}
/*!
 * Sets the \c repetitionNum field to \a repetitionNum.
 *
 * \param repetitionNum The field value to set.
 */
void SegmentLapMessage::setRepetitionNum(const quint16 repetitionNum)
{
    Q_D(SegmentLapMessage);
    d->repetitionNum = repetitionNum;
}
/*!
 * Sets the \c minAltitude field to \a minAltitude.
 *
 * \param minAltitude The field value to set.
 */
void SegmentLapMessage::setMinAltitude(const quint16 minAltitude)
{
    Q_D(SegmentLapMessage);
    d->minAltitude = minAltitude;
}
/*!
 * Sets the \c minHeartRate field to \a minHeartRate.
 *
 * \param minHeartRate The field value to set.
 */
void SegmentLapMessage::setMinHeartRate(const quint8 minHeartRate)
{
    Q_D(SegmentLapMessage);
    d->minHeartRate = minHeartRate;
}
/*!
 * Sets the \c activeTime field to \a activeTime.
 *
 * \param activeTime The field value to set.
 */
void SegmentLapMessage::setActiveTime(const quint32 activeTime)
{
    Q_D(SegmentLapMessage);
    d->activeTime = activeTime;
}
/*!
 * Sets the \c wktStepIndex field to \a wktStepIndex.
 *
 * \param wktStepIndex The field value to set.
 */
void SegmentLapMessage::setWktStepIndex(const MessageIndex wktStepIndex)
{
    Q_D(SegmentLapMessage);
    d->wktStepIndex = wktStepIndex;
}
/*!
 * Sets the \c sportEvent field to \a sportEvent.
 *
 * \param sportEvent The field value to set.
 */
void SegmentLapMessage::setSportEvent(const SportEvent sportEvent)
{
    Q_D(SegmentLapMessage);
    d->sportEvent = sportEvent;
}
/*!
 * Sets the \c avgLeftTorqueEffectiveness field to \a avgLeftTorqueEffectiveness.
 *
 * \param avgLeftTorqueEffectiveness The field value to set.
 */
void SegmentLapMessage::setAvgLeftTorqueEffectiveness(const quint8 avgLeftTorqueEffectiveness)
{
    Q_D(SegmentLapMessage);
    d->avgLeftTorqueEffectiveness = avgLeftTorqueEffectiveness;
}
/*!
 * Sets the \c avgRightTorqueEffectiveness field to \a avgRightTorqueEffectiveness.
 *
 * \param avgRightTorqueEffectiveness The field value to set.
 */
void SegmentLapMessage::setAvgRightTorqueEffectiveness(const quint8 avgRightTorqueEffectiveness)
{
    Q_D(SegmentLapMessage);
    d->avgRightTorqueEffectiveness = avgRightTorqueEffectiveness;
}
/*!
 * Sets the \c avgLeftPedalSmoothness field to \a avgLeftPedalSmoothness.
 *
 * \param avgLeftPedalSmoothness The field value to set.
 */
void SegmentLapMessage::setAvgLeftPedalSmoothness(const quint8 avgLeftPedalSmoothness)
{
    Q_D(SegmentLapMessage);
    d->avgLeftPedalSmoothness = avgLeftPedalSmoothness;
}
/*!
 * Sets the \c avgRightPedalSmoothness field to \a avgRightPedalSmoothness.
 *
 * \param avgRightPedalSmoothness The field value to set.
 */
void SegmentLapMessage::setAvgRightPedalSmoothness(const quint8 avgRightPedalSmoothness)
{
    Q_D(SegmentLapMessage);
    d->avgRightPedalSmoothness = avgRightPedalSmoothness;
}
/*!
 * Sets the \c avgCombinedPedalSmoothness field to \a avgCombinedPedalSmoothness.
 *
 * \param avgCombinedPedalSmoothness The field value to set.
 */
void SegmentLapMessage::setAvgCombinedPedalSmoothness(const quint8 avgCombinedPedalSmoothness)
{
    Q_D(SegmentLapMessage);
    d->avgCombinedPedalSmoothness = avgCombinedPedalSmoothness;
}
/*!
 * Sets the \c status field to \a status.
 *
 * \param status The field value to set.
 */
void SegmentLapMessage::setStatus(const SegmentLapStatus status)
{
    Q_D(SegmentLapMessage);
    d->status = status;
}
/*!
 * Sets the \c uuid field to \a uuid.
 *
 * \param uuid The field value to set.
 */
void SegmentLapMessage::setUuid(const QString uuid)
{
    Q_D(SegmentLapMessage);
    d->uuid = uuid;
}
/*!
 * Sets the \c avgFractionalCadence field to \a avgFractionalCadence.
 *
 * \param avgFractionalCadence The field value to set.
 */
void SegmentLapMessage::setAvgFractionalCadence(const quint8 avgFractionalCadence)
{
    Q_D(SegmentLapMessage);
    d->avgFractionalCadence = avgFractionalCadence;
}
/*!
 * Sets the \c maxFractionalCadence field to \a maxFractionalCadence.
 *
 * \param maxFractionalCadence The field value to set.
 */
void SegmentLapMessage::setMaxFractionalCadence(const quint8 maxFractionalCadence)
{
    Q_D(SegmentLapMessage);
    d->maxFractionalCadence = maxFractionalCadence;
}
/*!
 * Sets the \c totalFractionalCycles field to \a totalFractionalCycles.
 *
 * \param totalFractionalCycles The field value to set.
 */
void SegmentLapMessage::setTotalFractionalCycles(const quint8 totalFractionalCycles)
{
    Q_D(SegmentLapMessage);
    d->totalFractionalCycles = totalFractionalCycles;
}
/*!
 * Sets the \c frontGearShiftCount field to \a frontGearShiftCount.
 *
 * \param frontGearShiftCount The field value to set.
 */
void SegmentLapMessage::setFrontGearShiftCount(const quint16 frontGearShiftCount)
{
    Q_D(SegmentLapMessage);
    d->frontGearShiftCount = frontGearShiftCount;
}
/*!
 * Sets the \c rearGearShiftCount field to \a rearGearShiftCount.
 *
 * \param rearGearShiftCount The field value to set.
 */
void SegmentLapMessage::setRearGearShiftCount(const quint16 rearGearShiftCount)
{
    Q_D(SegmentLapMessage);
    d->rearGearShiftCount = rearGearShiftCount;
}
/*!
 * Sets the \c timeStanding field to \a timeStanding.
 *
 * \param timeStanding The field value to set.
 */
void SegmentLapMessage::setTimeStanding(const quint32 timeStanding)
{
    Q_D(SegmentLapMessage);
    d->timeStanding = timeStanding;
}
/*!
 * Sets the \c standCount field to \a standCount.
 *
 * \param standCount The field value to set.
 */
void SegmentLapMessage::setStandCount(const quint16 standCount)
{
    Q_D(SegmentLapMessage);
    d->standCount = standCount;
}
/*!
 * Sets the \c avgLeftPco field to \a avgLeftPco.
 *
 * \param avgLeftPco The field value to set.
 */
void SegmentLapMessage::setAvgLeftPco(const qint8 avgLeftPco)
{
    Q_D(SegmentLapMessage);
    d->avgLeftPco = avgLeftPco;
}
/*!
 * Sets the \c avgRightPco field to \a avgRightPco.
 *
 * \param avgRightPco The field value to set.
 */
void SegmentLapMessage::setAvgRightPco(const qint8 avgRightPco)
{
    Q_D(SegmentLapMessage);
    d->avgRightPco = avgRightPco;
}
/*!
 * Sets the \c avgLeftPowerPhase field to \a avgLeftPowerPhase.
 *
 * \param avgLeftPowerPhase The field value to set.
 */
void SegmentLapMessage::setAvgLeftPowerPhase(const quint8 avgLeftPowerPhase)
{
    Q_D(SegmentLapMessage);
    d->avgLeftPowerPhase = avgLeftPowerPhase;
}
/*!
 * Sets the \c avgLeftPowerPhasePeak field to \a avgLeftPowerPhasePeak.
 *
 * \param avgLeftPowerPhasePeak The field value to set.
 */
void SegmentLapMessage::setAvgLeftPowerPhasePeak(const quint8 avgLeftPowerPhasePeak)
{
    Q_D(SegmentLapMessage);
    d->avgLeftPowerPhasePeak = avgLeftPowerPhasePeak;
}
/*!
 * Sets the \c avgRightPowerPhase field to \a avgRightPowerPhase.
 *
 * \param avgRightPowerPhase The field value to set.
 */
void SegmentLapMessage::setAvgRightPowerPhase(const quint8 avgRightPowerPhase)
{
    Q_D(SegmentLapMessage);
    d->avgRightPowerPhase = avgRightPowerPhase;
}
/*!
 * Sets the \c avgRightPowerPhasePeak field to \a avgRightPowerPhasePeak.
 *
 * \param avgRightPowerPhasePeak The field value to set.
 */
void SegmentLapMessage::setAvgRightPowerPhasePeak(const quint8 avgRightPowerPhasePeak)
{
    Q_D(SegmentLapMessage);
    d->avgRightPowerPhasePeak = avgRightPowerPhasePeak;
}
/*!
 * Sets the \c avgPowerPosition field to \a avgPowerPosition.
 *
 * \param avgPowerPosition The field value to set.
 */
void SegmentLapMessage::setAvgPowerPosition(const quint16 avgPowerPosition)
{
    Q_D(SegmentLapMessage);
    d->avgPowerPosition = avgPowerPosition;
}
/*!
 * Sets the \c maxPowerPosition field to \a maxPowerPosition.
 *
 * \param maxPowerPosition The field value to set.
 */
void SegmentLapMessage::setMaxPowerPosition(const quint16 maxPowerPosition)
{
    Q_D(SegmentLapMessage);
    d->maxPowerPosition = maxPowerPosition;
}
/*!
 * Sets the \c avgCadencePosition field to \a avgCadencePosition.
 *
 * \param avgCadencePosition The field value to set.
 */
void SegmentLapMessage::setAvgCadencePosition(const quint8 avgCadencePosition)
{
    Q_D(SegmentLapMessage);
    d->avgCadencePosition = avgCadencePosition;
}
/*!
 * Sets the \c maxCadencePosition field to \a maxCadencePosition.
 *
 * \param maxCadencePosition The field value to set.
 */
void SegmentLapMessage::setMaxCadencePosition(const quint8 maxCadencePosition)
{
    Q_D(SegmentLapMessage);
    d->maxCadencePosition = maxCadencePosition;
}
/*!
 * Sets the \c manufacturer field to \a manufacturer.
 *
 * \param manufacturer The field value to set.
 */
void SegmentLapMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(SegmentLapMessage);
    d->manufacturer = manufacturer;
}
/*!
 * Sets the \c totalGrit field to \a totalGrit.
 *
 * \param totalGrit The field value to set.
 */
void SegmentLapMessage::setTotalGrit(const float totalGrit)
{
    Q_D(SegmentLapMessage);
    d->totalGrit = totalGrit;
}
/*!
 * Sets the \c totalFlow field to \a totalFlow.
 *
 * \param totalFlow The field value to set.
 */
void SegmentLapMessage::setTotalFlow(const float totalFlow)
{
    Q_D(SegmentLapMessage);
    d->totalFlow = totalFlow;
}
/*!
 * Sets the \c avgGrit field to \a avgGrit.
 *
 * \param avgGrit The field value to set.
 */
void SegmentLapMessage::setAvgGrit(const float avgGrit)
{
    Q_D(SegmentLapMessage);
    d->avgGrit = avgGrit;
}
/*!
 * Sets the \c avgFlow field to \a avgFlow.
 *
 * \param avgFlow The field value to set.
 */
void SegmentLapMessage::setAvgFlow(const float avgFlow)
{
    Q_D(SegmentLapMessage);
    d->avgFlow = avgFlow;
}
/*!
 * Sets the \c totalFractionalAscent field to \a totalFractionalAscent.
 *
 * \param totalFractionalAscent The field value to set.
 */
void SegmentLapMessage::setTotalFractionalAscent(const quint8 totalFractionalAscent)
{
    Q_D(SegmentLapMessage);
    d->totalFractionalAscent = totalFractionalAscent;
}
/*!
 * Sets the \c totalFractionalDescent field to \a totalFractionalDescent.
 *
 * \param totalFractionalDescent The field value to set.
 */
void SegmentLapMessage::setTotalFractionalDescent(const quint8 totalFractionalDescent)
{
    Q_D(SegmentLapMessage);
    d->totalFractionalDescent = totalFractionalDescent;
}

/*!
 * \internal
 *
 * \class SegmentLapMessagePrivate
 *
 * The SegmentLapMessagePrivate class provides private implementation for the SegmentLapMessage.
 *
 * \sa SegmentLapMessage
 */

/*!
 * \internal
 *
 * Constructs a SegmentLapMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SegmentLapMessagePrivate::SegmentLapMessagePrivate(SegmentLapMessage * const q)
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

/*!
 * \internal
 *
 * Destroys the SegmentLapMessagePrivate object.
 */
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
        return AbstractDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
