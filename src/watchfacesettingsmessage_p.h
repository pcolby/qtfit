// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WatchfaceSettingsMessagePrivate class.
 */
#ifndef QTFIT_WATCHFACESETTINGSMESSAGE_P_H
#define QTFIT_WATCHFACESETTINGSMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class WatchfaceSettingsMessage;

class WatchfaceSettingsMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The WatchfaceSettingsMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The WatchfaceSettingsMessage FIT message's mode field.
     */
    WatchfaceMode mode;

    /*!
     * The WatchfaceSettingsMessage FIT message's layout field.
     */
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
