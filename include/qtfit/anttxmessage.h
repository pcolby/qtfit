// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the AntTxMessage class.
 */

#ifndef QTFIT_ANTTXMESSAGE_H
#define QTFIT_ANTTXMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class AntTxMessagePrivate;

class QTFIT_EXPORT AntTxMessage : public AbstractDataMessage {

public:
    AntTxMessage();
    ~AntTxMessage();

    DateTime timestamp() const;
    quint16 fractionalTimestamp() const;
    quint8 mesgId() const;
    quint8 mesgData() const;
    quint8 channelNumber() const;
    quint8 data() const;

    void setTimestamp(const DateTime timestamp);
    void setFractionalTimestamp(const quint16 fractionalTimestamp);
    void setMesgId(const quint8 mesgId);
    void setMesgData(const quint8 mesgData);
    void setChannelNumber(const quint8 channelNumber);
    void setData(const quint8 data);

protected:
    /// \cond internal
    explicit AntTxMessage(AntTxMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(AntTxMessage)
  //Q_DISABLE_COPY(AntTxMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTTXMESSAGE_H
