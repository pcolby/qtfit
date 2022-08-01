// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the HrmProfileMessage class.
 */

#ifndef QTFIT_HRMPROFILEMESSAGE_H
#define QTFIT_HRMPROFILEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class HrmProfileMessagePrivate;

class QTFIT_EXPORT HrmProfileMessage : public AbstractDataMessage {

public:
    HrmProfileMessage();
    ~HrmProfileMessage();

    MessageIndex messageIndex() const;
    bool enabled() const;
    quint16z hrmAntId() const;
    bool logHrv() const;
    quint8z hrmAntIdTransType() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setEnabled(const bool enabled);
    void setHrmAntId(const quint16z hrmAntId);
    void setLogHrv(const bool logHrv);
    void setHrmAntIdTransType(const quint8z hrmAntIdTransType);

protected:
    /// \cond internal
    explicit HrmProfileMessage(HrmProfileMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(HrmProfileMessage)
  //Q_DISABLE_COPY(HrmProfileMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_HRMPROFILEMESSAGE_H
