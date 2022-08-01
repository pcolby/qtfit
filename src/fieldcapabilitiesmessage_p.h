// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the FieldCapabilitiesMessagePrivate class.
 */
#ifndef QTFIT_FIELDCAPABILITIESMESSAGE_P_H
#define QTFIT_FIELDCAPABILITIESMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class FieldCapabilitiesMessage;

class FieldCapabilitiesMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The FieldCapabilitiesMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The FieldCapabilitiesMessage FIT message's file field.
     */
    File file;

    /*!
     * The FieldCapabilitiesMessage FIT message's mesgNum field.
     */
    MesgNum mesgNum;

    /*!
     * The FieldCapabilitiesMessage FIT message's fieldNum field.
     */
    quint8 fieldNum;

    /*!
     * The FieldCapabilitiesMessage FIT message's count field.
     */
    quint16 count;

    FieldCapabilitiesMessagePrivate() = delete;
    explicit FieldCapabilitiesMessagePrivate(FieldCapabilitiesMessage * const q);
    virtual ~FieldCapabilitiesMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(FieldCapabilitiesMessage)
    Q_DISABLE_COPY(FieldCapabilitiesMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FIELDCAPABILITIESMESSAGE_P_H
