// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the DiveGasMessagePrivate class.
 */
#ifndef QTFIT_DIVEGASMESSAGE_P_H
#define QTFIT_DIVEGASMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class DiveGasMessage;

class DiveGasMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The DiveGasMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The DiveGasMessage FIT message's heliumContent field.
     */
    quint8 heliumContent;

    /*!
     * The DiveGasMessage FIT message's oxygenContent field.
     */
    quint8 oxygenContent;

    /*!
     * The DiveGasMessage FIT message's status field.
     */
    DiveGasStatus status;

    DiveGasMessagePrivate() = delete;
    explicit DiveGasMessagePrivate(DiveGasMessage * const q);
    virtual ~DiveGasMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(DiveGasMessage)
    Q_DISABLE_COPY(DiveGasMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DIVEGASMESSAGE_P_H
