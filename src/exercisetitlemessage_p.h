// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ExerciseTitleMessagePrivate class.
 */
#ifndef QTFIT_EXERCISETITLEMESSAGE_P_H
#define QTFIT_EXERCISETITLEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ExerciseTitleMessage;

class ExerciseTitleMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ExerciseTitleMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The ExerciseTitleMessage FIT message's exerciseCategory field.
     */
    ExerciseCategory exerciseCategory;

    /*!
     * The ExerciseTitleMessage FIT message's exerciseName field.
     */
    quint16 exerciseName;

    /*!
     * The ExerciseTitleMessage FIT message's wktStepName field.
     */
    QString wktStepName;

    ExerciseTitleMessagePrivate() = delete;
    explicit ExerciseTitleMessagePrivate(ExerciseTitleMessage * const q);
    virtual ~ExerciseTitleMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ExerciseTitleMessage)
    Q_DISABLE_COPY(ExerciseTitleMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EXERCISETITLEMESSAGE_P_H
