// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the OhrSettingsMessage class.
 */

#ifndef QTFIT_OHRSETTINGSMESSAGE_H
#define QTFIT_OHRSETTINGSMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class OhrSettingsMessagePrivate;

class QTFIT_EXPORT OhrSettingsMessage : public AbstractDataMessage {

public:
    OhrSettingsMessage();
    ~OhrSettingsMessage();

    DateTime timestamp() const;
    Switch enabled() const;

    void setTimestamp(const DateTime timestamp);
    void setEnabled(const Switch enabled);

protected:
    /// \cond internal
    explicit OhrSettingsMessage(OhrSettingsMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(OhrSettingsMessage)
  //Q_DISABLE_COPY(OhrSettingsMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_OHRSETTINGSMESSAGE_H
