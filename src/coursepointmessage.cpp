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

CoursePointMessage::CoursePointMessage() : FitDataMessage(new CoursePointMessagePrivate(this))
{

}

MessageIndex CoursePointMessage::messageIndex() const
{
    Q_D(const CoursePointMessage);
    return d->messageIndex;
}

DateTime CoursePointMessage::timestamp() const
{
    Q_D(const CoursePointMessage);
    return d->timestamp;
}

qint32 CoursePointMessage::positionLat() const
{
    Q_D(const CoursePointMessage);
    return d->positionLat;
}

qint32 CoursePointMessage::positionLong() const
{
    Q_D(const CoursePointMessage);
    return d->positionLong;
}

quint32 CoursePointMessage::distance() const
{
    Q_D(const CoursePointMessage);
    return d->distance;
}

CoursePoint CoursePointMessage::type() const
{
    Q_D(const CoursePointMessage);
    return d->type;
}

QString CoursePointMessage::name() const
{
    Q_D(const CoursePointMessage);
    return d->name;
}

bool CoursePointMessage::favorite() const
{
    Q_D(const CoursePointMessage);
    return d->favorite;
}

void CoursePointMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(CoursePointMessage);
    d->messageIndex = messageIndex;
}
void CoursePointMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(CoursePointMessage);
    d->timestamp = timestamp;
}
void CoursePointMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(CoursePointMessage);
    d->positionLat = positionLat;
}
void CoursePointMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(CoursePointMessage);
    d->positionLong = positionLong;
}
void CoursePointMessage::setDistance(const quint32 distance)
{
    Q_D(CoursePointMessage);
    d->distance = distance;
}
void CoursePointMessage::setType(const CoursePoint type)
{
    Q_D(CoursePointMessage);
    d->type = type;
}
void CoursePointMessage::setName(const QString name)
{
    Q_D(CoursePointMessage);
    d->name = name;
}
void CoursePointMessage::setFavorite(const bool favorite)
{
    Q_D(CoursePointMessage);
    d->favorite = favorite;
}

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
