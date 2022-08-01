// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ObdiiDataMessagePrivate class.
 */
#ifndef QTFIT_OBDIIDATAMESSAGE_P_H
#define QTFIT_OBDIIDATAMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ObdiiDataMessage;

class ObdiiDataMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ObdiiDataMessage FIT message's timestamp field.
     *
     * Timestamp message was output
     */
    DateTime timestamp;

    /*!
     * The ObdiiDataMessage FIT message's timestampMs field.
     *
     * Fractional part of timestamp, added to timestamp
     */
    quint16 timestampMs;

    /*!
     * The ObdiiDataMessage FIT message's timeOffset field.
     *
     * Offset of PID reading [i] from start_timestamp+start_timestamp_ms. Readings may span accross
     * seconds.
     */
    quint16 timeOffset;

    /*!
     * The ObdiiDataMessage FIT message's pid field.
     *
     * Parameter ID
     */
    quint8 pid;

    /*!
     * The ObdiiDataMessage FIT message's rawData field.
     *
     * Raw parameter data
     */
    quint8 rawData;

    /*!
     * The ObdiiDataMessage FIT message's pidDataSize field.
     *
     * Optional, data size of PID[i].  If not specified refer to SAE J1979.
     */
    quint8 pidDataSize;

    /*!
     * The ObdiiDataMessage FIT message's systemTime field.
     *
     * System time associated with sample expressed in ms, can be used instead of time_offset. 
     * There will be a system_time value for each raw_data element.  For multibyte pids the
     * system_time is repeated.
     */
    quint32 systemTime;

    /*!
     * The ObdiiDataMessage FIT message's startTimestamp field.
     *
     * Timestamp of first sample recorded in the message.  Used with time_offset to generate time of
     * each sample
     */
    DateTime startTimestamp;

    /*!
     * The ObdiiDataMessage FIT message's startTimestampMs field.
     *
     * Fractional part of start_timestamp
     */
    quint16 startTimestampMs;

    ObdiiDataMessagePrivate() = delete;
    explicit ObdiiDataMessagePrivate(ObdiiDataMessage * const q);
    virtual ~ObdiiDataMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ObdiiDataMessage)
    Q_DISABLE_COPY(ObdiiDataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_OBDIIDATAMESSAGE_P_H
