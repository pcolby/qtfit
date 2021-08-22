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

#ifndef QTFIT_TIMESTAMPCORRELATIONMESSAGE_H
#define QTFIT_TIMESTAMPCORRELATIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class TimestampCorrelationMessagePrivate;

class QTFIT_EXPORT TimestampCorrelationMessage : public AbstractDataMessage {

public:
    TimestampCorrelationMessage();
    ~TimestampCorrelationMessage();

    DateTime timestamp() const;
    quint16 fractionalTimestamp() const;
    DateTime systemTimestamp() const;
    quint16 fractionalSystemTimestamp() const;
    LocalDateTime localTimestamp() const;
    quint16 timestampMs() const;
    quint16 systemTimestampMs() const;

    void setTimestamp(const DateTime timestamp);
    void setFractionalTimestamp(const quint16 fractionalTimestamp);
    void setSystemTimestamp(const DateTime systemTimestamp);
    void setFractionalSystemTimestamp(const quint16 fractionalSystemTimestamp);
    void setLocalTimestamp(const LocalDateTime localTimestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setSystemTimestampMs(const quint16 systemTimestampMs);

protected:
    /// \cond internal
    explicit TimestampCorrelationMessage(TimestampCorrelationMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(TimestampCorrelationMessage)
  //Q_DISABLE_COPY(TimestampCorrelationMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_TIMESTAMPCORRELATIONMESSAGE_H
