// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the MemoGlobMessage class.
 */

#ifndef QTFIT_MEMOGLOBMESSAGE_H
#define QTFIT_MEMOGLOBMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class MemoGlobMessagePrivate;

class QTFIT_EXPORT MemoGlobMessage : public AbstractDataMessage {

public:
    MemoGlobMessage();
    ~MemoGlobMessage();

    quint32 partIndex() const;
    quint8 memo() const;
    quint16 messageNumber() const;
    MessageIndex messageIndex() const;

    void setPartIndex(const quint32 partIndex);
    void setMemo(const quint8 memo);
    void setMessageNumber(const quint16 messageNumber);
    void setMessageIndex(const MessageIndex messageIndex);

protected:
    /// \cond internal
    explicit MemoGlobMessage(MemoGlobMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(MemoGlobMessage)
  //Q_DISABLE_COPY(MemoGlobMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MEMOGLOBMESSAGE_H
