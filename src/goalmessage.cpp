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
 * Defines the GoalMessage, and GoalMessagePrivate classes.
 */

#include "goalmessage.h"
#include "goalmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class GoalMessage
 *
 * The GoalMessage class represents a FIT GoalMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a GoalMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
GoalMessage::GoalMessage() : AbstractDataMessage(new GoalMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a GoalMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
GoalMessage::GoalMessage(GoalMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the GoalMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex GoalMessage::messageIndex() const
{
    Q_D(const GoalMessage);
    return d->messageIndex;
}

/*!
 * Returns the GoalMessage data message's \c sport field's current value.
 *
 * \return the \c sport field value.
 */
Sport GoalMessage::sport() const
{
    Q_D(const GoalMessage);
    return d->sport;
}

/*!
 * Returns the GoalMessage data message's \c subSport field's current value.
 *
 * \return the \c subSport field value.
 */
SubSport GoalMessage::subSport() const
{
    Q_D(const GoalMessage);
    return d->subSport;
}

/*!
 * Returns the GoalMessage data message's \c startDate field's current value.
 *
 * \return the \c startDate field value.
 */
DateTime GoalMessage::startDate() const
{
    Q_D(const GoalMessage);
    return d->startDate;
}

/*!
 * Returns the GoalMessage data message's \c endDate field's current value.
 *
 * \return the \c endDate field value.
 */
DateTime GoalMessage::endDate() const
{
    Q_D(const GoalMessage);
    return d->endDate;
}

/*!
 * Returns the GoalMessage data message's \c type field's current value.
 *
 * \return the \c type field value.
 */
Goal GoalMessage::type() const
{
    Q_D(const GoalMessage);
    return d->type;
}

/*!
 * Returns the GoalMessage data message's \c value field's current value.
 *
 * \return the \c value field value.
 */
quint32 GoalMessage::value() const
{
    Q_D(const GoalMessage);
    return d->value;
}

/*!
 * Returns the GoalMessage data message's \c repeat field's current value.
 *
 * \return the \c repeat field value.
 */
bool GoalMessage::repeat() const
{
    Q_D(const GoalMessage);
    return d->repeat;
}

/*!
 * Returns the GoalMessage data message's \c targetValue field's current value.
 *
 * \return the \c targetValue field value.
 */
quint32 GoalMessage::targetValue() const
{
    Q_D(const GoalMessage);
    return d->targetValue;
}

/*!
 * Returns the GoalMessage data message's \c recurrence field's current value.
 *
 * \return the \c recurrence field value.
 */
GoalRecurrence GoalMessage::recurrence() const
{
    Q_D(const GoalMessage);
    return d->recurrence;
}

/*!
 * Returns the GoalMessage data message's \c recurrenceValue field's current value.
 *
 * \return the \c recurrenceValue field value.
 */
quint16 GoalMessage::recurrenceValue() const
{
    Q_D(const GoalMessage);
    return d->recurrenceValue;
}

/*!
 * Returns the GoalMessage data message's \c enabled field's current value.
 *
 * \return the \c enabled field value.
 */
bool GoalMessage::enabled() const
{
    Q_D(const GoalMessage);
    return d->enabled;
}

/*!
 * Returns the GoalMessage data message's \c source field's current value.
 *
 * \return the \c source field value.
 */
GoalSource GoalMessage::source() const
{
    Q_D(const GoalMessage);
    return d->source;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void GoalMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(GoalMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c sport field to \a sport.
 *
 * \param sport The field value to set.
 */
void GoalMessage::setSport(const Sport sport)
{
    Q_D(GoalMessage);
    d->sport = sport;
}
/*!
 * Sets the \c subSport field to \a subSport.
 *
 * \param subSport The field value to set.
 */
void GoalMessage::setSubSport(const SubSport subSport)
{
    Q_D(GoalMessage);
    d->subSport = subSport;
}
/*!
 * Sets the \c startDate field to \a startDate.
 *
 * \param startDate The field value to set.
 */
void GoalMessage::setStartDate(const DateTime startDate)
{
    Q_D(GoalMessage);
    d->startDate = startDate;
}
/*!
 * Sets the \c endDate field to \a endDate.
 *
 * \param endDate The field value to set.
 */
void GoalMessage::setEndDate(const DateTime endDate)
{
    Q_D(GoalMessage);
    d->endDate = endDate;
}
/*!
 * Sets the \c type field to \a type.
 *
 * \param type The field value to set.
 */
void GoalMessage::setType(const Goal type)
{
    Q_D(GoalMessage);
    d->type = type;
}
/*!
 * Sets the \c value field to \a value.
 *
 * \param value The field value to set.
 */
void GoalMessage::setValue(const quint32 value)
{
    Q_D(GoalMessage);
    d->value = value;
}
/*!
 * Sets the \c repeat field to \a repeat.
 *
 * \param repeat The field value to set.
 */
void GoalMessage::setRepeat(const bool repeat)
{
    Q_D(GoalMessage);
    d->repeat = repeat;
}
/*!
 * Sets the \c targetValue field to \a targetValue.
 *
 * \param targetValue The field value to set.
 */
void GoalMessage::setTargetValue(const quint32 targetValue)
{
    Q_D(GoalMessage);
    d->targetValue = targetValue;
}
/*!
 * Sets the \c recurrence field to \a recurrence.
 *
 * \param recurrence The field value to set.
 */
void GoalMessage::setRecurrence(const GoalRecurrence recurrence)
{
    Q_D(GoalMessage);
    d->recurrence = recurrence;
}
/*!
 * Sets the \c recurrenceValue field to \a recurrenceValue.
 *
 * \param recurrenceValue The field value to set.
 */
void GoalMessage::setRecurrenceValue(const quint16 recurrenceValue)
{
    Q_D(GoalMessage);
    d->recurrenceValue = recurrenceValue;
}
/*!
 * Sets the \c enabled field to \a enabled.
 *
 * \param enabled The field value to set.
 */
void GoalMessage::setEnabled(const bool enabled)
{
    Q_D(GoalMessage);
    d->enabled = enabled;
}
/*!
 * Sets the \c source field to \a source.
 *
 * \param source The field value to set.
 */
void GoalMessage::setSource(const GoalSource source)
{
    Q_D(GoalMessage);
    d->source = source;
}

/// \cond internal

/*!
 * \internal
 *
 * \class GoalMessagePrivate
 *
 * The GoalMessagePrivate class provides private implementation for the GoalMessage.
 *
 * \sa GoalMessage
 */

/*!
 * \internal
 *
 * Constructs a GoalMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
GoalMessagePrivate::GoalMessagePrivate(GoalMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the GoalMessagePrivate object.
 */
GoalMessagePrivate::~GoalMessagePrivate()
{

}

bool GoalMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:goal.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "goal.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:goal.sport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "goal.sport")) return false;
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:goal.subSport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "goal.subSport")) return false;
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:goal.startDate
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "goal.startDate")) return false;
        this->startDate = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:goal.endDate
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "goal.endDate")) return false;
        this->endDate = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:goal.type
        if (!verify(data, baseType, 1, FitBaseType::Enum, "goal.type")) return false;
        this->type = static_cast<Goal>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:goal.value
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "goal.value")) return false;
        this->value = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:goal.repeat
        if (!verify(data, baseType, 0, FitBaseType::Byte, "goal.repeat")) return false;
        this->repeat = static_cast<bool>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:goal.targetValue
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "goal.targetValue")) return false;
        this->targetValue = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 8: // See Profile.xlsx::Messages:goal.recurrence
        if (!verify(data, baseType, 1, FitBaseType::Enum, "goal.recurrence")) return false;
        this->recurrence = static_cast<GoalRecurrence>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:goal.recurrenceValue
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "goal.recurrenceValue")) return false;
        this->recurrenceValue = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:goal.enabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "goal.enabled")) return false;
        this->enabled = static_cast<bool>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:goal.source
        if (!verify(data, baseType, 1, FitBaseType::Enum, "goal.source")) return false;
        this->source = static_cast<GoalSource>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown goal message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
