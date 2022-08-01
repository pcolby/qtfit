// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the HrmProfileMessagePrivate class.
 */
#ifndef QTFIT_HRMPROFILEMESSAGE_P_H
#define QTFIT_HRMPROFILEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class HrmProfileMessage;

class HrmProfileMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The HrmProfileMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The HrmProfileMessage FIT message's enabled field.
     */
    bool enabled;

    /*!
     * The HrmProfileMessage FIT message's hrmAntId field.
     */
    quint16z hrmAntId;

    /*!
     * The HrmProfileMessage FIT message's logHrv field.
     */
    bool logHrv;

    /*!
     * The HrmProfileMessage FIT message's hrmAntIdTransType field.
     */
    quint8z hrmAntIdTransType;

    HrmProfileMessagePrivate() = delete;
    explicit HrmProfileMessagePrivate(HrmProfileMessage * const q);
    virtual ~HrmProfileMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(HrmProfileMessage)
    Q_DISABLE_COPY(HrmProfileMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_HRMPROFILEMESSAGE_P_H
