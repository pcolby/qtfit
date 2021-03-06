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
 * Declares the HrMessagePrivate class.
 */
#ifndef QTFIT_HRMESSAGE_P_H
#define QTFIT_HRMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class HrMessage;

class HrMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The HrMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The HrMessage FIT message's fractionalTimestamp field.
     */
    quint16 fractionalTimestamp;

    /*!
     * The HrMessage FIT message's time256 field.
     */
    quint8 time256;

    /*!
     * The HrMessage FIT message's filteredBpm field.
     */
    quint8 filteredBpm;

    /*!
     * The HrMessage FIT message's eventTimestamp field.
     */
    quint32 eventTimestamp;

    /*!
     * The HrMessage FIT message's eventTimestamp12 field.
     */
    quint8 eventTimestamp12;

    HrMessagePrivate() = delete;
    explicit HrMessagePrivate(HrMessage * const q);
    virtual ~HrMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(HrMessage)
    Q_DISABLE_COPY(HrMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_HRMESSAGE_P_H
