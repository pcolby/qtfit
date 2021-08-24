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
