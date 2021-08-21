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
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.screenIndex has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_concept_configuration.screenIndex size is" << data.size() << "but should be" << 1;
            return false;
        }
        screenIndex = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:exd_data_concept_configuration.conceptField
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.conceptField has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_concept_configuration.conceptField size is" << data.size() << "but should be" << 1;
            return false;
        }
        conceptField = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:exd_data_concept_configuration.fieldId
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.fieldId has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_concept_configuration.fieldId size is" << data.size() << "but should be" << 1;
            return false;
        }
        fieldId = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:exd_data_concept_configuration.conceptIndex
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.conceptIndex has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_concept_configuration.conceptIndex size is" << data.size() << "but should be" << 1;
            return false;
        }
        conceptIndex = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:exd_data_concept_configuration.dataPage
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.dataPage has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_concept_configuration.dataPage size is" << data.size() << "but should be" << 1;
            return false;
        }
        dataPage = static_cast<quint8>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:exd_data_concept_configuration.conceptKey
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.conceptKey has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_concept_configuration.conceptKey size is" << data.size() << "but should be" << 1;
            return false;
        }
        conceptKey = static_cast<quint8>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:exd_data_concept_configuration.scaling
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.scaling has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_concept_configuration.scaling size is" << data.size() << "but should be" << 1;
            return false;
        }
        scaling = static_cast<quint8>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:exd_data_concept_configuration.dataUnits
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.dataUnits has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_concept_configuration.dataUnits size is" << data.size() << "but should be" << 1;
            return false;
        }
        dataUnits = static_cast<ExdDataUnits>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:exd_data_concept_configuration.qualifier
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.qualifier has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_concept_configuration.qualifier size is" << data.size() << "but should be" << 1;
            return false;
        }
        qualifier = static_cast<ExdQualifiers>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:exd_data_concept_configuration.descriptor
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.descriptor has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_concept_configuration.descriptor size is" << data.size() << "but should be" << 1;
            return false;
        }
        descriptor = static_cast<ExdDescriptors>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:exd_data_concept_configuration.isSigned
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_concept_configuration.isSigned has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "exd_data_concept_configuration.isSigned size is" << data.size() << "but should be" << 0;
            return false;
        }
        isSigned = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    default:
        qWarning() << "unknown exd_data_concept_configuration message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
