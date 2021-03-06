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
