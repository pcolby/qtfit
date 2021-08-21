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

#include "monitoringinfomessage.h"
#include "monitoringinfomessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

MonitoringInfoMessage::MonitoringInfoMessage() : FitDataMessage(new MonitoringInfoMessagePrivate(this))
{

}

DateTime MonitoringInfoMessage::timestamp() const
{
    Q_D(const MonitoringInfoMessage);
    return d->timestamp;
}

LocalDateTime MonitoringInfoMessage::localTimestamp() const
{
    Q_D(const MonitoringInfoMessage);
    return d->localTimestamp;
}

ActivityType MonitoringInfoMessage::activityType() const
{
    Q_D(const MonitoringInfoMessage);
    return d->activityType;
}

quint16 MonitoringInfoMessage::cyclesToDistance() const
{
    Q_D(const MonitoringInfoMessage);
    return d->cyclesToDistance;
}

quint16 MonitoringInfoMessage::cyclesToCalories() const
{
    Q_D(const MonitoringInfoMessage);
    return d->cyclesToCalories;
}

quint16 MonitoringInfoMessage::restingMetabolicRate() const
{
    Q_D(const MonitoringInfoMessage);
    return d->restingMetabolicRate;
}

void MonitoringInfoMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(MonitoringInfoMessage);
    d->timestamp = timestamp;
}
void MonitoringInfoMessage::setLocalTimestamp(const LocalDateTime localTimestamp)
{
    Q_D(MonitoringInfoMessage);
    d->localTimestamp = localTimestamp;
}
void MonitoringInfoMessage::setActivityType(const ActivityType activityType)
{
    Q_D(MonitoringInfoMessage);
    d->activityType = activityType;
}
void MonitoringInfoMessage::setCyclesToDistance(const quint16 cyclesToDistance)
{
    Q_D(MonitoringInfoMessage);
    d->cyclesToDistance = cyclesToDistance;
}
void MonitoringInfoMessage::setCyclesToCalories(const quint16 cyclesToCalories)
{
    Q_D(MonitoringInfoMessage);
    d->cyclesToCalories = cyclesToCalories;
}
void MonitoringInfoMessage::setRestingMetabolicRate(const quint16 restingMetabolicRate)
{
    Q_D(MonitoringInfoMessage);
    d->restingMetabolicRate = restingMetabolicRate;
}

MonitoringInfoMessagePrivate::MonitoringInfoMessagePrivate(MonitoringInfoMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , localTimestamp(static_cast<LocalDateTime>(-1))
  , activityType(static_cast<ActivityType>(-1))
  , cyclesToDistance(0xFFFF)
  , cyclesToCalories(0xFFFF)
  , restingMetabolicRate(0xFFFF)
{
    globalMessageNumber = MesgNum::MonitoringInfo;
}

MonitoringInfoMessagePrivate::~MonitoringInfoMessagePrivate()
{

}

bool MonitoringInfoMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:monitoring_info.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "monitoring_info.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "monitoring_info.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:monitoring_info.localTimestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "monitoring_info.localTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "monitoring_info.localTimestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->localTimestamp = static_cast<LocalDateTime>(bigEndian ? qFromBigEndian<LocalDateTime>(data) : qFromLittleEndian<LocalDateTime>(data));
        break;
    case 1: // See Profile.xlsx::Messages:monitoring_info.activityType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "monitoring_info.activityType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "monitoring_info.activityType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->activityType = static_cast<ActivityType>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:monitoring_info.cyclesToDistance
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "monitoring_info.cyclesToDistance has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "monitoring_info.cyclesToDistance size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->cyclesToDistance = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:monitoring_info.cyclesToCalories
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "monitoring_info.cyclesToCalories has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "monitoring_info.cyclesToCalories size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->cyclesToCalories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:monitoring_info.restingMetabolicRate
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "monitoring_info.restingMetabolicRate has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "monitoring_info.restingMetabolicRate size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->restingMetabolicRate = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown monitoring_info message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
