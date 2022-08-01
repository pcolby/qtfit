// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SportMessagePrivate class.
 */
#ifndef QTFIT_SPORTMESSAGE_P_H
#define QTFIT_SPORTMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SportMessage;

class SportMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SportMessage FIT message's sport field.
     */
    Sport sport;

    /*!
     * The SportMessage FIT message's subSport field.
     */
    SubSport subSport;

    /*!
     * The SportMessage FIT message's name field.
     */
    QString name;

    SportMessagePrivate() = delete;
    explicit SportMessagePrivate(SportMessage * const q);
    virtual ~SportMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SportMessage)
    Q_DISABLE_COPY(SportMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SPORTMESSAGE_P_H
