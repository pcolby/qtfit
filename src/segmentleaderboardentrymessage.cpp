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

/*!
 * \class SegmentLeaderboardEntryMessage
 *
 * The SegmentLeaderboardEntryMessage class represents a FIT SegmentLeaderboardEntryMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a SegmentLeaderboardEntryMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SegmentLeaderboardEntryMessage::SegmentLeaderboardEntryMessage() : AbstractDataMessage(new SegmentLeaderboardEntryMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a SegmentLeaderboardEntryMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
SegmentLeaderboardEntryMessage::SegmentLeaderboardEntryMessage(SegmentLeaderboardEntryMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the SegmentLeaderboardEntryMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex SegmentLeaderboardEntryMessage::messageIndex() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->messageIndex;
}

/*!
 * Returns the SegmentLeaderboardEntryMessage data message's \c name field's current value.
 *
 * Friendly name assigned to leader
 *
 * \return the \c name field value.
 */
QString SegmentLeaderboardEntryMessage::name() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->name;
}

/*!
 * Returns the SegmentLeaderboardEntryMessage data message's \c type field's current value.
 *
 * Leader classification
 *
 * \return the \c type field value.
 */
SegmentLeaderboardType SegmentLeaderboardEntryMessage::type() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->type;
}

/*!
 * Returns the SegmentLeaderboardEntryMessage data message's \c groupPrimaryKey field's current value.
 *
 * Primary user ID of this leader
 *
 * \return the \c groupPrimaryKey field value.
 */
quint32 SegmentLeaderboardEntryMessage::groupPrimaryKey() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->groupPrimaryKey;
}

/*!
 * Returns the SegmentLeaderboardEntryMessage data message's \c activityId field's current value.
 *
 * ID of the activity associated with this leader time
 *
 * \return the \c activityId field value.
 */
quint32 SegmentLeaderboardEntryMessage::activityId() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->activityId;
}

/*!
 * Returns the SegmentLeaderboardEntryMessage data message's \c segmentTime field's current value.
 *
 * Segment Time (includes pauses)
 *
 * \return the \c segmentTime field value.
 */
quint32 SegmentLeaderboardEntryMessage::segmentTime() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->segmentTime;
}

/*!
 * Returns the SegmentLeaderboardEntryMessage data message's \c activityIdString field's current value.
 *
 * String version of the activity_id. 21 characters long, express in decimal
 *
 * \return the \c activityIdString field value.
 */
QString SegmentLeaderboardEntryMessage::activityIdString() const
{
    Q_D(const SegmentLeaderboardEntryMessage);
    return d->activityIdString;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void SegmentLeaderboardEntryMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void SegmentLeaderboardEntryMessage::setName(const QString name)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->name = name;
}
/*!
 * Sets the \c type field to \a type.
 *
 * \param type The field value to set.
 */
void SegmentLeaderboardEntryMessage::setType(const SegmentLeaderboardType type)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->type = type;
}
/*!
 * Sets the \c groupPrimaryKey field to \a groupPrimaryKey.
 *
 * \param groupPrimaryKey The field value to set.
 */
void SegmentLeaderboardEntryMessage::setGroupPrimaryKey(const quint32 groupPrimaryKey)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->groupPrimaryKey = groupPrimaryKey;
}
/*!
 * Sets the \c activityId field to \a activityId.
 *
 * \param activityId The field value to set.
 */
void SegmentLeaderboardEntryMessage::setActivityId(const quint32 activityId)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->activityId = activityId;
}
/*!
 * Sets the \c segmentTime field to \a segmentTime.
 *
 * \param segmentTime The field value to set.
 */
void SegmentLeaderboardEntryMessage::setSegmentTime(const quint32 segmentTime)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->segmentTime = segmentTime;
}
/*!
 * Sets the \c activityIdString field to \a activityIdString.
 *
 * \param activityIdString The field value to set.
 */
void SegmentLeaderboardEntryMessage::setActivityIdString(const QString activityIdString)
{
    Q_D(SegmentLeaderboardEntryMessage);
    d->activityIdString = activityIdString;
}

/// \cond internal

/*!
 * \internal
 *
 * \class SegmentLeaderboardEntryMessagePrivate
 *
 * The SegmentLeaderboardEntryMessagePrivate class provides private implementation for the SegmentLeaderboardEntryMessage.
 *
 * \sa SegmentLeaderboardEntryMessage
 */

/*!
 * \internal
 *
 * Constructs a SegmentLeaderboardEntryMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SegmentLeaderboardEntryMessagePrivate::SegmentLeaderboardEntryMessagePrivate(SegmentLeaderboardEntryMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , type(static_cast<SegmentLeaderboardType>(-1))
  , groupPrimaryKey(0xFFFFFFFF)
  , activityId(0xFFFFFFFF)
  , segmentTime(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::SegmentLeaderboardEntry;
}

/*!
 * \internal
 *
 * Destroys the SegmentLeaderboardEntryMessagePrivate object.
 */
SegmentLeaderboardEntryMessagePrivate::~SegmentLeaderboardEntryMessagePrivate()
{

}

bool SegmentLeaderboardEntryMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:segment_leaderboard_entry.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_leaderboard_entry.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:segment_leaderboard_entry.name
        if (!verify(data, baseType, 1, FitBaseType::String, "segment_leaderboard_entry.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:segment_leaderboard_entry.type
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_leaderboard_entry.type")) return false;
        this->type = static_cast<SegmentLeaderboardType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:segment_leaderboard_entry.groupPrimaryKey
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_leaderboard_entry.groupPrimaryKey")) return false;
        this->groupPrimaryKey = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:segment_leaderboard_entry.activityId
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_leaderboard_entry.activityId")) return false;
        this->activityId = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:segment_leaderboard_entry.segmentTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_leaderboard_entry.segmentTime")) return false;
        this->segmentTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:segment_leaderboard_entry.activityIdString
        if (!verify(data, baseType, 1, FitBaseType::String, "segment_leaderboard_entry.activityIdString")) return false;
        this->activityIdString = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown segment_leaderboard_entry message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
