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

#ifndef QTFIT_TYPES_P_H
#define QTFIT_TYPES_P_H

#include "types.h"

#include <QList>

QTFIT_BEGIN_NAMESPACE

enum class Architecture : quint8 {
    LittleEndian = 0,
    BigEndian = 1,
};

struct DeveloperFieldDefinition {
    quint8 fieldNumber;
    quint8 size;
    quint8 devDataIndex;
};

struct FieldDefinition {
    quint8 number;        ///< Unique ID for the FIT field within a given FIT data message.
    quint8 size;          ///< Size (in bytes) of the field.
    FitBaseType baseType; ///< Base type for interpreting unknown fields.
};

struct DataDefinition {
    Architecture architecture;
    MesgNum globalMessageNumber;
    QList<FieldDefinition> fieldDefinitions;
    QList<DeveloperFieldDefinition> developerFieldDefinitions;
    int recordSize; ///< Sum of all sizes in fieldDefinitions and developerFieldDefintions.
};

struct DataMessage {
    quint8 localMessageType; // 0xFF == invalid
    quint8 timestampOffset; // Valid range is 0 to 31; anything outside this is invalid.
    QByteArray recordContent; // empty -> invalid.
};

QTFIT_END_NAMESPACE

#endif // QTFIT_TYPES_H
