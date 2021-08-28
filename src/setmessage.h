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
 * Declares the SetMessage class.
 */

#ifndef QTFIT_SETMESSAGE_H
#define QTFIT_SETMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SetMessagePrivate;

class QTFIT_EXPORT SetMessage : public AbstractDataMessage {

public:
    SetMessage();
    ~SetMessage();

    DateTime timestamp() const;
    quint32 duration() const;
    quint16 repetitions() const;
    quint16 weight() const;
    SetType setType() const;
    DateTime startTime() const;
    ExerciseCategory category() const;
    quint16 categorySubtype() const;
    FitBaseUnit weightDisplayUnit() const;
    MessageIndex messageIndex() const;
    MessageIndex wktStepIndex() const;

    void setTimestamp(const DateTime timestamp);
    void setDuration(const quint32 duration);
    void setRepetitions(const quint16 repetitions);
    void setWeight(const quint16 weight);
    void setSetType(const SetType setType);
    void setStartTime(const DateTime startTime);
    void setCategory(const ExerciseCategory category);
    void setCategorySubtype(const quint16 categorySubtype);
    void setWeightDisplayUnit(const FitBaseUnit weightDisplayUnit);
    void setMessageIndex(const MessageIndex messageIndex);
    void setWktStepIndex(const MessageIndex wktStepIndex);

protected:
    /// \cond internal
    explicit SetMessage(SetMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SetMessage)
  //Q_DISABLE_COPY(SetMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SETMESSAGE_H
