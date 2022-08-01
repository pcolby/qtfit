// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the AntRxMessagePrivate class.
 */
#ifndef QTFIT_ANTRXMESSAGE_P_H
#define QTFIT_ANTRXMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class AntRxMessage;

class AntRxMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The AntRxMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The AntRxMessage FIT message's fractionalTimestamp field.
     */
    quint16 fractionalTimestamp;

    /*!
     * The AntRxMessage FIT message's mesgId field.
     */
    quint8 mesgId;

    /*!
     * The AntRxMessage FIT message's mesgData field.
     */
    quint8 mesgData;

    /*!
     * The AntRxMessage FIT message's channelNumber field.
     */
    quint8 channelNumber;

    /*!
     * The AntRxMessage FIT message's data field.
     */
    quint8 data;

    AntRxMessagePrivate() = delete;
    explicit AntRxMessagePrivate(AntRxMessage * const q);
    virtual ~AntRxMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(AntRxMessage)
    Q_DISABLE_COPY(AntRxMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTRXMESSAGE_P_H
