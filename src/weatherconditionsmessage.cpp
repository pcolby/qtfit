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

#include "weatherconditionsmessage.h"
#include "weatherconditionsmessage_p.h"

QTFIT_BEGIN_NAMESPACE

WeatherConditionsMessage::WeatherConditionsMessage() : FitDataMessage(new WeatherConditionsMessagePrivate(this))
{

}

DateTime WeatherConditionsMessage::timestamp() const
{
    Q_D(const WeatherConditionsMessage);
    return d->timestamp;
}

WeatherReport WeatherConditionsMessage::weatherReport() const
{
    Q_D(const WeatherConditionsMessage);
    return d->weatherReport;
}

qint8 WeatherConditionsMessage::temperature() const
{
    Q_D(const WeatherConditionsMessage);
    return d->temperature;
}

WeatherStatus WeatherConditionsMessage::condition() const
{
    Q_D(const WeatherConditionsMessage);
    return d->condition;
}

quint16 WeatherConditionsMessage::windDirection() const
{
    Q_D(const WeatherConditionsMessage);
    return d->windDirection;
}

quint16 WeatherConditionsMessage::windSpeed() const
{
    Q_D(const WeatherConditionsMessage);
    return d->windSpeed;
}

quint8 WeatherConditionsMessage::precipitationProbability() const
{
    Q_D(const WeatherConditionsMessage);
    return d->precipitationProbability;
}

qint8 WeatherConditionsMessage::temperatureFeelsLike() const
{
    Q_D(const WeatherConditionsMessage);
    return d->temperatureFeelsLike;
}

quint8 WeatherConditionsMessage::relativeHumidity() const
{
    Q_D(const WeatherConditionsMessage);
    return d->relativeHumidity;
}

QString WeatherConditionsMessage::location() const
{
    Q_D(const WeatherConditionsMessage);
    return d->location;
}

DateTime WeatherConditionsMessage::observedAtTime() const
{
    Q_D(const WeatherConditionsMessage);
    return d->observedAtTime;
}

qint32 WeatherConditionsMessage::observedLocationLat() const
{
    Q_D(const WeatherConditionsMessage);
    return d->observedLocationLat;
}

qint32 WeatherConditionsMessage::observedLocationLong() const
{
    Q_D(const WeatherConditionsMessage);
    return d->observedLocationLong;
}

DayOfWeek WeatherConditionsMessage::dayOfWeek() const
{
    Q_D(const WeatherConditionsMessage);
    return d->dayOfWeek;
}

qint8 WeatherConditionsMessage::highTemperature() const
{
    Q_D(const WeatherConditionsMessage);
    return d->highTemperature;
}

qint8 WeatherConditionsMessage::lowTemperature() const
{
    Q_D(const WeatherConditionsMessage);
    return d->lowTemperature;
}

void WeatherConditionsMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(WeatherConditionsMessage);
    d->timestamp = timestamp;
}
void WeatherConditionsMessage::setWeatherReport(const WeatherReport weatherReport)
{
    Q_D(WeatherConditionsMessage);
    d->weatherReport = weatherReport;
}
void WeatherConditionsMessage::setTemperature(const qint8 temperature)
{
    Q_D(WeatherConditionsMessage);
    d->temperature = temperature;
}
void WeatherConditionsMessage::setCondition(const WeatherStatus condition)
{
    Q_D(WeatherConditionsMessage);
    d->condition = condition;
}
void WeatherConditionsMessage::setWindDirection(const quint16 windDirection)
{
    Q_D(WeatherConditionsMessage);
    d->windDirection = windDirection;
}
void WeatherConditionsMessage::setWindSpeed(const quint16 windSpeed)
{
    Q_D(WeatherConditionsMessage);
    d->windSpeed = windSpeed;
}
void WeatherConditionsMessage::setPrecipitationProbability(const quint8 precipitationProbability)
{
    Q_D(WeatherConditionsMessage);
    d->precipitationProbability = precipitationProbability;
}
void WeatherConditionsMessage::setTemperatureFeelsLike(const qint8 temperatureFeelsLike)
{
    Q_D(WeatherConditionsMessage);
    d->temperatureFeelsLike = temperatureFeelsLike;
}
void WeatherConditionsMessage::setRelativeHumidity(const quint8 relativeHumidity)
{
    Q_D(WeatherConditionsMessage);
    d->relativeHumidity = relativeHumidity;
}
void WeatherConditionsMessage::setLocation(const QString location)
{
    Q_D(WeatherConditionsMessage);
    d->location = location;
}
void WeatherConditionsMessage::setObservedAtTime(const DateTime observedAtTime)
{
    Q_D(WeatherConditionsMessage);
    d->observedAtTime = observedAtTime;
}
void WeatherConditionsMessage::setObservedLocationLat(const qint32 observedLocationLat)
{
    Q_D(WeatherConditionsMessage);
    d->observedLocationLat = observedLocationLat;
}
void WeatherConditionsMessage::setObservedLocationLong(const qint32 observedLocationLong)
{
    Q_D(WeatherConditionsMessage);
    d->observedLocationLong = observedLocationLong;
}
void WeatherConditionsMessage::setDayOfWeek(const DayOfWeek dayOfWeek)
{
    Q_D(WeatherConditionsMessage);
    d->dayOfWeek = dayOfWeek;
}
void WeatherConditionsMessage::setHighTemperature(const qint8 highTemperature)
{
    Q_D(WeatherConditionsMessage);
    d->highTemperature = highTemperature;
}
void WeatherConditionsMessage::setLowTemperature(const qint8 lowTemperature)
{
    Q_D(WeatherConditionsMessage);
    d->lowTemperature = lowTemperature;
}

WeatherConditionsMessagePrivate::WeatherConditionsMessagePrivate(WeatherConditionsMessage * const q)
  : FitDataMessagePrivate(q)
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

WeatherConditionsMessagePrivate::~WeatherConditionsMessagePrivate()
{

}

/// @todo Generate implementation.
bool WeatherConditionsMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
