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

#ifndef QTFIT_WEATHERALERTMESSAGE_H
#define QTFIT_WEATHERALERTMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class WeatherAlertMessagePrivate;

class QTFIT_EXPORT WeatherAlertMessage : public FitDataMessage {

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
    /// @cond internal
    explicit WeatherAlertMessage(WeatherAlertMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(WeatherAlertMessage)
  //Q_DISABLE_COPY(WeatherAlertMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WEATHERALERTMESSAGE_H
