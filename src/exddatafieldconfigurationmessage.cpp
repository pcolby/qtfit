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

ExdDataFieldConfigurationMessage::ExdDataFieldConfigurationMessage() : FitDataMessage(new ExdDataFieldConfigurationMessagePrivate(this))
{

}

quint8 ExdDataFieldConfigurationMessage::screenIndex() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->screenIndex;
}

quint8 ExdDataFieldConfigurationMessage::conceptField() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->conceptField;
}

quint8 ExdDataFieldConfigurationMessage::fieldId() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->fieldId;
}

quint8 ExdDataFieldConfigurationMessage::conceptCount() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->conceptCount;
}

ExdDisplayType ExdDataFieldConfigurationMessage::displayType() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->displayType;
}

QString ExdDataFieldConfigurationMessage::title() const
{
    Q_D(const ExdDataFieldConfigurationMessage);
    return d->title;
}

void ExdDataFieldConfigurationMessage::setScreenIndex(const quint8 screenIndex)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->screenIndex = screenIndex;
}
void ExdDataFieldConfigurationMessage::setConceptField(const quint8 conceptField)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->conceptField = conceptField;
}
void ExdDataFieldConfigurationMessage::setFieldId(const quint8 fieldId)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->fieldId = fieldId;
}
void ExdDataFieldConfigurationMessage::setConceptCount(const quint8 conceptCount)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->conceptCount = conceptCount;
}
void ExdDataFieldConfigurationMessage::setDisplayType(const ExdDisplayType displayType)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->displayType = displayType;
}
void ExdDataFieldConfigurationMessage::setTitle(const QString title)
{
    Q_D(ExdDataFieldConfigurationMessage);
    d->title = title;
}

ExdDataFieldConfigurationMessagePrivate::ExdDataFieldConfigurationMessagePrivate(ExdDataFieldConfigurationMessage * const q)
  : FitDataMessagePrivate(q)
  , screenIndex(0xFF)
  , conceptField(0xFF)
  , fieldId(0xFF)
  , conceptCount(0xFF)
  , displayType(static_cast<ExdDisplayType>(-1))
{
    globalMessageNumber = MesgNum::ExdDataFieldConfiguration;
}

ExdDataFieldConfigurationMessagePrivate::~ExdDataFieldConfigurationMessagePrivate()
{

}

bool ExdDataFieldConfigurationMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:exd_data_field_configuration.screenIndex
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_field_configuration.screenIndex has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_field_configuration.screenIndex size is" << data.size() << "but should be" << 1;
            return false;
        }
        screenIndex = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:exd_data_field_configuration.conceptField
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_field_configuration.conceptField has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_field_configuration.conceptField size is" << data.size() << "but should be" << 1;
            return false;
        }
        conceptField = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:exd_data_field_configuration.fieldId
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_field_configuration.fieldId has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_field_configuration.fieldId size is" << data.size() << "but should be" << 1;
            return false;
        }
        fieldId = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:exd_data_field_configuration.conceptCount
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_field_configuration.conceptCount has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_field_configuration.conceptCount size is" << data.size() << "but should be" << 1;
            return false;
        }
        conceptCount = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:exd_data_field_configuration.displayType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_field_configuration.displayType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_field_configuration.displayType size is" << data.size() << "but should be" << 1;
            return false;
        }
        displayType = static_cast<ExdDisplayType>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:exd_data_field_configuration.title
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_data_field_configuration.title has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_data_field_configuration.title size is" << data.size() << "but should be" << 1;
            return false;
        }
        title = static_cast<QString>(data.at(0));
        break;
    default:
        qWarning() << "unknown exd_data_field_configuration message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
