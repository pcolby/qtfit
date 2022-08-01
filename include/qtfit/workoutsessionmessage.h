// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WorkoutSessionMessage class.
 */

#ifndef QTFIT_WORKOUTSESSIONMESSAGE_H
#define QTFIT_WORKOUTSESSIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class WorkoutSessionMessagePrivate;

class QTFIT_EXPORT WorkoutSessionMessage : public AbstractDataMessage {

public:
    WorkoutSessionMessage();
    ~WorkoutSessionMessage();

    MessageIndex messageIndex() const;
    Sport sport() const;
    SubSport subSport() const;
    quint16 numValidSteps() const;
    quint16 firstStepIndex() const;
    quint16 poolLength() const;
    DisplayMeasure poolLengthUnit() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setSport(const Sport sport);
    void setSubSport(const SubSport subSport);
    void setNumValidSteps(const quint16 numValidSteps);
    void setFirstStepIndex(const quint16 firstStepIndex);
    void setPoolLength(const quint16 poolLength);
    void setPoolLengthUnit(const DisplayMeasure poolLengthUnit);

protected:
    /// \cond internal
    explicit WorkoutSessionMessage(WorkoutSessionMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(WorkoutSessionMessage)
  //Q_DISABLE_COPY(WorkoutSessionMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WORKOUTSESSIONMESSAGE_H
