// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the MetZoneMessagePrivate class.
 */
#ifndef QTFIT_METZONEMESSAGE_P_H
#define QTFIT_METZONEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class MetZoneMessage;

class MetZoneMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The MetZoneMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The MetZoneMessage FIT message's highBpm field.
     */
    quint8 highBpm;

    /*!
     * The MetZoneMessage FIT message's calories field.
     */
    quint16 calories;

    /*!
     * The MetZoneMessage FIT message's fatCalories field.
     */
    quint8 fatCalories;

    MetZoneMessagePrivate() = delete;
    explicit MetZoneMessagePrivate(MetZoneMessage * const q);
    virtual ~MetZoneMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(MetZoneMessage)
    Q_DISABLE_COPY(MetZoneMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_METZONEMESSAGE_P_H
