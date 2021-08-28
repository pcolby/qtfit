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
