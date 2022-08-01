// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the HrZoneMessagePrivate class.
 */
#ifndef QTFIT_HRZONEMESSAGE_P_H
#define QTFIT_HRZONEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class HrZoneMessage;

class HrZoneMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The HrZoneMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The HrZoneMessage FIT message's highBpm field.
     */
    quint8 highBpm;

    /*!
     * The HrZoneMessage FIT message's name field.
     */
    QString name;

    HrZoneMessagePrivate() = delete;
    explicit HrZoneMessagePrivate(HrZoneMessage * const q);
    virtual ~HrZoneMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(HrZoneMessage)
    Q_DISABLE_COPY(HrZoneMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_HRZONEMESSAGE_P_H
