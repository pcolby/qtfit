// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the HrZoneMessage class.
 */

#ifndef QTFIT_HRZONEMESSAGE_H
#define QTFIT_HRZONEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class HrZoneMessagePrivate;

class QTFIT_EXPORT HrZoneMessage : public AbstractDataMessage {

public:
    HrZoneMessage();
    ~HrZoneMessage();

    MessageIndex messageIndex() const;
    quint8 highBpm() const;
    QString name() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setHighBpm(const quint8 highBpm);
    void setName(const QString name);

protected:
    /// \cond internal
    explicit HrZoneMessage(HrZoneMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(HrZoneMessage)
  //Q_DISABLE_COPY(HrZoneMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_HRZONEMESSAGE_H
