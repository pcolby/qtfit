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

#include "workoutstepmessage.h"
#include "workoutstepmessage_p.h"

QTFIT_BEGIN_NAMESPACE

WorkoutStepMessage::WorkoutStepMessage() : FitDataMessage(new WorkoutStepMessagePrivate(this))
{

}

MessageIndex WorkoutStepMessage::messageIndex() const
{
    Q_D(const WorkoutStepMessage);
    return d->messageIndex;
}

QString WorkoutStepMessage::wktStepName() const
{
    Q_D(const WorkoutStepMessage);
    return d->wktStepName;
}

WktStepDuration WorkoutStepMessage::durationType() const
{
    Q_D(const WorkoutStepMessage);
    return d->durationType;
}

quint32 WorkoutStepMessage::durationValue() const
{
    Q_D(const WorkoutStepMessage);
    return d->durationValue;
}

WktStepTarget WorkoutStepMessage::targetType() const
{
    Q_D(const WorkoutStepMessage);
    return d->targetType;
}

quint32 WorkoutStepMessage::targetValue() const
{
    Q_D(const WorkoutStepMessage);
    return d->targetValue;
}

quint32 WorkoutStepMessage::customTargetValueLow() const
{
    Q_D(const WorkoutStepMessage);
    return d->customTargetValueLow;
}

quint32 WorkoutStepMessage::customTargetValueHigh() const
{
    Q_D(const WorkoutStepMessage);
    return d->customTargetValueHigh;
}

Intensity WorkoutStepMessage::intensity() const
{
    Q_D(const WorkoutStepMessage);
    return d->intensity;
}

QString WorkoutStepMessage::notes() const
{
    Q_D(const WorkoutStepMessage);
    return d->notes;
}

WorkoutEquipment WorkoutStepMessage::equipment() const
{
    Q_D(const WorkoutStepMessage);
    return d->equipment;
}

ExerciseCategory WorkoutStepMessage::exerciseCategory() const
{
    Q_D(const WorkoutStepMessage);
    return d->exerciseCategory;
}

quint16 WorkoutStepMessage::exerciseName() const
{
    Q_D(const WorkoutStepMessage);
    return d->exerciseName;
}

quint16 WorkoutStepMessage::exerciseWeight() const
{
    Q_D(const WorkoutStepMessage);
    return d->exerciseWeight;
}

FitBaseUnit WorkoutStepMessage::weightDisplayUnit() const
{
    Q_D(const WorkoutStepMessage);
    return d->weightDisplayUnit;
}

void WorkoutStepMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(WorkoutStepMessage);
    d->messageIndex = messageIndex;
}
void WorkoutStepMessage::setWktStepName(const QString wktStepName)
{
    Q_D(WorkoutStepMessage);
    d->wktStepName = wktStepName;
}
void WorkoutStepMessage::setDurationType(const WktStepDuration durationType)
{
    Q_D(WorkoutStepMessage);
    d->durationType = durationType;
}
void WorkoutStepMessage::setDurationValue(const quint32 durationValue)
{
    Q_D(WorkoutStepMessage);
    d->durationValue = durationValue;
}
void WorkoutStepMessage::setTargetType(const WktStepTarget targetType)
{
    Q_D(WorkoutStepMessage);
    d->targetType = targetType;
}
void WorkoutStepMessage::setTargetValue(const quint32 targetValue)
{
    Q_D(WorkoutStepMessage);
    d->targetValue = targetValue;
}
void WorkoutStepMessage::setCustomTargetValueLow(const quint32 customTargetValueLow)
{
    Q_D(WorkoutStepMessage);
    d->customTargetValueLow = customTargetValueLow;
}
void WorkoutStepMessage::setCustomTargetValueHigh(const quint32 customTargetValueHigh)
{
    Q_D(WorkoutStepMessage);
    d->customTargetValueHigh = customTargetValueHigh;
}
void WorkoutStepMessage::setIntensity(const Intensity intensity)
{
    Q_D(WorkoutStepMessage);
    d->intensity = intensity;
}
void WorkoutStepMessage::setNotes(const QString notes)
{
    Q_D(WorkoutStepMessage);
    d->notes = notes;
}
void WorkoutStepMessage::setEquipment(const WorkoutEquipment equipment)
{
    Q_D(WorkoutStepMessage);
    d->equipment = equipment;
}
void WorkoutStepMessage::setExerciseCategory(const ExerciseCategory exerciseCategory)
{
    Q_D(WorkoutStepMessage);
    d->exerciseCategory = exerciseCategory;
}
void WorkoutStepMessage::setExerciseName(const quint16 exerciseName)
{
    Q_D(WorkoutStepMessage);
    d->exerciseName = exerciseName;
}
void WorkoutStepMessage::setExerciseWeight(const quint16 exerciseWeight)
{
    Q_D(WorkoutStepMessage);
    d->exerciseWeight = exerciseWeight;
}
void WorkoutStepMessage::setWeightDisplayUnit(const FitBaseUnit weightDisplayUnit)
{
    Q_D(WorkoutStepMessage);
    d->weightDisplayUnit = weightDisplayUnit;
}

WorkoutStepMessagePrivate::WorkoutStepMessagePrivate(WorkoutStepMessage * const q)
  : FitDataMessagePrivate(q)
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

WorkoutStepMessagePrivate::~WorkoutStepMessagePrivate()
{

}

/// @todo Generate implementation.
bool WorkoutStepMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
