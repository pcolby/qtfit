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
 * Internal types used by QtFit classes.
 */

#ifndef QTFIT_TYPES_P_H
#define QTFIT_TYPES_P_H

#include <qtfit/types.h>

#include <QList>

QTFIT_BEGIN_NAMESPACE

/*!
 * Architecture Type for FIT Data Messages.
 *
 * Currently the FIT format only specified big and little endian byte-ordering, but the architecture
 * is specified as a unsigned byte, so could, theoretically, support other architectures in future.
 *
 * \sa https://developer.garmin.com/fit/protocol/#definitionmessage
 */
enum class Architecture : quint8 {
    LittleEndian = 0, ///< Big-endian byte ordering.
    BigEndian = 1,    ///< Little-endian byte ordering.
};

/*!
 * Custom developer field definition.
 *
 * Typically, these definitions are extracted from FIT Definition Messages, then used to interpret
 * subsequent FIT Data Messages.
 *
 * \sa https://developer.garmin.com/fit/protocol/#developerdatafielddescription
 */
struct DeveloperFieldDefinition {
    quint8 fieldNumber;  ///< Maps to the field_definition_number of a field_description Message.
    quint8 size;         ///< Size (in bytes) of the specified FIT message’s field.
    quint8 devDataIndex; ///< Maps to the developer_data_index of a developer_data_id Message.
};

/*!
 * Field Definition for FIT Data Messages.
 *
 * Typically, these definitions are extracted from FIT Definition Messages, then used to interpret
 * subsequent FIT Data Messages.
 *
 * \sa https://developer.garmin.com/fit/protocol/#fielddefinition
 */
struct FieldDefinition {
    quint8 number;        ///< Unique ID for the FIT field within a given FIT data message.
    quint8 size;          ///< Size (in bytes) of the field.
    FitBaseType baseType; ///< Base type for interpreting unknown fields.
};

/*!
 * Data Message definition.
 *
 * Typically, these definitions are extracted from FIT Definition Messages, then used to interpret
 * subsequent FIT Data Messages.
 *
 * \sa https://developer.garmin.com/fit/protocol/#fielddefinition
 */
struct DataDefinition {
    Architecture architecture;   ///< Architecture type for any multi-byte fields.
    MesgNum globalMessageNumber; ///< FIT Global Message Number the Data Message represents.

    /// Definitons list of all fields, if any, present in the described Data Message.
    QList<FieldDefinition> fieldDefinitions;

    /// Definitions list of all custom fields, if any, present in the described Data Message.
    QList<DeveloperFieldDefinition> developerFieldDefinitions;

    /*!
     * Total size, in byetes, of all fields in the described Data Message.
     *
     * This is the combined sum of all sizes in the \c fieldDefinitions and
     * \c developerFieldDefintions members, which is calculated and stored when then definition is
     * initially populated (by FitStreamReaderPrivate::parseDefinitionMessage) as an optimisation
     * for code reading the definitions.
     */
    int recordSize;
};

QTFIT_END_NAMESPACE

#endif // QTFIT_TYPES_H
