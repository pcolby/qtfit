// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ExdScreenConfigurationMessagePrivate class.
 */
#ifndef QTFIT_EXDSCREENCONFIGURATIONMESSAGE_P_H
#define QTFIT_EXDSCREENCONFIGURATIONMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ExdScreenConfigurationMessage;

class ExdScreenConfigurationMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ExdScreenConfigurationMessage FIT message's screenIndex field.
     */
    quint8 screenIndex;

    /*!
     * The ExdScreenConfigurationMessage FIT message's fieldCount field.
     *
     * number of fields in screen
     */
    quint8 fieldCount;

    /*!
     * The ExdScreenConfigurationMessage FIT message's layout field.
     */
    ExdLayout layout;

    /*!
     * The ExdScreenConfigurationMessage FIT message's screenEnabled field.
     */
    bool screenEnabled;

    ExdScreenConfigurationMessagePrivate() = delete;
    explicit ExdScreenConfigurationMessagePrivate(ExdScreenConfigurationMessage * const q);
    virtual ~ExdScreenConfigurationMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ExdScreenConfigurationMessage)
    Q_DISABLE_COPY(ExdScreenConfigurationMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EXDSCREENCONFIGURATIONMESSAGE_P_H
