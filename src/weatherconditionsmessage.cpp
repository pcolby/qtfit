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

#include <QDebug>
#include <QtEndian>

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

bool WeatherConditionsMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:weather_conditions.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "weather_conditions.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:weather_conditions.weatherReport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.weatherReport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_conditions.weatherReport size is" << data.size() << "but should be" << 1;
            return false;
        }
        weatherReport = static_cast<WeatherReport>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:weather_conditions.temperature
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.temperature has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_conditions.temperature size is" << data.size() << "but should be" << 1;
            return false;
        }
        temperature = static_cast<qint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:weather_conditions.condition
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.condition has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_conditions.condition size is" << data.size() << "but should be" << 1;
            return false;
        }
        condition = static_cast<WeatherStatus>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:weather_conditions.windDirection
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.windDirection has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "weather_conditions.windDirection size is" << data.size() << "but should be" << 2;
            return false;
        }
        windDirection = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:weather_conditions.windSpeed
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.windSpeed has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "weather_conditions.windSpeed size is" << data.size() << "but should be" << 2;
            return false;
        }
        windSpeed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:weather_conditions.precipitationProbability
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.precipitationProbability has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_conditions.precipitationProbability size is" << data.size() << "but should be" << 1;
            return false;
        }
        precipitationProbability = static_cast<quint8>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:weather_conditions.temperatureFeelsLike
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.temperatureFeelsLike has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_conditions.temperatureFeelsLike size is" << data.size() << "but should be" << 1;
            return false;
        }
        temperatureFeelsLike = static_cast<qint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:weather_conditions.relativeHumidity
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.relativeHumidity has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_conditions.relativeHumidity size is" << data.size() << "but should be" << 1;
            return false;
        }
        relativeHumidity = static_cast<quint8>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:weather_conditions.location
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.location has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_conditions.location size is" << data.size() << "but should be" << 1;
            return false;
        }
        location = static_cast<QString>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:weather_conditions.observedAtTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.observedAtTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "weather_conditions.observedAtTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        observedAtTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 10: // See Profile.xlsx::Messages:weather_conditions.observedLocationLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.observedLocationLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "weather_conditions.observedLocationLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        observedLocationLat = static_cast<qint32>(bigEndian ? qFromBigEndian<qint32>(data) : qFromLittleEndian<qint32>(data));
        break;
    case 11: // See Profile.xlsx::Messages:weather_conditions.observedLocationLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.observedLocationLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "weather_conditions.observedLocationLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        observedLocationLong = static_cast<qint32>(bigEndian ? qFromBigEndian<qint32>(data) : qFromLittleEndian<qint32>(data));
        break;
    case 12: // See Profile.xlsx::Messages:weather_conditions.dayOfWeek
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.dayOfWeek has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_conditions.dayOfWeek size is" << data.size() << "but should be" << 1;
            return false;
        }
        dayOfWeek = static_cast<DayOfWeek>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:weather_conditions.highTemperature
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.highTemperature has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_conditions.highTemperature size is" << data.size() << "but should be" << 1;
            return false;
        }
        highTemperature = static_cast<qint8>(data.at(0));
        break;
    case 14: // See Profile.xlsx::Messages:weather_conditions.lowTemperature
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_conditions.lowTemperature has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_conditions.lowTemperature size is" << data.size() << "but should be" << 1;
            return false;
        }
        lowTemperature = static_cast<qint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown weather_conditions message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
