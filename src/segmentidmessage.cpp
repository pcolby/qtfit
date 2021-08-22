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

/*!
 * \class SegmentIdMessage
 *
 * The SegmentIdMessage class represents a FIT SegmentIdMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid SegmentIdMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SegmentIdMessage::SegmentIdMessage() : AbstractDataMessage(new SegmentIdMessagePrivate(this))
{

}

/*!
 * Returns the SegmentIdMessage data message's \c name field's current value.
 *
 * Friendly name assigned to segment
 *
 * \return the \c name field value.
 */
QString SegmentIdMessage::name() const
{
    Q_D(const SegmentIdMessage);
    return d->name;
}

/*!
 * Returns the SegmentIdMessage data message's \c uuid field's current value.
 *
 * UUID of the segment
 *
 * \return the \c uuid field value.
 */
QString SegmentIdMessage::uuid() const
{
    Q_D(const SegmentIdMessage);
    return d->uuid;
}

/*!
 * Returns the SegmentIdMessage data message's \c sport field's current value.
 *
 * Sport associated with the segment
 *
 * \return the \c sport field value.
 */
Sport SegmentIdMessage::sport() const
{
    Q_D(const SegmentIdMessage);
    return d->sport;
}

/*!
 * Returns the SegmentIdMessage data message's \c enabled field's current value.
 *
 * Segment enabled for evaluation
 *
 * \return the \c enabled field value.
 */
bool SegmentIdMessage::enabled() const
{
    Q_D(const SegmentIdMessage);
    return d->enabled;
}

/*!
 * Returns the SegmentIdMessage data message's \c userProfilePrimaryKey field's current value.
 *
 * Primary key of the user that created the segment
 *
 * \return the \c userProfilePrimaryKey field value.
 */
quint32 SegmentIdMessage::userProfilePrimaryKey() const
{
    Q_D(const SegmentIdMessage);
    return d->userProfilePrimaryKey;
}

/*!
 * Returns the SegmentIdMessage data message's \c deviceId field's current value.
 *
 * ID of the device that created the segment
 *
 * \return the \c deviceId field value.
 */
quint32 SegmentIdMessage::deviceId() const
{
    Q_D(const SegmentIdMessage);
    return d->deviceId;
}

/*!
 * Returns the SegmentIdMessage data message's \c defaultRaceLeader field's current value.
 *
 * Index for the Leader Board entry selected as the default race participant
 *
 * \return the \c defaultRaceLeader field value.
 */
quint8 SegmentIdMessage::defaultRaceLeader() const
{
    Q_D(const SegmentIdMessage);
    return d->defaultRaceLeader;
}

/*!
 * Returns the SegmentIdMessage data message's \c deleteStatus field's current value.
 *
 * Indicates if any segments should be deleted
 *
 * \return the \c deleteStatus field value.
 */
SegmentDeleteStatus SegmentIdMessage::deleteStatus() const
{
    Q_D(const SegmentIdMessage);
    return d->deleteStatus;
}

/*!
 * Returns the SegmentIdMessage data message's \c selectionType field's current value.
 *
 * Indicates how the segment was selected to be sent to the device
 *
 * \return the \c selectionType field value.
 */
SegmentSelectionType SegmentIdMessage::selectionType() const
{
    Q_D(const SegmentIdMessage);
    return d->selectionType;
}

/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void SegmentIdMessage::setName(const QString name)
{
    Q_D(SegmentIdMessage);
    d->name = name;
}
/*!
 * Sets the \c uuid field to \a uuid.
 *
 * \param uuid The field value to set.
 */
void SegmentIdMessage::setUuid(const QString uuid)
{
    Q_D(SegmentIdMessage);
    d->uuid = uuid;
}
/*!
 * Sets the \c sport field to \a sport.
 *
 * \param sport The field value to set.
 */
void SegmentIdMessage::setSport(const Sport sport)
{
    Q_D(SegmentIdMessage);
    d->sport = sport;
}
/*!
 * Sets the \c enabled field to \a enabled.
 *
 * \param enabled The field value to set.
 */
void SegmentIdMessage::setEnabled(const bool enabled)
{
    Q_D(SegmentIdMessage);
    d->enabled = enabled;
}
/*!
 * Sets the \c userProfilePrimaryKey field to \a userProfilePrimaryKey.
 *
 * \param userProfilePrimaryKey The field value to set.
 */
void SegmentIdMessage::setUserProfilePrimaryKey(const quint32 userProfilePrimaryKey)
{
    Q_D(SegmentIdMessage);
    d->userProfilePrimaryKey = userProfilePrimaryKey;
}
/*!
 * Sets the \c deviceId field to \a deviceId.
 *
 * \param deviceId The field value to set.
 */
void SegmentIdMessage::setDeviceId(const quint32 deviceId)
{
    Q_D(SegmentIdMessage);
    d->deviceId = deviceId;
}
/*!
 * Sets the \c defaultRaceLeader field to \a defaultRaceLeader.
 *
 * \param defaultRaceLeader The field value to set.
 */
void SegmentIdMessage::setDefaultRaceLeader(const quint8 defaultRaceLeader)
{
    Q_D(SegmentIdMessage);
    d->defaultRaceLeader = defaultRaceLeader;
}
/*!
 * Sets the \c deleteStatus field to \a deleteStatus.
 *
 * \param deleteStatus The field value to set.
 */
void SegmentIdMessage::setDeleteStatus(const SegmentDeleteStatus deleteStatus)
{
    Q_D(SegmentIdMessage);
    d->deleteStatus = deleteStatus;
}
/*!
 * Sets the \c selectionType field to \a selectionType.
 *
 * \param selectionType The field value to set.
 */
void SegmentIdMessage::setSelectionType(const SegmentSelectionType selectionType)
{
    Q_D(SegmentIdMessage);
    d->selectionType = selectionType;
}

/// \cond internal

/*!
 * \internal
 *
 * \class SegmentIdMessagePrivate
 *
 * The SegmentIdMessagePrivate class provides private implementation for the SegmentIdMessage.
 *
 * \sa SegmentIdMessage
 */

/*!
 * \internal
 *
 * Constructs a SegmentIdMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SegmentIdMessagePrivate::SegmentIdMessagePrivate(SegmentIdMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the SegmentIdMessagePrivate object.
 */
SegmentIdMessagePrivate::~SegmentIdMessagePrivate()
{

}

bool SegmentIdMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:segment_id.name
        if (!verify(data, baseType, 1, FitBaseType::String, "segment_id.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:segment_id.uuid
        if (!verify(data, baseType, 1, FitBaseType::String, "segment_id.uuid")) return false;
        this->uuid = QString::fromUtf8(data);
        break;
    case 2: // See Profile.xlsx::Messages:segment_id.sport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_id.sport")) return false;
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:segment_id.enabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "segment_id.enabled")) return false;
        this->enabled = static_cast<bool>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:segment_id.userProfilePrimaryKey
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_id.userProfilePrimaryKey")) return false;
        this->userProfilePrimaryKey = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:segment_id.deviceId
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_id.deviceId")) return false;
        this->deviceId = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:segment_id.defaultRaceLeader
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "segment_id.defaultRaceLeader")) return false;
        this->defaultRaceLeader = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:segment_id.deleteStatus
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_id.deleteStatus")) return false;
        this->deleteStatus = static_cast<SegmentDeleteStatus>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:segment_id.selectionType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "segment_id.selectionType")) return false;
        this->selectionType = static_cast<SegmentSelectionType>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown segment_id message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
