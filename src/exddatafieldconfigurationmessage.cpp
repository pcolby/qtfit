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

/// @todo Generate implementation.
bool ExdDataFieldConfigurationMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
