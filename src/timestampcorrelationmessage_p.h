// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the TimestampCorrelationMessagePrivate class.
 */
#ifndef QTFIT_TIMESTAMPCORRELATIONMESSAGE_P_H
#define QTFIT_TIMESTAMPCORRELATIONMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class TimestampCorrelationMessage;

class TimestampCorrelationMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The TimestampCorrelationMessage FIT message's timestamp field.
     *
     * Whole second part of UTC timestamp at the time the system timestamp was recorded.
     */
    DateTime timestamp;

    /*!
     * The TimestampCorrelationMessage FIT message's fractionalTimestamp field.
     *
     * Fractional part of the UTC timestamp at the time the system timestamp was recorded.
     */
    quint16 fractionalTimestamp;

    /*!
     * The TimestampCorrelationMessage FIT message's systemTimestamp field.
     *
     * Whole second part of the system timestamp
     */
    DateTime systemTimestamp;

    /*!
     * The TimestampCorrelationMessage FIT message's fractionalSystemTimestamp field.
     *
     * Fractional part of the system timestamp
     */
    quint16 fractionalSystemTimestamp;

    /*!
     * The TimestampCorrelationMessage FIT message's localTimestamp field.
     *
     * timestamp epoch expressed in local time used to convert timestamps to local time
     */
    LocalDateTime localTimestamp;

    /*!
     * The TimestampCorrelationMessage FIT message's timestampMs field.
     *
     * Millisecond part of the UTC timestamp at the time the system timestamp was recorded.
     */
    quint16 timestampMs;

    /*!
     * The TimestampCorrelationMessage FIT message's systemTimestampMs field.
     *
     * Millisecond part of the system timestamp
     */
    quint16 systemTimestampMs;

    TimestampCorrelationMessagePrivate() = delete;
    explicit TimestampCorrelationMessagePrivate(TimestampCorrelationMessage * const q);
    virtual ~TimestampCorrelationMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(TimestampCorrelationMessage)
    Q_DISABLE_COPY(TimestampCorrelationMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_TIMESTAMPCORRELATIONMESSAGE_P_H
