// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SpeedZoneMessage class.
 */

#ifndef QTFIT_SPEEDZONEMESSAGE_H
#define QTFIT_SPEEDZONEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SpeedZoneMessagePrivate;

class QTFIT_EXPORT SpeedZoneMessage : public AbstractDataMessage {

public:
    SpeedZoneMessage();
    ~SpeedZoneMessage();

    MessageIndex messageIndex() const;
    quint16 highValue() const;
    QString name() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setHighValue(const quint16 highValue);
    void setName(const QString name);

protected:
    /// \cond internal
    explicit SpeedZoneMessage(SpeedZoneMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SpeedZoneMessage)
  //Q_DISABLE_COPY(SpeedZoneMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SPEEDZONEMESSAGE_H
