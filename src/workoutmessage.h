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
    /// @cond internal
    explicit WorkoutMessage(WorkoutMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(WorkoutMessage)
  //Q_DISABLE_COPY(WorkoutMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WORKOUTMESSAGE_H
