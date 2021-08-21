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

#include "segmentfilemessage.h"
#include "segmentfilemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

SegmentFileMessage::SegmentFileMessage() : FitDataMessage(new SegmentFileMessagePrivate(this))
{

}

MessageIndex SegmentFileMessage::messageIndex() const
{
    Q_D(const SegmentFileMessage);
    return d->messageIndex;
}

QString SegmentFileMessage::fileUuid() const
{
    Q_D(const SegmentFileMessage);
    return d->fileUuid;
}

bool SegmentFileMessage::enabled() const
{
    Q_D(const SegmentFileMessage);
    return d->enabled;
}

quint32 SegmentFileMessage::userProfilePrimaryKey() const
{
    Q_D(const SegmentFileMessage);
    return d->userProfilePrimaryKey;
}

SegmentLeaderboardType SegmentFileMessage::leaderType() const
{
    Q_D(const SegmentFileMessage);
    return d->leaderType;
}

quint32 SegmentFileMessage::leaderGroupPrimaryKey() const
{
    Q_D(const SegmentFileMessage);
    return d->leaderGroupPrimaryKey;
}

quint32 SegmentFileMessage::leaderActivityId() const
{
    Q_D(const SegmentFileMessage);
    return d->leaderActivityId;
}

QString SegmentFileMessage::leaderActivityIdString() const
{
    Q_D(const SegmentFileMessage);
    return d->leaderActivityIdString;
}

quint8 SegmentFileMessage::defaultRaceLeader() const
{
    Q_D(const SegmentFileMessage);
    return d->defaultRaceLeader;
}

void SegmentFileMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SegmentFileMessage);
    d->messageIndex = messageIndex;
}
void SegmentFileMessage::setFileUuid(const QString fileUuid)
{
    Q_D(SegmentFileMessage);
    d->fileUuid = fileUuid;
}
void SegmentFileMessage::setEnabled(const bool enabled)
{
    Q_D(SegmentFileMessage);
    d->enabled = enabled;
}
void SegmentFileMessage::setUserProfilePrimaryKey(const quint32 userProfilePrimaryKey)
{
    Q_D(SegmentFileMessage);
    d->userProfilePrimaryKey = userProfilePrimaryKey;
}
void SegmentFileMessage::setLeaderType(const SegmentLeaderboardType leaderType)
{
    Q_D(SegmentFileMessage);
    d->leaderType = leaderType;
}
void SegmentFileMessage::setLeaderGroupPrimaryKey(const quint32 leaderGroupPrimaryKey)
{
    Q_D(SegmentFileMessage);
    d->leaderGroupPrimaryKey = leaderGroupPrimaryKey;
}
void SegmentFileMessage::setLeaderActivityId(const quint32 leaderActivityId)
{
    Q_D(SegmentFileMessage);
    d->leaderActivityId = leaderActivityId;
}
void SegmentFileMessage::setLeaderActivityIdString(const QString leaderActivityIdString)
{
    Q_D(SegmentFileMessage);
    d->leaderActivityIdString = leaderActivityIdString;
}
void SegmentFileMessage::setDefaultRaceLeader(const quint8 defaultRaceLeader)
{
    Q_D(SegmentFileMessage);
    d->defaultRaceLeader = defaultRaceLeader;
}

SegmentFileMessagePrivate::SegmentFileMessagePrivate(SegmentFileMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , enabled(static_cast<bool>(-1))
  , userProfilePrimaryKey(0xFFFFFFFF)
  , leaderType(static_cast<SegmentLeaderboardType>(-1))
  , leaderGroupPrimaryKey(0xFFFFFFFF)
  , leaderActivityId(0xFFFFFFFF)
  , defaultRaceLeader(0xFF)
{
    globalMessageNumber = MesgNum::SegmentFile;
}

SegmentFileMessagePrivate::~SegmentFileMessagePrivate()
{

}

bool SegmentFileMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:segment_file.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_file.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_file.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 1: // See Profile.xlsx::Messages:segment_file.fileUuid
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_file.fileUuid has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_file.fileUuid size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->fileUuid = QString::fromUtf8(data);
        break;
    case 3: // See Profile.xlsx::Messages:segment_file.enabled
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_file.enabled has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "segment_file.enabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->enabled = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    case 4: // See Profile.xlsx::Messages:segment_file.userProfilePrimaryKey
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_file.userProfilePrimaryKey has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_file.userProfilePrimaryKey size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->userProfilePrimaryKey = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:segment_file.leaderType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_file.leaderType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_file.leaderType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->leaderType = static_cast<SegmentLeaderboardType>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:segment_file.leaderGroupPrimaryKey
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_file.leaderGroupPrimaryKey has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_file.leaderGroupPrimaryKey size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->leaderGroupPrimaryKey = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 9: // See Profile.xlsx::Messages:segment_file.leaderActivityId
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_file.leaderActivityId has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_file.leaderActivityId size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->leaderActivityId = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:segment_file.leaderActivityIdString
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_file.leaderActivityIdString has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_file.leaderActivityIdString size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->leaderActivityIdString = QString::fromUtf8(data);
        break;
    case 11: // See Profile.xlsx::Messages:segment_file.defaultRaceLeader
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_file.defaultRaceLeader has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_file.defaultRaceLeader size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->defaultRaceLeader = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown segment_file message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
