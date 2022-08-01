// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the CadenceZoneMessage class.
 */

#ifndef QTFIT_CADENCEZONEMESSAGE_H
#define QTFIT_CADENCEZONEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class CadenceZoneMessagePrivate;

class QTFIT_EXPORT CadenceZoneMessage : public AbstractDataMessage {

public:
    CadenceZoneMessage();
    ~CadenceZoneMessage();

    MessageIndex messageIndex() const;
    quint8 highValue() const;
    QString name() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setHighValue(const quint8 highValue);
    void setName(const QString name);

protected:
    /// \cond internal
    explicit CadenceZoneMessage(CadenceZoneMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(CadenceZoneMessage)
  //Q_DISABLE_COPY(CadenceZoneMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CADENCEZONEMESSAGE_H
