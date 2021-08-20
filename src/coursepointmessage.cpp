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

CoursePointMessagePrivate::CoursePointMessagePrivate(CoursePointMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::CoursePoint;
}

CoursePointMessagePrivate::~CoursePointMessagePrivate()
{

}

/// @todo Generate implementation.
bool CoursePointMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
