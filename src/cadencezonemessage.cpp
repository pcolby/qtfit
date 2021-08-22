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

#include "cadencezonemessage.h"
#include "cadencezonemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class CadenceZoneMessage
 *
 * The CadenceZoneMessage class represents a FIT CadenceZoneMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid CadenceZoneMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
CadenceZoneMessage::CadenceZoneMessage() : FitDataMessage(new CadenceZoneMessagePrivate(this))
{

}

/*!
 * Returns the CadenceZoneMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex CadenceZoneMessage::messageIndex() const
{
    Q_D(const CadenceZoneMessage);
    return d->messageIndex;
}

/*!
 * Returns the CadenceZoneMessage data message's \c highValue field's current value.
 *
 * \return the \c highValue field value.
 */
quint8 CadenceZoneMessage::highValue() const
{
    Q_D(const CadenceZoneMessage);
    return d->highValue;
}

/*!
 * Returns the CadenceZoneMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString CadenceZoneMessage::name() const
{
    Q_D(const CadenceZoneMessage);
    return d->name;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void CadenceZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(CadenceZoneMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c highValue field to \a highValue.
 *
 * \param highValue The field value to set.
 */
void CadenceZoneMessage::setHighValue(const quint8 highValue)
{
    Q_D(CadenceZoneMessage);
    d->highValue = highValue;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void CadenceZoneMessage::setName(const QString name)
{
    Q_D(CadenceZoneMessage);
    d->name = name;
}

/*!
 * \internal
 *
 * \class CadenceZoneMessagePrivate
 *
 * The CadenceZoneMessagePrivate class provides private implementation for the CadenceZoneMessage.
 *
 * \sa CadenceZoneMessage
 */

/*!
 * \internal
 *
 * Constructs a CadenceZoneMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
CadenceZoneMessagePrivate::CadenceZoneMessagePrivate(CadenceZoneMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , highValue(0xFF)
{
    globalMessageNumber = MesgNum::CadenceZone;
}

/*!
 * \internal
 *
 * Destroys the CadenceZoneMessagePrivate object.
 */
CadenceZoneMessagePrivate::~CadenceZoneMessagePrivate()
{

}

bool CadenceZoneMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:cadence_zone.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "cadence_zone.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:cadence_zone.highValue
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "cadence_zone.highValue")) return false;
        this->highValue = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:cadence_zone.name
        if (!verify(data, baseType, 1, FitBaseType::String, "cadence_zone.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "unknown cadence_zone message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
