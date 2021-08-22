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

#include "speedzonemessage.h"
#include "speedzonemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class SpeedZoneMessage
 *
 * The SpeedZoneMessage class represents a FIT SpeedZoneMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid SpeedZoneMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SpeedZoneMessage::SpeedZoneMessage() : AbstractDataMessage(new SpeedZoneMessagePrivate(this))
{

}

/*!
 * Returns the SpeedZoneMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex SpeedZoneMessage::messageIndex() const
{
    Q_D(const SpeedZoneMessage);
    return d->messageIndex;
}

/*!
 * Returns the SpeedZoneMessage data message's \c highValue field's current value.
 *
 * \return the \c highValue field value.
 */
quint16 SpeedZoneMessage::highValue() const
{
    Q_D(const SpeedZoneMessage);
    return d->highValue;
}

/*!
 * Returns the SpeedZoneMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString SpeedZoneMessage::name() const
{
    Q_D(const SpeedZoneMessage);
    return d->name;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void SpeedZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SpeedZoneMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c highValue field to \a highValue.
 *
 * \param highValue The field value to set.
 */
void SpeedZoneMessage::setHighValue(const quint16 highValue)
{
    Q_D(SpeedZoneMessage);
    d->highValue = highValue;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void SpeedZoneMessage::setName(const QString name)
{
    Q_D(SpeedZoneMessage);
    d->name = name;
}

/// \cond internal

/*!
 * \internal
 *
 * \class SpeedZoneMessagePrivate
 *
 * The SpeedZoneMessagePrivate class provides private implementation for the SpeedZoneMessage.
 *
 * \sa SpeedZoneMessage
 */

/*!
 * \internal
 *
 * Constructs a SpeedZoneMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SpeedZoneMessagePrivate::SpeedZoneMessagePrivate(SpeedZoneMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , highValue(0xFFFF)
{
    globalMessageNumber = MesgNum::SpeedZone;
}

/*!
 * \internal
 *
 * Destroys the SpeedZoneMessagePrivate object.
 */
SpeedZoneMessagePrivate::~SpeedZoneMessagePrivate()
{

}

bool SpeedZoneMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:speed_zone.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "speed_zone.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:speed_zone.highValue
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "speed_zone.highValue")) return false;
        this->highValue = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:speed_zone.name
        if (!verify(data, baseType, 1, FitBaseType::String, "speed_zone.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown speed_zone message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
