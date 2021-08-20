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

#include "developerdataidmessage.h"
#include "developerdataidmessage_p.h"

QTFIT_BEGIN_NAMESPACE

DeveloperDataIdMessage::DeveloperDataIdMessage() : FitDataMessage(new DeveloperDataIdMessagePrivate(this))
{

}

quint8 DeveloperDataIdMessage::developerId() const
{
    Q_D(const DeveloperDataIdMessage);
    return d->developerId;
}

quint8 DeveloperDataIdMessage::applicationId() const
{
    Q_D(const DeveloperDataIdMessage);
    return d->applicationId;
}

Manufacturer DeveloperDataIdMessage::manufacturerId() const
{
    Q_D(const DeveloperDataIdMessage);
    return d->manufacturerId;
}

quint8 DeveloperDataIdMessage::developerDataIndex() const
{
    Q_D(const DeveloperDataIdMessage);
    return d->developerDataIndex;
}

quint32 DeveloperDataIdMessage::applicationVersion() const
{
    Q_D(const DeveloperDataIdMessage);
    return d->applicationVersion;
}

void DeveloperDataIdMessage::setDeveloperId(const quint8 developerId)
{
    Q_D(DeveloperDataIdMessage);
    d->developerId = developerId;
}
void DeveloperDataIdMessage::setApplicationId(const quint8 applicationId)
{
    Q_D(DeveloperDataIdMessage);
    d->applicationId = applicationId;
}
void DeveloperDataIdMessage::setManufacturerId(const Manufacturer manufacturerId)
{
    Q_D(DeveloperDataIdMessage);
    d->manufacturerId = manufacturerId;
}
void DeveloperDataIdMessage::setDeveloperDataIndex(const quint8 developerDataIndex)
{
    Q_D(DeveloperDataIdMessage);
    d->developerDataIndex = developerDataIndex;
}
void DeveloperDataIdMessage::setApplicationVersion(const quint32 applicationVersion)
{
    Q_D(DeveloperDataIdMessage);
    d->applicationVersion = applicationVersion;
}

DeveloperDataIdMessagePrivate::DeveloperDataIdMessagePrivate(DeveloperDataIdMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::DeveloperDataId;
}

DeveloperDataIdMessagePrivate::~DeveloperDataIdMessagePrivate()
{

}

/// @todo Generate implementation.
bool DeveloperDataIdMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
