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

#include <QDebug>
#include <QtEndian>

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

MonitoringMessagePrivate::MonitoringMessagePrivate(MonitoringMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , deviceIndex(static_cast<DeviceIndex>(-1))
  , calories(0xFFFF)
  , distance(0xFFFFFFFF)
  , cycles(0xFFFFFFFF)
  , activeTime(0xFFFFFFFF)
  , activityType(static_cast<ActivityType>(-1))
  , activitySubtype(static_cast<ActivitySubtype>(-1))
  , activityLevel(static_cast<ActivityLevel>(-1))
  , distance16(0xFFFF)
  , cycles16(0xFFFF)
  , activeTime16(0xFFFF)
  , localTimestamp(static_cast<LocalDateTime>(-1))
  , temperature(0x7FFF)
  , temperatureMin(0x7FFF)
  , temperatureMax(0x7FFF)
  , activityTime(0xFFFF)
  , activeCalories(0xFFFF)
  , currentActivityTypeIntensity(0xFF)
  , timestampMin8(0xFF)
  , timestamp16(0xFFFF)
  , heartRate(0xFF)
  , intensity(0xFF)
  , durationMin(0xFFFF)
  , duration(0xFFFFFFFF)
  , ascent(0xFFFFFFFF)
  , descent(0xFFFFFFFF)
  , moderateActivityMinutes(0xFFFF)
  , vigorousActivityMinutes(0xFFFF)
{
    globalMessageNumber = MesgNum::Monitoring;
}

MonitoringMessagePrivate::~MonitoringMessagePrivate()
{

}

bool MonitoringMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:monitoring.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "monitoring.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:monitoring.deviceIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "monitoring.deviceIndex")) return false;
        this->deviceIndex = static_cast<DeviceIndex>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:monitoring.calories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring.calories")) return false;
        this->calories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:monitoring.distance
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "monitoring.distance")) return false;
        this->distance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:monitoring.cycles
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "monitoring.cycles")) return false;
        this->cycles = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:monitoring.activeTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "monitoring.activeTime")) return false;
        this->activeTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:monitoring.activityType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "monitoring.activityType")) return false;
        this->activityType = static_cast<ActivityType>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:monitoring.activitySubtype
        if (!verify(data, baseType, 1, FitBaseType::Enum, "monitoring.activitySubtype")) return false;
        this->activitySubtype = static_cast<ActivitySubtype>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:monitoring.activityLevel
        if (!verify(data, baseType, 1, FitBaseType::Enum, "monitoring.activityLevel")) return false;
        this->activityLevel = static_cast<ActivityLevel>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:monitoring.distance16
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring.distance16")) return false;
        this->distance16 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 9: // See Profile.xlsx::Messages:monitoring.cycles16
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring.cycles16")) return false;
        this->cycles16 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:monitoring.activeTime16
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring.activeTime16")) return false;
        this->activeTime16 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 11: // See Profile.xlsx::Messages:monitoring.localTimestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "monitoring.localTimestamp")) return false;
        this->localTimestamp = static_cast<LocalDateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 12: // See Profile.xlsx::Messages:monitoring.temperature
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "monitoring.temperature")) return false;
        this->temperature = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 14: // See Profile.xlsx::Messages:monitoring.temperatureMin
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "monitoring.temperatureMin")) return false;
        this->temperatureMin = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 15: // See Profile.xlsx::Messages:monitoring.temperatureMax
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "monitoring.temperatureMax")) return false;
        this->temperatureMax = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 16: // See Profile.xlsx::Messages:monitoring.activityTime
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring.activityTime")) return false;
        this->activityTime = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 19: // See Profile.xlsx::Messages:monitoring.activeCalories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring.activeCalories")) return false;
        this->activeCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 24: // See Profile.xlsx::Messages:monitoring.currentActivityTypeIntensity
        if (!verify(data, baseType, 1, FitBaseType::Byte, "monitoring.currentActivityTypeIntensity")) return false;
        this->currentActivityTypeIntensity = static_cast<quint8>(data.at(0));
        break;
    case 25: // See Profile.xlsx::Messages:monitoring.timestampMin8
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "monitoring.timestampMin8")) return false;
        this->timestampMin8 = static_cast<quint8>(data.at(0));
        break;
    case 26: // See Profile.xlsx::Messages:monitoring.timestamp16
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring.timestamp16")) return false;
        this->timestamp16 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 27: // See Profile.xlsx::Messages:monitoring.heartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "monitoring.heartRate")) return false;
        this->heartRate = static_cast<quint8>(data.at(0));
        break;
    case 28: // See Profile.xlsx::Messages:monitoring.intensity
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "monitoring.intensity")) return false;
        this->intensity = static_cast<quint8>(data.at(0));
        break;
    case 29: // See Profile.xlsx::Messages:monitoring.durationMin
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring.durationMin")) return false;
        this->durationMin = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 30: // See Profile.xlsx::Messages:monitoring.duration
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "monitoring.duration")) return false;
        this->duration = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 31: // See Profile.xlsx::Messages:monitoring.ascent
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "monitoring.ascent")) return false;
        this->ascent = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 32: // See Profile.xlsx::Messages:monitoring.descent
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "monitoring.descent")) return false;
        this->descent = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 33: // See Profile.xlsx::Messages:monitoring.moderateActivityMinutes
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring.moderateActivityMinutes")) return false;
        this->moderateActivityMinutes = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 34: // See Profile.xlsx::Messages:monitoring.vigorousActivityMinutes
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring.vigorousActivityMinutes")) return false;
        this->vigorousActivityMinutes = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown monitoring message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
