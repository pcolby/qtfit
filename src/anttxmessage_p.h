// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the AntTxMessagePrivate class.
 */
#ifndef QTFIT_ANTTXMESSAGE_P_H
#define QTFIT_ANTTXMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class AntTxMessage;

class AntTxMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The AntTxMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The AntTxMessage FIT message's fractionalTimestamp field.
     */
    quint16 fractionalTimestamp;

    /*!
     * The AntTxMessage FIT message's mesgId field.
     */
    quint8 mesgId;

    /*!
     * The AntTxMessage FIT message's mesgData field.
     */
    quint8 mesgData;

    /*!
     * The AntTxMessage FIT message's channelNumber field.
     */
    quint8 channelNumber;

    /*!
     * The AntTxMessage FIT message's data field.
     */
    quint8 data;

    AntTxMessagePrivate() = delete;
    explicit AntTxMessagePrivate(AntTxMessage * const q);
    virtual ~AntTxMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(AntTxMessage)
    Q_DISABLE_COPY(AntTxMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTTXMESSAGE_P_H
