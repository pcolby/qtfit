// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WeatherAlertMessage class.
 */

#ifndef QTFIT_WEATHERALERTMESSAGE_H
#define QTFIT_WEATHERALERTMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class WeatherAlertMessagePrivate;

class QTFIT_EXPORT WeatherAlertMessage : public AbstractDataMessage {

public:
    WeatherAlertMessage();
    ~WeatherAlertMessage();

    DateTime timestamp() const;
    QString reportId() const;
    DateTime issueTime() const;
    DateTime expireTime() const;
    WeatherSeverity severity() const;
    WeatherSevereType type() const;

    void setTimestamp(const DateTime timestamp);
    void setReportId(const QString reportId);
    void setIssueTime(const DateTime issueTime);
    void setExpireTime(const DateTime expireTime);
    void setSeverity(const WeatherSeverity severity);
    void setType(const WeatherSevereType type);

protected:
    /// \cond internal
    explicit WeatherAlertMessage(WeatherAlertMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(WeatherAlertMessage)
  //Q_DISABLE_COPY(WeatherAlertMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WEATHERALERTMESSAGE_H
