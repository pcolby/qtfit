// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WatchfaceSettingsMessage class.
 */

#ifndef QTFIT_WATCHFACESETTINGSMESSAGE_H
#define QTFIT_WATCHFACESETTINGSMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class WatchfaceSettingsMessagePrivate;

class QTFIT_EXPORT WatchfaceSettingsMessage : public AbstractDataMessage {

public:
    WatchfaceSettingsMessage();
    ~WatchfaceSettingsMessage();

    MessageIndex messageIndex() const;
    WatchfaceMode mode() const;
    quint8 layout() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setMode(const WatchfaceMode mode);
    void setLayout(const quint8 layout);

protected:
    /// \cond internal
    explicit WatchfaceSettingsMessage(WatchfaceSettingsMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(WatchfaceSettingsMessage)
  //Q_DISABLE_COPY(WatchfaceSettingsMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WATCHFACESETTINGSMESSAGE_H
