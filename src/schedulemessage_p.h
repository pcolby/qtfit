// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ScheduleMessagePrivate class.
 */
#ifndef QTFIT_SCHEDULEMESSAGE_P_H
#define QTFIT_SCHEDULEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ScheduleMessage;

class ScheduleMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ScheduleMessage FIT message's manufacturer field.
     *
     * Corresponds to file_id of scheduled workout / course.
     */
    Manufacturer manufacturer;

    /*!
     * The ScheduleMessage FIT message's product field.
     *
     * Corresponds to file_id of scheduled workout / course.
     */
    quint16 product;

    /*!
     * The ScheduleMessage FIT message's serialNumber field.
     *
     * Corresponds to file_id of scheduled workout / course.
     */
    quint32z serialNumber;

    /*!
     * The ScheduleMessage FIT message's timeCreated field.
     *
     * Corresponds to file_id of scheduled workout / course.
     */
    DateTime timeCreated;

    /*!
     * The ScheduleMessage FIT message's completed field.
     *
     * TRUE if this activity has been started
     */
    bool completed;

    /*!
     * The ScheduleMessage FIT message's type field.
     */
    Schedule type;

    /*!
     * The ScheduleMessage FIT message's scheduledTime field.
     */
    LocalDateTime scheduledTime;

    ScheduleMessagePrivate() = delete;
    explicit ScheduleMessagePrivate(ScheduleMessage * const q);
    virtual ~ScheduleMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ScheduleMessage)
    Q_DISABLE_COPY(ScheduleMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SCHEDULEMESSAGE_P_H
