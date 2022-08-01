// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the PowerZoneMessage class.
 */

#ifndef QTFIT_POWERZONEMESSAGE_H
#define QTFIT_POWERZONEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class PowerZoneMessagePrivate;

class QTFIT_EXPORT PowerZoneMessage : public AbstractDataMessage {

public:
    PowerZoneMessage();
    ~PowerZoneMessage();

    MessageIndex messageIndex() const;
    quint16 highValue() const;
    QString name() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setHighValue(const quint16 highValue);
    void setName(const QString name);

protected:
    /// \cond internal
    explicit PowerZoneMessage(PowerZoneMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(PowerZoneMessage)
  //Q_DISABLE_COPY(PowerZoneMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_POWERZONEMESSAGE_H
