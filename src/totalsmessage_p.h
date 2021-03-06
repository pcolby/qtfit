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
 * Declares the TotalsMessagePrivate class.
 */
#ifndef QTFIT_TOTALSMESSAGE_P_H
#define QTFIT_TOTALSMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class TotalsMessage;

class TotalsMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The TotalsMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The TotalsMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The TotalsMessage FIT message's timerTime field.
     *
     * Excludes pauses
     */
    quint32 timerTime;

    /*!
     * The TotalsMessage FIT message's distance field.
     */
    quint32 distance;

    /*!
     * The TotalsMessage FIT message's calories field.
     */
    quint32 calories;

    /*!
     * The TotalsMessage FIT message's sport field.
     */
    Sport sport;

    /*!
     * The TotalsMessage FIT message's elapsedTime field.
     *
     * Includes pauses
     */
    quint32 elapsedTime;

    /*!
     * The TotalsMessage FIT message's sessions field.
     */
    quint16 sessions;

    /*!
     * The TotalsMessage FIT message's activeTime field.
     */
    quint32 activeTime;

    /*!
     * The TotalsMessage FIT message's sportIndex field.
     */
    quint8 sportIndex;

    TotalsMessagePrivate() = delete;
    explicit TotalsMessagePrivate(TotalsMessage * const q);
    virtual ~TotalsMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(TotalsMessage)
    Q_DISABLE_COPY(TotalsMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_TOTALSMESSAGE_P_H
