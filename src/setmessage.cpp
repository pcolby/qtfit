// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the SetMessage, and SetMessagePrivate classes.
 */

#include <qtfit/setmessage.h>
#include "setmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class SetMessage
 *
 * The SetMessage class represents a FIT SetMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a SetMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SetMessage::SetMessage() : AbstractDataMessage(new SetMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a SetMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
SetMessage::SetMessage(SetMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the SetMessage data message's \c timestamp field's current value.
 *
 * Timestamp of the set
 *
 * \return the \c timestamp field value.
 */
DateTime SetMessage::timestamp() const
{
    Q_D(const SetMessage);
    return d->timestamp;
}

/*!
 * Returns the SetMessage data message's \c duration field's current value.
 *
 * \return the \c duration field value.
 */
quint32 SetMessage::duration() const
{
    Q_D(const SetMessage);
    return d->duration;
}

/*!
 * Returns the SetMessage data message's \c repetitions field's current value.
 *
 * # of repitions of the movement
 *
 * \return the \c repetitions field value.
 */
quint16 SetMessage::repetitions() const
{
    Q_D(const SetMessage);
    return d->repetitions;
}

/*!
 * Returns the SetMessage data message's \c weight field's current value.
 *
 * Amount of weight applied for the set
 *
 * \return the \c weight field value.
 */
quint16 SetMessage::weight() const
{
    Q_D(const SetMessage);
    return d->weight;
}

/*!
 * Returns the SetMessage data message's \c setType field's current value.
 *
 * \return the \c setType field value.
 */
SetType SetMessage::setType() const
{
    Q_D(const SetMessage);
    return d->setType;
}

/*!
 * Returns the SetMessage data message's \c startTime field's current value.
 *
 * Start time of the set
 *
 * \return the \c startTime field value.
 */
DateTime SetMessage::startTime() const
{
    Q_D(const SetMessage);
    return d->startTime;
}

/*!
 * Returns the SetMessage data message's \c category field's current value.
 *
 * \return the \c category field value.
 */
ExerciseCategory SetMessage::category() const
{
    Q_D(const SetMessage);
    return d->category;
}

/*!
 * Returns the SetMessage data message's \c categorySubtype field's current value.
 *
 * Based on the associated category, see [category]_exercise_names
 *
 * \return the \c categorySubtype field value.
 */
quint16 SetMessage::categorySubtype() const
{
    Q_D(const SetMessage);
    return d->categorySubtype;
}

/*!
 * Returns the SetMessage data message's \c weightDisplayUnit field's current value.
 *
 * \return the \c weightDisplayUnit field value.
 */
FitBaseUnit SetMessage::weightDisplayUnit() const
{
    Q_D(const SetMessage);
    return d->weightDisplayUnit;
}

/*!
 * Returns the SetMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex SetMessage::messageIndex() const
{
    Q_D(const SetMessage);
    return d->messageIndex;
}

/*!
 * Returns the SetMessage data message's \c wktStepIndex field's current value.
 *
 * \return the \c wktStepIndex field value.
 */
MessageIndex SetMessage::wktStepIndex() const
{
    Q_D(const SetMessage);
    return d->wktStepIndex;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void SetMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(SetMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c duration field to \a duration.
 *
 * \param duration The field value to set.
 */
void SetMessage::setDuration(const quint32 duration)
{
    Q_D(SetMessage);
    d->duration = duration;
}
/*!
 * Sets the \c repetitions field to \a repetitions.
 *
 * \param repetitions The field value to set.
 */
void SetMessage::setRepetitions(const quint16 repetitions)
{
    Q_D(SetMessage);
    d->repetitions = repetitions;
}
/*!
 * Sets the \c weight field to \a weight.
 *
 * \param weight The field value to set.
 */
void SetMessage::setWeight(const quint16 weight)
{
    Q_D(SetMessage);
    d->weight = weight;
}
/*!
 * Sets the \c setType field to \a setType.
 *
 * \param setType The field value to set.
 */
void SetMessage::setSetType(const SetType setType)
{
    Q_D(SetMessage);
    d->setType = setType;
}
/*!
 * Sets the \c startTime field to \a startTime.
 *
 * \param startTime The field value to set.
 */
void SetMessage::setStartTime(const DateTime startTime)
{
    Q_D(SetMessage);
    d->startTime = startTime;
}
/*!
 * Sets the \c category field to \a category.
 *
 * \param category The field value to set.
 */
void SetMessage::setCategory(const ExerciseCategory category)
{
    Q_D(SetMessage);
    d->category = category;
}
/*!
 * Sets the \c categorySubtype field to \a categorySubtype.
 *
 * \param categorySubtype The field value to set.
 */
void SetMessage::setCategorySubtype(const quint16 categorySubtype)
{
    Q_D(SetMessage);
    d->categorySubtype = categorySubtype;
}
/*!
 * Sets the \c weightDisplayUnit field to \a weightDisplayUnit.
 *
 * \param weightDisplayUnit The field value to set.
 */
void SetMessage::setWeightDisplayUnit(const FitBaseUnit weightDisplayUnit)
{
    Q_D(SetMessage);
    d->weightDisplayUnit = weightDisplayUnit;
}
/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void SetMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SetMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c wktStepIndex field to \a wktStepIndex.
 *
 * \param wktStepIndex The field value to set.
 */
void SetMessage::setWktStepIndex(const MessageIndex wktStepIndex)
{
    Q_D(SetMessage);
    d->wktStepIndex = wktStepIndex;
}

/// \cond internal

/*!
 * \internal
 *
 * \class SetMessagePrivate
 *
 * The SetMessagePrivate class provides private implementation for the SetMessage.
 *
 * \sa SetMessage
 */

/*!
 * \internal
 *
 * Constructs a SetMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SetMessagePrivate::SetMessagePrivate(SetMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the SetMessagePrivate object.
 */
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
        qWarning() << "ignoring unknown set message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
