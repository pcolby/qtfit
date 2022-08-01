// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the FieldDescriptionMessagePrivate class.
 */
#ifndef QTFIT_FIELDDESCRIPTIONMESSAGE_P_H
#define QTFIT_FIELDDESCRIPTIONMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class FieldDescriptionMessage;

class FieldDescriptionMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The FieldDescriptionMessage FIT message's developerDataIndex field.
     */
    quint8 developerDataIndex;

    /*!
     * The FieldDescriptionMessage FIT message's fieldDefinitionNumber field.
     */
    quint8 fieldDefinitionNumber;

    /*!
     * The FieldDescriptionMessage FIT message's fitBaseTypeId field.
     */
    FitBaseType fitBaseTypeId;

    /*!
     * The FieldDescriptionMessage FIT message's fieldName field.
     */
    QString fieldName;

    /*!
     * The FieldDescriptionMessage FIT message's array field.
     */
    quint8 array;

    /*!
     * The FieldDescriptionMessage FIT message's components field.
     */
    QString components;

    /*!
     * The FieldDescriptionMessage FIT message's scale field.
     */
    quint8 scale;

    /*!
     * The FieldDescriptionMessage FIT message's offset field.
     */
    qint8 offset;

    /*!
     * The FieldDescriptionMessage FIT message's units field.
     */
    QString units;

    /*!
     * The FieldDescriptionMessage FIT message's bits field.
     */
    QString bits;

    /*!
     * The FieldDescriptionMessage FIT message's accumulate field.
     */
    QString accumulate;

    /*!
     * The FieldDescriptionMessage FIT message's fitBaseUnitId field.
     */
    FitBaseUnit fitBaseUnitId;

    /*!
     * The FieldDescriptionMessage FIT message's nativeMesgNum field.
     */
    MesgNum nativeMesgNum;

    /*!
     * The FieldDescriptionMessage FIT message's nativeFieldNum field.
     */
    quint8 nativeFieldNum;

    FieldDescriptionMessagePrivate() = delete;
    explicit FieldDescriptionMessagePrivate(FieldDescriptionMessage * const q);
    virtual ~FieldDescriptionMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(FieldDescriptionMessage)
    Q_DISABLE_COPY(FieldDescriptionMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FIELDDESCRIPTIONMESSAGE_P_H
