// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the HrZoneMessage, and HrZoneMessagePrivate classes.
 */

#include <qtfit/hrzonemessage.h>
#include "hrzonemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class HrZoneMessage
 *
 * The HrZoneMessage class represents a FIT HrZoneMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a HrZoneMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
HrZoneMessage::HrZoneMessage() : AbstractDataMessage(new HrZoneMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a HrZoneMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
HrZoneMessage::HrZoneMessage(HrZoneMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the HrZoneMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex HrZoneMessage::messageIndex() const
{
    Q_D(const HrZoneMessage);
    return d->messageIndex;
}

/*!
 * Returns the HrZoneMessage data message's \c highBpm field's current value.
 *
 * \return the \c highBpm field value.
 */
quint8 HrZoneMessage::highBpm() const
{
    Q_D(const HrZoneMessage);
    return d->highBpm;
}

/*!
 * Returns the HrZoneMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString HrZoneMessage::name() const
{
    Q_D(const HrZoneMessage);
    return d->name;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void HrZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(HrZoneMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c highBpm field to \a highBpm.
 *
 * \param highBpm The field value to set.
 */
void HrZoneMessage::setHighBpm(const quint8 highBpm)
{
    Q_D(HrZoneMessage);
    d->highBpm = highBpm;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void HrZoneMessage::setName(const QString name)
{
    Q_D(HrZoneMessage);
    d->name = name;
}

/// \cond internal

/*!
 * \internal
 *
 * \class HrZoneMessagePrivate
 *
 * The HrZoneMessagePrivate class provides private implementation for the HrZoneMessage.
 *
 * \sa HrZoneMessage
 */

/*!
 * \internal
 *
 * Constructs a HrZoneMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
HrZoneMessagePrivate::HrZoneMessagePrivate(HrZoneMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , highBpm(0xFF)
{
    globalMessageNumber = MesgNum::HrZone;
}

/*!
 * \internal
 *
 * Destroys the HrZoneMessagePrivate object.
 */
HrZoneMessagePrivate::~HrZoneMessagePrivate()
{

}

bool HrZoneMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:hr_zone.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "hr_zone.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:hr_zone.highBpm
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "hr_zone.highBpm")) return false;
        this->highBpm = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:hr_zone.name
        if (!verify(data, baseType, 1, FitBaseType::String, "hr_zone.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown hr_zone message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
