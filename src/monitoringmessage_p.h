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

#ifndef QTFIT_MONITORINGMESSAGE_P_H
#define QTFIT_MONITORINGMESSAGE_P_H

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class MonitoringMessage;

class MonitoringMessagePrivate : public FitDataMessagePrivate {

public:
    DateTime timestamp;
    DeviceIndex deviceIndex;
    quint16 calories;
    quint32 distance;
    quint32 cycles;
    quint32 activeTime;
    ActivityType activityType;
    ActivitySubtype activitySubtype;
    ActivityLevel activityLevel;
    quint16 distance16;
    quint16 cycles16;
    quint16 activeTime16;
    LocalDateTime localTimestamp;
    qint16 temperature;
    qint16 temperatureMin;
    qint16 temperatureMax;
    quint16 activityTime;
    quint16 activeCalories;
    quint8 currentActivityTypeIntensity;
    quint8 timestampMin8;
    quint16 timestamp16;
    quint8 heartRate;
    quint8 intensity;
    quint16 durationMin;
    quint32 duration;
    quint32 ascent;
    quint32 descent;
    quint16 moderateActivityMinutes;
    quint16 vigorousActivityMinutes;

    MonitoringMessagePrivate() = delete;
    explicit MonitoringMessagePrivate(MonitoringMessage * const q);
    virtual ~MonitoringMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(MonitoringMessage)
    Q_DISABLE_COPY(MonitoringMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MONITORINGMESSAGE_P_H
