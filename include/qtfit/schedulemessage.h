// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ScheduleMessage class.
 */

#ifndef QTFIT_SCHEDULEMESSAGE_H
#define QTFIT_SCHEDULEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ScheduleMessagePrivate;

class QTFIT_EXPORT ScheduleMessage : public AbstractDataMessage {

public:
    ScheduleMessage();
    ~ScheduleMessage();

    Manufacturer manufacturer() const;
    quint16 product() const;
    quint32z serialNumber() const;
    DateTime timeCreated() const;
    bool completed() const;
    Schedule type() const;
    LocalDateTime scheduledTime() const;

    void setManufacturer(const Manufacturer manufacturer);
    void setProduct(const quint16 product);
    void setSerialNumber(const quint32z serialNumber);
    void setTimeCreated(const DateTime timeCreated);
    void setCompleted(const bool completed);
    void setType(const Schedule type);
    void setScheduledTime(const LocalDateTime scheduledTime);

protected:
    /// \cond internal
    explicit ScheduleMessage(ScheduleMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ScheduleMessage)
  //Q_DISABLE_COPY(ScheduleMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SCHEDULEMESSAGE_H
