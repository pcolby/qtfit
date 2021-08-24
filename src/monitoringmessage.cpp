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

/*!
 * \class MonitoringMessage
 *
 * The MonitoringMessage class represents a FIT MonitoringMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid MonitoringMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
MonitoringMessage::MonitoringMessage() : AbstractDataMessage(new MonitoringMessagePrivate(this))
{

}

/*!
 * Returns the MonitoringMessage data message's \c timestamp field's current value.
 *
 * Must align to logging interval, for example, time must be 00:00:00 for daily log.
 *
 * \return the \c timestamp field value.
 */
DateTime MonitoringMessage::timestamp() const
{
    Q_D(const MonitoringMessage);
    return d->timestamp;
}

/*!
 * Returns the MonitoringMessage data message's \c deviceIndex field's current value.
 *
 * Associates this data to device_info message.  Not required for file with single device
 * (sensor).
 *
 * \return the \c deviceIndex field value.
 */
DeviceIndex MonitoringMessage::deviceIndex() const
{
    Q_D(const MonitoringMessage);
    return d->deviceIndex;
}

/*!
 * Returns the MonitoringMessage data message's \c calories field's current value.
 *
 * Accumulated total calories.  Maintained by MonitoringReader for each activity_type.  See SDK
 * documentation
 *
 * \return the \c calories field value.
 */
quint16 MonitoringMessage::calories() const
{
    Q_D(const MonitoringMessage);
    return d->calories;
}

/*!
 * Returns the MonitoringMessage data message's \c distance field's current value.
 *
 * Accumulated distance.  Maintained by MonitoringReader for each activity_type.  See SDK
 * documentation.
 *
 * \return the \c distance field value.
 */
quint32 MonitoringMessage::distance() const
{
    Q_D(const MonitoringMessage);
    return d->distance;
}

/*!
 * Returns the MonitoringMessage data message's \c cycles field's current value.
 *
 * Accumulated cycles.  Maintained by MonitoringReader for each activity_type.  See SDK
 * documentation.
 *
 * \return the \c cycles field value.
 */
quint32 MonitoringMessage::cycles() const
{
    Q_D(const MonitoringMessage);
    return d->cycles;
}

/*!
 * Returns the MonitoringMessage data message's \c activeTime field's current value.
 *
 * \return the \c activeTime field value.
 */
quint32 MonitoringMessage::activeTime() const
{
    Q_D(const MonitoringMessage);
    return d->activeTime;
}

/*!
 * Returns the MonitoringMessage data message's \c activityType field's current value.
 *
 * \return the \c activityType field value.
 */
ActivityType MonitoringMessage::activityType() const
{
    Q_D(const MonitoringMessage);
    return d->activityType;
}

/*!
 * Returns the MonitoringMessage data message's \c activitySubtype field's current value.
 *
 * \return the \c activitySubtype field value.
 */
ActivitySubtype MonitoringMessage::activitySubtype() const
{
    Q_D(const MonitoringMessage);
    return d->activitySubtype;
}

/*!
 * Returns the MonitoringMessage data message's \c activityLevel field's current value.
 *
 * \return the \c activityLevel field value.
 */
ActivityLevel MonitoringMessage::activityLevel() const
{
    Q_D(const MonitoringMessage);
    return d->activityLevel;
}

/*!
 * Returns the MonitoringMessage data message's \c distance16 field's current value.
 *
 * \return the \c distance16 field value.
 */
quint16 MonitoringMessage::distance16() const
{
    Q_D(const MonitoringMessage);
    return d->distance16;
}

/*!
 * Returns the MonitoringMessage data message's \c cycles16 field's current value.
 *
 * \return the \c cycles16 field value.
 */
quint16 MonitoringMessage::cycles16() const
{
    Q_D(const MonitoringMessage);
    return d->cycles16;
}

/*!
 * Returns the MonitoringMessage data message's \c activeTime16 field's current value.
 *
 * \return the \c activeTime16 field value.
 */
quint16 MonitoringMessage::activeTime16() const
{
    Q_D(const MonitoringMessage);
    return d->activeTime16;
}

/*!
 * Returns the MonitoringMessage data message's \c localTimestamp field's current value.
 *
 * Must align to logging interval, for example, time must be 00:00:00 for daily log.
 *
 * \return the \c localTimestamp field value.
 */
LocalDateTime MonitoringMessage::localTimestamp() const
{
    Q_D(const MonitoringMessage);
    return d->localTimestamp;
}

