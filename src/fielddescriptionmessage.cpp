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

FieldDescriptionMessage::FieldDescriptionMessage() : FitDataMessage(new FieldDescriptionMessagePrivate(this))
{

}

quint8 FieldDescriptionMessage::developerDataIndex() const
{
    Q_D(const FieldDescriptionMessage);
    return d->developerDataIndex;
}

quint8 FieldDescriptionMessage::fieldDefinitionNumber() const
{
    Q_D(const FieldDescriptionMessage);
    return d->fieldDefinitionNumber;
}

FitBaseType FieldDescriptionMessage::fitBaseTypeId() const
{
    Q_D(const FieldDescriptionMessage);
    return d->fitBaseTypeId;
}

QString FieldDescriptionMessage::fieldName() const
{
    Q_D(const FieldDescriptionMessage);
    return d->fieldName;
}

quint8 FieldDescriptionMessage::array() const
{
    Q_D(const FieldDescriptionMessage);
    return d->array;
}

QString FieldDescriptionMessage::components() const
{
    Q_D(const FieldDescriptionMessage);
    return d->components;
}

quint8 FieldDescriptionMessage::scale() const
{
    Q_D(const FieldDescriptionMessage);
    return d->scale;
}

qint8 FieldDescriptionMessage::offset() const
{
    Q_D(const FieldDescriptionMessage);
    return d->offset;
}

QString FieldDescriptionMessage::units() const
{
    Q_D(const FieldDescriptionMessage);
    return d->units;
}

QString FieldDescriptionMessage::bits() const
{
    Q_D(const FieldDescriptionMessage);
    return d->bits;
}

QString FieldDescriptionMessage::accumulate() const
{
    Q_D(const FieldDescriptionMessage);
    return d->accumulate;
}

FitBaseUnit FieldDescriptionMessage::fitBaseUnitId() const
{
    Q_D(const FieldDescriptionMessage);
    return d->fitBaseUnitId;
}

MesgNum FieldDescriptionMessage::nativeMesgNum() const
{
    Q_D(const FieldDescriptionMessage);
    return d->nativeMesgNum;
}

quint8 FieldDescriptionMessage::nativeFieldNum() const
{
    Q_D(const FieldDescriptionMessage);
    return d->nativeFieldNum;
}

void FieldDescriptionMessage::setDeveloperDataIndex(const quint8 developerDataIndex)
{
    Q_D(FieldDescriptionMessage);
    d->developerDataIndex = developerDataIndex;
}
void FieldDescriptionMessage::setFieldDefinitionNumber(const quint8 fieldDefinitionNumber)
{
    Q_D(FieldDescriptionMessage);
    d->fieldDefinitionNumber = fieldDefinitionNumber;
}
void FieldDescriptionMessage::setFitBaseTypeId(const FitBaseType fitBaseTypeId)
{
    Q_D(FieldDescriptionMessage);
    d->fitBaseTypeId = fitBaseTypeId;
}
void FieldDescriptionMessage::setFieldName(const QString fieldName)
{
    Q_D(FieldDescriptionMessage);
    d->fieldName = fieldName;
}
void FieldDescriptionMessage::setArray(const quint8 array)
{
    Q_D(FieldDescriptionMessage);
    d->array = array;
}
void FieldDescriptionMessage::setComponents(const QString components)
{
    Q_D(FieldDescriptionMessage);
    d->components = components;
}
void FieldDescriptionMessage::setScale(const quint8 scale)
{
    Q_D(FieldDescriptionMessage);
    d->scale = scale;
}
void FieldDescriptionMessage::setOffset(const qint8 offset)
{
    Q_D(FieldDescriptionMessage);
    d->offset = offset;
}
void FieldDescriptionMessage::setUnits(const QString units)
{
    Q_D(FieldDescriptionMessage);
    d->units = units;
}
void FieldDescriptionMessage::setBits(const QString bits)
{
    Q_D(FieldDescriptionMessage);
    d->bits = bits;
}
void FieldDescriptionMessage::setAccumulate(const QString accumulate)
{
    Q_D(FieldDescriptionMessage);
    d->accumulate = accumulate;
}
void FieldDescriptionMessage::setFitBaseUnitId(const FitBaseUnit fitBaseUnitId)
{
    Q_D(FieldDescriptionMessage);
    d->fitBaseUnitId = fitBaseUnitId;
}
void FieldDescriptionMessage::setNativeMesgNum(const MesgNum nativeMesgNum)
{
    Q_D(FieldDescriptionMessage);
    d->nativeMesgNum = nativeMesgNum;
}
void FieldDescriptionMessage::setNativeFieldNum(const quint8 nativeFieldNum)
{
    Q_D(FieldDescriptionMessage);
    d->nativeFieldNum = nativeFieldNum;
}

FieldDescriptionMessagePrivate::FieldDescriptionMessagePrivate(FieldDescriptionMessage * const q)
  : FitDataMessagePrivate(q)
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

FieldDescriptionMessagePrivate::~FieldDescriptionMessagePrivate()
{

}

bool FieldDescriptionMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:field_description.developerDataIndex
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.developerDataIndex has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.developerDataIndex size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->developerDataIndex = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:field_description.fieldDefinitionNumber
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.fieldDefinitionNumber has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.fieldDefinitionNumber size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->fieldDefinitionNumber = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:field_description.fitBaseTypeId
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.fitBaseTypeId has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.fitBaseTypeId size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->fitBaseTypeId = static_cast<FitBaseType>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:field_description.fieldName
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.fieldName has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.fieldName size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->fieldName = QString::fromUtf8(data);
        break;
    case 4: // See Profile.xlsx::Messages:field_description.array
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.array has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.array size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->array = static_cast<quint8>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:field_description.components
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.components has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.components size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->components = QString::fromUtf8(data);
        break;
    case 6: // See Profile.xlsx::Messages:field_description.scale
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.scale has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.scale size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->scale = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:field_description.offset
        if (baseType != FitBaseType::Sint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.offset has base type" << static_cast<int>(baseType) << "but should be Sint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.offset size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->offset = static_cast<qint8>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:field_description.units
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.units has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.units size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->units = QString::fromUtf8(data);
        break;
    case 9: // See Profile.xlsx::Messages:field_description.bits
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.bits has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.bits size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->bits = QString::fromUtf8(data);
        break;
    case 10: // See Profile.xlsx::Messages:field_description.accumulate
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.accumulate has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.accumulate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->accumulate = QString::fromUtf8(data);
        break;
    case 13: // See Profile.xlsx::Messages:field_description.fitBaseUnitId
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.fitBaseUnitId has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "field_description.fitBaseUnitId size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->fitBaseUnitId = static_cast<FitBaseUnit>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 14: // See Profile.xlsx::Messages:field_description.nativeMesgNum
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.nativeMesgNum has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "field_description.nativeMesgNum size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->nativeMesgNum = static_cast<MesgNum>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 15: // See Profile.xlsx::Messages:field_description.nativeFieldNum
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_description.nativeFieldNum has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_description.nativeFieldNum size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->nativeFieldNum = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown field_description message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
