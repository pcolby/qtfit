// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the DiveGasMessage class.
 */

#ifndef QTFIT_DIVEGASMESSAGE_H
#define QTFIT_DIVEGASMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class DiveGasMessagePrivate;

class QTFIT_EXPORT DiveGasMessage : public AbstractDataMessage {

public:
    DiveGasMessage();
    ~DiveGasMessage();

    MessageIndex messageIndex() const;
    quint8 heliumContent() const;
    quint8 oxygenContent() const;
    DiveGasStatus status() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setHeliumContent(const quint8 heliumContent);
    void setOxygenContent(const quint8 oxygenContent);
    void setStatus(const DiveGasStatus status);

protected:
    /// \cond internal
    explicit DiveGasMessage(DiveGasMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(DiveGasMessage)
  //Q_DISABLE_COPY(DiveGasMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DIVEGASMESSAGE_H
