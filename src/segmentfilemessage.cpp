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

/*!
 * \class SegmentFileMessage
 *
 * The SegmentFileMessage class represents a FIT SegmentFileMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid SegmentFileMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SegmentFileMessage::SegmentFileMessage() : AbstractDataMessage(new SegmentFileMessagePrivate(this))
{

}

/*!
 * Returns the SegmentFileMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex SegmentFileMessage::messageIndex() const
{
    Q_D(const SegmentFileMessage);
    return d->messageIndex;
}

/*!
 * Returns the SegmentFileMessage data message's \c fileUuid field's current value.
 *
 * \return the \c fileUuid field value.
 */
QString SegmentFileMessage::fileUuid() const
{
    Q_D(const SegmentFileMessage);
    return d->fileUuid;
}

/*!
 * Returns the SegmentFileMessage data message's \c enabled field's current value.
 *
 * \return the \c enabled field value.
 */
bool SegmentFileMessage::enabled() const
{
    Q_D(const SegmentFileMessage);
    return d->enabled;
}

/*!
 * Returns the SegmentFileMessage data message's \c userProfilePrimaryKey field's current value.
 *
 * \return the \c userProfilePrimaryKey field value.
 */
quint32 SegmentFileMessage::userProfilePrimaryKey() const
{
    Q_D(const SegmentFileMessage);
    return d->userProfilePrimaryKey;
}

/*!
 * Returns the SegmentFileMessage data message's \c leaderType field's current value.
 *
 * \return the \c leaderType field value.
 */
SegmentLeaderboardType SegmentFileMessage::leaderType() const
{
    Q_D(const SegmentFileMessage);
    return d->leaderType;
}

/*!
 * Returns the SegmentFileMessage data message's \c leaderGroupPrimaryKey field's current value.
 *
 * \return the \c leaderGroupPrimaryKey field value.
 */
quint32 SegmentFileMessage::leaderGroupPrimaryKey() const
{
    Q_D(const SegmentFileMessage);
    return d->leaderGroupPrimaryKey;
}

/*!
 * Returns the SegmentFileMessage data message's \c leaderActivityId field's current value.
 *
 * \return the \c leaderActivityId field value.
 */
quint32 SegmentFileMessage::leaderActivityId() const
{
    Q_D(const SegmentFileMessage);
    return d->leaderActivityId;
}

/*!
 * Returns the SegmentFileMessage data message's \c leaderActivityIdString field's current value.
 *
 * \return the \c leaderActivityIdString field value.
 */
QString SegmentFileMessage::leaderActivityIdString() const
{
    Q_D(const SegmentFileMessage);
    return d->leaderActivityIdString;
}

/*!
 * Returns the SegmentFileMessage data message's \c defaultRaceLeader field's current value.
 *
 * \return the \c defaultRaceLeader field value.
 */
quint8 SegmentFileMessage::defaultRaceLeader() const
{
    Q_D(const SegmentFileMessage);
    return d->defaultRaceLeader;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void SegmentFileMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SegmentFileMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c fileUuid field to \a fileUuid.
 *
 * \param fileUuid The field value to set.
 */
void SegmentFileMessage::setFileUuid(const QString fileUuid)
{
    Q_D(SegmentFileMessage);
    d->fileUuid = fileUuid;
}
/*!
 * Sets the \c enabled field to \a enabled.
 *
 * \param enabled The field value to set.
 */
void SegmentFileMessage::setEnabled(const bool enabled)
{
    Q_D(SegmentFileMessage);
    d->enabled = enabled;
}
/*!
 * Sets the \c userProfilePrimaryKey field to \a userProfilePrimaryKey.
 *
 * \param userProfilePrimaryKey The field value to set.
 */
void SegmentFileMessage::setUserProfilePrimaryKey(const quint32 userProfilePrimaryKey)
{
    Q_D(SegmentFileMessage);
    d->userProfilePrimaryKey = userProfilePrimaryKey;
}
/*!
 * Sets the \c leaderType field to \a leaderType.
 *
 * \param leaderType The field value to set.
 */
void SegmentFileMessage::setLeaderType(const SegmentLeaderboardType leaderType)
{
    Q_D(SegmentFileMessage);
    d->leaderType = leaderType;
}
/*!
 * Sets the \c leaderGroupPrimaryKey field to \a leaderGroupPrimaryKey.
 *
 * \param leaderGroupPrimaryKey The field value to set.
 */
void SegmentFileMessage::setLeaderGroupPrimaryKey(const quint32 leaderGroupPrimaryKey)
{
    Q_D(SegmentFileMessage);
    d->leaderGroupPrimaryKey = leaderGroupPrimaryKey;
}
/*!
 * Sets the \c leaderActivityId field to \a leaderActivityId.
 *
 * \param leaderActivityId The field value to set.
 */
void SegmentFileMessage::setLeaderActivityId(const quint32 leaderActivityId)
{
    Q_D(SegmentFileMessage);
    d->leaderActivityId = leaderActivityId;
}
/*!
 * Sets the \c leaderActivityIdString field to \a leaderActivityIdString.
 *
 * \param leaderActivityIdString The field value to set.
 */
void SegmentFileMessage::setLeaderActivityIdString(const QString leaderActivityIdString)
{
    Q_D(SegmentFileMessage);
    d->leaderActivityIdString = leaderActivityIdString;
}
/*!
 * Sets the \c defaultRaceLeader field to \a defaultRaceLeader.
 *
 * \param defaultRaceLeader The field value to set.
 */
void SegmentFileMessage::setDefaultRaceLeader(const quint8 defaultRaceLeader)
{
    Q_D(SegmentFileMessage);
    d->defaultRaceLeader = defaultRaceLeader;
}

/*!
 * \internal
 *
 * \class SegmentFileMessagePrivate
 *
 * The SegmentFileMessagePrivate class provides private implementation for the SegmentFileMessage.
 *
 * \sa SegmentFileMessage
 */

/*!
 * \internal
 *
 * Constructs a SegmentFileMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SegmentFileMessagePrivate::SegmentFileMessagePrivate(SegmentFileMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the SegmentFileMessagePrivate object.
 */
SegmentFileMessagePrivate::~SegmentFileMessagePrivate()
{

}

bool SegmentFileMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:segment_file.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_file.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:segment_file.fileUuid
        if (!verify(data, baseType, 1, FitBaseType::String, "segment_file.fileUuid")) return false;
        this->fileUuid = QString::fromUtf8(data);
        break;
    case 3: // See Profile.xlsx::Messages:segment_file.enabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "segment_file.enabled")) return false;
        this->enabled = static_cast<bool>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:segment_file.userProfilePrimaryKey
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_file.userProfilePrimaryKey")) return false;
        this->userProfilePrimaryKey = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:segment_file.leaderType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_file.leaderType")) return false;
        this->leaderType = static_cast<SegmentLeaderboardType>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:segment_file.leaderGroupPrimaryKey
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_file.leaderGroupPrimaryKey")) return false;
        this->leaderGroupPrimaryKey = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 9: // See Profile.xlsx::Messages:segment_file.leaderActivityId
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_file.leaderActivityId")) return false;
        this->leaderActivityId = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:segment_file.leaderActivityIdString
        if (!verify(data, baseType, 1, FitBaseType::String, "segment_file.leaderActivityIdString")) return false;
        this->leaderActivityIdString = QString::fromUtf8(data);
        break;
    case 11: // See Profile.xlsx::Messages:segment_file.defaultRaceLeader
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_file.defaultRaceLeader")) return false;
        this->defaultRaceLeader = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown segment_file message field number" << fieldId;
        return AbstractDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
