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
