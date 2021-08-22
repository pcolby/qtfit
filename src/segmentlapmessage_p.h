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

#ifndef QTFIT_SEGMENTLAPMESSAGE_P_H
#define QTFIT_SEGMENTLAPMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SegmentLapMessage;

class SegmentLapMessagePrivate : public AbstractDataMessagePrivate {

public:
    MessageIndex messageIndex;
    DateTime timestamp;
    Event event;
    EventType eventType;
    DateTime startTime;
    qint32 startPositionLat;
    qint32 startPositionLong;
    qint32 endPositionLat;
    qint32 endPositionLong;
    quint32 totalElapsedTime;
    quint32 totalTimerTime;
    quint32 totalDistance;
    quint32 totalCycles;
    quint16 totalCalories;
    quint16 totalFatCalories;
    quint16 avgSpeed;
    quint16 maxSpeed;
    quint8 avgHeartRate;
    quint8 maxHeartRate;
    quint8 avgCadence;
    quint8 maxCadence;
    quint16 avgPower;
    quint16 maxPower;
    quint16 totalAscent;
    quint16 totalDescent;
    Sport sport;
    quint8 eventGroup;
    qint32 necLat;
    qint32 necLong;
    qint32 swcLat;
    qint32 swcLong;
    QString name;
    quint16 normalizedPower;
    LeftRightBalance100 leftRightBalance;
    SubSport subSport;
    quint32 totalWork;
    quint16 avgAltitude;
    quint16 maxAltitude;
    quint8 gpsAccuracy;
    qint16 avgGrade;
    qint16 avgPosGrade;
    qint16 avgNegGrade;
    qint16 maxPosGrade;
    qint16 maxNegGrade;
    qint8 avgTemperature;
    qint8 maxTemperature;
    quint32 totalMovingTime;
    qint16 avgPosVerticalSpeed;
    qint16 avgNegVerticalSpeed;
    qint16 maxPosVerticalSpeed;
    qint16 maxNegVerticalSpeed;
    quint32 timeInHrZone;
    quint32 timeInSpeedZone;
    quint32 timeInCadenceZone;
    quint32 timeInPowerZone;
    quint16 repetitionNum;
    quint16 minAltitude;
    quint8 minHeartRate;
    quint32 activeTime;
    MessageIndex wktStepIndex;
    SportEvent sportEvent;
    quint8 avgLeftTorqueEffectiveness;
    quint8 avgRightTorqueEffectiveness;
    quint8 avgLeftPedalSmoothness;
    quint8 avgRightPedalSmoothness;
    quint8 avgCombinedPedalSmoothness;
    SegmentLapStatus status;
    QString uuid;
    quint8 avgFractionalCadence;
    quint8 maxFractionalCadence;
    quint8 totalFractionalCycles;
    quint16 frontGearShiftCount;
    quint16 rearGearShiftCount;
    quint32 timeStanding;
    quint16 standCount;
    qint8 avgLeftPco;
    qint8 avgRightPco;
    quint8 avgLeftPowerPhase;
    quint8 avgLeftPowerPhasePeak;
    quint8 avgRightPowerPhase;
    quint8 avgRightPowerPhasePeak;
    quint16 avgPowerPosition;
    quint16 maxPowerPosition;
    quint8 avgCadencePosition;
    quint8 maxCadencePosition;
    Manufacturer manufacturer;
    float totalGrit;
    float totalFlow;
    float avgGrit;
    float avgFlow;
    quint8 totalFractionalAscent;
    quint8 totalFractionalDescent;

    SegmentLapMessagePrivate() = delete;
    explicit SegmentLapMessagePrivate(SegmentLapMessage * const q);
    virtual ~SegmentLapMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SegmentLapMessage)
    Q_DISABLE_COPY(SegmentLapMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTLAPMESSAGE_P_H
