// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the HrvMessage class.
 */

#ifndef QTFIT_HRVMESSAGE_H
#define QTFIT_HRVMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class HrvMessagePrivate;

class QTFIT_EXPORT HrvMessage : public AbstractDataMessage {

public:
    HrvMessage();
    ~HrvMessage();

    quint16 time() const;

    void setTime(const quint16 time);

protected:
    /// \cond internal
    explicit HrvMessage(HrvMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(HrvMessage)
  //Q_DISABLE_COPY(HrvMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_HRVMESSAGE_H
