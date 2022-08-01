// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the CadenceZoneMessagePrivate class.
 */
#ifndef QTFIT_CADENCEZONEMESSAGE_P_H
#define QTFIT_CADENCEZONEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class CadenceZoneMessage;

class CadenceZoneMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The CadenceZoneMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The CadenceZoneMessage FIT message's highValue field.
     */
    quint8 highValue;

    /*!
     * The CadenceZoneMessage FIT message's name field.
     */
    QString name;

    CadenceZoneMessagePrivate() = delete;
    explicit CadenceZoneMessagePrivate(CadenceZoneMessage * const q);
    virtual ~CadenceZoneMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(CadenceZoneMessage)
    Q_DISABLE_COPY(CadenceZoneMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CADENCEZONEMESSAGE_P_H
