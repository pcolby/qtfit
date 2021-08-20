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

#include "monitoringmessage.h"
#include "monitoringmessage_p.h"

QTFIT_BEGIN_NAMESPACE

MonitoringMessage::MonitoringMessage() : FitDataMessage(new MonitoringMessagePrivate(this))
{

}

DateTime MonitoringMessage::timestamp() const
{
    Q_D(const MonitoringMessage);
    return d->timestamp;
}

DeviceIndex MonitoringMessage::deviceIndex() const
{
    Q_D(const MonitoringMessage);
    return d->deviceIndex;
}

quint16 MonitoringMessage::calories() const
{
    Q_D(const MonitoringMessage);
    return d->calories;
}

quint32 MonitoringMessage::distance() const
{
    Q_D(const MonitoringMessage);
    return d->distance;
}

quint32 MonitoringMessage::cycles() const
{
    Q_D(const MonitoringMessage);
    return d->cycles;
}

quint32 MonitoringMessage::activeTime() const
{
    Q_D(const MonitoringMessage);
    return d->activeTime;
}

ActivityType MonitoringMessage::activityType() const
{
    Q_D(const MonitoringMessage);
    return d->activityType;
}

ActivitySubtype MonitoringMessage::activitySubtype() const
{
    Q_D(const MonitoringMessage);
    return d->activitySubtype;
}

ActivityLevel MonitoringMessage::activityLevel() const
{
    Q_D(const MonitoringMessage);
    return d->activityLevel;
}

quint16 MonitoringMessage::distance16() const
{
    Q_D(const MonitoringMessage);
    return d->distance16;
}

quint16 MonitoringMessage::cycles16() const
{
    Q_D(const MonitoringMessage);
    return d->cycles16;
}

quint16 MonitoringMessage::activeTime16() const
{
    Q_D(const MonitoringMessage);
    return d->activeTime16;
}

LocalDateTime MonitoringMessage::localTimestamp() const
{
    Q_D(const MonitoringMessage);
    return d->localTimestamp;
}

qint16 MonitoringMessage::temperature() const
{
    Q_D(const MonitoringMessage);
    return d->temperature;
}

qint16 MonitoringMessage::temperatureMin() const
{
    Q_D(const MonitoringMessage);
    return d->temperatureMin;
}

qint16 MonitoringMessage::temperatureMax() const
{
    Q_D(const MonitoringMessage);
    return d->temperatureMax;
}

quint16 MonitoringMessage::activityTime() const
{
    Q_D(const MonitoringMessage);
    return d->activityTime;
}

quint16 MonitoringMessage::activeCalories() const
{
    Q_D(const MonitoringMessage);
    return d->activeCalories;
}

quint8 MonitoringMessage::currentActivityTypeIntensity() const
{
    Q_D(const MonitoringMessage);
    return d->currentActivityTypeIntensity;
}

quint8 MonitoringMessage::timestampMin8() const
{
    Q_D(const MonitoringMessage);
    return d->timestampMin8;
}

quint16 MonitoringMessage::timestamp16() const
{
    Q_D(const MonitoringMessage);
    return d->timestamp16;
}

quint8 MonitoringMessage::heartRate() const
{
    Q_D(const MonitoringMessage);
    return d->heartRate;
}

quint8 MonitoringMessage::intensity() const
{
    Q_D(const MonitoringMessage);
    return d->intensity;
}

quint16 MonitoringMessage::durationMin() const
{
    Q_D(const MonitoringMessage);
    return d->durationMin;
}

quint32 MonitoringMessage::duration() const
{
    Q_D(const MonitoringMessage);
    return d->duration;
}

quint32 MonitoringMessage::ascent() const
{
    Q_D(const MonitoringMessage);
    return d->ascent;
}

quint32 MonitoringMessage::descent() const
{
    Q_D(const MonitoringMessage);
    return d->descent;
}

quint16 MonitoringMessage::moderateActivityMinutes() const
{
    Q_D(const MonitoringMessage);
    return d->moderateActivityMinutes;
}

quint16 MonitoringMessage::vigorousActivityMinutes() const
{
    Q_D(const MonitoringMessage);
    return d->vigorousActivityMinutes;
}

void MonitoringMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(MonitoringMessage);
    d->timestamp = timestamp;
}
void MonitoringMessage::setDeviceIndex(const DeviceIndex deviceIndex)
{
    Q_D(MonitoringMessage);
    d->deviceIndex = deviceIndex;
}
void MonitoringMessage::setCalories(const quint16 calories)
{
    Q_D(MonitoringMessage);
    d->calories = calories;
}
void MonitoringMessage::setDistance(const quint32 distance)
{
    Q_D(MonitoringMessage);
    d->distance = distance;
}
void MonitoringMessage::setCycles(const quint32 cycles)
{
    Q_D(MonitoringMessage);
    d->cycles = cycles;
}
void MonitoringMessage::setActiveTime(const quint32 activeTime)
{
    Q_D(MonitoringMessage);
    d->activeTime = activeTime;
}
void MonitoringMessage::setActivityType(const ActivityType activityType)
{
    Q_D(MonitoringMessage);
    d->activityType = activityType;
}
void MonitoringMessage::setActivitySubtype(const ActivitySubtype activitySubtype)
{
    Q_D(MonitoringMessage);
    d->activitySubtype = activitySubtype;
}
void MonitoringMessage::setActivityLevel(const ActivityLevel activityLevel)
{
    Q_D(MonitoringMessage);
    d->activityLevel = activityLevel;
}
void MonitoringMessage::setDistance16(const quint16 distance16)
{
    Q_D(MonitoringMessage);
    d->distance16 = distance16;
}
void MonitoringMessage::setCycles16(const quint16 cycles16)
{
    Q_D(MonitoringMessage);
    d->cycles16 = cycles16;
}
void MonitoringMessage::setActiveTime16(const quint16 activeTime16)
{
    Q_D(MonitoringMessage);
    d->activeTime16 = activeTime16;
}
void MonitoringMessage::setLocalTimestamp(const LocalDateTime localTimestamp)
{
    Q_D(MonitoringMessage);
    d->localTimestamp = localTimestamp;
}
void MonitoringMessage::setTemperature(const qint16 temperature)
{
    Q_D(MonitoringMessage);
    d->temperature = temperature;
}
void MonitoringMessage::setTemperatureMin(const qint16 temperatureMin)
{
    Q_D(MonitoringMessage);
    d->temperatureMin = temperatureMin;
}
void MonitoringMessage::setTemperatureMax(const qint16 temperatureMax)
{
    Q_D(MonitoringMessage);
    d->temperatureMax = temperatureMax;
}
void MonitoringMessage::setActivityTime(const quint16 activityTime)
{
    Q_D(MonitoringMessage);
    d->activityTime = activityTime;
}
void MonitoringMessage::setActiveCalories(const quint16 activeCalories)
{
    Q_D(MonitoringMessage);
    d->activeCalories = activeCalories;
}
void MonitoringMessage::setCurrentActivityTypeIntensity(const quint8 currentActivityTypeIntensity)
{
    Q_D(MonitoringMessage);
    d->currentActivityTypeIntensity = currentActivityTypeIntensity;
}
void MonitoringMessage::setTimestampMin8(const quint8 timestampMin8)
{
    Q_D(MonitoringMessage);
    d->timestampMin8 = timestampMin8;
}
void MonitoringMessage::setTimestamp16(const quint16 timestamp16)
{
    Q_D(MonitoringMessage);
    d->timestamp16 = timestamp16;
}
void MonitoringMessage::setHeartRate(const quint8 heartRate)
{
    Q_D(MonitoringMessage);
    d->heartRate = heartRate;
}
void MonitoringMessage::setIntensity(const quint8 intensity)
{
    Q_D(MonitoringMessage);
    d->intensity = intensity;
}
void MonitoringMessage::setDurationMin(const quint16 durationMin)
{
    Q_D(MonitoringMessage);
    d->durationMin = durationMin;
}
void MonitoringMessage::setDuration(const quint32 duration)
{
    Q_D(MonitoringMessage);
    d->duration = duration;
}
void MonitoringMessage::setAscent(const quint32 ascent)
{
    Q_D(MonitoringMessage);
    d->ascent = ascent;
}
void MonitoringMessage::setDescent(const quint32 descent)
{
    Q_D(MonitoringMessage);
    d->descent = descent;
}
void MonitoringMessage::setModerateActivityMinutes(const quint16 moderateActivityMinutes)
{
    Q_D(MonitoringMessage);
    d->moderateActivityMinutes = moderateActivityMinutes;
}
void MonitoringMessage::setVigorousActivityMinutes(const quint16 vigorousActivityMinutes)
{
    Q_D(MonitoringMessage);
    d->vigorousActivityMinutes = vigorousActivityMinutes;
}

MonitoringMessagePrivate::MonitoringMessagePrivate(MonitoringMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::Monitoring;
}

MonitoringMessagePrivate::~MonitoringMessagePrivate()
{

}

/// @todo Generate implementation.
bool MonitoringMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE
