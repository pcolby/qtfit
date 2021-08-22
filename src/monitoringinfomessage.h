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

#ifndef QTFIT_MONITORINGINFOMESSAGE_H
#define QTFIT_MONITORINGINFOMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class MonitoringInfoMessagePrivate;

class QTFIT_EXPORT MonitoringInfoMessage : public AbstractDataMessage {

public:
    MonitoringInfoMessage();
    ~MonitoringInfoMessage();

    DateTime timestamp() const;
    LocalDateTime localTimestamp() const;
    ActivityType activityType() const;
    quint16 cyclesToDistance() const;
    quint16 cyclesToCalories() const;
    quint16 restingMetabolicRate() const;

    void setTimestamp(const DateTime timestamp);
    void setLocalTimestamp(const LocalDateTime localTimestamp);
    void setActivityType(const ActivityType activityType);
    void setCyclesToDistance(const quint16 cyclesToDistance);
    void setCyclesToCalories(const quint16 cyclesToCalories);
    void setRestingMetabolicRate(const quint16 restingMetabolicRate);

protected:
    /// \cond internal
    explicit MonitoringInfoMessage(MonitoringInfoMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(MonitoringInfoMessage)
  //Q_DISABLE_COPY(MonitoringInfoMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MONITORINGINFOMESSAGE_H
