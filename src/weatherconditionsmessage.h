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

#ifndef QTFIT_WEATHERCONDITIONSMESSAGE_H
#define QTFIT_WEATHERCONDITIONSMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class WeatherConditionsMessagePrivate;

class QTFIT_EXPORT WeatherConditionsMessage : public AbstractDataMessage {

public:
    WeatherConditionsMessage();
    ~WeatherConditionsMessage();

    DateTime timestamp() const;
    WeatherReport weatherReport() const;
    qint8 temperature() const;
    WeatherStatus condition() const;
    quint16 windDirection() const;
    quint16 windSpeed() const;
    quint8 precipitationProbability() const;
    qint8 temperatureFeelsLike() const;
    quint8 relativeHumidity() const;
    QString location() const;
    DateTime observedAtTime() const;
    qint32 observedLocationLat() const;
    qint32 observedLocationLong() const;
    DayOfWeek dayOfWeek() const;
    qint8 highTemperature() const;
    qint8 lowTemperature() const;

    void setTimestamp(const DateTime timestamp);
    void setWeatherReport(const WeatherReport weatherReport);
    void setTemperature(const qint8 temperature);
    void setCondition(const WeatherStatus condition);
    void setWindDirection(const quint16 windDirection);
    void setWindSpeed(const quint16 windSpeed);
    void setPrecipitationProbability(const quint8 precipitationProbability);
    void setTemperatureFeelsLike(const qint8 temperatureFeelsLike);
    void setRelativeHumidity(const quint8 relativeHumidity);
    void setLocation(const QString location);
    void setObservedAtTime(const DateTime observedAtTime);
    void setObservedLocationLat(const qint32 observedLocationLat);
    void setObservedLocationLong(const qint32 observedLocationLong);
    void setDayOfWeek(const DayOfWeek dayOfWeek);
    void setHighTemperature(const qint8 highTemperature);
    void setLowTemperature(const qint8 lowTemperature);

protected:
    /// \cond internal
    explicit WeatherConditionsMessage(WeatherConditionsMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(WeatherConditionsMessage)
  //Q_DISABLE_COPY(WeatherConditionsMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WEATHERCONDITIONSMESSAGE_H
