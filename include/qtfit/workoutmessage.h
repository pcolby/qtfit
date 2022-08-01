// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WorkoutMessage class.
 */

#ifndef QTFIT_WORKOUTMESSAGE_H
#define QTFIT_WORKOUTMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class WorkoutMessagePrivate;

class QTFIT_EXPORT WorkoutMessage : public AbstractDataMessage {

public:
    WorkoutMessage();
    ~WorkoutMessage();

    Sport sport() const;
    WorkoutCapabilities capabilities() const;
    quint16 numValidSteps() const;
    QString wktName() const;
    SubSport subSport() const;
    quint16 poolLength() const;
    DisplayMeasure poolLengthUnit() const;

    void setSport(const Sport sport);
    void setCapabilities(const WorkoutCapabilities capabilities);
    void setNumValidSteps(const quint16 numValidSteps);
    void setWktName(const QString wktName);
    void setSubSport(const SubSport subSport);
    void setPoolLength(const quint16 poolLength);
    void setPoolLengthUnit(const DisplayMeasure poolLengthUnit);

protected:
    /// \cond internal
    explicit WorkoutMessage(WorkoutMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(WorkoutMessage)
  //Q_DISABLE_COPY(WorkoutMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WORKOUTMESSAGE_H
