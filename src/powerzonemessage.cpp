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

#include "powerzonemessage.h"
#include "powerzonemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class PowerZoneMessage
 *
 * The PowerZoneMessage class represents a FIT PowerZoneMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a PowerZoneMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
PowerZoneMessage::PowerZoneMessage() : AbstractDataMessage(new PowerZoneMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a PowerZoneMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
PowerZoneMessage::PowerZoneMessage(PowerZoneMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the PowerZoneMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex PowerZoneMessage::messageIndex() const
{
    Q_D(const PowerZoneMessage);
    return d->messageIndex;
}

/*!
 * Returns the PowerZoneMessage data message's \c highValue field's current value.
 *
 * \return the \c highValue field value.
 */
quint16 PowerZoneMessage::highValue() const
{
    Q_D(const PowerZoneMessage);
    return d->highValue;
}

/*!
 * Returns the PowerZoneMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString PowerZoneMessage::name() const
{
    Q_D(const PowerZoneMessage);
    return d->name;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void PowerZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(PowerZoneMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c highValue field to \a highValue.
 *
 * \param highValue The field value to set.
 */
void PowerZoneMessage::setHighValue(const quint16 highValue)
{
    Q_D(PowerZoneMessage);
    d->highValue = highValue;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void PowerZoneMessage::setName(const QString name)
{
    Q_D(PowerZoneMessage);
    d->name = name;
}

/// \cond internal

/*!
 * \internal
 *
 * \class PowerZoneMessagePrivate
 *
 * The PowerZoneMessagePrivate class provides private implementation for the PowerZoneMessage.
 *
 * \sa PowerZoneMessage
 */

/*!
 * \internal
 *
 * Constructs a PowerZoneMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
PowerZoneMessagePrivate::PowerZoneMessagePrivate(PowerZoneMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , highValue(0xFFFF)
{
    globalMessageNumber = MesgNum::PowerZone;
}

/*!
 * \internal
 *
 * Destroys the PowerZoneMessagePrivate object.
 */
PowerZoneMessagePrivate::~PowerZoneMessagePrivate()
{

}

bool PowerZoneMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:power_zone.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "power_zone.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:power_zone.highValue
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "power_zone.highValue")) return false;
        this->highValue = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:power_zone.name
        if (!verify(data, baseType, 1, FitBaseType::String, "power_zone.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown power_zone message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
