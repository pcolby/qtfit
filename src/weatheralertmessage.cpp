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

#include <QDebug>
#include <QtEndian>

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

bool WeatherAlertMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:weather_alert.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_alert.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "weather_alert.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:weather_alert.reportId
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_alert.reportId has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_alert.reportId size is" << data.size() << "but should be" << 1;
            return false;
        }
        reportId = static_cast<QString>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:weather_alert.issueTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_alert.issueTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "weather_alert.issueTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        issueTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 2: // See Profile.xlsx::Messages:weather_alert.expireTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_alert.expireTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "weather_alert.expireTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        expireTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 3: // See Profile.xlsx::Messages:weather_alert.severity
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_alert.severity has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_alert.severity size is" << data.size() << "but should be" << 1;
            return false;
        }
        severity = static_cast<WeatherSeverity>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:weather_alert.type
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "weather_alert.type has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "weather_alert.type size is" << data.size() << "but should be" << 1;
            return false;
        }
        type = static_cast<WeatherSevereType>(data.at(0));
        break;
    default:
        qWarning() << "unknown weather_alert message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
