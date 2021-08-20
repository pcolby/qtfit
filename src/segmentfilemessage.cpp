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

SegmentFileMessagePrivate::SegmentFileMessagePrivate(SegmentFileMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::SegmentFile;
}

SegmentFileMessagePrivate::~SegmentFileMessagePrivate()
{

}

/// @todo Generate implementation.
bool SegmentFileMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
