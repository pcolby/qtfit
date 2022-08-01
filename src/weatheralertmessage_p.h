// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
