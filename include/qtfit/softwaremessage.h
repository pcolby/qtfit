// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SoftwareMessage class.
 */

#ifndef QTFIT_SOFTWAREMESSAGE_H
#define QTFIT_SOFTWAREMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SoftwareMessagePrivate;

class QTFIT_EXPORT SoftwareMessage : public AbstractDataMessage {

public:
    SoftwareMessage();
    ~SoftwareMessage();

    MessageIndex messageIndex() const;
    quint16 version() const;
    QString partNumber() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setVersion(const quint16 version);
    void setPartNumber(const QString partNumber);

protected:
    /// \cond internal
    explicit SoftwareMessage(SoftwareMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SoftwareMessage)
  //Q_DISABLE_COPY(SoftwareMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SOFTWAREMESSAGE_H
