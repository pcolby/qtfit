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

#ifndef QTFIT_TOTALSMESSAGE_H
#define QTFIT_TOTALSMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class TotalsMessagePrivate;

class QTFIT_EXPORT TotalsMessage : public FitDataMessage {

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
    /// @cond internal
    explicit TotalsMessage(TotalsMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(TotalsMessage)
  //Q_DISABLE_COPY(TotalsMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_TOTALSMESSAGE_H
