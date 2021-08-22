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

/*!
 * \class AbstractDataMessage
 *
 * The AbstractDataMessage class is the polymorphic base class for all FIT Data Message classes.
 */

/*!
 * \internal
 *
 * Constructs a AbstractDataMessage which private implementation \a q.
 *
 * \param q Pointer to private implementation.
 */
AbstractDataMessage::AbstractDataMessage(AbstractDataMessagePrivate * const d) : d_ptr(d)
{

}

/*!
 * Destroys the AbstractDataMessage object.
 */
AbstractDataMessage::~AbstractDataMessage()
{
    delete d_ptr;
}

/*!
 * Returns the data message's global message number.
 *
 * \return the global message number.
 */
MesgNum AbstractDataMessage::globalMessageNumber() const
{
    Q_D(const AbstractDataMessage);
    return d->globalMessageNumber;
}

/*!
 * \internal
 *
 * \class AbstractDataMessagePrivate
 *
 * The AbstractDataMessagePrivate class provides private implementation for AbstractDataMessage.
 *
 * \sa AbstractDataMessage
 */

/*!
 * \internal
 *
 * Constructs a AbstractDataMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementation.
 */
AbstractDataMessagePrivate::AbstractDataMessagePrivate(AbstractDataMessage * const q)
    : globalMessageNumber(static_cast<MesgNum>(0xFFFF)), q_ptr(q)
{

}

/*!
 * \internal
 *
 * Destroys the AbstractDataMessagePrivate object.
 */
AbstractDataMessagePrivate::~AbstractDataMessagePrivate()
{

}

/*!
 * \internal
 *
 * Sets the current FIT data message's fields.
 *
 * The method iterates through the \a record, invoking the virtual setField method to assign the
 * extraced values to the relevant data message fields. Derived classes are expected to override
 * setField to implement that field number to class member mapping.
 *
 * \param defn   Data field definition describing the \a record layout.
 * \param record The FIT data record to read fields from.
 *
 * \return \c true if all fields were parsed safely.
 *
 * \sa setField
 */
bool AbstractDataMessagePrivate::setFields(const DataDefinition * const defn, const QByteArray &record)
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

/*!
 * \internal
 * \fn AbstractDataMessagePrivate::setField
 *
 * Sets the value of the \a fieldId field.
 *
 * Derived classes must implement this method to extract the \a baseType value from \a data, and
 * assign the extracted value the \fieldId field.
 *
 * \param fieldId   The field number within the given FIT data message.
 * \param data      The raw data to extract the field value from.
 * \param baseType  The FIT base type for the field.
 * \param bigEndian Whether or not multibyte values in \a record are big-endian.
 *
 * \return \c true if the field was set, or safely ignored; \c false otherwise.
 */

/*!
 * \internal
 *
 * Verifies that \a actual matches \a expected, and reports a warning if not.
 *
 * \param actual   Actual base type.
 * \param expected Expected base type.
 * \param name     Name of the field being verfied.
 *
 * \return \c true if \a actual and \a expected match, \c false otherwise.
 */
inline bool verifyBaseType(const FitBaseType actual, const FitBaseType expected, const char *name)
{
    if (actual == expected) return true;
    qWarning() << name << "has base type" << actual << "but should be" << expected;
    return false;
}

/*!
 * \internal
 *
 * Verifies that the size of \a data matches \a expectedSize, and reports a warning if not.
 *
 * \param data         Data to verify the size of.
 * \param expectedSize Exepcted size of \a data.
 * \param name         Name of the field being verified.
 *
 * \return \c true if \a data has \a expectedSize bytes, \c false otherwise.
 */
inline bool verifyDataSize(const QByteArray &data, const int expectedSize, const char *name)
{
    if (data.size() == expectedSize) return true;
    qWarning() << name << "size is" << data.size() << "but should be" << expectedSize;
    return false;
}

/*!
 * \internal
 *
 * Verifies the size and type of FIT Data Message fields.
 *
 * \param data             Data to verify the size of.
 * \param actualType       Actual base type.
 * \param expectedSize     Expected size of \a data.
 * \param expectedType     Expected base type.
 * \param messageFieldName Name of the field being verified.
 *
 * \return \c true if the size and type match, \c false otherwise.
 */
bool AbstractDataMessagePrivate::verify(const QByteArray &data, const FitBaseType actualType,
                                   const int expectedSize, const FitBaseType expectedType,
                                   const char *messageFieldName)
{
    return (verifyBaseType(actualType, expectedType, messageFieldName) &&
            verifyDataSize(data, expectedSize, messageFieldName));
}

QTFIT_END_NAMESPACE
