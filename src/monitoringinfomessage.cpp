// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the MonitoringInfoMessage, and MonitoringInfoMessagePrivate classes.
 */

#include <qtfit/monitoringinfomessage.h>
#include "monitoringinfomessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class MonitoringInfoMessage
 *
 * The MonitoringInfoMessage class represents a FIT MonitoringInfoMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a MonitoringInfoMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
MonitoringInfoMessage::MonitoringInfoMessage() : AbstractDataMessage(new MonitoringInfoMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a MonitoringInfoMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
MonitoringInfoMessage::MonitoringInfoMessage(MonitoringInfoMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the MonitoringInfoMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime MonitoringInfoMessage::timestamp() const
{
    Q_D(const MonitoringInfoMessage);
    return d->timestamp;
}

/*!
 * Returns the MonitoringInfoMessage data message's \c localTimestamp field's current value.
 *
 * Use to convert activity timestamps to local time if device does not support time zone and
 * daylight savings time correction.
 *
 * \return the \c localTimestamp field value.
 */
LocalDateTime MonitoringInfoMessage::localTimestamp() const
{
    Q_D(const MonitoringInfoMessage);
    return d->localTimestamp;
}

/*!
 * Returns the MonitoringInfoMessage data message's \c activityType field's current value.
 *
 * \return the \c activityType field value.
 */
ActivityType MonitoringInfoMessage::activityType() const
{
    Q_D(const MonitoringInfoMessage);
    return d->activityType;
}

/*!
 * Returns the MonitoringInfoMessage data message's \c cyclesToDistance field's current value.
 *
 * Indexed by activity_type
 *
 * \return the \c cyclesToDistance field value.
 */
quint16 MonitoringInfoMessage::cyclesToDistance() const
{
    Q_D(const MonitoringInfoMessage);
    return d->cyclesToDistance;
}

/*!
 * Returns the MonitoringInfoMessage data message's \c cyclesToCalories field's current value.
 *
 * Indexed by activity_type
 *
 * \return the \c cyclesToCalories field value.
 */
quint16 MonitoringInfoMessage::cyclesToCalories() const
{
    Q_D(const MonitoringInfoMessage);
    return d->cyclesToCalories;
}

/*!
 * Returns the MonitoringInfoMessage data message's \c restingMetabolicRate field's current value.
 *
 * \return the \c restingMetabolicRate field value.
 */
quint16 MonitoringInfoMessage::restingMetabolicRate() const
{
    Q_D(const MonitoringInfoMessage);
    return d->restingMetabolicRate;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void MonitoringInfoMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(MonitoringInfoMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c localTimestamp field to \a localTimestamp.
 *
 * \param localTimestamp The field value to set.
 */
void MonitoringInfoMessage::setLocalTimestamp(const LocalDateTime localTimestamp)
{
    Q_D(MonitoringInfoMessage);
    d->localTimestamp = localTimestamp;
}
/*!
 * Sets the \c activityType field to \a activityType.
 *
 * \param activityType The field value to set.
 */
void MonitoringInfoMessage::setActivityType(const ActivityType activityType)
{
    Q_D(MonitoringInfoMessage);
    d->activityType = activityType;
}
/*!
 * Sets the \c cyclesToDistance field to \a cyclesToDistance.
 *
 * \param cyclesToDistance The field value to set.
 */
void MonitoringInfoMessage::setCyclesToDistance(const quint16 cyclesToDistance)
{
    Q_D(MonitoringInfoMessage);
    d->cyclesToDistance = cyclesToDistance;
}
/*!
 * Sets the \c cyclesToCalories field to \a cyclesToCalories.
 *
 * \param cyclesToCalories The field value to set.
 */
void MonitoringInfoMessage::setCyclesToCalories(const quint16 cyclesToCalories)
{
    Q_D(MonitoringInfoMessage);
    d->cyclesToCalories = cyclesToCalories;
}
/*!
 * Sets the \c restingMetabolicRate field to \a restingMetabolicRate.
 *
 * \param restingMetabolicRate The field value to set.
 */
void MonitoringInfoMessage::setRestingMetabolicRate(const quint16 restingMetabolicRate)
{
    Q_D(MonitoringInfoMessage);
    d->restingMetabolicRate = restingMetabolicRate;
}

/// \cond internal

/*!
 * \internal
 *
 * \class MonitoringInfoMessagePrivate
 *
 * The MonitoringInfoMessagePrivate class provides private implementation for the MonitoringInfoMessage.
 *
 * \sa MonitoringInfoMessage
 */

/*!
 * \internal
 *
 * Constructs a MonitoringInfoMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
MonitoringInfoMessagePrivate::MonitoringInfoMessagePrivate(MonitoringInfoMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , localTimestamp(static_cast<LocalDateTime>(-1))
  , activityType(static_cast<ActivityType>(-1))
  , cyclesToDistance(0xFFFF)
  , cyclesToCalories(0xFFFF)
  , restingMetabolicRate(0xFFFF)
{
    globalMessageNumber = MesgNum::MonitoringInfo;
}

/*!
 * \internal
 *
 * Destroys the MonitoringInfoMessagePrivate object.
 */
MonitoringInfoMessagePrivate::~MonitoringInfoMessagePrivate()
{

}

bool MonitoringInfoMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:monitoring_info.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "monitoring_info.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:monitoring_info.localTimestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "monitoring_info.localTimestamp")) return false;
        this->localTimestamp = static_cast<LocalDateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:monitoring_info.activityType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "monitoring_info.activityType")) return false;
        this->activityType = static_cast<ActivityType>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:monitoring_info.cyclesToDistance
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring_info.cyclesToDistance")) return false;
        this->cyclesToDistance = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:monitoring_info.cyclesToCalories
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring_info.cyclesToCalories")) return false;
        this->cyclesToCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:monitoring_info.restingMetabolicRate
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "monitoring_info.restingMetabolicRate")) return false;
        this->restingMetabolicRate = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "ignoring unknown monitoring_info message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
