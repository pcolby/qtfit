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

/*!
 * \class JumpMessage
 *
 * The JumpMessage class represents a FIT JumpMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid JumpMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
JumpMessage::JumpMessage() : AbstractDataMessage(new JumpMessagePrivate(this))
{

}

/*!
 * Returns the JumpMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime JumpMessage::timestamp() const
{
    Q_D(const JumpMessage);
    return d->timestamp;
}

/*!
 * Returns the JumpMessage data message's \c distance field's current value.
 *
 * \return the \c distance field value.
 */
float JumpMessage::distance() const
{
    Q_D(const JumpMessage);
    return d->distance;
}

/*!
 * Returns the JumpMessage data message's \c height field's current value.
 *
 * \return the \c height field value.
 */
float JumpMessage::height() const
{
    Q_D(const JumpMessage);
    return d->height;
}

/*!
 * Returns the JumpMessage data message's \c rotations field's current value.
 *
 * \return the \c rotations field value.
 */
quint8 JumpMessage::rotations() const
{
    Q_D(const JumpMessage);
    return d->rotations;
}

/*!
 * Returns the JumpMessage data message's \c hangTime field's current value.
 *
 * \return the \c hangTime field value.
 */
float JumpMessage::hangTime() const
{
    Q_D(const JumpMessage);
    return d->hangTime;
}

/*!
 * Returns the JumpMessage data message's \c score field's current value.
 *
 * \return the \c score field value.
 */
float JumpMessage::score() const
{
    Q_D(const JumpMessage);
    return d->score;
}

/*!
 * Returns the JumpMessage data message's \c positionLat field's current value.
 *
 * \return the \c positionLat field value.
 */
qint32 JumpMessage::positionLat() const
{
    Q_D(const JumpMessage);
    return d->positionLat;
}

/*!
 * Returns the JumpMessage data message's \c positionLong field's current value.
 *
 * \return the \c positionLong field value.
 */
qint32 JumpMessage::positionLong() const
{
    Q_D(const JumpMessage);
    return d->positionLong;
}

/*!
 * Returns the JumpMessage data message's \c speed field's current value.
 *
 * \return the \c speed field value.
 */
quint16 JumpMessage::speed() const
{
    Q_D(const JumpMessage);
    return d->speed;
}

/*!
 * Returns the JumpMessage data message's \c enhancedSpeed field's current value.
 *
 * \return the \c enhancedSpeed field value.
 */
quint32 JumpMessage::enhancedSpeed() const
{
    Q_D(const JumpMessage);
    return d->enhancedSpeed;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void JumpMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(JumpMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c distance field to \a distance.
 *
 * \param distance The field value to set.
 */
void JumpMessage::setDistance(const float distance)
{
    Q_D(JumpMessage);
    d->distance = distance;
}
/*!
 * Sets the \c height field to \a height.
 *
 * \param height The field value to set.
 */
void JumpMessage::setHeight(const float height)
{
    Q_D(JumpMessage);
    d->height = height;
}
/*!
 * Sets the \c rotations field to \a rotations.
 *
 * \param rotations The field value to set.
 */
void JumpMessage::setRotations(const quint8 rotations)
{
    Q_D(JumpMessage);
    d->rotations = rotations;
}
/*!
 * Sets the \c hangTime field to \a hangTime.
 *
 * \param hangTime The field value to set.
 */
void JumpMessage::setHangTime(const float hangTime)
{
    Q_D(JumpMessage);
    d->hangTime = hangTime;
}
/*!
 * Sets the \c score field to \a score.
 *
 * \param score The field value to set.
 */
void JumpMessage::setScore(const float score)
{
    Q_D(JumpMessage);
    d->score = score;
}
/*!
 * Sets the \c positionLat field to \a positionLat.
 *
 * \param positionLat The field value to set.
 */
void JumpMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(JumpMessage);
    d->positionLat = positionLat;
}
/*!
 * Sets the \c positionLong field to \a positionLong.
 *
 * \param positionLong The field value to set.
 */
void JumpMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(JumpMessage);
    d->positionLong = positionLong;
}
/*!
 * Sets the \c speed field to \a speed.
 *
 * \param speed The field value to set.
 */
void JumpMessage::setSpeed(const quint16 speed)
{
    Q_D(JumpMessage);
    d->speed = speed;
}
/*!
 * Sets the \c enhancedSpeed field to \a enhancedSpeed.
 *
 * \param enhancedSpeed The field value to set.
 */
void JumpMessage::setEnhancedSpeed(const quint32 enhancedSpeed)
{
    Q_D(JumpMessage);
    d->enhancedSpeed = enhancedSpeed;
}

/// \cond internal

/*!
 * \internal
 *
 * \class JumpMessagePrivate
 *
 * The JumpMessagePrivate class provides private implementation for the JumpMessage.
 *
 * \sa JumpMessage
 */

/*!
 * \internal
 *
 * Constructs a JumpMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
JumpMessagePrivate::JumpMessagePrivate(JumpMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the JumpMessagePrivate object.
 */
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
        qWarning() << "ignoring unknown jump message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
