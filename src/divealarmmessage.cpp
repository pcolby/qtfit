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

#include "divealarmmessage.h"
#include "divealarmmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

DiveAlarmMessage::DiveAlarmMessage() : FitDataMessage(new DiveAlarmMessagePrivate(this))
{

}

MessageIndex DiveAlarmMessage::messageIndex() const
{
    Q_D(const DiveAlarmMessage);
    return d->messageIndex;
}

quint32 DiveAlarmMessage::depth() const
{
    Q_D(const DiveAlarmMessage);
    return d->depth;
}

qint32 DiveAlarmMessage::time() const
{
    Q_D(const DiveAlarmMessage);
    return d->time;
}

bool DiveAlarmMessage::enabled() const
{
    Q_D(const DiveAlarmMessage);
    return d->enabled;
}

DiveAlarmType DiveAlarmMessage::alarmType() const
{
    Q_D(const DiveAlarmMessage);
    return d->alarmType;
}

Tone DiveAlarmMessage::sound() const
{
    Q_D(const DiveAlarmMessage);
    return d->sound;
}

SubSport DiveAlarmMessage::diveTypes() const
{
    Q_D(const DiveAlarmMessage);
    return d->diveTypes;
}

void DiveAlarmMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(DiveAlarmMessage);
    d->messageIndex = messageIndex;
}
void DiveAlarmMessage::setDepth(const quint32 depth)
{
    Q_D(DiveAlarmMessage);
    d->depth = depth;
}
void DiveAlarmMessage::setTime(const qint32 time)
{
    Q_D(DiveAlarmMessage);
    d->time = time;
}
void DiveAlarmMessage::setEnabled(const bool enabled)
{
    Q_D(DiveAlarmMessage);
    d->enabled = enabled;
}
void DiveAlarmMessage::setAlarmType(const DiveAlarmType alarmType)
{
    Q_D(DiveAlarmMessage);
    d->alarmType = alarmType;
}
void DiveAlarmMessage::setSound(const Tone sound)
{
    Q_D(DiveAlarmMessage);
    d->sound = sound;
}
void DiveAlarmMessage::setDiveTypes(const SubSport diveTypes)
{
    Q_D(DiveAlarmMessage);
    d->diveTypes = diveTypes;
}

DiveAlarmMessagePrivate::DiveAlarmMessagePrivate(DiveAlarmMessage * const q)
  : FitDataMessagePrivate(q)
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

DiveAlarmMessagePrivate::~DiveAlarmMessagePrivate()
{

}

bool DiveAlarmMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:dive_alarm.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_alarm.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "dive_alarm.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:dive_alarm.depth
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_alarm.depth has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_alarm.depth size is" << data.size() << "but should be" << 4;
            return false;
        }
        depth = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:dive_alarm.time
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_alarm.time has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_alarm.time size is" << data.size() << "but should be" << 4;
            return false;
        }
        time = static_cast<qint32>(bigEndian ? qFromBigEndian<qint32>(data) : qFromLittleEndian<qint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:dive_alarm.enabled
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_alarm.enabled has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "dive_alarm.enabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        enabled = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    case 3: // See Profile.xlsx::Messages:dive_alarm.alarmType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_alarm.alarmType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_alarm.alarmType size is" << data.size() << "but should be" << 1;
            return false;
        }
        alarmType = static_cast<DiveAlarmType>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:dive_alarm.sound
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_alarm.sound has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_alarm.sound size is" << data.size() << "but should be" << 1;
            return false;
        }
        sound = static_cast<Tone>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:dive_alarm.diveTypes
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_alarm.diveTypes has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_alarm.diveTypes size is" << data.size() << "but should be" << 1;
            return false;
        }
        diveTypes = static_cast<SubSport>(data.at(0));
        break;
    default:
        qWarning() << "unknown dive_alarm message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
