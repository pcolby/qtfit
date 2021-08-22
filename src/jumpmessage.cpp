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

#include <QDebug>
#include <QtEndian>

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

bool JumpMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:jump.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "jump.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:jump.distance
        if (!verify(data, baseType, 4, FitBaseType::Float32, "jump.distance")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->distance) == 4, "src and dst not the same size");
            memcpy(&this->distance, &localEndian, data.size());
        }
        #else
        this->distance = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 1: // See Profile.xlsx::Messages:jump.height
        if (!verify(data, baseType, 4, FitBaseType::Float32, "jump.height")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->height) == 4, "src and dst not the same size");
            memcpy(&this->height, &localEndian, data.size());
        }
        #else
        this->height = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 2: // See Profile.xlsx::Messages:jump.rotations
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "jump.rotations")) return false;
        this->rotations = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:jump.hangTime
        if (!verify(data, baseType, 4, FitBaseType::Float32, "jump.hangTime")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->hangTime) == 4, "src and dst not the same size");
            memcpy(&this->hangTime, &localEndian, data.size());
        }
        #else
        this->hangTime = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 4: // See Profile.xlsx::Messages:jump.score
        if (!verify(data, baseType, 4, FitBaseType::Float32, "jump.score")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->score) == 4, "src and dst not the same size");
            memcpy(&this->score, &localEndian, data.size());
        }
        #else
        this->score = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 5: // See Profile.xlsx::Messages:jump.positionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "jump.positionLat")) return false;
        this->positionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:jump.positionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "jump.positionLong")) return false;
        this->positionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:jump.speed
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "jump.speed")) return false;
        this->speed = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:jump.enhancedSpeed
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "jump.enhancedSpeed")) return false;
        this->enhancedSpeed = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown jump message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
