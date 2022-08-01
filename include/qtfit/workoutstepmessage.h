// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WorkoutStepMessage class.
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
