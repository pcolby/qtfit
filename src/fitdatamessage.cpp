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
    /// \todo Add a toString(const FitBaseType type) function.
    qWarning() << "ignoring unknown field" << fieldId << data << static_cast<int>(baseType);
    return false;
}

QTFIT_END_NAMESPACE
