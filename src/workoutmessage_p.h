// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WorkoutMessagePrivate class.
 */
#ifndef QTFIT_WORKOUTMESSAGE_P_H
#define QTFIT_WORKOUTMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class WorkoutMessage;

class WorkoutMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The WorkoutMessage FIT message's sport field.
     */
    Sport sport;

    /*!
     * The WorkoutMessage FIT message's capabilities field.
     */
    WorkoutCapabilities capabilities;

    /*!
     * The WorkoutMessage FIT message's numValidSteps field.
     *
     * number of valid steps
     */
    quint16 numValidSteps;

    /*!
     * The WorkoutMessage FIT message's wktName field.
     */
    QString wktName;

    /*!
     * The WorkoutMessage FIT message's subSport field.
     */
    SubSport subSport;

    /*!
     * The WorkoutMessage FIT message's poolLength field.
     */
    quint16 poolLength;

    /*!
     * The WorkoutMessage FIT message's poolLengthUnit field.
     */
    DisplayMeasure poolLengthUnit;

    WorkoutMessagePrivate() = delete;
    explicit WorkoutMessagePrivate(WorkoutMessage * const q);
    virtual ~WorkoutMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(WorkoutMessage)
    Q_DISABLE_COPY(WorkoutMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WORKOUTMESSAGE_P_H
