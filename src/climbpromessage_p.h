// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ClimbProMessagePrivate class.
 */
#ifndef QTFIT_CLIMBPROMESSAGE_P_H
#define QTFIT_CLIMBPROMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ClimbProMessage;

class ClimbProMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ClimbProMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The ClimbProMessage FIT message's positionLat field.
     */
    qint32 positionLat;

    /*!
     * The ClimbProMessage FIT message's positionLong field.
     */
    qint32 positionLong;

    /*!
     * The ClimbProMessage FIT message's climbProEvent field.
     */
    ClimbProEvent climbProEvent;

    /*!
     * The ClimbProMessage FIT message's climbNumber field.
     */
    quint16 climbNumber;

    /*!
     * The ClimbProMessage FIT message's climbCategory field.
     */
    quint8 climbCategory;

    /*!
     * The ClimbProMessage FIT message's currentDist field.
     */
    float currentDist;

    ClimbProMessagePrivate() = delete;
    explicit ClimbProMessagePrivate(ClimbProMessage * const q);
    virtual ~ClimbProMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ClimbProMessage)
    Q_DISABLE_COPY(ClimbProMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CLIMBPROMESSAGE_P_H
