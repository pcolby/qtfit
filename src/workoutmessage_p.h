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
