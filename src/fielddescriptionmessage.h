/*
    Copyright 2021 Paul Colby

    This file is part of QtFit.

    QtFit is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtFit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtFit.  If not, see <http://www.gnu.org/licenses/>.
*/

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

#ifndef QTFIT_FIELDDESCRIPTIONMESSAGE_H
#define QTFIT_FIELDDESCRIPTIONMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class FieldDescriptionMessagePrivate;

class QTFIT_EXPORT FieldDescriptionMessage : public FitDataMessage {

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
    /// @cond internal
    explicit FieldDescriptionMessage(FieldDescriptionMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(FieldDescriptionMessage)
  //Q_DISABLE_COPY(FieldDescriptionMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FIELDDESCRIPTIONMESSAGE_H
