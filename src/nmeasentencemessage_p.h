// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the NmeaSentenceMessagePrivate class.
 */
#ifndef QTFIT_NMEASENTENCEMESSAGE_P_H
#define QTFIT_NMEASENTENCEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class NmeaSentenceMessage;

class NmeaSentenceMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The NmeaSentenceMessage FIT message's timestamp field.
     *
     * Timestamp message was output
     */
    DateTime timestamp;

    /*!
     * The NmeaSentenceMessage FIT message's timestampMs field.
     *
     * Fractional part of timestamp, added to timestamp
     */
    quint16 timestampMs;

    /*!
     * The NmeaSentenceMessage FIT message's sentence field.
     *
     * NMEA sentence
     */
    QString sentence;

    NmeaSentenceMessagePrivate() = delete;
    explicit NmeaSentenceMessagePrivate(NmeaSentenceMessage * const q);
    virtual ~NmeaSentenceMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(NmeaSentenceMessage)
    Q_DISABLE_COPY(NmeaSentenceMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_NMEASENTENCEMESSAGE_P_H
