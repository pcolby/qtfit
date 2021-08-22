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

#ifndef QTFIT_MONITORINGMESSAGE_H
#define QTFIT_MONITORINGMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class MonitoringMessagePrivate;

class QTFIT_EXPORT MonitoringMessage : public AbstractDataMessage {

public:
    MonitoringMessage();
    ~MonitoringMessage();

    DateTime timestamp() const;
    DeviceIndex deviceIndex() const;
    quint16 calories() const;
    quint32 distance() const;
    quint32 cycles() const;
    quint32 activeTime() const;
    ActivityType activityType() const;
    ActivitySubtype activitySubtype() const;
    ActivityLevel activityLevel() const;
    quint16 distance16() const;
    quint16 cycles16() const;
    quint16 activeTime16() const;
    LocalDateTime localTimestamp() const;
    qint16 temperature() const;
    qint16 temperatureMin() const;
    qint16 temperatureMax() const;
    quint16 activityTime() const;
    quint16 activeCalories() const;
    quint8 currentActivityTypeIntensity() const;
    quint8 timestampMin8() const;
    quint16 timestamp16() const;
    quint8 heartRate() const;
    quint8 intensity() const;
    quint16 durationMin() const;
    quint32 duration() const;
    quint32 ascent() const;
    quint32 descent() const;
    quint16 moderateActivityMinutes() const;
    quint16 vigorousActivityMinutes() const;

    void setTimestamp(const DateTime timestamp);
    void setDeviceIndex(const DeviceIndex deviceIndex);
    void setCalories(const quint16 calories);
    void setDistance(const quint32 distance);
    void setCycles(const quint32 cycles);
    void setActiveTime(const quint32 activeTime);
    void setActivityType(const ActivityType activityType);
    void setActivitySubtype(const ActivitySubtype activitySubtype);
    void setActivityLevel(const ActivityLevel activityLevel);
    void setDistance16(const quint16 distance16);
    void setCycles16(const quint16 cycles16);
    void setActiveTime16(const quint16 activeTime16);
    void setLocalTimestamp(const LocalDateTime localTimestamp);
    void setTemperature(const qint16 temperature);
    void setTemperatureMin(const qint16 temperatureMin);
    void setTemperatureMax(const qint16 temperatureMax);
    void setActivityTime(const quint16 activityTime);
    void setActiveCalories(const quint16 activeCalories);
    void setCurrentActivityTypeIntensity(const quint8 currentActivityTypeIntensity);
    void setTimestampMin8(const quint8 timestampMin8);
    void setTimestamp16(const quint16 timestamp16);
    void setHeartRate(const quint8 heartRate);
    void setIntensity(const quint8 intensity);
    void setDurationMin(const quint16 durationMin);
    void setDuration(const quint32 duration);
    void setAscent(const quint32 ascent);
    void setDescent(const quint32 descent);
    void setModerateActivityMinutes(const quint16 moderateActivityMinutes);
    void setVigorousActivityMinutes(const quint16 vigorousActivityMinutes);

protected:
    /// @cond internal
    explicit MonitoringMessage(MonitoringMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MonitoringMessage)
  //Q_DISABLE_COPY(MonitoringMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MONITORINGMESSAGE_H
