// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ExdDataFieldConfigurationMessagePrivate class.
 */
#ifndef QTFIT_EXDDATAFIELDCONFIGURATIONMESSAGE_P_H
#define QTFIT_EXDDATAFIELDCONFIGURATIONMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ExdDataFieldConfigurationMessage;

class ExdDataFieldConfigurationMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ExdDataFieldConfigurationMessage FIT message's screenIndex field.
     */
    quint8 screenIndex;

    /*!
     * The ExdDataFieldConfigurationMessage FIT message's conceptField field.
     */
    quint8 conceptField;

    /*!
     * The ExdDataFieldConfigurationMessage FIT message's fieldId field.
     */
    quint8 fieldId;

    /*!
     * The ExdDataFieldConfigurationMessage FIT message's conceptCount field.
     */
    quint8 conceptCount;

    /*!
     * The ExdDataFieldConfigurationMessage FIT message's displayType field.
     */
    ExdDisplayType displayType;

    /*!
     * The ExdDataFieldConfigurationMessage FIT message's title field.
     */
    QString title;

    ExdDataFieldConfigurationMessagePrivate() = delete;
    explicit ExdDataFieldConfigurationMessagePrivate(ExdDataFieldConfigurationMessage * const q);
    virtual ~ExdDataFieldConfigurationMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ExdDataFieldConfigurationMessage)
    Q_DISABLE_COPY(ExdDataFieldConfigurationMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EXDDATAFIELDCONFIGURATIONMESSAGE_P_H
