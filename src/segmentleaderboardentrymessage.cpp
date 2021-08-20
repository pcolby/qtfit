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

SegmentLeaderboardEntryMessagePrivate::SegmentLeaderboardEntryMessagePrivate(SegmentLeaderboardEntryMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::SegmentLeaderboardEntry;
}

SegmentLeaderboardEntryMessagePrivate::~SegmentLeaderboardEntryMessagePrivate()
{

}

/// @todo Generate implementation.
bool SegmentLeaderboardEntryMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
