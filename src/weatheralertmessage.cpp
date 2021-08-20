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

#include "weatheralertmessage.h"
#include "weatheralertmessage_p.h"

QTFIT_BEGIN_NAMESPACE

WeatherAlertMessage::WeatherAlertMessage() : FitDataMessage(new WeatherAlertMessagePrivate(this))
{

}

DateTime WeatherAlertMessage::timestamp() const
{
    Q_D(const WeatherAlertMessage);
    return d->timestamp;
}

QString WeatherAlertMessage::reportId() const
{
    Q_D(const WeatherAlertMessage);
    return d->reportId;
}

DateTime WeatherAlertMessage::issueTime() const
{
    Q_D(const WeatherAlertMessage);
    return d->issueTime;
}

DateTime WeatherAlertMessage::expireTime() const
{
    Q_D(const WeatherAlertMessage);
    return d->expireTime;
}

WeatherSeverity WeatherAlertMessage::severity() const
{
    Q_D(const WeatherAlertMessage);
    return d->severity;
}

WeatherSevereType WeatherAlertMessage::type() const
{
    Q_D(const WeatherAlertMessage);
    return d->type;
}

void WeatherAlertMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(WeatherAlertMessage);
    d->timestamp = timestamp;
}
void WeatherAlertMessage::setReportId(const QString reportId)
{
    Q_D(WeatherAlertMessage);
    d->reportId = reportId;
}
void WeatherAlertMessage::setIssueTime(const DateTime issueTime)
{
    Q_D(WeatherAlertMessage);
    d->issueTime = issueTime;
}
void WeatherAlertMessage::setExpireTime(const DateTime expireTime)
{
    Q_D(WeatherAlertMessage);
    d->expireTime = expireTime;
}
void WeatherAlertMessage::setSeverity(const WeatherSeverity severity)
{
    Q_D(WeatherAlertMessage);
    d->severity = severity;
}
void WeatherAlertMessage::setType(const WeatherSevereType type)
{
    Q_D(WeatherAlertMessage);
    d->type = type;
}

WeatherAlertMessagePrivate::WeatherAlertMessagePrivate(WeatherAlertMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , issueTime(static_cast<DateTime>(-1))
  , expireTime(static_cast<DateTime>(-1))
  , severity(static_cast<WeatherSeverity>(-1))
  , type(static_cast<WeatherSevereType>(-1))
{
    globalMessageNumber = MesgNum::WeatherAlert;
}

WeatherAlertMessagePrivate::~WeatherAlertMessagePrivate()
{

}

/// @todo Generate implementation.
bool WeatherAlertMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
