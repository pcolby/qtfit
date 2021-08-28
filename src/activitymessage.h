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
