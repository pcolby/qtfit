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

/// @todo Generate implementation.
bool DiveAlarmMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE
