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

#include "exdscreenconfigurationmessage.h"
#include "exdscreenconfigurationmessage_p.h"

QTFIT_BEGIN_NAMESPACE

ExdScreenConfigurationMessage::ExdScreenConfigurationMessage() : FitDataMessage(new ExdScreenConfigurationMessagePrivate(this))
{

}

quint8 ExdScreenConfigurationMessage::screenIndex() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->screenIndex;
}

quint8 ExdScreenConfigurationMessage::fieldCount() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->fieldCount;
}

ExdLayout ExdScreenConfigurationMessage::layout() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->layout;
}

bool ExdScreenConfigurationMessage::screenEnabled() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->screenEnabled;
}

void ExdScreenConfigurationMessage::setScreenIndex(const quint8 screenIndex)
{
    Q_D(ExdScreenConfigurationMessage);
    d->screenIndex = screenIndex;
}
void ExdScreenConfigurationMessage::setFieldCount(const quint8 fieldCount)
{
    Q_D(ExdScreenConfigurationMessage);
    d->fieldCount = fieldCount;
}
void ExdScreenConfigurationMessage::setLayout(const ExdLayout layout)
{
    Q_D(ExdScreenConfigurationMessage);
    d->layout = layout;
}
void ExdScreenConfigurationMessage::setScreenEnabled(const bool screenEnabled)
{
    Q_D(ExdScreenConfigurationMessage);
    d->screenEnabled = screenEnabled;
}

ExdScreenConfigurationMessagePrivate::ExdScreenConfigurationMessagePrivate(ExdScreenConfigurationMessage * const q)
  : FitDataMessagePrivate(q)
  , screenIndex(0xFF)
  , fieldCount(0xFF)
  , layout(static_cast<ExdLayout>(-1))
  , screenEnabled(static_cast<bool>(-1))
{
    globalMessageNumber = MesgNum::ExdScreenConfiguration;
}

ExdScreenConfigurationMessagePrivate::~ExdScreenConfigurationMessagePrivate()
{

}

/// @todo Generate implementation.
bool ExdScreenConfigurationMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
