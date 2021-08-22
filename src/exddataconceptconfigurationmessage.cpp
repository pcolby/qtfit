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

#include <QDebug>
#include <QtEndian>

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

ExdDataConceptConfigurationMessagePrivate::ExdDataConceptConfigurationMessagePrivate(ExdDataConceptConfigurationMessage * const q)
  : FitDataMessagePrivate(q)
  , screenIndex(0xFF)
  , conceptField(0xFF)
  , fieldId(0xFF)
  , conceptIndex(0xFF)
  , dataPage(0xFF)
  , conceptKey(0xFF)
  , scaling(0xFF)
  , dataUnits(static_cast<ExdDataUnits>(-1))
  , qualifier(static_cast<ExdQualifiers>(-1))
  , descriptor(static_cast<ExdDescriptors>(-1))
  , isSigned(static_cast<bool>(-1))
{
    globalMessageNumber = MesgNum::ExdDataConceptConfiguration;
}

ExdDataConceptConfigurationMessagePrivate::~ExdDataConceptConfigurationMessagePrivate()
{

}

bool ExdDataConceptConfigurationMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:exd_data_concept_configuration.screenIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_data_concept_configuration.screenIndex")) return false;
        this->screenIndex = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:exd_data_concept_configuration.conceptField
        if (!verify(data, baseType, 1, FitBaseType::Byte, "exd_data_concept_configuration.conceptField")) return false;
        this->conceptField = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:exd_data_concept_configuration.fieldId
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_data_concept_configuration.fieldId")) return false;
        this->fieldId = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:exd_data_concept_configuration.conceptIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_data_concept_configuration.conceptIndex")) return false;
        this->conceptIndex = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:exd_data_concept_configuration.dataPage
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_data_concept_configuration.dataPage")) return false;
        this->dataPage = static_cast<quint8>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:exd_data_concept_configuration.conceptKey
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_data_concept_configuration.conceptKey")) return false;
        this->conceptKey = static_cast<quint8>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:exd_data_concept_configuration.scaling
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_data_concept_configuration.scaling")) return false;
        this->scaling = static_cast<quint8>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:exd_data_concept_configuration.dataUnits
        if (!verify(data, baseType, 1, FitBaseType::Enum, "exd_data_concept_configuration.dataUnits")) return false;
        this->dataUnits = static_cast<ExdDataUnits>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:exd_data_concept_configuration.qualifier
        if (!verify(data, baseType, 1, FitBaseType::Enum, "exd_data_concept_configuration.qualifier")) return false;
        this->qualifier = static_cast<ExdQualifiers>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:exd_data_concept_configuration.descriptor
        if (!verify(data, baseType, 1, FitBaseType::Enum, "exd_data_concept_configuration.descriptor")) return false;
        this->descriptor = static_cast<ExdDescriptors>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:exd_data_concept_configuration.isSigned
        if (!verify(data, baseType, 0, FitBaseType::Byte, "exd_data_concept_configuration.isSigned")) return false;
        this->isSigned = static_cast<bool>(data.at(0));
        break;
    default:
        qWarning() << "unknown exd_data_concept_configuration message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
