// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the OhrSettingsMessagePrivate class.
 */
#ifndef QTFIT_OHRSETTINGSMESSAGE_P_H
#define QTFIT_OHRSETTINGSMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class OhrSettingsMessage;

class OhrSettingsMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The OhrSettingsMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The OhrSettingsMessage FIT message's enabled field.
     */
    Switch enabled;

    OhrSettingsMessagePrivate() = delete;
    explicit OhrSettingsMessagePrivate(OhrSettingsMessage * const q);
    virtual ~OhrSettingsMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(OhrSettingsMessage)
    Q_DISABLE_COPY(OhrSettingsMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_OHRSETTINGSMESSAGE_P_H
