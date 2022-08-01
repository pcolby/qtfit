// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ExerciseTitleMessage class.
 */

#ifndef QTFIT_EXERCISETITLEMESSAGE_H
#define QTFIT_EXERCISETITLEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ExerciseTitleMessagePrivate;

class QTFIT_EXPORT ExerciseTitleMessage : public AbstractDataMessage {

public:
    ExerciseTitleMessage();
    ~ExerciseTitleMessage();

    MessageIndex messageIndex() const;
    ExerciseCategory exerciseCategory() const;
    quint16 exerciseName() const;
    QString wktStepName() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setExerciseCategory(const ExerciseCategory exerciseCategory);
    void setExerciseName(const quint16 exerciseName);
    void setWktStepName(const QString wktStepName);

protected:
    /// \cond internal
    explicit ExerciseTitleMessage(ExerciseTitleMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ExerciseTitleMessage)
  //Q_DISABLE_COPY(ExerciseTitleMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EXERCISETITLEMESSAGE_H
