// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the TimestampCorrelationMessage class.
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
