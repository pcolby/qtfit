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

#include "setmessage.h"
#include "setmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

SetMessage::SetMessage() : FitDataMessage(new SetMessagePrivate(this))
{

}

DateTime SetMessage::timestamp() const
{
    Q_D(const SetMessage);
    return d->timestamp;
}

quint32 SetMessage::duration() const
{
    Q_D(const SetMessage);
    return d->duration;
}

quint16 SetMessage::repetitions() const
{
    Q_D(const SetMessage);
    return d->repetitions;
}

quint16 SetMessage::weight() const
{
    Q_D(const SetMessage);
    return d->weight;
}

SetType SetMessage::setType() const
{
    Q_D(const SetMessage);
    return d->setType;
}

DateTime SetMessage::startTime() const
{
    Q_D(const SetMessage);
    return d->startTime;
}

ExerciseCategory SetMessage::category() const
{
    Q_D(const SetMessage);
    return d->category;
}

quint16 SetMessage::categorySubtype() const
{
    Q_D(const SetMessage);
    return d->categorySubtype;
}

FitBaseUnit SetMessage::weightDisplayUnit() const
{
    Q_D(const SetMessage);
    return d->weightDisplayUnit;
}

MessageIndex SetMessage::messageIndex() const
{
    Q_D(const SetMessage);
    return d->messageIndex;
}

MessageIndex SetMessage::wktStepIndex() const
{
    Q_D(const SetMessage);
    return d->wktStepIndex;
}

void SetMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(SetMessage);
    d->timestamp = timestamp;
}
void SetMessage::setDuration(const quint32 duration)
{
    Q_D(SetMessage);
    d->duration = duration;
}
void SetMessage::setRepetitions(const quint16 repetitions)
{
    Q_D(SetMessage);
    d->repetitions = repetitions;
}
void SetMessage::setWeight(const quint16 weight)
{
    Q_D(SetMessage);
    d->weight = weight;
}
void SetMessage::setSetType(const SetType setType)
{
    Q_D(SetMessage);
    d->setType = setType;
}
void SetMessage::setStartTime(const DateTime startTime)
{
    Q_D(SetMessage);
    d->startTime = startTime;
}
void SetMessage::setCategory(const ExerciseCategory category)
{
    Q_D(SetMessage);
    d->category = category;
}
void SetMessage::setCategorySubtype(const quint16 categorySubtype)
{
    Q_D(SetMessage);
    d->categorySubtype = categorySubtype;
}
void SetMessage::setWeightDisplayUnit(const FitBaseUnit weightDisplayUnit)
{
    Q_D(SetMessage);
    d->weightDisplayUnit = weightDisplayUnit;
}
void SetMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SetMessage);
    d->messageIndex = messageIndex;
}
void SetMessage::setWktStepIndex(const MessageIndex wktStepIndex)
{
    Q_D(SetMessage);
    d->wktStepIndex = wktStepIndex;
}

SetMessagePrivate::SetMessagePrivate(SetMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , duration(0xFFFFFFFF)
  , repetitions(0xFFFF)
  , weight(0xFFFF)
  , setType(static_cast<SetType>(-1))
  , startTime(static_cast<DateTime>(-1))
  , category(static_cast<ExerciseCategory>(-1))
  , categorySubtype(0xFFFF)
  , weightDisplayUnit(static_cast<FitBaseUnit>(-1))
  , messageIndex(static_cast<MessageIndex>(-1))
  , wktStepIndex(static_cast<MessageIndex>(-1))
{
    globalMessageNumber = MesgNum::Set;
}

SetMessagePrivate::~SetMessagePrivate()
{

}

bool SetMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:set.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "set.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:set.duration
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "set.duration")) return false;
        this->duration = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:set.repetitions
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "set.repetitions")) return false;
        this->repetitions = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:set.weight
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "set.weight")) return false;
        this->weight = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:set.setType
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "set.setType")) return false;
        this->setType = static_cast<SetType>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:set.startTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "set.startTime")) return false;
        this->startTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:set.category
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "set.category")) return false;
        this->category = static_cast<ExerciseCategory>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:set.categorySubtype
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "set.categorySubtype")) return false;
        this->categorySubtype = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 9: // See Profile.xlsx::Messages:set.weightDisplayUnit
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "set.weightDisplayUnit")) return false;
        this->weightDisplayUnit = static_cast<FitBaseUnit>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:set.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "set.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 11: // See Profile.xlsx::Messages:set.wktStepIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "set.wktStepIndex")) return false;
        this->wktStepIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown set message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
