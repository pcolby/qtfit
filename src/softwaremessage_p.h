// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SoftwareMessagePrivate class.
 */
#ifndef QTFIT_SOFTWAREMESSAGE_P_H
#define QTFIT_SOFTWAREMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SoftwareMessage;

class SoftwareMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SoftwareMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The SoftwareMessage FIT message's version field.
     */
    quint16 version;

    /*!
     * The SoftwareMessage FIT message's partNumber field.
     */
    QString partNumber;

    SoftwareMessagePrivate() = delete;
    explicit SoftwareMessagePrivate(SoftwareMessage * const q);
    virtual ~SoftwareMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SoftwareMessage)
    Q_DISABLE_COPY(SoftwareMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SOFTWAREMESSAGE_P_H
