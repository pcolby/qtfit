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

#include "segmentpointmessage.h"
#include "segmentpointmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class SegmentPointMessage
 *
 * The SegmentPointMessage class represents a FIT SegmentPointMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid SegmentPointMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SegmentPointMessage::SegmentPointMessage() : AbstractDataMessage(new SegmentPointMessagePrivate(this))
{

}

/*!
 * Returns the SegmentPointMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex SegmentPointMessage::messageIndex() const
{
    Q_D(const SegmentPointMessage);
    return d->messageIndex;
}

/*!
 * Returns the SegmentPointMessage data message's \c positionLat field's current value.
 *
 * \return the \c positionLat field value.
 */
qint32 SegmentPointMessage::positionLat() const
{
    Q_D(const SegmentPointMessage);
    return d->positionLat;
}

/*!
 * Returns the SegmentPointMessage data message's \c positionLong field's current value.
 *
 * \return the \c positionLong field value.
 */
qint32 SegmentPointMessage::positionLong() const
{
    Q_D(const SegmentPointMessage);
    return d->positionLong;
}

/*!
 * Returns the SegmentPointMessage data message's \c distance field's current value.
 *
 * \return the \c distance field value.
 */
quint32 SegmentPointMessage::distance() const
{
    Q_D(const SegmentPointMessage);
    return d->distance;
}

/*!
 * Returns the SegmentPointMessage data message's \c altitude field's current value.
 *
 * \return the \c altitude field value.
 */
quint16 SegmentPointMessage::altitude() const
{
    Q_D(const SegmentPointMessage);
    return d->altitude;
}

/*!
 * Returns the SegmentPointMessage data message's \c leaderTime field's current value.
 *
 * \return the \c leaderTime field value.
 */
quint32 SegmentPointMessage::leaderTime() const
{
    Q_D(const SegmentPointMessage);
    return d->leaderTime;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void SegmentPointMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SegmentPointMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c positionLat field to \a positionLat.
 *
 * \param positionLat The field value to set.
 */
void SegmentPointMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(SegmentPointMessage);
    d->positionLat = positionLat;
}
/*!
 * Sets the \c positionLong field to \a positionLong.
 *
 * \param positionLong The field value to set.
 */
void SegmentPointMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(SegmentPointMessage);
    d->positionLong = positionLong;
}
/*!
 * Sets the \c distance field to \a distance.
 *
 * \param distance The field value to set.
 */
void SegmentPointMessage::setDistance(const quint32 distance)
{
    Q_D(SegmentPointMessage);
    d->distance = distance;
}
/*!
 * Sets the \c altitude field to \a altitude.
 *
 * \param altitude The field value to set.
 */
void SegmentPointMessage::setAltitude(const quint16 altitude)
{
    Q_D(SegmentPointMessage);
    d->altitude = altitude;
}
/*!
 * Sets the \c leaderTime field to \a leaderTime.
 *
 * \param leaderTime The field value to set.
 */
void SegmentPointMessage::setLeaderTime(const quint32 leaderTime)
{
    Q_D(SegmentPointMessage);
    d->leaderTime = leaderTime;
}

/// \cond internal

/*!
 * \internal
 *
 * \class SegmentPointMessagePrivate
 *
 * The SegmentPointMessagePrivate class provides private implementation for the SegmentPointMessage.
 *
 * \sa SegmentPointMessage
 */

/*!
 * \internal
 *
 * Constructs a SegmentPointMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SegmentPointMessagePrivate::SegmentPointMessagePrivate(SegmentPointMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , positionLat(0x7FFFFFFF)
  , positionLong(0x7FFFFFFF)
  , distance(0xFFFFFFFF)
  , altitude(0xFFFF)
  , leaderTime(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::SegmentPoint;
}

/*!
 * \internal
 *
 * Destroys the SegmentPointMessagePrivate object.
 */
SegmentPointMessagePrivate::~SegmentPointMessagePrivate()
{

}

bool SegmentPointMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:segment_point.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_point.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:segment_point.positionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "segment_point.positionLat")) return false;
        this->positionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:segment_point.positionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "segment_point.positionLong")) return false;
        this->positionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:segment_point.distance
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_point.distance")) return false;
        this->distance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:segment_point.altitude
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "segment_point.altitude")) return false;
        this->altitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:segment_point.leaderTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "segment_point.leaderTime")) return false;
        this->leaderTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown segment_point message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
