// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the MetZoneMessage, and MetZoneMessagePrivate classes.
 */

#include <qtfit/metzonemessage.h>
#include "metzonemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class MetZoneMessage
 *
 * The MetZoneMessage class represents a FIT MetZoneMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a MetZoneMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
MetZoneMessage::MetZoneMessage() : AbstractDataMessage(new MetZoneMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a MetZoneMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
MetZoneMessage::MetZoneMessage(MetZoneMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the MetZoneMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex MetZoneMessage::messageIndex() const
{
    Q_D(const MetZoneMessage);
    return d->messageIndex;
}

/*!
 * Returns the MetZoneMessage data message's \c highBpm field's current value.
 *
 * \return the \c highBpm field value.
 */
quint8 MetZoneMessage::highBpm() const
{
    Q_D(const MetZoneMessage);
    return d->highBpm;
}

/*!
 * Returns the MetZoneMessage data message's \c calories field's current value.
 *
 * \return the \c calories field value.
 */
quint16 MetZoneMessage::calories() const
{
    Q_D(const MetZoneMessage);
    return d->calories;
}

/*!
 * Returns the MetZoneMessage data message's \c fatCalories field's current value.
 *
 * \return the \c fatCalories field value.
 */
quint8 MetZoneMessage::fatCalories() const
{
    Q_D(const MetZoneMessage);
    return d->fatCalories;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void MetZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(MetZoneMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c highBpm field to \a highBpm.
 *
 * \param highBpm The field value to set.
 */
void MetZoneMessage::setHighBpm(const quint8 highBpm)
{
    Q_D(MetZoneMessage);
    d->highBpm = highBpm;
}
/*!
 * Sets the \c calories field to \a calories.
 *
 * \param calories The field value to set.
 */
void MetZoneMessage::setCalories(const quint16 calories)
{
    Q_D(MetZoneMessage);
    d->calories = calories;
}
/*!
 * Sets the \c fatCalories field to \a fatCalories.
 *
 * \param fatCalories The field value to set.
 */
void MetZoneMessage::setFatCalories(const quint8 fatCalories)
{
    Q_D(MetZoneMessage);
    d->fatCalories = fatCalories;
}

/// \cond internal

/*!
 * \internal
 *
 * \class MetZoneMessagePrivate
 *
 * The MetZoneMessagePrivate class provides private implementation for the MetZoneMessage.
 *
 * \sa MetZoneMessage
 */

/*!
 * \internal
 *
 * Constructs a MetZoneMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
MetZoneMessagePrivate::MetZoneMessagePrivate(MetZoneMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , highBpm(0xFF)
  , calories(0xFFFF)
  , fatCalories(0xFF)
{
    globalMessageNumber = MesgNum::MetZone;
}

/*!
 * \internal
 *
 * Destroys the MetZoneMessagePrivate object.
 */
MetZoneMessagePrivate::~MetZoneMessagePrivate()
{

}

bool MetZoneMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:met_zone.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "met_zone.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:met_zone.highBpm
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "met_zone.highBpm")) return false;
        this->highBpm = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:met_zone.calories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "met_zone.calories")) return false;
        this->calories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:met_zone.fatCalories
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "met_zone.fatCalories")) return false;
        this->fatCalories = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown met_zone message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
