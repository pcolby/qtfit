// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the MonitoringInfoMessage class.
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
