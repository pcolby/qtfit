// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the MonitoringMessagePrivate class.
 */
#ifndef QTFIT_MONITORINGMESSAGE_P_H
#define QTFIT_MONITORINGMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class MonitoringMessage;

class MonitoringMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The MonitoringMessage FIT message's timestamp field.
     *
     * Must align to logging interval, for example, time must be 00:00:00 for daily log.
     */
    DateTime timestamp;

    /*!
     * The MonitoringMessage FIT message's deviceIndex field.
     *
     * Associates this data to device_info message.  Not required for file with single device
     * (sensor).
     */
    DeviceIndex deviceIndex;

    /*!
     * The MonitoringMessage FIT message's calories field.
     *
     * Accumulated total calories.  Maintained by MonitoringReader for each activity_type.  See SDK
     * documentation
     */
    quint16 calories;

    /*!
     * The MonitoringMessage FIT message's distance field.
     *
     * Accumulated distance.  Maintained by MonitoringReader for each activity_type.  See SDK
     * documentation.
     */
    quint32 distance;

    /*!
     * The MonitoringMessage FIT message's cycles field.
     *
     * Accumulated cycles.  Maintained by MonitoringReader for each activity_type.  See SDK
     * documentation.
     */
    quint32 cycles;

    /*!
     * The MonitoringMessage FIT message's activeTime field.
     */
    quint32 activeTime;

    /*!
     * The MonitoringMessage FIT message's activityType field.
     */
    ActivityType activityType;

    /*!
     * The MonitoringMessage FIT message's activitySubtype field.
     */
    ActivitySubtype activitySubtype;

    /*!
     * The MonitoringMessage FIT message's activityLevel field.
     */
    ActivityLevel activityLevel;

    /*!
     * The MonitoringMessage FIT message's distance16 field.
     */
    quint16 distance16;

    /*!
     * The MonitoringMessage FIT message's cycles16 field.
     */
    quint16 cycles16;

    /*!
     * The MonitoringMessage FIT message's activeTime16 field.
     */
    quint16 activeTime16;

    /*!
     * The MonitoringMessage FIT message's localTimestamp field.
     *
     * Must align to logging interval, for example, time must be 00:00:00 for daily log.
     */
    LocalDateTime localTimestamp;

    /*!
     * The MonitoringMessage FIT message's temperature field.
     *
     * Avg temperature during the logging interval ended at timestamp
     */
    qint16 temperature;

    /*!
     * The MonitoringMessage FIT message's temperatureMin field.
     *
     * Min temperature during the logging interval ended at timestamp
     */
    qint16 temperatureMin;

    /*!
     * The MonitoringMessage FIT message's temperatureMax field.
     *
     * Max temperature during the logging interval ended at timestamp
     */
    qint16 temperatureMax;

    /*!
     * The MonitoringMessage FIT message's activityTime field.
     *
     * Indexed using minute_activity_level enum
     */
    quint16 activityTime;

    /*!
     * The MonitoringMessage FIT message's activeCalories field.
     */
    quint16 activeCalories;

    /*!
     * The MonitoringMessage FIT message's currentActivityTypeIntensity field.
     *
     * Indicates single type / intensity for duration since last monitoring message.
     */
    quint8 currentActivityTypeIntensity;

    /*!
     * The MonitoringMessage FIT message's timestampMin8 field.
     */
    quint8 timestampMin8;

    /*!
     * The MonitoringMessage FIT message's timestamp16 field.
     */
    quint16 timestamp16;

    /*!
     * The MonitoringMessage FIT message's heartRate field.
     */
    quint8 heartRate;

    /*!
     * The MonitoringMessage FIT message's intensity field.
     */
    quint8 intensity;

    /*!
     * The MonitoringMessage FIT message's durationMin field.
     */
    quint16 durationMin;

    /*!
     * The MonitoringMessage FIT message's duration field.
     */
    quint32 duration;

    /*!
     * The MonitoringMessage FIT message's ascent field.
     */
    quint32 ascent;

    /*!
     * The MonitoringMessage FIT message's descent field.
     */
    quint32 descent;

    /*!
     * The MonitoringMessage FIT message's moderateActivityMinutes field.
     */
    quint16 moderateActivityMinutes;

    /*!
     * The MonitoringMessage FIT message's vigorousActivityMinutes field.
     */
    quint16 vigorousActivityMinutes;

    MonitoringMessagePrivate() = delete;
    explicit MonitoringMessagePrivate(MonitoringMessage * const q);
    virtual ~MonitoringMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(MonitoringMessage)
    Q_DISABLE_COPY(MonitoringMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MONITORINGMESSAGE_P_H
