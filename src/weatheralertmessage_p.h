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
 * Declares the WeatherAlertMessagePrivate class.
 */
#ifndef QTFIT_WEATHERALERTMESSAGE_P_H
#define QTFIT_WEATHERALERTMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class WeatherAlertMessage;

class WeatherAlertMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The WeatherAlertMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The WeatherAlertMessage FIT message's reportId field.
     *
     * Unique identifier from GCS report ID string, length is 12
     */
    QString reportId;

    /*!
     * The WeatherAlertMessage FIT message's issueTime field.
     *
     * Time alert was issued
     */
    DateTime issueTime;

    /*!
     * The WeatherAlertMessage FIT message's expireTime field.
     *
     * Time alert expires
     */
    DateTime expireTime;

    /*!
     * The WeatherAlertMessage FIT message's severity field.
     *
     * Warning, Watch, Advisory, Statement
     */
    WeatherSeverity severity;

    /*!
     * The WeatherAlertMessage FIT message's type field.
     *
     * Tornado, Severe Thunderstorm, etc.
     */
    WeatherSevereType type;

    WeatherAlertMessagePrivate() = delete;
    explicit WeatherAlertMessagePrivate(WeatherAlertMessage * const q);
    virtual ~WeatherAlertMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(WeatherAlertMessage)
    Q_DISABLE_COPY(WeatherAlertMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WEATHERALERTMESSAGE_P_H
