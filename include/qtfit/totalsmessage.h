// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the TotalsMessage class.
 */

#ifndef QTFIT_TOTALSMESSAGE_H
#define QTFIT_TOTALSMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class TotalsMessagePrivate;

class QTFIT_EXPORT TotalsMessage : public AbstractDataMessage {

public:
    TotalsMessage();
    ~TotalsMessage();

    MessageIndex messageIndex() const;
    DateTime timestamp() const;
    quint32 timerTime() const;
    quint32 distance() const;
    quint32 calories() const;
    Sport sport() const;
    quint32 elapsedTime() const;
    quint16 sessions() const;
    quint32 activeTime() const;
    quint8 sportIndex() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setTimestamp(const DateTime timestamp);
    void setTimerTime(const quint32 timerTime);
    void setDistance(const quint32 distance);
    void setCalories(const quint32 calories);
    void setSport(const Sport sport);
    void setElapsedTime(const quint32 elapsedTime);
    void setSessions(const quint16 sessions);
    void setActiveTime(const quint32 activeTime);
    void setSportIndex(const quint8 sportIndex);

protected:
    /// \cond internal
    explicit TotalsMessage(TotalsMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(TotalsMessage)
  //Q_DISABLE_COPY(TotalsMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_TOTALSMESSAGE_H
