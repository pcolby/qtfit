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

#include "abstractdatamessage.h"
#include "abstractdatamessage_p.h"

#include <QDebug>

QTFIT_BEGIN_NAMESPACE

AbstractDataMessage::AbstractDataMessage(AbstractDataMessagePrivate * const d) : d_ptr(d)
{

}

AbstractDataMessage::~AbstractDataMessage()
{
    delete d_ptr;
}

MesgNum AbstractDataMessage::globalMessageNumber() const
{
    Q_D(const AbstractDataMessage);
    return d->globalMessageNumber;
}

bool AbstractDataMessage::isNull() const
{
    Q_D(const AbstractDataMessage);
    return d->isNull;
}

AbstractDataMessagePrivate::AbstractDataMessagePrivate(AbstractDataMessage * const q)
    : globalMessageNumber(static_cast<MesgNum>(0xFFFF)), isNull(true), q_ptr(q)
{

}

bool AbstractDataMessagePrivate::setFields(
    const QByteArray &dataRecord, const MessageDefintion &messageDefinition)
{
    Q_ASSERT(messageDefinition.globalType == this->globalMessageNumber);
    int dataOffset=0; // Next field's offset within dataRecord.
    for (const FieldDefinition &field: messageDefinition.defns) {
        if (!setField(field.number, dataRecord.mid(dataOffset,field.size), field.type))
            return false;
        dataOffset += field.size;
    }
    return true;
}

QTFIT_END_NAMESPACE
