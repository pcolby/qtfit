// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the AntRxMessage class.
 */

#ifndef QTFIT_ANTRXMESSAGE_H
#define QTFIT_ANTRXMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class AntRxMessagePrivate;

class QTFIT_EXPORT AntRxMessage : public AbstractDataMessage {

public:
    AntRxMessage();
    ~AntRxMessage();

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
    explicit AntRxMessage(AntRxMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(AntRxMessage)
  //Q_DISABLE_COPY(AntRxMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTRXMESSAGE_H
