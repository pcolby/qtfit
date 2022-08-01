// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SpeedZoneMessagePrivate class.
 */
#ifndef QTFIT_SPEEDZONEMESSAGE_P_H
#define QTFIT_SPEEDZONEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SpeedZoneMessage;

class SpeedZoneMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SpeedZoneMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The SpeedZoneMessage FIT message's highValue field.
     */
    quint16 highValue;

    /*!
     * The SpeedZoneMessage FIT message's name field.
     */
    QString name;

    SpeedZoneMessagePrivate() = delete;
    explicit SpeedZoneMessagePrivate(SpeedZoneMessage * const q);
    virtual ~SpeedZoneMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SpeedZoneMessage)
    Q_DISABLE_COPY(SpeedZoneMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SPEEDZONEMESSAGE_P_H
