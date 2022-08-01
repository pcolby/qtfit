// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ActivityMessage class.
 */

#ifndef QTFIT_ACTIVITYMESSAGE_H
#define QTFIT_ACTIVITYMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ActivityMessagePrivate;

class QTFIT_EXPORT ActivityMessage : public AbstractDataMessage {

public:
    ActivityMessage();
    ~ActivityMessage();

    DateTime timestamp() const;
    quint32 totalTimerTime() const;
    quint16 numSessions() const;
    Activity type() const;
    Event event() const;
    EventType eventType() const;
    LocalDateTime localTimestamp() const;
    quint8 eventGroup() const;

    void setTimestamp(const DateTime timestamp);
    void setTotalTimerTime(const quint32 totalTimerTime);
    void setNumSessions(const quint16 numSessions);
    void setType(const Activity type);
    void setEvent(const Event event);
    void setEventType(const EventType eventType);
    void setLocalTimestamp(const LocalDateTime localTimestamp);
    void setEventGroup(const quint8 eventGroup);

protected:
    /// \cond internal
    explicit ActivityMessage(ActivityMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ActivityMessage)
  //Q_DISABLE_COPY(ActivityMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ACTIVITYMESSAGE_H
