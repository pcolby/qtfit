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
