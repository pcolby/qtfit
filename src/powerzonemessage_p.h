// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the PowerZoneMessagePrivate class.
 */
#ifndef QTFIT_POWERZONEMESSAGE_P_H
#define QTFIT_POWERZONEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class PowerZoneMessage;

class PowerZoneMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The PowerZoneMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The PowerZoneMessage FIT message's highValue field.
     */
    quint16 highValue;

    /*!
     * The PowerZoneMessage FIT message's name field.
     */
    QString name;

    PowerZoneMessagePrivate() = delete;
    explicit PowerZoneMessagePrivate(PowerZoneMessage * const q);
    virtual ~PowerZoneMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(PowerZoneMessage)
    Q_DISABLE_COPY(PowerZoneMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_POWERZONEMESSAGE_P_H
