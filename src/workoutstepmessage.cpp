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
 * Defines the WorkoutStepMessage, and WorkoutStepMessagePrivate classes.
 */

#include <qtfit/workoutstepmessage.h>
#include "workoutstepmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class WorkoutStepMessage
 *
 * The WorkoutStepMessage class represents a FIT WorkoutStepMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a WorkoutStepMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
WorkoutStepMessage::WorkoutStepMessage() : AbstractDataMessage(new WorkoutStepMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a WorkoutStepMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
WorkoutStepMessage::WorkoutStepMessage(WorkoutStepMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the WorkoutStepMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex WorkoutStepMessage::messageIndex() const
{
    Q_D(const WorkoutStepMessage);
    return d->messageIndex;
}

/*!
 * Returns the WorkoutStepMessage data message's \c wktStepName field's current value.
 *
 * \return the \c wktStepName field value.
 */
QString WorkoutStepMessage::wktStepName() const
{
    Q_D(const WorkoutStepMessage);
    return d->wktStepName;
}

/*!
 * Returns the WorkoutStepMessage data message's \c durationType field's current value.
 *
 * \return the \c durationType field value.
 */
WktStepDuration WorkoutStepMessage::durationType() const
{
    Q_D(const WorkoutStepMessage);
    return d->durationType;
}

/*!
 * Returns the WorkoutStepMessage data message's \c durationValue field's current value.
 *
 * \return the \c durationValue field value.
 */
quint32 WorkoutStepMessage::durationValue() const
{
    Q_D(const WorkoutStepMessage);
    return d->durationValue;
}

/*!
 * Returns the WorkoutStepMessage data message's \c targetType field's current value.
 *
 * \return the \c targetType field value.
 */
WktStepTarget WorkoutStepMessage::targetType() const
{
    Q_D(const WorkoutStepMessage);
    return d->targetType;
}

/*!
 * Returns the WorkoutStepMessage data message's \c targetValue field's current value.
 *
 * \return the \c targetValue field value.
 */
quint32 WorkoutStepMessage::targetValue() const
{
    Q_D(const WorkoutStepMessage);
    return d->targetValue;
}

/*!
 * Returns the WorkoutStepMessage data message's \c customTargetValueLow field's current value.
 *
 * \return the \c customTargetValueLow field value.
 */
quint32 WorkoutStepMessage::customTargetValueLow() const
{
    Q_D(const WorkoutStepMessage);
    return d->customTargetValueLow;
}

/*!
 * Returns the WorkoutStepMessage data message's \c customTargetValueHigh field's current value.
 *
 * \return the \c customTargetValueHigh field value.
 */
quint32 WorkoutStepMessage::customTargetValueHigh() const
{
    Q_D(const WorkoutStepMessage);
    return d->customTargetValueHigh;
}

/*!
 * Returns the WorkoutStepMessage data message's \c intensity field's current value.
 *
 * \return the \c intensity field value.
 */
Intensity WorkoutStepMessage::intensity() const
{
    Q_D(const WorkoutStepMessage);
    return d->intensity;
}

/*!
 * Returns the WorkoutStepMessage data message's \c notes field's current value.
 *
 * \return the \c notes field value.
 */
QString WorkoutStepMessage::notes() const
{
    Q_D(const WorkoutStepMessage);
    return d->notes;
}

/*!
 * Returns the WorkoutStepMessage data message's \c equipment field's current value.
 *
 * \return the \c equipment field value.
 */
WorkoutEquipment WorkoutStepMessage::equipment() const
{
    Q_D(const WorkoutStepMessage);
    return d->equipment;
}

/*!
 * Returns the WorkoutStepMessage data message's \c exerciseCategory field's current value.
 *
 * \return the \c exerciseCategory field value.
 */
ExerciseCategory WorkoutStepMessage::exerciseCategory() const
{
    Q_D(const WorkoutStepMessage);
    return d->exerciseCategory;
}

/*!
 * Returns the WorkoutStepMessage data message's \c exerciseName field's current value.
 *
 * \return the \c exerciseName field value.
 */
quint16 WorkoutStepMessage::exerciseName() const
{
    Q_D(const WorkoutStepMessage);
    return d->exerciseName;
}

/*!
 * Returns the WorkoutStepMessage data message's \c exerciseWeight field's current value.
 *
 * \return the \c exerciseWeight field value.
 */
quint16 WorkoutStepMessage::exerciseWeight() const
{
    Q_D(const WorkoutStepMessage);
    return d->exerciseWeight;
}

/*!
 * Returns the WorkoutStepMessage data message's \c weightDisplayUnit field's current value.
 *
 * \return the \c weightDisplayUnit field value.
 */
FitBaseUnit WorkoutStepMessage::weightDisplayUnit() const
{
    Q_D(const WorkoutStepMessage);
    return d->weightDisplayUnit;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void WorkoutStepMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(WorkoutStepMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c wktStepName field to \a wktStepName.
 *
 * \param wktStepName The field value to set.
 */
void WorkoutStepMessage::setWktStepName(const QString wktStepName)
{
    Q_D(WorkoutStepMessage);
    d->wktStepName = wktStepName;
}
/*!
 * Sets the \c durationType field to \a durationType.
 *
 * \param durationType The field value to set.
 */
void WorkoutStepMessage::setDurationType(const WktStepDuration durationType)
{
    Q_D(WorkoutStepMessage);
    d->durationType = durationType;
}
/*!
 * Sets the \c durationValue field to \a durationValue.
 *
 * \param durationValue The field value to set.
 */
void WorkoutStepMessage::setDurationValue(const quint32 durationValue)
{
    Q_D(WorkoutStepMessage);
    d->durationValue = durationValue;
}
/*!
 * Sets the \c targetType field to \a targetType.
 *
 * \param targetType The field value to set.
 */
void WorkoutStepMessage::setTargetType(const WktStepTarget targetType)
{
    Q_D(WorkoutStepMessage);
    d->targetType = targetType;
}
/*!
 * Sets the \c targetValue field to \a targetValue.
 *
 * \param targetValue The field value to set.
 */
void WorkoutStepMessage::setTargetValue(const quint32 targetValue)
{
    Q_D(WorkoutStepMessage);
    d->targetValue = targetValue;
}
/*!
 * Sets the \c customTargetValueLow field to \a customTargetValueLow.
 *
 * \param customTargetValueLow The field value to set.
 */
void WorkoutStepMessage::setCustomTargetValueLow(const quint32 customTargetValueLow)
{
    Q_D(WorkoutStepMessage);
    d->customTargetValueLow = customTargetValueLow;
}
/*!
 * Sets the \c customTargetValueHigh field to \a customTargetValueHigh.
 *
 * \param customTargetValueHigh The field value to set.
 */
void WorkoutStepMessage::setCustomTargetValueHigh(const quint32 customTargetValueHigh)
{
    Q_D(WorkoutStepMessage);
    d->customTargetValueHigh = customTargetValueHigh;
}
/*!
 * Sets the \c intensity field to \a intensity.
 *
 * \param intensity The field value to set.
 */
void WorkoutStepMessage::setIntensity(const Intensity intensity)
{
    Q_D(WorkoutStepMessage);
    d->intensity = intensity;
}
/*!
 * Sets the \c notes field to \a notes.
 *
 * \param notes The field value to set.
 */
void WorkoutStepMessage::setNotes(const QString notes)
{
    Q_D(WorkoutStepMessage);
    d->notes = notes;
}
/*!
 * Sets the \c equipment field to \a equipment.
 *
 * \param equipment The field value to set.
 */
void WorkoutStepMessage::setEquipment(const WorkoutEquipment equipment)
{
    Q_D(WorkoutStepMessage);
    d->equipment = equipment;
}
/*!
 * Sets the \c exerciseCategory field to \a exerciseCategory.
 *
 * \param exerciseCategory The field value to set.
 */
void WorkoutStepMessage::setExerciseCategory(const ExerciseCategory exerciseCategory)
{
    Q_D(WorkoutStepMessage);
    d->exerciseCategory = exerciseCategory;
}
/*!
 * Sets the \c exerciseName field to \a exerciseName.
 *
 * \param exerciseName The field value to set.
 */
void WorkoutStepMessage::setExerciseName(const quint16 exerciseName)
{
    Q_D(WorkoutStepMessage);
    d->exerciseName = exerciseName;
}
/*!
 * Sets the \c exerciseWeight field to \a exerciseWeight.
 *
 * \param exerciseWeight The field value to set.
 */
void WorkoutStepMessage::setExerciseWeight(const quint16 exerciseWeight)
{
    Q_D(WorkoutStepMessage);
    d->exerciseWeight = exerciseWeight;
}
/*!
 * Sets the \c weightDisplayUnit field to \a weightDisplayUnit.
 *
 * \param weightDisplayUnit The field value to set.
 */
void WorkoutStepMessage::setWeightDisplayUnit(const FitBaseUnit weightDisplayUnit)
{
    Q_D(WorkoutStepMessage);
    d->weightDisplayUnit = weightDisplayUnit;
}

/// \cond internal

/*!
 * \internal
 *
 * \class WorkoutStepMessagePrivate
 *
 * The WorkoutStepMessagePrivate class provides private implementation for the WorkoutStepMessage.
 *
 * \sa WorkoutStepMessage
 */

/*!
 * \internal
 *
 * Constructs a WorkoutStepMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
WorkoutStepMessagePrivate::WorkoutStepMessagePrivate(WorkoutStepMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , durationType(static_cast<WktStepDuration>(-1))
  , durationValue(0xFFFFFFFF)
  , targetType(static_cast<WktStepTarget>(-1))
  , targetValue(0xFFFFFFFF)
  , customTargetValueLow(0xFFFFFFFF)
  , customTargetValueHigh(0xFFFFFFFF)
  , intensity(static_cast<Intensity>(-1))
  , equipment(static_cast<WorkoutEquipment>(-1))
  , exerciseCategory(static_cast<ExerciseCategory>(-1))
  , exerciseName(0xFFFF)
  , exerciseWeight(0xFFFF)
  , weightDisplayUnit(static_cast<FitBaseUnit>(-1))
{
    globalMessageNumber = MesgNum::WorkoutStep;
}

/*!
 * \internal
 *
 * Destroys the WorkoutStepMessagePrivate object.
 */
WorkoutStepMessagePrivate::~WorkoutStepMessagePrivate()
{

}

bool WorkoutStepMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:workout_step.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "workout_step.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:workout_step.wktStepName
        if (!verify(data, baseType, 1, FitBaseType::String, "workout_step.wktStepName")) return false;
        this->wktStepName = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:workout_step.durationType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "workout_step.durationType")) return false;
        this->durationType = static_cast<WktStepDuration>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:workout_step.durationValue
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "workout_step.durationValue")) return false;
        this->durationValue = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:workout_step.targetType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "workout_step.targetType")) return false;
        this->targetType = static_cast<WktStepTarget>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:workout_step.targetValue
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "workout_step.targetValue")) return false;
        this->targetValue = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:workout_step.customTargetValueLow
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "workout_step.customTargetValueLow")) return false;
        this->customTargetValueLow = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:workout_step.customTargetValueHigh
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "workout_step.customTargetValueHigh")) return false;
        this->customTargetValueHigh = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:workout_step.intensity
        if (!verify(data, baseType, 1, FitBaseType::Enum, "workout_step.intensity")) return false;
        this->intensity = static_cast<Intensity>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:workout_step.notes
        if (!verify(data, baseType, 1, FitBaseType::String, "workout_step.notes")) return false;
        this->notes = QString::fromUtf8(data);
        break;
    case 9: // See Profile.xlsx::Messages:workout_step.equipment
        if (!verify(data, baseType, 1, FitBaseType::Enum, "workout_step.equipment")) return false;
        this->equipment = static_cast<WorkoutEquipment>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:workout_step.exerciseCategory
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "workout_step.exerciseCategory")) return false;
        this->exerciseCategory = static_cast<ExerciseCategory>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 11: // See Profile.xlsx::Messages:workout_step.exerciseName
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "workout_step.exerciseName")) return false;
        this->exerciseName = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 12: // See Profile.xlsx::Messages:workout_step.exerciseWeight
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "workout_step.exerciseWeight")) return false;
        this->exerciseWeight = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 13: // See Profile.xlsx::Messages:workout_step.weightDisplayUnit
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "workout_step.weightDisplayUnit")) return false;
        this->weightDisplayUnit = static_cast<FitBaseUnit>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "ignoring unknown workout_step message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
