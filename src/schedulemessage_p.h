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
