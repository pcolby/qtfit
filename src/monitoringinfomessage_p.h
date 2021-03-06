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
 * Declares the MonitoringInfoMessagePrivate class.
 */
#ifndef QTFIT_MONITORINGINFOMESSAGE_P_H
#define QTFIT_MONITORINGINFOMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class MonitoringInfoMessage;

class MonitoringInfoMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The MonitoringInfoMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The MonitoringInfoMessage FIT message's localTimestamp field.
     *
     * Use to convert activity timestamps to local time if device does not support time zone and
     * daylight savings time correction.
     */
    LocalDateTime localTimestamp;

    /*!
     * The MonitoringInfoMessage FIT message's activityType field.
     */
    ActivityType activityType;

    /*!
     * The MonitoringInfoMessage FIT message's cyclesToDistance field.
     *
     * Indexed by activity_type
     */
    quint16 cyclesToDistance;

    /*!
     * The MonitoringInfoMessage FIT message's cyclesToCalories field.
     *
     * Indexed by activity_type
     */
    quint16 cyclesToCalories;

    /*!
     * The MonitoringInfoMessage FIT message's restingMetabolicRate field.
     */
    quint16 restingMetabolicRate;

    MonitoringInfoMessagePrivate() = delete;
    explicit MonitoringInfoMessagePrivate(MonitoringInfoMessage * const q);
    virtual ~MonitoringInfoMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(MonitoringInfoMessage)
    Q_DISABLE_COPY(MonitoringInfoMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MONITORINGINFOMESSAGE_P_H
