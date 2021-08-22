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

#include "exddatafieldconfigurationmessage.h"
#include "exddatafieldconfigurationmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class ExdDataFieldConfigurationMessage
 *
 * The ExdDataFieldConfigurationMessage class represents a FIT ExdDataFieldConfigurationMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid ExdDataFieldConfigurationMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ExdDataFieldConfigurationMessage::ExdDataFieldConfigurationMessage() : AbstractDataMessage(new ExdDataFieldConfigurationMessagePrivate(this))
{

}

/*!
 * Returns the ExdDataFieldConfigurationMessage data message's \c screenIndex field's current value.
 *
 * \return the \c screenIndex field value.
 */
quint8 ExdDataFieldConfigurationMessage::screenIndex() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->screenIndex;
}

/*!
 * Returns the ExdDataFieldConfigurationMessage data message's \c conceptField field's current value.
 *
 * \return the \c conceptField field value.
 */
quint8 ExdDataFieldConfigurationMessage::conceptField() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->conceptField;
}

/*!
 * Returns the ExdDataFieldConfigurationMessage data message's \c fieldId field's current value.
 *
 * \return the \c fieldId field value.
 */
quint8 ExdDataFieldConfigurationMessage::fieldId() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->fieldId;
}

/*!
 * Returns the ExdDataFieldConfigurationMessage data message's \c conceptCount field's current value.
 *
 * \return the \c conceptCount field value.
 */
quint8 ExdDataFieldConfigurationMessage::conceptCount() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->conceptCount;
}

/*!
 * Returns the ExdDataFieldConfigurationMessage data message's \c displayType field's current value.
 *
 * \return the \c displayType field value.
 */
ExdDisplayType ExdDataFieldConfigurationMessage::displayType() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->displayType;
}

/*!
 * Returns the ExdDataFieldConfigurationMessage data message's \c title field's current value.
 *
 * \return the \c title field value.
 */
QString ExdDataFieldConfigurationMessage::title() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->title;
}

/*!
 * Sets the \c screenIndex field to \a screenIndex.
 *
 * \param screenIndex The field value to set.
 */
void ExdDataFieldConfigurationMessage::setScreenIndex(const quint8 screenIndex)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->screenIndex = screenIndex;
}
/*!
 * Sets the \c conceptField field to \a conceptField.
 *
 * \param conceptField The field value to set.
 */
void ExdDataFieldConfigurationMessage::setConceptField(const quint8 conceptField)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->conceptField = conceptField;
}
/*!
 * Sets the \c fieldId field to \a fieldId.
 *
 * \param fieldId The field value to set.
 */
void ExdDataFieldConfigurationMessage::setFieldId(const quint8 fieldId)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->fieldId = fieldId;
}
/*!
 * Sets the \c conceptCount field to \a conceptCount.
 *
 * \param conceptCount The field value to set.
 */
void ExdDataFieldConfigurationMessage::setConceptCount(const quint8 conceptCount)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->conceptCount = conceptCount;
}
/*!
 * Sets the \c displayType field to \a displayType.
 *
 * \param displayType The field value to set.
 */
void ExdDataFieldConfigurationMessage::setDisplayType(const ExdDisplayType displayType)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->displayType = displayType;
}
/*!
 * Sets the \c title field to \a title.
 *
 * \param title The field value to set.
 */
void ExdDataFieldConfigurationMessage::setTitle(const QString title)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->title = title;
}

/// \cond internal

/*!
 * \internal
 *
 * \class ExdDataFieldConfigurationMessagePrivate
 *
 * The ExdDataFieldConfigurationMessagePrivate class provides private implementation for the ExdDataFieldConfigurationMessage.
 *
 * \sa ExdDataFieldConfigurationMessage
 */

/*!
 * \internal
 *
 * Constructs a ExdDataFieldConfigurationMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ExdDataFieldConfigurationMessagePrivate::ExdDataFieldConfigurationMessagePrivate(ExdDataFieldConfigurationMessage * const q)
  : AbstractDataMessagePrivate(q)
  , screenIndex(0xFF)
  , conceptField(0xFF)
  , fieldId(0xFF)
  , conceptCount(0xFF)
  , displayType(static_cast<ExdDisplayType>(-1))
{
    globalMessageNumber = MesgNum::ExdDataFieldConfiguration;
}

/*!
 * \internal
 *
 * Destroys the ExdDataFieldConfigurationMessagePrivate object.
 */
ExdDataFieldConfigurationMessagePrivate::~ExdDataFieldConfigurationMessagePrivate()
{

}

bool ExdDataFieldConfigurationMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:exd_data_field_configuration.screenIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_data_field_configuration.screenIndex")) return false;
        this->screenIndex = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:exd_data_field_configuration.conceptField
        if (!verify(data, baseType, 1, FitBaseType::Byte, "exd_data_field_configuration.conceptField")) return false;
        this->conceptField = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:exd_data_field_configuration.fieldId
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_data_field_configuration.fieldId")) return false;
        this->fieldId = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:exd_data_field_configuration.conceptCount
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_data_field_configuration.conceptCount")) return false;
        this->conceptCount = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:exd_data_field_configuration.displayType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "exd_data_field_configuration.displayType")) return false;
        this->displayType = static_cast<ExdDisplayType>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:exd_data_field_configuration.title
        if (!verify(data, baseType, 1, FitBaseType::String, "exd_data_field_configuration.title")) return false;
        this->title = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown exd_data_field_configuration message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
