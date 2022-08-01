// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
