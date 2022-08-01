// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WorkoutSessionMessagePrivate class.
 */
#ifndef QTFIT_WORKOUTSESSIONMESSAGE_P_H
#define QTFIT_WORKOUTSESSIONMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class WorkoutSessionMessage;

class WorkoutSessionMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The WorkoutSessionMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The WorkoutSessionMessage FIT message's sport field.
     */
    Sport sport;

    /*!
     * The WorkoutSessionMessage FIT message's subSport field.
     */
    SubSport subSport;

    /*!
     * The WorkoutSessionMessage FIT message's numValidSteps field.
     */
    quint16 numValidSteps;

    /*!
     * The WorkoutSessionMessage FIT message's firstStepIndex field.
     */
    quint16 firstStepIndex;

    /*!
     * The WorkoutSessionMessage FIT message's poolLength field.
     */
    quint16 poolLength;

    /*!
     * The WorkoutSessionMessage FIT message's poolLengthUnit field.
     */
    DisplayMeasure poolLengthUnit;

    WorkoutSessionMessagePrivate() = delete;
    explicit WorkoutSessionMessagePrivate(WorkoutSessionMessage * const q);
    virtual ~WorkoutSessionMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(WorkoutSessionMessage)
    Q_DISABLE_COPY(WorkoutSessionMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WORKOUTSESSIONMESSAGE_P_H
