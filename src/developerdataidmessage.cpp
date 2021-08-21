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
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "developer_data_id.developerId has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "developer_data_id.developerId size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->developerId = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:developer_data_id.applicationId
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "developer_data_id.applicationId has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "developer_data_id.applicationId size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->applicationId = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:developer_data_id.manufacturerId
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "developer_data_id.manufacturerId has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "developer_data_id.manufacturerId size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->manufacturerId = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:developer_data_id.developerDataIndex
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "developer_data_id.developerDataIndex has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "developer_data_id.developerDataIndex size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->developerDataIndex = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:developer_data_id.applicationVersion
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "developer_data_id.applicationVersion has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "developer_data_id.applicationVersion size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->applicationVersion = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown developer_data_id message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
