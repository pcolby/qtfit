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

#ifndef ABSTRACTFITMESSAGE_P_H
#define ABSTRACTFITMESSAGE_P_H

#include "QtFit_global.h"
#include "types.h"
#include "types_p.h"

QTFIT_BEGIN_NAMESPACE

class AbstractDataMessage;

class AbstractDataMessagePrivate {

public:
    MesgNum globalMessageNumber;
    bool isNull;

    AbstractDataMessagePrivate() = delete;
    explicit AbstractDataMessagePrivate(AbstractDataMessage * const q);
    virtual ~AbstractDataMessagePrivate();

    bool setFields(const QByteArray &dataRecord, const MessageDefintion &messageDefinition);

protected:
    AbstractFitMessage * const q_ptr; ///< Internal q-pointer.

    virtual bool setField(const int fieldId, const QByteArray data, baseType) = 0;

private:
    Q_DECLARE_PUBLIC(AbstractDataMessage)
    Q_DISABLE_COPY(AbstractDataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // ABSTRACTFITMESSAGE_P_H
