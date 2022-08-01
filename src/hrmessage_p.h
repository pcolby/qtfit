// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
