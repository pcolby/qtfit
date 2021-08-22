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

#include "fitdatamessage.h"
#include "fitdatamessage_p.h"

#include <QDebug>

QTFIT_BEGIN_NAMESPACE

FitDataMessage::FitDataMessage() : d_ptr(new FitDataMessagePrivate(this))
{

}

FitDataMessage::FitDataMessage(FitDataMessagePrivate * const d) : d_ptr(d)
{

}

FitDataMessage::FitDataMessage(const FitDataMessage &other) : d_ptr(new FitDataMessagePrivate(this))
{
    Q_D(FitDataMessage);
    d->globalMessageNumber = other.globalMessageNumber();
    d->isNull = other.isNull();
}

FitDataMessage &FitDataMessage::operator=(const FitDataMessage &other)
{
    Q_D(FitDataMessage);
    d->globalMessageNumber = other.globalMessageNumber();
    d->isNull = other.isNull();
    return *this;
}

FitDataMessage::~FitDataMessage()
{
    delete d_ptr;
}

MesgNum FitDataMessage::globalMessageNumber() const
{
    Q_D(const FitDataMessage);
    return d->globalMessageNumber;
}

bool FitDataMessage::isNull() const
{
    Q_D(const FitDataMessage);
    return d->isNull;
}

FitDataMessagePrivate::FitDataMessagePrivate(FitDataMessage * const q)
    : globalMessageNumber(static_cast<MesgNum>(0xFFFF)), isNull(true), q_ptr(q)
{
}

FitDataMessagePrivate::~FitDataMessagePrivate()
{

}

bool FitDataMessagePrivate::setFields(const DataDefinition * const defn, const QByteArray &record)
{
    Q_ASSERT(defn->globalMessageNumber == this->globalMessageNumber);
    int dataOffset=0; // Next field's offset within dataRecord.
    for (const FieldDefinition &field: defn->fieldDefinitions) {
        if (!setField(field.number, record.mid(dataOffset,field.size), field.baseType,
                      (defn->architecture == Architecture::BigEndian)))
            return false;
        dataOffset += field.size;
    }
    return true;
}

bool FitDataMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                     const FitBaseType baseType, const bool bigEndian)
{
    Q_UNUSED(bigEndian)
    qWarning() << "ignoring unknown field" << fieldId << data << baseType;
    return true; // True because we "handled it safely", and can continue parsing.
}

inline bool verifyBaseType(const FitBaseType actual, const FitBaseType expected, const char *name)
{
    if (actual == expected) return true;
    qWarning() << name << "has base type" << actual << "but should be" << expected;
    return false;
}

inline bool verifyDataSieze(const QByteArray &data, const int expectedSize, const char *name)
{
    if (data.size() == expectedSize) return true;
    qWarning() << name << "size is" << data.size() << "but should be" << expectedSize;
    return false;
}

bool FitDataMessagePrivate::verify(const QByteArray &data, const FitBaseType actualType,
                                   const int expectedSize, const FitBaseType expectedType,
                                   const char *messageFieldName)
{
    return (verifyBaseType(actualType, expectedType, messageFieldName) &&
            verifyDataSieze(data, expectedSize, messageFieldName));
}

QTFIT_END_NAMESPACE
