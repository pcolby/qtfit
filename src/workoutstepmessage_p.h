// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WorkoutStepMessagePrivate class.
 */
#ifndef QTFIT_WORKOUTSTEPMESSAGE_P_H
#define QTFIT_WORKOUTSTEPMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class WorkoutStepMessage;

class WorkoutStepMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The WorkoutStepMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The WorkoutStepMessage FIT message's wktStepName field.
     */
    QString wktStepName;

    /*!
     * The WorkoutStepMessage FIT message's durationType field.
     */
    WktStepDuration durationType;

    /*!
     * The WorkoutStepMessage FIT message's durationValue field.
     */
    quint32 durationValue;

    /*!
     * The WorkoutStepMessage FIT message's targetType field.
     */
    WktStepTarget targetType;

    /*!
     * The WorkoutStepMessage FIT message's targetValue field.
     */
    quint32 targetValue;

    /*!
     * The WorkoutStepMessage FIT message's customTargetValueLow field.
     */
    quint32 customTargetValueLow;

    /*!
     * The WorkoutStepMessage FIT message's customTargetValueHigh field.
     */
    quint32 customTargetValueHigh;

    /*!
     * The WorkoutStepMessage FIT message's intensity field.
     */
    Intensity intensity;

    /*!
     * The WorkoutStepMessage FIT message's notes field.
     */
    QString notes;

    /*!
     * The WorkoutStepMessage FIT message's equipment field.
     */
    WorkoutEquipment equipment;

    /*!
     * The WorkoutStepMessage FIT message's exerciseCategory field.
     */
    ExerciseCategory exerciseCategory;

    /*!
     * The WorkoutStepMessage FIT message's exerciseName field.
     */
    quint16 exerciseName;

    /*!
     * The WorkoutStepMessage FIT message's exerciseWeight field.
     */
    quint16 exerciseWeight;

    /*!
     * The WorkoutStepMessage FIT message's weightDisplayUnit field.
     */
    FitBaseUnit weightDisplayUnit;

    WorkoutStepMessagePrivate() = delete;
    explicit WorkoutStepMessagePrivate(WorkoutStepMessage * const q);
    virtual ~WorkoutStepMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(WorkoutStepMessage)
    Q_DISABLE_COPY(WorkoutStepMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WORKOUTSTEPMESSAGE_P_H
