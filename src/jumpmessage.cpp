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

#include "jumpmessage.h"
#include "jumpmessage_p.h"

QTFIT_BEGIN_NAMESPACE

JumpMessage::JumpMessage() : FitDataMessage(new JumpMessagePrivate(this))
{

}

DateTime JumpMessage::timestamp() const
{
    Q_D(const JumpMessage);
    return d->timestamp;
}

float JumpMessage::distance() const
{
    Q_D(const JumpMessage);
    return d->distance;
}

float JumpMessage::height() const
{
    Q_D(const JumpMessage);
    return d->height;
}

quint8 JumpMessage::rotations() const
{
    Q_D(const JumpMessage);
    return d->rotations;
}

float JumpMessage::hangTime() const
{
    Q_D(const JumpMessage);
    return d->hangTime;
}

float JumpMessage::score() const
{
    Q_D(const JumpMessage);
    return d->score;
}

qint32 JumpMessage::positionLat() const
{
    Q_D(const JumpMessage);
    return d->positionLat;
}

qint32 JumpMessage::positionLong() const
{
    Q_D(const JumpMessage);
    return d->positionLong;
}

quint16 JumpMessage::speed() const
{
    Q_D(const JumpMessage);
    return d->speed;
}

quint32 JumpMessage::enhancedSpeed() const
{
    Q_D(const JumpMessage);
    return d->enhancedSpeed;
}

void JumpMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(JumpMessage);
    d->timestamp = timestamp;
}
void JumpMessage::setDistance(const float distance)
{
    Q_D(JumpMessage);
    d->distance = distance;
}
void JumpMessage::setHeight(const float height)
{
    Q_D(JumpMessage);
    d->height = height;
}
void JumpMessage::setRotations(const quint8 rotations)
{
    Q_D(JumpMessage);
    d->rotations = rotations;
}
void JumpMessage::setHangTime(const float hangTime)
{
    Q_D(JumpMessage);
    d->hangTime = hangTime;
}
void JumpMessage::setScore(const float score)
{
    Q_D(JumpMessage);
    d->score = score;
}
void JumpMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(JumpMessage);
    d->positionLat = positionLat;
}
void JumpMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(JumpMessage);
    d->positionLong = positionLong;
}
void JumpMessage::setSpeed(const quint16 speed)
{
    Q_D(JumpMessage);
    d->speed = speed;
}
void JumpMessage::setEnhancedSpeed(const quint32 enhancedSpeed)
{
    Q_D(JumpMessage);
    d->enhancedSpeed = enhancedSpeed;
}

JumpMessagePrivate::JumpMessagePrivate(JumpMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , distance(static_cast<float>(-1))
  , height(static_cast<float>(-1))
  , rotations(0xFF)
  , hangTime(static_cast<float>(-1))
  , score(static_cast<float>(-1))
  , positionLat(0x7FFFFFFF)
  , positionLong(0x7FFFFFFF)
  , speed(0xFFFF)
  , enhancedSpeed(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::Jump;
}

JumpMessagePrivate::~JumpMessagePrivate()
{

}

/// @todo Generate implementation.
bool JumpMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
