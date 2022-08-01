// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
