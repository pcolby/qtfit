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

#include <QDebug>
#include <QtEndian>

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

bool GoalMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:goal.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "goal.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:goal.sport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.sport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "goal.sport size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:goal.subSport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.subSport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "goal.subSport size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:goal.startDate
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.startDate has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "goal.startDate size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->startDate = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 3: // See Profile.xlsx::Messages:goal.endDate
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.endDate has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "goal.endDate size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->endDate = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 4: // See Profile.xlsx::Messages:goal.type
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.type has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "goal.type size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->type = static_cast<Goal>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:goal.value
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.value has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "goal.value size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->value = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:goal.repeat
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.repeat has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "goal.repeat size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->repeat = static_cast<bool>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:goal.targetValue
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.targetValue has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "goal.targetValue size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->targetValue = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 8: // See Profile.xlsx::Messages:goal.recurrence
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.recurrence has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "goal.recurrence size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->recurrence = static_cast<GoalRecurrence>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:goal.recurrenceValue
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.recurrenceValue has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "goal.recurrenceValue size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->recurrenceValue = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:goal.enabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.enabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "goal.enabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->enabled = static_cast<bool>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:goal.source
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "goal.source has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "goal.source size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->source = static_cast<GoalSource>(data.at(0));
        break;
    default:
        qWarning() << "unknown goal message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
