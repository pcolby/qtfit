// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the CadenceZoneMessage, and CadenceZoneMessagePrivate classes.
 */

#include <qtfit/cadencezonemessage.h>
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
 * Constructs a CadenceZoneMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
CadenceZoneMessage::CadenceZoneMessage() : AbstractDataMessage(new CadenceZoneMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a CadenceZoneMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
CadenceZoneMessage::CadenceZoneMessage(CadenceZoneMessagePrivate * const d) : AbstractDataMessage(d)
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

/// \cond internal

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
  : AbstractDataMessagePrivate(q)
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
        qWarning() << "ignoring unknown cadence_zone message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
