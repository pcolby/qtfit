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

#ifndef QTFIT_WATCHFACESETTINGSMESSAGE_P_H
#define QTFIT_WATCHFACESETTINGSMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class WatchfaceSettingsMessage;

class WatchfaceSettingsMessagePrivate : public AbstractDataMessagePrivate {

public:
    MessageIndex messageIndex;
    WatchfaceMode mode;
    quint8 layout;

    WatchfaceSettingsMessagePrivate() = delete;
    explicit WatchfaceSettingsMessagePrivate(WatchfaceSettingsMessage * const q);
    virtual ~WatchfaceSettingsMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(WatchfaceSettingsMessage)
    Q_DISABLE_COPY(WatchfaceSettingsMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WATCHFACESETTINGSMESSAGE_P_H
