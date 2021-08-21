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

#include "segmentleaderboardentrymessage.h"
#include "segmentleaderboardentrymessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

SegmentLeaderboardEntryMessage::SegmentLeaderboardEntryMessage() : FitDataMessage(new SegmentLeaderboardEntryMessagePrivate(this))
{

}

MessageIndex SegmentLeaderboardEntryMessage::messageIndex() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->messageIndex;
}

QString SegmentLeaderboardEntryMessage::name() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->name;
}

SegmentLeaderboardType SegmentLeaderboardEntryMessage::type() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->type;
}

quint32 SegmentLeaderboardEntryMessage::groupPrimaryKey() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->groupPrimaryKey;
}

quint32 SegmentLeaderboardEntryMessage::activityId() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->activityId;
}

quint32 SegmentLeaderboardEntryMessage::segmentTime() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->segmentTime;
}

QString SegmentLeaderboardEntryMessage::activityIdString() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->activityIdString;
}

void SegmentLeaderboardEntryMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->messageIndex = messageIndex;
}
void SegmentLeaderboardEntryMessage::setName(const QString name)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->name = name;
}
void SegmentLeaderboardEntryMessage::setType(const SegmentLeaderboardType type)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->type = type;
}
void SegmentLeaderboardEntryMessage::setGroupPrimaryKey(const quint32 groupPrimaryKey)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->groupPrimaryKey = groupPrimaryKey;
}
void SegmentLeaderboardEntryMessage::setActivityId(const quint32 activityId)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->activityId = activityId;
}
void SegmentLeaderboardEntryMessage::setSegmentTime(const quint32 segmentTime)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->segmentTime = segmentTime;
}
void SegmentLeaderboardEntryMessage::setActivityIdString(const QString activityIdString)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->activityIdString = activityIdString;
}

SegmentLeaderboardEntryMessagePrivate::SegmentLeaderboardEntryMessagePrivate(SegmentLeaderboardEntryMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , type(static_cast<SegmentLeaderboardType>(-1))
  , groupPrimaryKey(0xFFFFFFFF)
  , activityId(0xFFFFFFFF)
  , segmentTime(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::SegmentLeaderboardEntry;
}

SegmentLeaderboardEntryMessagePrivate::~SegmentLeaderboardEntryMessagePrivate()
{

}

bool SegmentLeaderboardEntryMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:segment_leaderboard_entry.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_leaderboard_entry.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_leaderboard_entry.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:segment_leaderboard_entry.name
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_leaderboard_entry.name has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_leaderboard_entry.name size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->name = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:segment_leaderboard_entry.type
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_leaderboard_entry.type has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_leaderboard_entry.type size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->type = static_cast<SegmentLeaderboardType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:segment_leaderboard_entry.groupPrimaryKey
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_leaderboard_entry.groupPrimaryKey has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_leaderboard_entry.groupPrimaryKey size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->groupPrimaryKey = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:segment_leaderboard_entry.activityId
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_leaderboard_entry.activityId has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_leaderboard_entry.activityId size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->activityId = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:segment_leaderboard_entry.segmentTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_leaderboard_entry.segmentTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_leaderboard_entry.segmentTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->segmentTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:segment_leaderboard_entry.activityIdString
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_leaderboard_entry.activityIdString has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "segment_leaderboard_entry.activityIdString size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->activityIdString = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "unknown segment_leaderboard_entry message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
