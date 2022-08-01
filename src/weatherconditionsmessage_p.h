// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WeatherConditionsMessagePrivate class.
 */
#ifndef QTFIT_WEATHERCONDITIONSMESSAGE_P_H
#define QTFIT_WEATHERCONDITIONSMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class WeatherConditionsMessage;

class WeatherConditionsMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The WeatherConditionsMessage FIT message's timestamp field.
     *
     * time of update for current conditions, else forecast time
     */
    DateTime timestamp;

    /*!
     * The WeatherConditionsMessage FIT message's weatherReport field.
     *
     * Current or forecast
     */
    WeatherReport weatherReport;

    /*!
     * The WeatherConditionsMessage FIT message's temperature field.
     */
    qint8 temperature;

    /*!
     * The WeatherConditionsMessage FIT message's condition field.
     *
     * Corresponds to GSC Response weatherIcon field
     */
    WeatherStatus condition;

    /*!
     * The WeatherConditionsMessage FIT message's windDirection field.
     */
    quint16 windDirection;

    /*!
     * The WeatherConditionsMessage FIT message's windSpeed field.
     */
    quint16 windSpeed;

    /*!
     * The WeatherConditionsMessage FIT message's precipitationProbability field.
     *
     * range 0-100
     */
    quint8 precipitationProbability;

    /*!
     * The WeatherConditionsMessage FIT message's temperatureFeelsLike field.
     *
     * Heat Index if  GCS heatIdx above or equal to 90F or wind chill if GCS windChill below or
     * equal to 32F
     */
    qint8 temperatureFeelsLike;

    /*!
     * The WeatherConditionsMessage FIT message's relativeHumidity field.
     */
    quint8 relativeHumidity;

    /*!
     * The WeatherConditionsMessage FIT message's location field.
     *
     * string corresponding to GCS response location string
     */
    QString location;

    /*!
     * The WeatherConditionsMessage FIT message's observedAtTime field.
     */
    DateTime observedAtTime;

    /*!
     * The WeatherConditionsMessage FIT message's observedLocationLat field.
     */
    qint32 observedLocationLat;

    /*!
     * The WeatherConditionsMessage FIT message's observedLocationLong field.
     */
    qint32 observedLocationLong;

    /*!
     * The WeatherConditionsMessage FIT message's dayOfWeek field.
     */
    DayOfWeek dayOfWeek;

    /*!
     * The WeatherConditionsMessage FIT message's highTemperature field.
     */
    qint8 highTemperature;

    /*!
     * The WeatherConditionsMessage FIT message's lowTemperature field.
     */
    qint8 lowTemperature;

    WeatherConditionsMessagePrivate() = delete;
    explicit WeatherConditionsMessagePrivate(WeatherConditionsMessage * const q);
    virtual ~WeatherConditionsMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(WeatherConditionsMessage)
    Q_DISABLE_COPY(WeatherConditionsMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WEATHERCONDITIONSMESSAGE_P_H
