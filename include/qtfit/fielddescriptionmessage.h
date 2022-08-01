// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the FieldDescriptionMessage class.
 */

#ifndef QTFIT_FIELDDESCRIPTIONMESSAGE_H
#define QTFIT_FIELDDESCRIPTIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class FieldDescriptionMessagePrivate;

class QTFIT_EXPORT FieldDescriptionMessage : public AbstractDataMessage {

public:
    FieldDescriptionMessage();
    ~FieldDescriptionMessage();

    quint8 developerDataIndex() const;
    quint8 fieldDefinitionNumber() const;
    FitBaseType fitBaseTypeId() const;
    QString fieldName() const;
    quint8 array() const;
    QString components() const;
    quint8 scale() const;
    qint8 offset() const;
    QString units() const;
    QString bits() const;
    QString accumulate() const;
    FitBaseUnit fitBaseUnitId() const;
    MesgNum nativeMesgNum() const;
    quint8 nativeFieldNum() const;

    void setDeveloperDataIndex(const quint8 developerDataIndex);
    void setFieldDefinitionNumber(const quint8 fieldDefinitionNumber);
    void setFitBaseTypeId(const FitBaseType fitBaseTypeId);
    void setFieldName(const QString fieldName);
    void setArray(const quint8 array);
    void setComponents(const QString components);
    void setScale(const quint8 scale);
    void setOffset(const qint8 offset);
    void setUnits(const QString units);
    void setBits(const QString bits);
    void setAccumulate(const QString accumulate);
    void setFitBaseUnitId(const FitBaseUnit fitBaseUnitId);
    void setNativeMesgNum(const MesgNum nativeMesgNum);
    void setNativeFieldNum(const quint8 nativeFieldNum);

protected:
    /// \cond internal
    explicit FieldDescriptionMessage(FieldDescriptionMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(FieldDescriptionMessage)
  //Q_DISABLE_COPY(FieldDescriptionMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FIELDDESCRIPTIONMESSAGE_H
