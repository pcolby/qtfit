// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the DeveloperDataIdMessagePrivate class.
 */
#ifndef QTFIT_DEVELOPERDATAIDMESSAGE_P_H
#define QTFIT_DEVELOPERDATAIDMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class DeveloperDataIdMessage;

class DeveloperDataIdMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The DeveloperDataIdMessage FIT message's developerId field.
     */
    quint8 developerId;

    /*!
     * The DeveloperDataIdMessage FIT message's applicationId field.
     */
    quint8 applicationId;

    /*!
     * The DeveloperDataIdMessage FIT message's manufacturerId field.
     */
    Manufacturer manufacturerId;

    /*!
     * The DeveloperDataIdMessage FIT message's developerDataIndex field.
     */
    quint8 developerDataIndex;

    /*!
     * The DeveloperDataIdMessage FIT message's applicationVersion field.
     */
    quint32 applicationVersion;

    DeveloperDataIdMessagePrivate() = delete;
    explicit DeveloperDataIdMessagePrivate(DeveloperDataIdMessage * const q);
    virtual ~DeveloperDataIdMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(DeveloperDataIdMessage)
    Q_DISABLE_COPY(DeveloperDataIdMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DEVELOPERDATAIDMESSAGE_P_H
