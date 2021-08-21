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

#include <QDebug>
#include <QtEndian>

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

bool WorkoutStepMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:workout_step.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout_step.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:workout_step.wktStepName
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.wktStepName has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout_step.wktStepName size is" << data.size() << "but should be" << 1;
            return false;
        }
        wktStepName = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:workout_step.durationType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.durationType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout_step.durationType size is" << data.size() << "but should be" << 1;
            return false;
        }
        durationType = static_cast<WktStepDuration>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:workout_step.durationValue
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.durationValue has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "workout_step.durationValue size is" << data.size() << "but should be" << 4;
            return false;
        }
        durationValue = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:workout_step.targetType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.targetType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout_step.targetType size is" << data.size() << "but should be" << 1;
            return false;
        }
        targetType = static_cast<WktStepTarget>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:workout_step.targetValue
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.targetValue has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "workout_step.targetValue size is" << data.size() << "but should be" << 4;
            return false;
        }
        targetValue = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:workout_step.customTargetValueLow
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.customTargetValueLow has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "workout_step.customTargetValueLow size is" << data.size() << "but should be" << 4;
            return false;
        }
        customTargetValueLow = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:workout_step.customTargetValueHigh
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.customTargetValueHigh has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "workout_step.customTargetValueHigh size is" << data.size() << "but should be" << 4;
            return false;
        }
        customTargetValueHigh = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:workout_step.intensity
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.intensity has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout_step.intensity size is" << data.size() << "but should be" << 1;
            return false;
        }
        intensity = static_cast<Intensity>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:workout_step.notes
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.notes has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout_step.notes size is" << data.size() << "but should be" << 1;
            return false;
        }
        notes = QString::fromUtf8(data);
        break;
    case 9: // See Profile.xlsx::Messages:workout_step.equipment
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.equipment has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout_step.equipment size is" << data.size() << "but should be" << 1;
            return false;
        }
        equipment = static_cast<WorkoutEquipment>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:workout_step.exerciseCategory
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.exerciseCategory has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout_step.exerciseCategory size is" << data.size() << "but should be" << 2;
            return false;
        }
        exerciseCategory = static_cast<ExerciseCategory>(bigEndian ? qFromBigEndian<ExerciseCategory>(data) : qFromLittleEndian<ExerciseCategory>(data));
        break;
    case 11: // See Profile.xlsx::Messages:workout_step.exerciseName
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.exerciseName has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout_step.exerciseName size is" << data.size() << "but should be" << 2;
            return false;
        }
        exerciseName = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 12: // See Profile.xlsx::Messages:workout_step.exerciseWeight
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.exerciseWeight has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout_step.exerciseWeight size is" << data.size() << "but should be" << 2;
            return false;
        }
        exerciseWeight = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 13: // See Profile.xlsx::Messages:workout_step.weightDisplayUnit
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_step.weightDisplayUnit has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout_step.weightDisplayUnit size is" << data.size() << "but should be" << 2;
            return false;
        }
        weightDisplayUnit = static_cast<FitBaseUnit>(bigEndian ? qFromBigEndian<FitBaseUnit>(data) : qFromLittleEndian<FitBaseUnit>(data));
        break;
    default:
        qWarning() << "unknown workout_step message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