/*!
 * Returns the MonitoringMessage data message's \c temperature field's current value.
 *
 * Avg temperature during the logging interval ended at timestamp
 *
 * \return the \c temperature field value.
 */
qint16 MonitoringMessage::temperature() const
{
    Q_D(const MonitoringMessage);
    return d->temperature;
}

/*!
 * Returns the MonitoringMessage data message's \c temperatureMin field's current value.
 *
 * Min temperature during the logging interval ended at timestamp
 *
 * \return the \c temperatureMin field value.
 */
qint16 MonitoringMessage::temperatureMin() const
{
    Q_D(const MonitoringMessage);
    return d->temperatureMin;
}

/*!
 * Returns the MonitoringMessage data message's \c temperatureMax field's current value.
 *
 * Max temperature during the logging interval ended at timestamp
 *
 * \return the \c temperatureMax field value.
 */
qint16 MonitoringMessage::temperatureMax() const
{
    Q_D(const MonitoringMessage);
    return d->temperatureMax;
}

/*!
 * Returns the MonitoringMessage data message's \c activityTime field's current value.
 *
 * Indexed using minute_activity_level enum
 *
 * \return the \c activityTime field value.
 */
quint16 MonitoringMessage::activityTime() const
{
    Q_D(const MonitoringMessage);
    return d->activityTime;
}

/*!
 * Returns the MonitoringMessage data message's \c activeCalories field's current value.
 *
 * \return the \c activeCalories field value.
 */
quint16 MonitoringMessage::activeCalories() const
{
    Q_D(const MonitoringMessage);
    return d->activeCalories;
}

/*!
 * Returns the MonitoringMessage data message's \c currentActivityTypeIntensity field's current value.
 *
 * Indicates single type / intensity for duration since last monitoring message.
 *
 * \return the \c currentActivityTypeIntensity field value.
 */
quint8 MonitoringMessage::currentActivityTypeIntensity() const
{
    Q_D(const MonitoringMessage);
    return d->currentActivityTypeIntensity;
}

/*!
 * Returns the MonitoringMessage data message's \c timestampMin8 field's current value.
 *
 * \return the \c timestampMin8 field value.
 */
quint8 MonitoringMessage::timestampMin8() const
{
    Q_D(const MonitoringMessage);
    return d->timestampMin8;
}

/*!
 * Returns the MonitoringMessage data message's \c timestamp16 field's current value.
 *
 * \return the \c timestamp16 field value.
 */
quint16 MonitoringMessage::timestamp16() const
{
    Q_D(const MonitoringMessage);
    return d->timestamp16;
}

/*!
 * Returns the MonitoringMessage data message's \c heartRate field's current value.
 *
 * \return the \c heartRate field value.
 */
quint8 MonitoringMessage::heartRate() const
{
    Q_D(const MonitoringMessage);
    return d->heartRate;
}

/*!
 * Returns the MonitoringMessage data message's \c intensity field's current value.
 *
 * \return the \c intensity field value.
 */
quint8 MonitoringMessage::intensity() const
{
    Q_D(const MonitoringMessage);
    return d->intensity;
}

/*!
 * Returns the MonitoringMessage data message's \c durationMin field's current value.
 *
 * \return the \c durationMin field value.
 */
quint16 MonitoringMessage::durationMin() const
{
    Q_D(const MonitoringMessage);
    return d->durationMin;
}

/*!
 * Returns the MonitoringMessage data message's \c duration field's current value.
 *
 * \return the \c duration field value.
 */
quint32 MonitoringMessage::duration() const
{
    Q_D(const MonitoringMessage);
    return d->duration;
}

/*!
 * Returns the MonitoringMessage data message's \c ascent field's current value.
 *
 * \return the \c ascent field value.
 */
quint32 MonitoringMessage::ascent() const
{
    Q_D(const MonitoringMessage);
    return d->ascent;
}

/*!
 * Returns the MonitoringMessage data message's \c descent field's current value.
 *
 * \return the \c descent field value.
 */
quint32 MonitoringMessage::descent() const
{
    Q_D(const MonitoringMessage);
    return d->descent;
}

/*!
 * Returns the MonitoringMessage data message's \c moderateActivityMinutes field's current value.
 *
 * \return the \c moderateActivityMinutes field value.
 */
quint16 MonitoringMessage::moderateActivityMinutes() const
{
    Q_D(const MonitoringMessage);
    return d->moderateActivityMinutes;
}

