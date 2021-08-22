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

/*!
 * \class FitDataMessage
 *
 * The FitDataMessage class is the polymorphic base class for all FIT Data Message classes.
 */

/*!
 * Constructs a invalid, null FitDataMessage object.
 *
 * That is, one where isNull returns \c true, and isValid returns \c false.
 */
FitDataMessage::FitDataMessage() : d_ptr(new FitDataMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a FitDataMessage which private implementation \a q.
 *
 * \a q Pointer to private implementation.
 */
FitDataMessage::FitDataMessage(FitDataMessagePrivate * const d) : d_ptr(d)
{

}

/*!
 * Copies a FitDataMessage.
 *
 * \a other The data message to copy.
 */
FitDataMessage::FitDataMessage(const FitDataMessage &other) : d_ptr(new FitDataMessagePrivate(this))
{
    Q_D(FitDataMessage);
    d->globalMessageNumber = other.globalMessageNumber();
    d->isNull = other.isNull();
}

/*!
 * Assigns a FitDataMessage to this one.
 *
 * \a other The data message from which to assign.
 */
FitDataMessage &FitDataMessage::operator=(const FitDataMessage &other)
{
    Q_D(FitDataMessage);
    d->globalMessageNumber = other.globalMessageNumber();
    d->isNull = other.isNull();
    return *this;
}

/*!
 * Destroys the FitDataMessage object.
 */
FitDataMessage::~FitDataMessage()
{
    delete d_ptr;
}

/*!
 * Returns the data message's global message number.
 *
 * \return the global message number.
 */
MesgNum FitDataMessage::globalMessageNumber() const
{
    Q_D(const FitDataMessage);
    return d->globalMessageNumber;
}

/*!
 * Returns \c true if this is not a valid data message, otherwise \c false.
 * \return \c true if this is not a valid data message, otherwise \c false.
 */
bool FitDataMessage::isNull() const
{
    Q_D(const FitDataMessage);
    return d->isNull;
}

/*!
 * \internal
 *
 * Constructs a FitDataMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementation.
 */
FitDataMessagePrivate::FitDataMessagePrivate(FitDataMessage * const q)
    : globalMessageNumber(static_cast<MesgNum>(0xFFFF)), isNull(true), q_ptr(q)
{

}

/*!
 * \internal
 *
 * Destroys the FitDataMessagePrivate object.
 */
FitDataMessagePrivate::~FitDataMessagePrivate()
{

}

/*!
 * \internal
 *
 * Set the current FIT data message's fields.
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

/*!
 * \internal
 *
 * Set a value of a data message field.
 *
 * This base implementation simply logs a warning, and ignores the field. Derived classes should
 * override this implementation to set the relevant class members.
 *
 * \param fieldId   The field number within the given FIT data message.
 * \param data      The raw data to extract the field value from.
 * \param baseType  The FIT base type for the field.
 * \param bigEndian Whether or not multibyte values in \a record are big-endian.
 *
 * \return \c true if the field was set, or skipped; \c false if the field was corrupt or invalid.
 */
bool FitDataMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                     const FitBaseType baseType, const bool bigEndian)
{
    Q_UNUSED(bigEndian)
    qWarning() << "ignoring unknown field" << fieldId << data << baseType;
    return true; // True because we "handled it safely", and can continue parsing.
}

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
inline bool verifyDataSieze(const QByteArray &data, const int expectedSize, const char *name)
{
    if (data.size() == expectedSize) return true;
    qWarning() << name << "size is" << data.size() << "but should be" << expectedSize;
    return false;
}

/*!
 * \interal
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
bool FitDataMessagePrivate::verify(const QByteArray &data, const FitBaseType actualType,
                                   const int expectedSize, const FitBaseType expectedType,
                                   const char *messageFieldName)
{
    return (verifyBaseType(actualType, expectedType, messageFieldName) &&
            verifyDataSieze(data, expectedSize, messageFieldName));
}

QTFIT_END_NAMESPACE
