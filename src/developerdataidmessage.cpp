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

#include <QDebug>
#include <QtEndian>

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

DeveloperDataIdMessagePrivate::DeveloperDataIdMessagePrivate(DeveloperDataIdMessage * const q)
  : FitDataMessagePrivate(q)
  , developerId(0xFF)
  , applicationId(0xFF)
  , manufacturerId(static_cast<Manufacturer>(-1))
  , developerDataIndex(0xFF)
  , applicationVersion(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::DeveloperDataId;
}

DeveloperDataIdMessagePrivate::~DeveloperDataIdMessagePrivate()
{

}

bool DeveloperDataIdMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:developer_data_id.developerId
        if (!verify(data, baseType, 1, FitBaseType::Byte, "developer_data_id.developerId")) return false;
        this->developerId = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:developer_data_id.applicationId
        if (!verify(data, baseType, 1, FitBaseType::Byte, "developer_data_id.applicationId")) return false;
        this->applicationId = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:developer_data_id.manufacturerId
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "developer_data_id.manufacturerId")) return false;
        this->manufacturerId = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:developer_data_id.developerDataIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "developer_data_id.developerDataIndex")) return false;
        this->developerDataIndex = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:developer_data_id.applicationVersion
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "developer_data_id.applicationVersion")) return false;
        this->applicationVersion = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown developer_data_id message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
