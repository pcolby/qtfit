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

#include "exddataconceptconfigurationmessage.h"
#include "exddataconceptconfigurationmessage_p.h"

QTFIT_BEGIN_NAMESPACE

ExdDataConceptConfigurationMessage::ExdDataConceptConfigurationMessage() : FitDataMessage(new ExdDataConceptConfigurationMessagePrivate(this))
{

}

quint8 ExdDataConceptConfigurationMessage::screenIndex() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->screenIndex;
}

quint8 ExdDataConceptConfigurationMessage::conceptField() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->conceptField;
}

quint8 ExdDataConceptConfigurationMessage::fieldId() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->fieldId;
}

quint8 ExdDataConceptConfigurationMessage::conceptIndex() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->conceptIndex;
}

quint8 ExdDataConceptConfigurationMessage::dataPage() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->dataPage;
}

quint8 ExdDataConceptConfigurationMessage::conceptKey() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->conceptKey;
}

quint8 ExdDataConceptConfigurationMessage::scaling() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->scaling;
}

ExdDataUnits ExdDataConceptConfigurationMessage::dataUnits() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->dataUnits;
}

ExdQualifiers ExdDataConceptConfigurationMessage::qualifier() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->qualifier;
}

ExdDescriptors ExdDataConceptConfigurationMessage::descriptor() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->descriptor;
}

bool ExdDataConceptConfigurationMessage::isSigned() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->isSigned;
}

void ExdDataConceptConfigurationMessage::setScreenIndex(const quint8 screenIndex)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->screenIndex = screenIndex;
}
void ExdDataConceptConfigurationMessage::setConceptField(const quint8 conceptField)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->conceptField = conceptField;
}
void ExdDataConceptConfigurationMessage::setFieldId(const quint8 fieldId)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->fieldId = fieldId;
}
void ExdDataConceptConfigurationMessage::setConceptIndex(const quint8 conceptIndex)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->conceptIndex = conceptIndex;
}
void ExdDataConceptConfigurationMessage::setDataPage(const quint8 dataPage)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->dataPage = dataPage;
}
void ExdDataConceptConfigurationMessage::setConceptKey(const quint8 conceptKey)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->conceptKey = conceptKey;
}
void ExdDataConceptConfigurationMessage::setScaling(const quint8 scaling)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->scaling = scaling;
}
void ExdDataConceptConfigurationMessage::setDataUnits(const ExdDataUnits dataUnits)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->dataUnits = dataUnits;
}
void ExdDataConceptConfigurationMessage::setQualifier(const ExdQualifiers qualifier)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->qualifier = qualifier;
}
void ExdDataConceptConfigurationMessage::setDescriptor(const ExdDescriptors descriptor)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->descriptor = descriptor;
}
void ExdDataConceptConfigurationMessage::setIsSigned(const bool isSigned)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->isSigned = isSigned;
}

ExdDataConceptConfigurationMessagePrivate::ExdDataConceptConfigurationMessagePrivate(ExdDataConceptConfigurationMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::ExdDataConceptConfiguration;
}

ExdDataConceptConfigurationMessagePrivate::~ExdDataConceptConfigurationMessagePrivate()
{

}

/// @todo Generate implementation.
bool ExdDataConceptConfigurationMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
