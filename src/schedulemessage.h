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
