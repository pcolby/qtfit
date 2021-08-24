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

/*!
 * \class ExdDataConceptConfigurationMessage
 *
 * The ExdDataConceptConfigurationMessage class represents a FIT ExdDataConceptConfigurationMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a ExdDataConceptConfigurationMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ExdDataConceptConfigurationMessage::ExdDataConceptConfigurationMessage() : AbstractDataMessage(new ExdDataConceptConfigurationMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a ExdDataConceptConfigurationMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
ExdDataConceptConfigurationMessage::ExdDataConceptConfigurationMessage(ExdDataConceptConfigurationMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c screenIndex field's current value.
 *
 * \return the \c screenIndex field value.
 */
quint8 ExdDataConceptConfigurationMessage::screenIndex() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->screenIndex;
}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c conceptField field's current value.
 *
 * \return the \c conceptField field value.
 */
quint8 ExdDataConceptConfigurationMessage::conceptField() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->conceptField;
}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c fieldId field's current value.
 *
 * \return the \c fieldId field value.
 */
quint8 ExdDataConceptConfigurationMessage::fieldId() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->fieldId;
}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c conceptIndex field's current value.
 *
 * \return the \c conceptIndex field value.
 */
quint8 ExdDataConceptConfigurationMessage::conceptIndex() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->conceptIndex;
}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c dataPage field's current value.
 *
 * \return the \c dataPage field value.
 */
quint8 ExdDataConceptConfigurationMessage::dataPage() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->dataPage;
}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c conceptKey field's current value.
 *
 * \return the \c conceptKey field value.
 */
quint8 ExdDataConceptConfigurationMessage::conceptKey() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->conceptKey;
}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c scaling field's current value.
 *
 * \return the \c scaling field value.
 */
quint8 ExdDataConceptConfigurationMessage::scaling() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->scaling;
}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c dataUnits field's current value.
 *
 * \return the \c dataUnits field value.
 */
ExdDataUnits ExdDataConceptConfigurationMessage::dataUnits() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->dataUnits;
}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c qualifier field's current value.
 *
 * \return the \c qualifier field value.
 */
ExdQualifiers ExdDataConceptConfigurationMessage::qualifier() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->qualifier;
}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c descriptor field's current value.
 *
 * \return the \c descriptor field value.
 */
ExdDescriptors ExdDataConceptConfigurationMessage::descriptor() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->descriptor;
}

/*!
 * Returns the ExdDataConceptConfigurationMessage data message's \c isSigned field's current value.
 *
 * \return the \c isSigned field value.
 */
bool ExdDataConceptConfigurationMessage::isSigned() const
{
    Q_D(const ExdDataConceptConfigurationMessage);
    return d->isSigned;
}

/*!
 * Sets the \c screenIndex field to \a screenIndex.
 *
 * \param screenIndex The field value to set.
 */
void ExdDataConceptConfigurationMessage::setScreenIndex(const quint8 screenIndex)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->screenIndex = screenIndex;
}
/*!
 * Sets the \c conceptField field to \a conceptField.
 *
 * \param conceptField The field value to set.
 */
void ExdDataConceptConfigurationMessage::setConceptField(const quint8 conceptField)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->conceptField = conceptField;
}
/*!
 * Sets the \c fieldId field to \a fieldId.
 *
 * \param fieldId The field value to set.
 */
void ExdDataConceptConfigurationMessage::setFieldId(const quint8 fieldId)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->fieldId = fieldId;
}
/*!
 * Sets the \c conceptIndex field to \a conceptIndex.
 *
 * \param conceptIndex The field value to set.
 */
void ExdDataConceptConfigurationMessage::setConceptIndex(const quint8 conceptIndex)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->conceptIndex = conceptIndex;
}
/*!
 * Sets the \c dataPage field to \a dataPage.
 *
 * \param dataPage The field value to set.
 */
void ExdDataConceptConfigurationMessage::setDataPage(const quint8 dataPage)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->dataPage = dataPage;
}
/*!
 * Sets the \c conceptKey field to \a conceptKey.
 *
 * \param conceptKey The field value to set.
 */
void ExdDataConceptConfigurationMessage::setConceptKey(const quint8 conceptKey)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->conceptKey = conceptKey;
}
/*!
 * Sets the \c scaling field to \a scaling.
 *
 * \param scaling The field value to set.
 */
void ExdDataConceptConfigurationMessage::setScaling(const quint8 scaling)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->scaling = scaling;
}
/*!
 * Sets the \c dataUnits field to \a dataUnits.
 *
 * \param dataUnits The field value to set.
 */
void ExdDataConceptConfigurationMessage::setDataUnits(const ExdDataUnits dataUnits)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->dataUnits = dataUnits;
}
/*!
 * Sets the \c qualifier field to \a qualifier.
 *
 * \param qualifier The field value to set.
 */
void ExdDataConceptConfigurationMessage::setQualifier(const ExdQualifiers qualifier)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->qualifier = qualifier;
}
/*!
 * Sets the \c descriptor field to \a descriptor.
 *
 * \param descriptor The field value to set.
 */
void ExdDataConceptConfigurationMessage::setDescriptor(const ExdDescriptors descriptor)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->descriptor = descriptor;
}
/*!
 * Sets the \c isSigned field to \a isSigned.
 *
 * \param isSigned The field value to set.
 */
void ExdDataConceptConfigurationMessage::setIsSigned(const bool isSigned)
{
    Q_D(ExdDataConceptConfigurationMessage);
    d->isSigned = isSigned;
}

/// \cond internal

/*!
 * \internal
 *
 * \class ExdDataConceptConfigurationMessagePrivate
 *
 * The ExdDataConceptConfigurationMessagePrivate class provides private implementation for the ExdDataConceptConfigurationMessage.
 *
 * \sa ExdDataConceptConfigurationMessage
 */

/*!
 * \internal
 *
 * Constructs a ExdDataConceptConfigurationMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ExdDataConceptConfigurationMessagePrivate::ExdDataConceptConfigurationMessagePrivate(ExdDataConceptConfigurationMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the ExdDataConceptConfigurationMessagePrivate object.
 */
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
        qWarning() << "ignoring unknown exd_data_concept_configuration message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
