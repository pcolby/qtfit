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

MonitoringInfoMessagePrivate::MonitoringInfoMessagePrivate(MonitoringInfoMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::MonitoringInfo;
}

MonitoringInfoMessagePrivate::~MonitoringInfoMessagePrivate()
{

}

/// @todo Generate implementation.
bool MonitoringInfoMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE
