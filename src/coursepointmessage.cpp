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

#include "coursepointmessage.h"
#include "coursepointmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class CoursePointMessage
 *
 * The CoursePointMessage class represents a FIT CoursePointMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid CoursePointMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
CoursePointMessage::CoursePointMessage() : FitDataMessage(new CoursePointMessagePrivate(this))
{

}

/*!
 * Returns the CoursePointMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex CoursePointMessage::messageIndex() const
{
    Q_D(const CoursePointMessage);
    return d->messageIndex;
}

/*!
 * Returns the CoursePointMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime CoursePointMessage::timestamp() const
{
    Q_D(const CoursePointMessage);
    return d->timestamp;
}

/*!
 * Returns the CoursePointMessage data message's \c positionLat field's current value.
 *
 * \return the \c positionLat field value.
 */
qint32 CoursePointMessage::positionLat() const
{
    Q_D(const CoursePointMessage);
    return d->positionLat;
}

/*!
 * Returns the CoursePointMessage data message's \c positionLong field's current value.
 *
 * \return the \c positionLong field value.
 */
qint32 CoursePointMessage::positionLong() const
{
    Q_D(const CoursePointMessage);
    return d->positionLong;
}

/*!
 * Returns the CoursePointMessage data message's \c distance field's current value.
 *
 * \return the \c distance field value.
 */
quint32 CoursePointMessage::distance() const
{
    Q_D(const CoursePointMessage);
    return d->distance;
}

/*!
 * Returns the CoursePointMessage data message's \c type field's current value.
 *
 * \return the \c type field value.
 */
CoursePoint CoursePointMessage::type() const
{
    Q_D(const CoursePointMessage);
    return d->type;
}

/*!
 * Returns the CoursePointMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString CoursePointMessage::name() const
{
    Q_D(const CoursePointMessage);
    return d->name;
}

/*!
 * Returns the CoursePointMessage data message's \c favorite field's current value.
 *
 * \return the \c favorite field value.
 */
bool CoursePointMessage::favorite() const
{
    Q_D(const CoursePointMessage);
    return d->favorite;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void CoursePointMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(CoursePointMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void CoursePointMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(CoursePointMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c positionLat field to \a positionLat.
 *
 * \param positionLat The field value to set.
 */
void CoursePointMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(CoursePointMessage);
    d->positionLat = positionLat;
}
/*!
 * Sets the \c positionLong field to \a positionLong.
 *
 * \param positionLong The field value to set.
 */
void CoursePointMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(CoursePointMessage);
    d->positionLong = positionLong;
}
/*!
 * Sets the \c distance field to \a distance.
 *
 * \param distance The field value to set.
 */
void CoursePointMessage::setDistance(const quint32 distance)
{
    Q_D(CoursePointMessage);
    d->distance = distance;
}
/*!
 * Sets the \c type field to \a type.
 *
 * \param type The field value to set.
 */
void CoursePointMessage::setType(const CoursePoint type)
{
    Q_D(CoursePointMessage);
    d->type = type;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void CoursePointMessage::setName(const QString name)
{
    Q_D(CoursePointMessage);
    d->name = name;
}
/*!
 * Sets the \c favorite field to \a favorite.
 *
 * \param favorite The field value to set.
 */
void CoursePointMessage::setFavorite(const bool favorite)
{
    Q_D(CoursePointMessage);
    d->favorite = favorite;
}

/*!
 * \internal
 *
 * \class CoursePointMessagePrivate
 *
 * The CoursePointMessagePrivate class provides private implementation for the CoursePointMessage.
 *
 * \sa CoursePointMessage
 */

/*!
 * \internal
 *
 * Constructs a CoursePointMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
CoursePointMessagePrivate::CoursePointMessagePrivate(CoursePointMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , timestamp(static_cast<DateTime>(-1))
  , positionLat(0x7FFFFFFF)
  , positionLong(0x7FFFFFFF)
  , distance(0xFFFFFFFF)
  , type(static_cast<CoursePoint>(-1))
  , favorite(static_cast<bool>(-1))
{
    globalMessageNumber = MesgNum::CoursePoint;
}

/*!
 * \internal
 *
 * Destroys the CoursePointMessagePrivate object.
 */
CoursePointMessagePrivate::~CoursePointMessagePrivate()
{

}

bool CoursePointMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:course_point.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "course_point.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:course_point.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "course_point.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:course_point.positionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "course_point.positionLat")) return false;
        this->positionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:course_point.positionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "course_point.positionLong")) return false;
        this->positionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:course_point.distance
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "course_point.distance")) return false;
        this->distance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:course_point.type
        if (!verify(data, baseType, 1, FitBaseType::Enum, "course_point.type")) return false;
        this->type = static_cast<CoursePoint>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:course_point.name
        if (!verify(data, baseType, 1, FitBaseType::String, "course_point.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    case 8: // See Profile.xlsx::Messages:course_point.favorite
        if (!verify(data, baseType, 0, FitBaseType::Byte, "course_point.favorite")) return false;
        this->favorite = static_cast<bool>(data.at(0));
        break;
    default:
        qWarning() << "unknown course_point message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
