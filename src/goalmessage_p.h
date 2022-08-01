// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the GoalMessagePrivate class.
 */
#ifndef QTFIT_GOALMESSAGE_P_H
#define QTFIT_GOALMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class GoalMessage;

class GoalMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The GoalMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The GoalMessage FIT message's sport field.
     */
    Sport sport;

    /*!
     * The GoalMessage FIT message's subSport field.
     */
    SubSport subSport;

    /*!
     * The GoalMessage FIT message's startDate field.
     */
    DateTime startDate;

    /*!
     * The GoalMessage FIT message's endDate field.
     */
    DateTime endDate;

    /*!
     * The GoalMessage FIT message's type field.
     */
    Goal type;

    /*!
     * The GoalMessage FIT message's value field.
     */
    quint32 value;

    /*!
     * The GoalMessage FIT message's repeat field.
     */
    bool repeat;

    /*!
     * The GoalMessage FIT message's targetValue field.
     */
    quint32 targetValue;

    /*!
     * The GoalMessage FIT message's recurrence field.
     */
    GoalRecurrence recurrence;

    /*!
     * The GoalMessage FIT message's recurrenceValue field.
     */
    quint16 recurrenceValue;

    /*!
     * The GoalMessage FIT message's enabled field.
     */
    bool enabled;

    /*!
     * The GoalMessage FIT message's source field.
     */
    GoalSource source;

    GoalMessagePrivate() = delete;
    explicit GoalMessagePrivate(GoalMessage * const q);
    virtual ~GoalMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(GoalMessage)
    Q_DISABLE_COPY(GoalMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_GOALMESSAGE_P_H
