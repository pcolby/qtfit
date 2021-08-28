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

/*!
 * \file
 * Defines the WeatherConditionsMessage, and WeatherConditionsMessagePrivate classes.
 */

#include "weatherconditionsmessage.h"
#include "weatherconditionsmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class WeatherConditionsMessage
 *
 * The WeatherConditionsMessage class represents a FIT WeatherConditionsMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a WeatherConditionsMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
WeatherConditionsMessage::WeatherConditionsMessage() : AbstractDataMessage(new WeatherConditionsMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a WeatherConditionsMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
WeatherConditionsMessage::WeatherConditionsMessage(WeatherConditionsMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the WeatherConditionsMessage data message's \c timestamp field's current value.
 *
 * time of update for current conditions, else forecast time
 *
 * \return the \c timestamp field value.
 */
DateTime WeatherConditionsMessage::timestamp() const
{
    Q_D(const WeatherConditionsMessage);
    return d->timestamp;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c weatherReport field's current value.
 *
 * Current or forecast
 *
 * \return the \c weatherReport field value.
 */
WeatherReport WeatherConditionsMessage::weatherReport() const
{
    Q_D(const WeatherConditionsMessage);
    return d->weatherReport;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c temperature field's current value.
 *
 * \return the \c temperature field value.
 */
qint8 WeatherConditionsMessage::temperature() const
{
    Q_D(const WeatherConditionsMessage);
    return d->temperature;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c condition field's current value.
 *
 * Corresponds to GSC Response weatherIcon field
 *
 * \return the \c condition field value.
 */
WeatherStatus WeatherConditionsMessage::condition() const
{
    Q_D(const WeatherConditionsMessage);
    return d->condition;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c windDirection field's current value.
 *
 * \return the \c windDirection field value.
 */
quint16 WeatherConditionsMessage::windDirection() const
{
    Q_D(const WeatherConditionsMessage);
    return d->windDirection;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c windSpeed field's current value.
 *
 * \return the \c windSpeed field value.
 */
quint16 WeatherConditionsMessage::windSpeed() const
{
    Q_D(const WeatherConditionsMessage);
    return d->windSpeed;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c precipitationProbability field's current value.
 *
 * range 0-100
 *
 * \return the \c precipitationProbability field value.
 */
quint8 WeatherConditionsMessage::precipitationProbability() const
{
    Q_D(const WeatherConditionsMessage);
    return d->precipitationProbability;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c temperatureFeelsLike field's current value.
 *
 * Heat Index if  GCS heatIdx above or equal to 90F or wind chill if GCS windChill below or
 * equal to 32F
 *
 * \return the \c temperatureFeelsLike field value.
 */
qint8 WeatherConditionsMessage::temperatureFeelsLike() const
{
    Q_D(const WeatherConditionsMessage);
    return d->temperatureFeelsLike;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c relativeHumidity field's current value.
 *
 * \return the \c relativeHumidity field value.
 */
quint8 WeatherConditionsMessage::relativeHumidity() const
{
    Q_D(const WeatherConditionsMessage);
    return d->relativeHumidity;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c location field's current value.
 *
 * string corresponding to GCS response location string
 *
 * \return the \c location field value.
 */
QString WeatherConditionsMessage::location() const
{
    Q_D(const WeatherConditionsMessage);
    return d->location;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c observedAtTime field's current value.
 *
 * \return the \c observedAtTime field value.
 */
DateTime WeatherConditionsMessage::observedAtTime() const
{
    Q_D(const WeatherConditionsMessage);
    return d->observedAtTime;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c observedLocationLat field's current value.
 *
 * \return the \c observedLocationLat field value.
 */
qint32 WeatherConditionsMessage::observedLocationLat() const
{
    Q_D(const WeatherConditionsMessage);
    return d->observedLocationLat;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c observedLocationLong field's current value.
 *
 * \return the \c observedLocationLong field value.
 */
qint32 WeatherConditionsMessage::observedLocationLong() const
{
    Q_D(const WeatherConditionsMessage);
    return d->observedLocationLong;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c dayOfWeek field's current value.
 *
 * \return the \c dayOfWeek field value.
 */
DayOfWeek WeatherConditionsMessage::dayOfWeek() const
{
    Q_D(const WeatherConditionsMessage);
    return d->dayOfWeek;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c highTemperature field's current value.
 *
 * \return the \c highTemperature field value.
 */
qint8 WeatherConditionsMessage::highTemperature() const
{
    Q_D(const WeatherConditionsMessage);
    return d->highTemperature;
}

/*!
 * Returns the WeatherConditionsMessage data message's \c lowTemperature field's current value.
 *
 * \return the \c lowTemperature field value.
 */
qint8 WeatherConditionsMessage::lowTemperature() const
{
    Q_D(const WeatherConditionsMessage);
    return d->lowTemperature;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void WeatherConditionsMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(WeatherConditionsMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c weatherReport field to \a weatherReport.
 *
 * \param weatherReport The field value to set.
 */
void WeatherConditionsMessage::setWeatherReport(const WeatherReport weatherReport)
{
    Q_D(WeatherConditionsMessage);
    d->weatherReport = weatherReport;
}
/*!
 * Sets the \c temperature field to \a temperature.
 *
 * \param temperature The field value to set.
 */
void WeatherConditionsMessage::setTemperature(const qint8 temperature)
{
    Q_D(WeatherConditionsMessage);
    d->temperature = temperature;
}
/*!
 * Sets the \c condition field to \a condition.
 *
 * \param condition The field value to set.
 */
void WeatherConditionsMessage::setCondition(const WeatherStatus condition)
{
    Q_D(WeatherConditionsMessage);
    d->condition = condition;
}
/*!
 * Sets the \c windDirection field to \a windDirection.
 *
 * \param windDirection The field value to set.
 */
void WeatherConditionsMessage::setWindDirection(const quint16 windDirection)
{
    Q_D(WeatherConditionsMessage);
    d->windDirection = windDirection;
}
/*!
 * Sets the \c windSpeed field to \a windSpeed.
 *
 * \param windSpeed The field value to set.
 */
void WeatherConditionsMessage::setWindSpeed(const quint16 windSpeed)
{
    Q_D(WeatherConditionsMessage);
    d->windSpeed = windSpeed;
}
/*!
 * Sets the \c precipitationProbability field to \a precipitationProbability.
 *
 * \param precipitationProbability The field value to set.
 */
void WeatherConditionsMessage::setPrecipitationProbability(const quint8 precipitationProbability)
{
    Q_D(WeatherConditionsMessage);
    d->precipitationProbability = precipitationProbability;
}
/*!
 * Sets the \c temperatureFeelsLike field to \a temperatureFeelsLike.
 *
 * \param temperatureFeelsLike The field value to set.
 */
void WeatherConditionsMessage::setTemperatureFeelsLike(const qint8 temperatureFeelsLike)
{
    Q_D(WeatherConditionsMessage);
    d->temperatureFeelsLike = temperatureFeelsLike;
}
/*!
 * Sets the \c relativeHumidity field to \a relativeHumidity.
 *
 * \param relativeHumidity The field value to set.
 */
void WeatherConditionsMessage::setRelativeHumidity(const quint8 relativeHumidity)
{
    Q_D(WeatherConditionsMessage);
    d->relativeHumidity = relativeHumidity;
}
/*!
 * Sets the \c location field to \a location.
 *
 * \param location The field value to set.
 */
void WeatherConditionsMessage::setLocation(const QString location)
{
    Q_D(WeatherConditionsMessage);
    d->location = location;
}
/*!
 * Sets the \c observedAtTime field to \a observedAtTime.
 *
 * \param observedAtTime The field value to set.
 */
void WeatherConditionsMessage::setObservedAtTime(const DateTime observedAtTime)
{
    Q_D(WeatherConditionsMessage);
    d->observedAtTime = observedAtTime;
}
/*!
 * Sets the \c observedLocationLat field to \a observedLocationLat.
 *
 * \param observedLocationLat The field value to set.
 */
void WeatherConditionsMessage::setObservedLocationLat(const qint32 observedLocationLat)
{
    Q_D(WeatherConditionsMessage);
    d->observedLocationLat = observedLocationLat;
}
/*!
 * Sets the \c observedLocationLong field to \a observedLocationLong.
 *
 * \param observedLocationLong The field value to set.
 */
void WeatherConditionsMessage::setObservedLocationLong(const qint32 observedLocationLong)
{
    Q_D(WeatherConditionsMessage);
    d->observedLocationLong = observedLocationLong;
}
/*!
 * Sets the \c dayOfWeek field to \a dayOfWeek.
 *
 * \param dayOfWeek The field value to set.
 */
void WeatherConditionsMessage::setDayOfWeek(const DayOfWeek dayOfWeek)
{
    Q_D(WeatherConditionsMessage);
    d->dayOfWeek = dayOfWeek;
}
/*!
 * Sets the \c highTemperature field to \a highTemperature.
 *
 * \param highTemperature The field value to set.
 */
void WeatherConditionsMessage::setHighTemperature(const qint8 highTemperature)
{
    Q_D(WeatherConditionsMessage);
    d->highTemperature = highTemperature;
}
/*!
 * Sets the \c lowTemperature field to \a lowTemperature.
 *
 * \param lowTemperature The field value to set.
 */
void WeatherConditionsMessage::setLowTemperature(const qint8 lowTemperature)
{
    Q_D(WeatherConditionsMessage);
    d->lowTemperature = lowTemperature;
}

/// \cond internal

/*!
 * \internal
 *
 * \class WeatherConditionsMessagePrivate
 *
 * The WeatherConditionsMessagePrivate class provides private implementation for the WeatherConditionsMessage.
 *
 * \sa WeatherConditionsMessage
 */

/*!
 * \internal
 *
 * Constructs a WeatherConditionsMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
WeatherConditionsMessagePrivate::WeatherConditionsMessagePrivate(WeatherConditionsMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , weatherReport(static_cast<WeatherReport>(-1))
  , temperature(0x7F)
  , condition(static_cast<WeatherStatus>(-1))
  , windDirection(0xFFFF)
  , windSpeed(0xFFFF)
  , precipitationProbability(0xFF)
  , temperatureFeelsLike(0x7F)
  , relativeHumidity(0xFF)
  , observedAtTime(static_cast<DateTime>(-1))
  , observedLocationLat(0x7FFFFFFF)
  , observedLocationLong(0x7FFFFFFF)
  , dayOfWeek(static_cast<DayOfWeek>(-1))
  , highTemperature(0x7F)
  , lowTemperature(0x7F)
{
    globalMessageNumber = MesgNum::WeatherConditions;
}

/*!
 * \internal
 *
 * Destroys the WeatherConditionsMessagePrivate object.
 */
WeatherConditionsMessagePrivate::~WeatherConditionsMessagePrivate()
{

}

bool WeatherConditionsMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:weather_conditions.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "weather_conditions.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:weather_conditions.weatherReport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "weather_conditions.weatherReport")) return false;
        this->weatherReport = static_cast<WeatherReport>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:weather_conditions.temperature
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "weather_conditions.temperature")) return false;
        this->temperature = static_cast<qint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:weather_conditions.condition
        if (!verify(data, baseType, 1, FitBaseType::Enum, "weather_conditions.condition")) return false;
        this->condition = static_cast<WeatherStatus>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:weather_conditions.windDirection
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weather_conditions.windDirection")) return false;
        this->windDirection = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:weather_conditions.windSpeed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weather_conditions.windSpeed")) return false;
        this->windSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:weather_conditions.precipitationProbability
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "weather_conditions.precipitationProbability")) return false;
        this->precipitationProbability = static_cast<quint8>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:weather_conditions.temperatureFeelsLike
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "weather_conditions.temperatureFeelsLike")) return false;
        this->temperatureFeelsLike = static_cast<qint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:weather_conditions.relativeHumidity
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "weather_conditions.relativeHumidity")) return false;
        this->relativeHumidity = static_cast<quint8>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:weather_conditions.location
        if (!verify(data, baseType, 1, FitBaseType::String, "weather_conditions.location")) return false;
        this->location = QString::fromUtf8(data);
        break;
    case 9: // See Profile.xlsx::Messages:weather_conditions.observedAtTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "weather_conditions.observedAtTime")) return false;
        this->observedAtTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:weather_conditions.observedLocationLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "weather_conditions.observedLocationLat")) return false;
        this->observedLocationLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 11: // See Profile.xlsx::Messages:weather_conditions.observedLocationLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "weather_conditions.observedLocationLong")) return false;
        this->observedLocationLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 12: // See Profile.xlsx::Messages:weather_conditions.dayOfWeek
        if (!verify(data, baseType, 1, FitBaseType::Enum, "weather_conditions.dayOfWeek")) return false;
        this->dayOfWeek = static_cast<DayOfWeek>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:weather_conditions.highTemperature
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "weather_conditions.highTemperature")) return false;
        this->highTemperature = static_cast<qint8>(data.at(0));
        break;
    case 14: // See Profile.xlsx::Messages:weather_conditions.lowTemperature
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "weather_conditions.lowTemperature")) return false;
        this->lowTemperature = static_cast<qint8>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown weather_conditions message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
