// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the MetZoneMessage class.
 */

#ifndef QTFIT_METZONEMESSAGE_H
#define QTFIT_METZONEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class MetZoneMessagePrivate;

class QTFIT_EXPORT MetZoneMessage : public AbstractDataMessage {

public:
    MetZoneMessage();
    ~MetZoneMessage();

    MessageIndex messageIndex() const;
    quint8 highBpm() const;
    quint16 calories() const;
    quint8 fatCalories() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setHighBpm(const quint8 highBpm);
    void setCalories(const quint16 calories);
    void setFatCalories(const quint8 fatCalories);

protected:
    /// \cond internal
    explicit MetZoneMessage(MetZoneMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(MetZoneMessage)
  //Q_DISABLE_COPY(MetZoneMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_METZONEMESSAGE_H