/*!
 * Returns the MonitoringMessage data message's \c vigorousActivityMinutes field's current value.
 *
 * \return the \c vigorousActivityMinutes field value.
 */
quint16 MonitoringMessage::vigorousActivityMinutes() const
{
    Q_D(const MonitoringMessage);
    return d->vigorousActivityMinutes;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void MonitoringMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(MonitoringMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c deviceIndex field to \a deviceIndex.
 *
 * \param deviceIndex The field value to set.
 */
void MonitoringMessage::setDeviceIndex(const DeviceIndex deviceIndex)
{
    Q_D(MonitoringMessage);
    d->deviceIndex = deviceIndex;
}
/*!
 * Sets the \c calories field to \a calories.
 *
 * \param calories The field value to set.
 */
void MonitoringMessage::setCalories(const quint16 calories)
{
    Q_D(MonitoringMessage);
    d->calories = calories;
}
/*!
 * Sets the \c distance field to \a distance.
 *
 * \param distance The field value to set.
 */
void MonitoringMessage::setDistance(const quint32 distance)
{
    Q_D(MonitoringMessage);
    d->distance = distance;
}
/*!
 * Sets the \c cycles field to \a cycles.
 *
 * \param cycles The field value to set.
 */
void MonitoringMessage::setCycles(const quint32 cycles)
{
    Q_D(MonitoringMessage);
    d->cycles = cycles;
}
/*!
 * Sets the \c activeTime field to \a activeTime.
 *
 * \param activeTime The field value to set.
 */
void MonitoringMessage::setActiveTime(const quint32 activeTime)
{
    Q_D(MonitoringMessage);
    d->activeTime = activeTime;
}
/*!
 * Sets the \c activityType field to \a activityType.
 *
 * \param activityType The field value to set.
 */
void MonitoringMessage::setActivityType(const ActivityType activityType)
{
    Q_D(MonitoringMessage);
    d->activityType = activityType;
}
/*!
 * Sets the \c activitySubtype field to \a activitySubtype.
 *
 * \param activitySubtype The field value to set.
 */
void MonitoringMessage::setActivitySubtype(const ActivitySubtype activitySubtype)
{
    Q_D(MonitoringMessage);
    d->activitySubtype = activitySubtype;
}
/*!
 * Sets the \c activityLevel field to \a activityLevel.
 *
 * \param activityLevel The field value to set.
 */
void MonitoringMessage::setActivityLevel(const ActivityLevel activityLevel)
{
    Q_D(MonitoringMessage);
    d->activityLevel = activityLevel;
}
/*!
 * Sets the \c distance16 field to \a distance16.
 *
 * \param distance16 The field value to set.
 */
void MonitoringMessage::setDistance16(const quint16 distance16)
{
    Q_D(MonitoringMessage);
    d->distance16 = distance16;
}
/*!
 * Sets the \c cycles16 field to \a cycles16.
 *
 * \param cycles16 The field value to set.
 */
void MonitoringMessage::setCycles16(const quint16 cycles16)
{
    Q_D(MonitoringMessage);
    d->cycles16 = cycles16;
}
/*!
 * Sets the \c activeTime16 field to \a activeTime16.
 *
 * \param activeTime16 The field value to set.
 */
void MonitoringMessage::setActiveTime16(const quint16 activeTime16)
{
    Q_D(MonitoringMessage);
    d->activeTime16 = activeTime16;
}
/*!
 * Sets the \c localTimestamp field to \a localTimestamp.
 *
 * \param localTimestamp The field value to set.
 */
void MonitoringMessage::setLocalTimestamp(const LocalDateTime localTimestamp)
{
    Q_D(MonitoringMessage);
    d->localTimestamp = localTimestamp;
}
/*!
 * Sets the \c temperature field to \a temperature.
 *
 * \param temperature The field value to set.
 */
void MonitoringMessage::setTemperature(const qint16 temperature)
{
    Q_D(MonitoringMessage);
    d->temperature = temperature;
}
/*!
 * Sets the \c temperatureMin field to \a temperatureMin.
 *
 * \param temperatureMin The field value to set.
 */
void MonitoringMessage::setTemperatureMin(const qint16 temperatureMin)
{
    Q_D(MonitoringMessage);
    d->temperatureMin = temperatureMin;
}
/*!
 * Sets the \c temperatureMax field to \a temperatureMax.
 *
 * \param temperatureMax The field value to set.
 */
void MonitoringMessage::setTemperatureMax(const qint16 temperatureMax)
{
    Q_D(MonitoringMessage);
    d->temperatureMax = temperatureMax;
}
/*!
 * Sets the \c activityTime field to \a activityTime.
 *
 * \param activityTime The field value to set.
 */
void MonitoringMessage::setActivityTime(const quint16 activityTime)
{
    Q_D(MonitoringMessage);
    d->activityTime = activityTime;
}
/*!
 * Sets the \c activeCalories field to \a activeCalories.
 *
 * \param activeCalories The field value to set.
 */
void MonitoringMessage::setActiveCalories(const quint16 activeCalories)
{
    Q_D(MonitoringMessage);
    d->activeCalories = activeCalories;
}
/*!
 * Sets the \c currentActivityTypeIntensity field to \a currentActivityTypeIntensity.
 *
 * \param currentActivityTypeIntensity The field value to set.
 */
void MonitoringMessage::setCurrentActivityTypeIntensity(const quint8 currentActivityTypeIntensity)
{
    Q_D(MonitoringMessage);
    d->currentActivityTypeIntensity = currentActivityTypeIntensity;
}
/*!
 * Sets the \c timestampMin8 field to \a timestampMin8.
 *
 * \param timestampMin8 The field value to set.
 */
void MonitoringMessage::setTimestampMin8(const quint8 timestampMin8)
{
    Q_D(MonitoringMessage);
    d->timestampMin8 = timestampMin8;
}
/*!
 * Sets the \c timestamp16 field to \a timestamp16.
 *
 * \param timestamp16 The field value to set.
 */
void MonitoringMessage::setTimestamp16(const quint16 timestamp16)
{
    Q_D(MonitoringMessage);
    d->timestamp16 = timestamp16;
}
/*!
 * Sets the \c heartRate field to \a heartRate.
 *
 * \param heartRate The field value to set.
 */
void MonitoringMessage::setHeartRate(const quint8 heartRate)
{
    Q_D(MonitoringMessage);
    d->heartRate = heartRate;
}
/*!
 * Sets the \c intensity field to \a intensity.
 *
 * \param intensity The field value to set.
 */
void MonitoringMessage::setIntensity(const quint8 intensity)
{
    Q_D(MonitoringMessage);
    d->intensity = intensity;
}
/*!
 * Sets the \c durationMin field to \a durationMin.
 *
 * \param durationMin The field value to set.
 */
void MonitoringMessage::setDurationMin(const quint16 durationMin)
{
    Q_D(MonitoringMessage);
    d->durationMin = durationMin;
}
/*!
 * Sets the \c duration field to \a duration.
 *
 * \param duration The field value to set.
 */
void MonitoringMessage::setDuration(const quint32 duration)
{
    Q_D(MonitoringMessage);
    d->duration = duration;
}
/*!
 * Sets the \c ascent field to \a ascent.
 *
 * \param ascent The field value to set.
 */
void MonitoringMessage::setAscent(const quint32 ascent)
{
    Q_D(MonitoringMessage);
    d->ascent = ascent;
}
/*!
 * Sets the \c descent field to \a descent.
 *
 * \param descent The field value to set.
 */
void MonitoringMessage::setDescent(const quint32 descent)
{
    Q_D(MonitoringMessage);
    d->descent = descent;
}
/*!
 * Sets the \c moderateActivityMinutes field to \a moderateActivityMinutes.
 *
 * \param moderateActivityMinutes The field value to set.
 */
void MonitoringMessage::setModerateActivityMinutes(const quint16 moderateActivityMinutes)
{
    Q_D(MonitoringMessage);
    d->moderateActivityMinutes = moderateActivityMinutes;
}
/*!
 * Sets the \c vigorousActivityMinutes field to \a vigorousActivityMinutes.
 *
 * \param vigorousActivityMinutes The field value to set.
 */
void MonitoringMessage::setVigorousActivityMinutes(const quint16 vigorousActivityMinutes)
{
    Q_D(MonitoringMessage);
    d->vigorousActivityMinutes = vigorousActivityMinutes;
}

/// \cond internal

/*!
 * \internal
 *
 * \class MonitoringMessagePrivate
 *
 * The MonitoringMessagePrivate class provides private implementation for the MonitoringMessage.
 *
 * \sa MonitoringMessage
 */

/*!
 * \internal
 *
 * Constructs a MonitoringMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
MonitoringMessagePrivate::MonitoringMessagePrivate(MonitoringMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the MonitoringMessagePrivate object.
 */
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
        qWarning() << "ignoring unknown monitoring message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
