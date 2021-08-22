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

#ifndef QTFIT_WORKOUTSTEPMESSAGE_H
#define QTFIT_WORKOUTSTEPMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class WorkoutStepMessagePrivate;

class QTFIT_EXPORT WorkoutStepMessage : public AbstractDataMessage {

public:
    WorkoutStepMessage();
    ~WorkoutStepMessage();

    MessageIndex messageIndex() const;
    QString wktStepName() const;
    WktStepDuration durationType() const;
    quint32 durationValue() const;
    WktStepTarget targetType() const;
    quint32 targetValue() const;
    quint32 customTargetValueLow() const;
    quint32 customTargetValueHigh() const;
    Intensity intensity() const;
    QString notes() const;
    WorkoutEquipment equipment() const;
    ExerciseCategory exerciseCategory() const;
    quint16 exerciseName() const;
    quint16 exerciseWeight() const;
    FitBaseUnit weightDisplayUnit() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setWktStepName(const QString wktStepName);
    void setDurationType(const WktStepDuration durationType);
    void setDurationValue(const quint32 durationValue);
    void setTargetType(const WktStepTarget targetType);
    void setTargetValue(const quint32 targetValue);
    void setCustomTargetValueLow(const quint32 customTargetValueLow);
    void setCustomTargetValueHigh(const quint32 customTargetValueHigh);
    void setIntensity(const Intensity intensity);
    void setNotes(const QString notes);
    void setEquipment(const WorkoutEquipment equipment);
    void setExerciseCategory(const ExerciseCategory exerciseCategory);
    void setExerciseName(const quint16 exerciseName);
    void setExerciseWeight(const quint16 exerciseWeight);
    void setWeightDisplayUnit(const FitBaseUnit weightDisplayUnit);

protected:
    /// \cond internal
    explicit WorkoutStepMessage(WorkoutStepMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(WorkoutStepMessage)
  //Q_DISABLE_COPY(WorkoutStepMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WORKOUTSTEPMESSAGE_H
