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

#include "goalmessage.h"
#include "goalmessage_p.h"

QTFIT_BEGIN_NAMESPACE

GoalMessage::GoalMessage() : FitDataMessage(new GoalMessagePrivate(this))
{

}

MessageIndex GoalMessage::messageIndex() const
{
    Q_D(const GoalMessage);
    return d->messageIndex;
}

Sport GoalMessage::sport() const
{
    Q_D(const GoalMessage);
    return d->sport;
}

SubSport GoalMessage::subSport() const
{
    Q_D(const GoalMessage);
    return d->subSport;
}

DateTime GoalMessage::startDate() const
{
    Q_D(const GoalMessage);
    return d->startDate;
}

DateTime GoalMessage::endDate() const
{
    Q_D(const GoalMessage);
    return d->endDate;
}

Goal GoalMessage::type() const
{
    Q_D(const GoalMessage);
    return d->type;
}

quint32 GoalMessage::value() const
{
    Q_D(const GoalMessage);
    return d->value;
}

bool GoalMessage::repeat() const
{
    Q_D(const GoalMessage);
    return d->repeat;
}

quint32 GoalMessage::targetValue() const
{
    Q_D(const GoalMessage);
    return d->targetValue;
}

GoalRecurrence GoalMessage::recurrence() const
{
    Q_D(const GoalMessage);
    return d->recurrence;
}

quint16 GoalMessage::recurrenceValue() const
{
    Q_D(const GoalMessage);
    return d->recurrenceValue;
}

bool GoalMessage::enabled() const
{
    Q_D(const GoalMessage);
    return d->enabled;
}

GoalSource GoalMessage::source() const
{
    Q_D(const GoalMessage);
    return d->source;
}

void GoalMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(GoalMessage);
    d->messageIndex = messageIndex;
}
void GoalMessage::setSport(const Sport sport)
{
    Q_D(GoalMessage);
    d->sport = sport;
}
void GoalMessage::setSubSport(const SubSport subSport)
{
    Q_D(GoalMessage);
    d->subSport = subSport;
}
void GoalMessage::setStartDate(const DateTime startDate)
{
    Q_D(GoalMessage);
    d->startDate = startDate;
}
void GoalMessage::setEndDate(const DateTime endDate)
{
    Q_D(GoalMessage);
    d->endDate = endDate;
}
void GoalMessage::setType(const Goal type)
{
    Q_D(GoalMessage);
    d->type = type;
}
void GoalMessage::setValue(const quint32 value)
{
    Q_D(GoalMessage);
    d->value = value;
}
void GoalMessage::setRepeat(const bool repeat)
{
    Q_D(GoalMessage);
    d->repeat = repeat;
}
void GoalMessage::setTargetValue(const quint32 targetValue)
{
    Q_D(GoalMessage);
    d->targetValue = targetValue;
}
void GoalMessage::setRecurrence(const GoalRecurrence recurrence)
{
    Q_D(GoalMessage);
    d->recurrence = recurrence;
}
void GoalMessage::setRecurrenceValue(const quint16 recurrenceValue)
{
    Q_D(GoalMessage);
    d->recurrenceValue = recurrenceValue;
}
void GoalMessage::setEnabled(const bool enabled)
{
    Q_D(GoalMessage);
    d->enabled = enabled;
}
void GoalMessage::setSource(const GoalSource source)
{
    Q_D(GoalMessage);
    d->source = source;
}

GoalMessagePrivate::GoalMessagePrivate(GoalMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , sport(static_cast<Sport>(-1))
  , subSport(static_cast<SubSport>(-1))
  , startDate(static_cast<DateTime>(-1))
  , endDate(static_cast<DateTime>(-1))
  , type(static_cast<Goal>(-1))
  , value(0xFFFFFFFF)
  , repeat(static_cast<bool>(-1))
  , targetValue(0xFFFFFFFF)
  , recurrence(static_cast<GoalRecurrence>(-1))
  , recurrenceValue(0xFFFF)
  , enabled(static_cast<bool>(-1))
  , source(static_cast<GoalSource>(-1))
{
    globalMessageNumber = MesgNum::Goal;
}

GoalMessagePrivate::~GoalMessagePrivate()
{

}

/// @todo Generate implementation.
bool GoalMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
