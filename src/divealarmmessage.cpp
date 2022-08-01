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

/*!
 * \file
 * Defines the DiveAlarmMessage, and DiveAlarmMessagePrivate classes.
 */

#include <qtfit/divealarmmessage.h>
#include "divealarmmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class DiveAlarmMessage
 *
 * The DiveAlarmMessage class represents a FIT DiveAlarmMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a DiveAlarmMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
DiveAlarmMessage::DiveAlarmMessage() : AbstractDataMessage(new DiveAlarmMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a DiveAlarmMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
DiveAlarmMessage::DiveAlarmMessage(DiveAlarmMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the DiveAlarmMessage data message's \c messageIndex field's current value.
 *
 * Index of the alarm
 *
 * \return the \c messageIndex field value.
 */
MessageIndex DiveAlarmMessage::messageIndex() const
{
    Q_D(const DiveAlarmMessage);
    return d->messageIndex;
}

/*!
 * Returns the DiveAlarmMessage data message's \c depth field's current value.
 *
 * \return the \c depth field value.
 */
quint32 DiveAlarmMessage::depth() const
{
    Q_D(const DiveAlarmMessage);
    return d->depth;
}

/*!
 * Returns the DiveAlarmMessage data message's \c time field's current value.
 *
 * \return the \c time field value.
 */
qint32 DiveAlarmMessage::time() const
{
    Q_D(const DiveAlarmMessage);
    return d->time;
}

/*!
 * Returns the DiveAlarmMessage data message's \c enabled field's current value.
 *
 * \return the \c enabled field value.
 */
bool DiveAlarmMessage::enabled() const
{
    Q_D(const DiveAlarmMessage);
    return d->enabled;
}

/*!
 * Returns the DiveAlarmMessage data message's \c alarmType field's current value.
 *
 * \return the \c alarmType field value.
 */
DiveAlarmType DiveAlarmMessage::alarmType() const
{
    Q_D(const DiveAlarmMessage);
    return d->alarmType;
}

/*!
 * Returns the DiveAlarmMessage data message's \c sound field's current value.
 *
 * \return the \c sound field value.
 */
Tone DiveAlarmMessage::sound() const
{
    Q_D(const DiveAlarmMessage);
    return d->sound;
}

/*!
 * Returns the DiveAlarmMessage data message's \c diveTypes field's current value.
 *
 * \return the \c diveTypes field value.
 */
SubSport DiveAlarmMessage::diveTypes() const
{
    Q_D(const DiveAlarmMessage);
    return d->diveTypes;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void DiveAlarmMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(DiveAlarmMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c depth field to \a depth.
 *
 * \param depth The field value to set.
 */
void DiveAlarmMessage::setDepth(const quint32 depth)
{
    Q_D(DiveAlarmMessage);
    d->depth = depth;
}
/*!
 * Sets the \c time field to \a time.
 *
 * \param time The field value to set.
 */
void DiveAlarmMessage::setTime(const qint32 time)
{
    Q_D(DiveAlarmMessage);
    d->time = time;
}
/*!
 * Sets the \c enabled field to \a enabled.
 *
 * \param enabled The field value to set.
 */
void DiveAlarmMessage::setEnabled(const bool enabled)
{
    Q_D(DiveAlarmMessage);
    d->enabled = enabled;
}
/*!
 * Sets the \c alarmType field to \a alarmType.
 *
 * \param alarmType The field value to set.
 */
void DiveAlarmMessage::setAlarmType(const DiveAlarmType alarmType)
{
    Q_D(DiveAlarmMessage);
    d->alarmType = alarmType;
}
/*!
 * Sets the \c sound field to \a sound.
 *
 * \param sound The field value to set.
 */
void DiveAlarmMessage::setSound(const Tone sound)
{
    Q_D(DiveAlarmMessage);
    d->sound = sound;
}
/*!
 * Sets the \c diveTypes field to \a diveTypes.
 *
 * \param diveTypes The field value to set.
 */
void DiveAlarmMessage::setDiveTypes(const SubSport diveTypes)
{
    Q_D(DiveAlarmMessage);
    d->diveTypes = diveTypes;
}

/// \cond internal

/*!
 * \internal
 *
 * \class DiveAlarmMessagePrivate
 *
 * The DiveAlarmMessagePrivate class provides private implementation for the DiveAlarmMessage.
 *
 * \sa DiveAlarmMessage
 */

/*!
 * \internal
 *
 * Constructs a DiveAlarmMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
DiveAlarmMessagePrivate::DiveAlarmMessagePrivate(DiveAlarmMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , depth(0xFFFFFFFF)
  , time(0x7FFFFFFF)
  , enabled(static_cast<bool>(-1))
  , alarmType(static_cast<DiveAlarmType>(-1))
  , sound(static_cast<Tone>(-1))
  , diveTypes(static_cast<SubSport>(-1))
{
    globalMessageNumber = MesgNum::DiveAlarm;
}

/*!
 * \internal
 *
 * Destroys the DiveAlarmMessagePrivate object.
 */
DiveAlarmMessagePrivate::~DiveAlarmMessagePrivate()
{

}

bool DiveAlarmMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:dive_alarm.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_alarm.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:dive_alarm.depth
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_alarm.depth")) return false;
        this->depth = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:dive_alarm.time
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "dive_alarm.time")) return false;
        this->time = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:dive_alarm.enabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "dive_alarm.enabled")) return false;
        this->enabled = static_cast<bool>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:dive_alarm.alarmType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_alarm.alarmType")) return false;
        this->alarmType = static_cast<DiveAlarmType>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:dive_alarm.sound
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_alarm.sound")) return false;
        this->sound = static_cast<Tone>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:dive_alarm.diveTypes
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_alarm.diveTypes")) return false;
        this->diveTypes = static_cast<SubSport>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown dive_alarm message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
