// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the GoalMessage class.
 */

#ifndef QTFIT_GOALMESSAGE_H
#define QTFIT_GOALMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class GoalMessagePrivate;

class QTFIT_EXPORT GoalMessage : public AbstractDataMessage {

public:
    GoalMessage();
    ~GoalMessage();

    MessageIndex messageIndex() const;
    Sport sport() const;
    SubSport subSport() const;
    DateTime startDate() const;
    DateTime endDate() const;
    Goal type() const;
    quint32 value() const;
    bool repeat() const;
    quint32 targetValue() const;
    GoalRecurrence recurrence() const;
    quint16 recurrenceValue() const;
    bool enabled() const;
    GoalSource source() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setSport(const Sport sport);
    void setSubSport(const SubSport subSport);
    void setStartDate(const DateTime startDate);
    void setEndDate(const DateTime endDate);
    void setType(const Goal type);
    void setValue(const quint32 value);
    void setRepeat(const bool repeat);
    void setTargetValue(const quint32 targetValue);
    void setRecurrence(const GoalRecurrence recurrence);
    void setRecurrenceValue(const quint16 recurrenceValue);
    void setEnabled(const bool enabled);
    void setSource(const GoalSource source);

protected:
    /// \cond internal
    explicit GoalMessage(GoalMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(GoalMessage)
  //Q_DISABLE_COPY(GoalMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_GOALMESSAGE_H
