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

#include "climbpromessage.h"
#include "climbpromessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class ClimbProMessage
 *
 * The ClimbProMessage class represents a FIT ClimbProMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a ClimbProMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ClimbProMessage::ClimbProMessage() : AbstractDataMessage(new ClimbProMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a ClimbProMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
ClimbProMessage::ClimbProMessage(ClimbProMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the ClimbProMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime ClimbProMessage::timestamp() const
{
    Q_D(const ClimbProMessage);
    return d->timestamp;
}

/*!
 * Returns the ClimbProMessage data message's \c positionLat field's current value.
 *
 * \return the \c positionLat field value.
 */
qint32 ClimbProMessage::positionLat() const
{
    Q_D(const ClimbProMessage);
    return d->positionLat;
}

/*!
 * Returns the ClimbProMessage data message's \c positionLong field's current value.
 *
 * \return the \c positionLong field value.
 */
qint32 ClimbProMessage::positionLong() const
{
    Q_D(const ClimbProMessage);
    return d->positionLong;
}

/*!
 * Returns the ClimbProMessage data message's \c climbProEvent field's current value.
 *
 * \return the \c climbProEvent field value.
 */
ClimbProEvent ClimbProMessage::climbProEvent() const
{
    Q_D(const ClimbProMessage);
    return d->climbProEvent;
}

/*!
 * Returns the ClimbProMessage data message's \c climbNumber field's current value.
 *
 * \return the \c climbNumber field value.
 */
quint16 ClimbProMessage::climbNumber() const
{
    Q_D(const ClimbProMessage);
    return d->climbNumber;
}

/*!
 * Returns the ClimbProMessage data message's \c climbCategory field's current value.
 *
 * \return the \c climbCategory field value.
 */
quint8 ClimbProMessage::climbCategory() const
{
    Q_D(const ClimbProMessage);
    return d->climbCategory;
}

/*!
 * Returns the ClimbProMessage data message's \c currentDist field's current value.
 *
 * \return the \c currentDist field value.
 */
float ClimbProMessage::currentDist() const
{
    Q_D(const ClimbProMessage);
    return d->currentDist;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void ClimbProMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(ClimbProMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c positionLat field to \a positionLat.
 *
 * \param positionLat The field value to set.
 */
void ClimbProMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(ClimbProMessage);
    d->positionLat = positionLat;
}
/*!
 * Sets the \c positionLong field to \a positionLong.
 *
 * \param positionLong The field value to set.
 */
void ClimbProMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(ClimbProMessage);
    d->positionLong = positionLong;
}
/*!
 * Sets the \c climbProEvent field to \a climbProEvent.
 *
 * \param climbProEvent The field value to set.
 */
void ClimbProMessage::setClimbProEvent(const ClimbProEvent climbProEvent)
{
    Q_D(ClimbProMessage);
    d->climbProEvent = climbProEvent;
}
/*!
 * Sets the \c climbNumber field to \a climbNumber.
 *
 * \param climbNumber The field value to set.
 */
void ClimbProMessage::setClimbNumber(const quint16 climbNumber)
{
    Q_D(ClimbProMessage);
    d->climbNumber = climbNumber;
}
/*!
 * Sets the \c climbCategory field to \a climbCategory.
 *
 * \param climbCategory The field value to set.
 */
void ClimbProMessage::setClimbCategory(const quint8 climbCategory)
{
    Q_D(ClimbProMessage);
    d->climbCategory = climbCategory;
}
/*!
 * Sets the \c currentDist field to \a currentDist.
 *
 * \param currentDist The field value to set.
 */
void ClimbProMessage::setCurrentDist(const float currentDist)
{
    Q_D(ClimbProMessage);
    d->currentDist = currentDist;
}

/// \cond internal

/*!
 * \internal
 *
 * \class ClimbProMessagePrivate
 *
 * The ClimbProMessagePrivate class provides private implementation for the ClimbProMessage.
 *
 * \sa ClimbProMessage
 */

/*!
 * \internal
 *
 * Constructs a ClimbProMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ClimbProMessagePrivate::ClimbProMessagePrivate(ClimbProMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , positionLat(0x7FFFFFFF)
  , positionLong(0x7FFFFFFF)
  , climbProEvent(static_cast<ClimbProEvent>(-1))
  , climbNumber(0xFFFF)
  , climbCategory(0xFF)
  , currentDist(static_cast<float>(-1))
{
    globalMessageNumber = MesgNum::ClimbPro;
}

/*!
 * \internal
 *
 * Destroys the ClimbProMessagePrivate object.
 */
ClimbProMessagePrivate::~ClimbProMessagePrivate()
{

}

bool ClimbProMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:climb_pro.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "climb_pro.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:climb_pro.positionLat
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "climb_pro.positionLat")) return false;
        this->positionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:climb_pro.positionLong
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "climb_pro.positionLong")) return false;
        this->positionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:climb_pro.climbProEvent
        if (!verify(data, baseType, 1, FitBaseType::Enum, "climb_pro.climbProEvent")) return false;
        this->climbProEvent = static_cast<ClimbProEvent>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:climb_pro.climbNumber
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "climb_pro.climbNumber")) return false;
        this->climbNumber = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:climb_pro.climbCategory
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "climb_pro.climbCategory")) return false;
        this->climbCategory = static_cast<quint8>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:climb_pro.currentDist
        if (!verify(data, baseType, 4, FitBaseType::Float32, "climb_pro.currentDist")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->currentDist) == 4, "src and dst not the same size");
            memcpy(&this->currentDist, &localEndian, data.size());
        }
        #else
        this->currentDist = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    default:
        qWarning() << "ignoring unknown climb_pro message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
