/*
    Copyright 2021 Paul Colby

    This file is part of QtFit.

    QtFit is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtFit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtFit.  If not, see <http://www.gnu.org/licenses/>.
*/

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
