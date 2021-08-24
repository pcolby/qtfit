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

#include "fielddescriptionmessage.h"
#include "fielddescriptionmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class FieldDescriptionMessage
 *
 * The FieldDescriptionMessage class represents a FIT FieldDescriptionMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a FieldDescriptionMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
FieldDescriptionMessage::FieldDescriptionMessage() : AbstractDataMessage(new FieldDescriptionMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a FieldDescriptionMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
FieldDescriptionMessage::FieldDescriptionMessage(FieldDescriptionMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the FieldDescriptionMessage data message's \c developerDataIndex field's current value.
 *
 * \return the \c developerDataIndex field value.
 */
quint8 FieldDescriptionMessage::developerDataIndex() const
{
    Q_D(const FieldDescriptionMessage);
    return d->developerDataIndex;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c fieldDefinitionNumber field's current value.
 *
 * \return the \c fieldDefinitionNumber field value.
 */
quint8 FieldDescriptionMessage::fieldDefinitionNumber() const
{
    Q_D(const FieldDescriptionMessage);
    return d->fieldDefinitionNumber;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c fitBaseTypeId field's current value.
 *
 * \return the \c fitBaseTypeId field value.
 */
FitBaseType FieldDescriptionMessage::fitBaseTypeId() const
{
    Q_D(const FieldDescriptionMessage);
    return d->fitBaseTypeId;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c fieldName field's current value.
 *
 * \return the \c fieldName field value.
 */
QString FieldDescriptionMessage::fieldName() const
{
    Q_D(const FieldDescriptionMessage);
    return d->fieldName;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c array field's current value.
 *
 * \return the \c array field value.
 */
quint8 FieldDescriptionMessage::array() const
{
    Q_D(const FieldDescriptionMessage);
    return d->array;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c components field's current value.
 *
 * \return the \c components field value.
 */
QString FieldDescriptionMessage::components() const
{
    Q_D(const FieldDescriptionMessage);
    return d->components;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c scale field's current value.
 *
 * \return the \c scale field value.
 */
quint8 FieldDescriptionMessage::scale() const
{
    Q_D(const FieldDescriptionMessage);
    return d->scale;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c offset field's current value.
 *
 * \return the \c offset field value.
 */
qint8 FieldDescriptionMessage::offset() const
{
    Q_D(const FieldDescriptionMessage);
    return d->offset;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c units field's current value.
 *
 * \return the \c units field value.
 */
QString FieldDescriptionMessage::units() const
{
    Q_D(const FieldDescriptionMessage);
    return d->units;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c bits field's current value.
 *
 * \return the \c bits field value.
 */
QString FieldDescriptionMessage::bits() const
{
    Q_D(const FieldDescriptionMessage);
    return d->bits;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c accumulate field's current value.
 *
 * \return the \c accumulate field value.
 */
QString FieldDescriptionMessage::accumulate() const
{
    Q_D(const FieldDescriptionMessage);
    return d->accumulate;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c fitBaseUnitId field's current value.
 *
 * \return the \c fitBaseUnitId field value.
 */
FitBaseUnit FieldDescriptionMessage::fitBaseUnitId() const
{
    Q_D(const FieldDescriptionMessage);
    return d->fitBaseUnitId;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c nativeMesgNum field's current value.
 *
 * \return the \c nativeMesgNum field value.
 */
MesgNum FieldDescriptionMessage::nativeMesgNum() const
{
    Q_D(const FieldDescriptionMessage);
    return d->nativeMesgNum;
}

/*!
 * Returns the FieldDescriptionMessage data message's \c nativeFieldNum field's current value.
 *
 * \return the \c nativeFieldNum field value.
 */
quint8 FieldDescriptionMessage::nativeFieldNum() const
{
    Q_D(const FieldDescriptionMessage);
    return d->nativeFieldNum;
}

/*!
 * Sets the \c developerDataIndex field to \a developerDataIndex.
 *
 * \param developerDataIndex The field value to set.
 */
void FieldDescriptionMessage::setDeveloperDataIndex(const quint8 developerDataIndex)
{
    Q_D(FieldDescriptionMessage);
    d->developerDataIndex = developerDataIndex;
}
/*!
 * Sets the \c fieldDefinitionNumber field to \a fieldDefinitionNumber.
 *
 * \param fieldDefinitionNumber The field value to set.
 */
void FieldDescriptionMessage::setFieldDefinitionNumber(const quint8 fieldDefinitionNumber)
{
    Q_D(FieldDescriptionMessage);
    d->fieldDefinitionNumber = fieldDefinitionNumber;
}
/*!
 * Sets the \c fitBaseTypeId field to \a fitBaseTypeId.
 *
 * \param fitBaseTypeId The field value to set.
 */
void FieldDescriptionMessage::setFitBaseTypeId(const FitBaseType fitBaseTypeId)
{
    Q_D(FieldDescriptionMessage);
    d->fitBaseTypeId = fitBaseTypeId;
}
/*!
 * Sets the \c fieldName field to \a fieldName.
 *
 * \param fieldName The field value to set.
 */
void FieldDescriptionMessage::setFieldName(const QString fieldName)
{
    Q_D(FieldDescriptionMessage);
    d->fieldName = fieldName;
}
/*!
 * Sets the \c array field to \a array.
 *
 * \param array The field value to set.
 */
void FieldDescriptionMessage::setArray(const quint8 array)
{
    Q_D(FieldDescriptionMessage);
    d->array = array;
}
/*!
 * Sets the \c components field to \a components.
 *
 * \param components The field value to set.
 */
void FieldDescriptionMessage::setComponents(const QString components)
{
    Q_D(FieldDescriptionMessage);
    d->components = components;
}
/*!
 * Sets the \c scale field to \a scale.
 *
 * \param scale The field value to set.
 */
void FieldDescriptionMessage::setScale(const quint8 scale)
{
    Q_D(FieldDescriptionMessage);
    d->scale = scale;
}
/*!
 * Sets the \c offset field to \a offset.
 *
 * \param offset The field value to set.
 */
void FieldDescriptionMessage::setOffset(const qint8 offset)
{
    Q_D(FieldDescriptionMessage);
    d->offset = offset;
}
/*!
 * Sets the \c units field to \a units.
 *
 * \param units The field value to set.
 */
void FieldDescriptionMessage::setUnits(const QString units)
{
    Q_D(FieldDescriptionMessage);
    d->units = units;
}
/*!
 * Sets the \c bits field to \a bits.
 *
 * \param bits The field value to set.
 */
void FieldDescriptionMessage::setBits(const QString bits)
{
    Q_D(FieldDescriptionMessage);
    d->bits = bits;
}
/*!
 * Sets the \c accumulate field to \a accumulate.
 *
 * \param accumulate The field value to set.
 */
void FieldDescriptionMessage::setAccumulate(const QString accumulate)
{
    Q_D(FieldDescriptionMessage);
    d->accumulate = accumulate;
}
/*!
 * Sets the \c fitBaseUnitId field to \a fitBaseUnitId.
 *
 * \param fitBaseUnitId The field value to set.
 */
void FieldDescriptionMessage::setFitBaseUnitId(const FitBaseUnit fitBaseUnitId)
{
    Q_D(FieldDescriptionMessage);
    d->fitBaseUnitId = fitBaseUnitId;
}
/*!
 * Sets the \c nativeMesgNum field to \a nativeMesgNum.
 *
 * \param nativeMesgNum The field value to set.
 */
void FieldDescriptionMessage::setNativeMesgNum(const MesgNum nativeMesgNum)
{
    Q_D(FieldDescriptionMessage);
    d->nativeMesgNum = nativeMesgNum;
}
/*!
 * Sets the \c nativeFieldNum field to \a nativeFieldNum.
 *
 * \param nativeFieldNum The field value to set.
 */
void FieldDescriptionMessage::setNativeFieldNum(const quint8 nativeFieldNum)
{
    Q_D(FieldDescriptionMessage);
    d->nativeFieldNum = nativeFieldNum;
}

/// \cond internal

/*!
 * \internal
 *
 * \class FieldDescriptionMessagePrivate
 *
 * The FieldDescriptionMessagePrivate class provides private implementation for the FieldDescriptionMessage.
 *
 * \sa FieldDescriptionMessage
 */

/*!
 * \internal
 *
 * Constructs a FieldDescriptionMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
FieldDescriptionMessagePrivate::FieldDescriptionMessagePrivate(FieldDescriptionMessage * const q)
  : AbstractDataMessagePrivate(q)
  , developerDataIndex(0xFF)
  , fieldDefinitionNumber(0xFF)
  , fitBaseTypeId(static_cast<FitBaseType>(-1))
  , array(0xFF)
  , scale(0xFF)
  , offset(0x7F)
  , fitBaseUnitId(static_cast<FitBaseUnit>(-1))
  , nativeMesgNum(static_cast<MesgNum>(-1))
  , nativeFieldNum(0xFF)
{
    globalMessageNumber = MesgNum::FieldDescription;
}

/*!
 * \internal
 *
 * Destroys the FieldDescriptionMessagePrivate object.
 */
FieldDescriptionMessagePrivate::~FieldDescriptionMessagePrivate()
{

}

bool FieldDescriptionMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:field_description.developerDataIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "field_description.developerDataIndex")) return false;
        this->developerDataIndex = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:field_description.fieldDefinitionNumber
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "field_description.fieldDefinitionNumber")) return false;
        this->fieldDefinitionNumber = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:field_description.fitBaseTypeId
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "field_description.fitBaseTypeId")) return false;
        this->fitBaseTypeId = static_cast<FitBaseType>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:field_description.fieldName
        if (!verify(data, baseType, 1, FitBaseType::String, "field_description.fieldName")) return false;
        this->fieldName = QString::fromUtf8(data);
        break;
    case 4: // See Profile.xlsx::Messages:field_description.array
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "field_description.array")) return false;
        this->array = static_cast<quint8>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:field_description.components
        if (!verify(data, baseType, 1, FitBaseType::String, "field_description.components")) return false;
        this->components = QString::fromUtf8(data);
        break;
    case 6: // See Profile.xlsx::Messages:field_description.scale
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "field_description.scale")) return false;
        this->scale = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:field_description.offset
        if (!verify(data, baseType, 1, FitBaseType::Sint8, "field_description.offset")) return false;
        this->offset = static_cast<qint8>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:field_description.units
        if (!verify(data, baseType, 1, FitBaseType::String, "field_description.units")) return false;
        this->units = QString::fromUtf8(data);
        break;
    case 9: // See Profile.xlsx::Messages:field_description.bits
        if (!verify(data, baseType, 1, FitBaseType::String, "field_description.bits")) return false;
        this->bits = QString::fromUtf8(data);
        break;
    case 10: // See Profile.xlsx::Messages:field_description.accumulate
        if (!verify(data, baseType, 1, FitBaseType::String, "field_description.accumulate")) return false;
        this->accumulate = QString::fromUtf8(data);
        break;
    case 13: // See Profile.xlsx::Messages:field_description.fitBaseUnitId
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "field_description.fitBaseUnitId")) return false;
        this->fitBaseUnitId = static_cast<FitBaseUnit>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 14: // See Profile.xlsx::Messages:field_description.nativeMesgNum
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "field_description.nativeMesgNum")) return false;
        this->nativeMesgNum = static_cast<MesgNum>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 15: // See Profile.xlsx::Messages:field_description.nativeFieldNum
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "field_description.nativeFieldNum")) return false;
        this->nativeFieldNum = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown field_description message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
