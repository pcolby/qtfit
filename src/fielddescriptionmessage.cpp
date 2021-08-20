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

FieldDescriptionMessagePrivate::FieldDescriptionMessagePrivate(FieldDescriptionMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::FieldDescription;
}

FieldDescriptionMessagePrivate::~FieldDescriptionMessagePrivate()
{

}

/// @todo Generate implementation.
bool FieldDescriptionMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE
