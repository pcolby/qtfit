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
 * Declares the SetMessagePrivate class.
 */
#ifndef QTFIT_SETMESSAGE_P_H
#define QTFIT_SETMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SetMessage;

class SetMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SetMessage FIT message's timestamp field.
     *
     * Timestamp of the set
     */
    DateTime timestamp;

    /*!
     * The SetMessage FIT message's duration field.
     */
    quint32 duration;

    /*!
     * The SetMessage FIT message's repetitions field.
     *
     * # of repitions of the movement
     */
    quint16 repetitions;

    /*!
     * The SetMessage FIT message's weight field.
     *
     * Amount of weight applied for the set
     */
    quint16 weight;

    /*!
     * The SetMessage FIT message's setType field.
     */
    SetType setType;

    /*!
     * The SetMessage FIT message's startTime field.
     *
     * Start time of the set
     */
    DateTime startTime;

    /*!
     * The SetMessage FIT message's category field.
     */
    ExerciseCategory category;

    /*!
     * The SetMessage FIT message's categorySubtype field.
     *
     * Based on the associated category, see [category]_exercise_names
     */
    quint16 categorySubtype;

    /*!
     * The SetMessage FIT message's weightDisplayUnit field.
     */
    FitBaseUnit weightDisplayUnit;

    /*!
     * The SetMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The SetMessage FIT message's wktStepIndex field.
     */
    MessageIndex wktStepIndex;

    SetMessagePrivate() = delete;
    explicit SetMessagePrivate(SetMessage * const q);
    virtual ~SetMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SetMessage)
    Q_DISABLE_COPY(SetMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SETMESSAGE_P_H
