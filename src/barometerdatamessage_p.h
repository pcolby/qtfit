// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the BarometerDataMessagePrivate class.
 */
#ifndef QTFIT_BAROMETERDATAMESSAGE_P_H
#define QTFIT_BAROMETERDATAMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class BarometerDataMessage;

class BarometerDataMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The BarometerDataMessage FIT message's timestamp field.
     *
     * Whole second part of the timestamp
     */
    DateTime timestamp;

    /*!
     * The BarometerDataMessage FIT message's timestampMs field.
     *
     * Millisecond part of the timestamp.
     */
    quint16 timestampMs;

    /*!
     * The BarometerDataMessage FIT message's sampleTimeOffset field.
     *
     * Each time in the array describes the time at which the barometer sample with the
     * corrosponding index was taken. The samples may span across seconds. Array size must match the
     * number of samples in baro_cal
     */
    quint16 sampleTimeOffset;

    /*!
     * The BarometerDataMessage FIT message's baroPres field.
     *
     * These are the raw ADC reading. The samples may span across seconds. A conversion will need to
     * be done on this data once read.
     */
    quint32 baroPres;

    BarometerDataMessagePrivate() = delete;
    explicit BarometerDataMessagePrivate(BarometerDataMessage * const q);
    virtual ~BarometerDataMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(BarometerDataMessage)
    Q_DISABLE_COPY(BarometerDataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_BAROMETERDATAMESSAGE_P_H
