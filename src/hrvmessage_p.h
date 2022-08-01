// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the HrvMessagePrivate class.
 */
#ifndef QTFIT_HRVMESSAGE_P_H
#define QTFIT_HRVMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class HrvMessage;

class HrvMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The HrvMessage FIT message's time field.
     *
     * Time between beats
     */
    quint16 time;

    HrvMessagePrivate() = delete;
    explicit HrvMessagePrivate(HrvMessage * const q);
    virtual ~HrvMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(HrvMessage)
    Q_DISABLE_COPY(HrvMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_HRVMESSAGE_P_H
