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

#include "segmentidmessage.h"
#include "segmentidmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

SegmentIdMessage::SegmentIdMessage() : FitDataMessage(new SegmentIdMessagePrivate(this))
{

}

QString SegmentIdMessage::name() const
{
    Q_D(const SegmentIdMessage);
    return d->name;
}

QString SegmentIdMessage::uuid() const
{
    Q_D(const SegmentIdMessage);
    return d->uuid;
}

Sport SegmentIdMessage::sport() const
{
    Q_D(const SegmentIdMessage);
    return d->sport;
}

bool SegmentIdMessage::enabled() const
{
    Q_D(const SegmentIdMessage);
    return d->enabled;
}

quint32 SegmentIdMessage::userProfilePrimaryKey() const
{
    Q_D(const SegmentIdMessage);
    return d->userProfilePrimaryKey;
}

quint32 SegmentIdMessage::deviceId() const
{
    Q_D(const SegmentIdMessage);
    return d->deviceId;
}

quint8 SegmentIdMessage::defaultRaceLeader() const
{
    Q_D(const SegmentIdMessage);
    return d->defaultRaceLeader;
}

SegmentDeleteStatus SegmentIdMessage::deleteStatus() const
{
    Q_D(const SegmentIdMessage);
    return d->deleteStatus;
}

SegmentSelectionType SegmentIdMessage::selectionType() const
{
    Q_D(const SegmentIdMessage);
    return d->selectionType;
}

void SegmentIdMessage::setName(const QString name)
{
    Q_D(SegmentIdMessage);
    d->name = name;
}
void SegmentIdMessage::setUuid(const QString uuid)
{
    Q_D(SegmentIdMessage);
    d->uuid = uuid;
}
void SegmentIdMessage::setSport(const Sport sport)
{
    Q_D(SegmentIdMessage);
    d->sport = sport;
}
void SegmentIdMessage::setEnabled(const bool enabled)
{
    Q_D(SegmentIdMessage);
    d->enabled = enabled;
}
void SegmentIdMessage::setUserProfilePrimaryKey(const quint32 userProfilePrimaryKey)
{
    Q_D(SegmentIdMessage);
    d->userProfilePrimaryKey = userProfilePrimaryKey;
}
void SegmentIdMessage::setDeviceId(const quint32 deviceId)
{
    Q_D(SegmentIdMessage);
    d->deviceId = deviceId;
}
void SegmentIdMessage::setDefaultRaceLeader(const quint8 defaultRaceLeader)
{
    Q_D(SegmentIdMessage);
    d->defaultRaceLeader = defaultRaceLeader;
}
void SegmentIdMessage::setDeleteStatus(const SegmentDeleteStatus deleteStatus)
{
    Q_D(SegmentIdMessage);
    d->deleteStatus = deleteStatus;
}
void SegmentIdMessage::setSelectionType(const SegmentSelectionType selectionType)
{
    Q_D(SegmentIdMessage);
    d->selectionType = selectionType;
}

SegmentIdMessagePrivate::SegmentIdMessagePrivate(SegmentIdMessage * const q)
  : FitDataMessagePrivate(q)
  , sport(static_cast<Sport>(-1))
  , enabled(static_cast<bool>(-1))
  , userProfilePrimaryKey(0xFFFFFFFF)
  , deviceId(0xFFFFFFFF)
  , defaultRaceLeader(0xFF)
  , deleteStatus(static_cast<SegmentDeleteStatus>(-1))
  , selectionType(static_cast<SegmentSelectionType>(-1))
{
    globalMessageNumber = MesgNum::SegmentId;
}

SegmentIdMessagePrivate::~SegmentIdMessagePrivate()
{

}

bool SegmentIdMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:segment_id.name
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_id.name has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_id.name size is" << data.size() << "but should be" << 1;
            return false;
        }
        name = static_cast<QString>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:segment_id.uuid
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_id.uuid has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_id.uuid size is" << data.size() << "but should be" << 1;
            return false;
        }
        uuid = static_cast<QString>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:segment_id.sport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_id.sport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_id.sport size is" << data.size() << "but should be" << 1;
            return false;
        }
        sport = static_cast<Sport>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:segment_id.enabled
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_id.enabled has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "segment_id.enabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        enabled = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    case 4: // See Profile.xlsx::Messages:segment_id.userProfilePrimaryKey
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_id.userProfilePrimaryKey has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_id.userProfilePrimaryKey size is" << data.size() << "but should be" << 4;
            return false;
        }
        userProfilePrimaryKey = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:segment_id.deviceId
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_id.deviceId has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_id.deviceId size is" << data.size() << "but should be" << 4;
            return false;
        }
        deviceId = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:segment_id.defaultRaceLeader
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_id.defaultRaceLeader has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_id.defaultRaceLeader size is" << data.size() << "but should be" << 1;
            return false;
        }
        defaultRaceLeader = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:segment_id.deleteStatus
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_id.deleteStatus has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_id.deleteStatus size is" << data.size() << "but should be" << 1;
            return false;
        }
        deleteStatus = static_cast<SegmentDeleteStatus>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:segment_id.selectionType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_id.selectionType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_id.selectionType size is" << data.size() << "but should be" << 1;
            return false;
        }
        selectionType = static_cast<SegmentSelectionType>(data.at(0));
        break;
    default:
        qWarning() << "unknown segment_id message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
