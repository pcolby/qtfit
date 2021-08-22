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

/*!
 * \class WeatherAlertMessage
 *
 * The WeatherAlertMessage class represents a FIT WeatherAlertMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid WeatherAlertMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
WeatherAlertMessage::WeatherAlertMessage() : AbstractDataMessage(new WeatherAlertMessagePrivate(this))
{

}

/*!
 * Returns the WeatherAlertMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime WeatherAlertMessage::timestamp() const
{
    Q_D(const WeatherAlertMessage);
    return d->timestamp;
}

/*!
 * Returns the WeatherAlertMessage data message's \c reportId field's current value.
 *
 * \return the \c reportId field value.
 */
QString WeatherAlertMessage::reportId() const
{
    Q_D(const WeatherAlertMessage);
    return d->reportId;
}

/*!
 * Returns the WeatherAlertMessage data message's \c issueTime field's current value.
 *
 * \return the \c issueTime field value.
 */
DateTime WeatherAlertMessage::issueTime() const
{
    Q_D(const WeatherAlertMessage);
    return d->issueTime;
}

/*!
 * Returns the WeatherAlertMessage data message's \c expireTime field's current value.
 *
 * \return the \c expireTime field value.
 */
DateTime WeatherAlertMessage::expireTime() const
{
    Q_D(const WeatherAlertMessage);
    return d->expireTime;
}

/*!
 * Returns the WeatherAlertMessage data message's \c severity field's current value.
 *
 * \return the \c severity field value.
 */
WeatherSeverity WeatherAlertMessage::severity() const
{
    Q_D(const WeatherAlertMessage);
    return d->severity;
}

/*!
 * Returns the WeatherAlertMessage data message's \c type field's current value.
 *
 * \return the \c type field value.
 */
WeatherSevereType WeatherAlertMessage::type() const
{
    Q_D(const WeatherAlertMessage);
    return d->type;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void WeatherAlertMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(WeatherAlertMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c reportId field to \a reportId.
 *
 * \param reportId The field value to set.
 */
void WeatherAlertMessage::setReportId(const QString reportId)
{
    Q_D(WeatherAlertMessage);
    d->reportId = reportId;
}
/*!
 * Sets the \c issueTime field to \a issueTime.
 *
 * \param issueTime The field value to set.
 */
void WeatherAlertMessage::setIssueTime(const DateTime issueTime)
{
    Q_D(WeatherAlertMessage);
    d->issueTime = issueTime;
}
/*!
 * Sets the \c expireTime field to \a expireTime.
 *
 * \param expireTime The field value to set.
 */
void WeatherAlertMessage::setExpireTime(const DateTime expireTime)
{
    Q_D(WeatherAlertMessage);
    d->expireTime = expireTime;
}
/*!
 * Sets the \c severity field to \a severity.
 *
 * \param severity The field value to set.
 */
void WeatherAlertMessage::setSeverity(const WeatherSeverity severity)
{
    Q_D(WeatherAlertMessage);
    d->severity = severity;
}
/*!
 * Sets the \c type field to \a type.
 *
 * \param type The field value to set.
 */
void WeatherAlertMessage::setType(const WeatherSevereType type)
{
    Q_D(WeatherAlertMessage);
    d->type = type;
}

/// \cond internal

/*!
 * \internal
 *
 * \class WeatherAlertMessagePrivate
 *
 * The WeatherAlertMessagePrivate class provides private implementation for the WeatherAlertMessage.
 *
 * \sa WeatherAlertMessage
 */

/*!
 * \internal
 *
 * Constructs a WeatherAlertMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
WeatherAlertMessagePrivate::WeatherAlertMessagePrivate(WeatherAlertMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , issueTime(static_cast<DateTime>(-1))
  , expireTime(static_cast<DateTime>(-1))
  , severity(static_cast<WeatherSeverity>(-1))
  , type(static_cast<WeatherSevereType>(-1))
{
    globalMessageNumber = MesgNum::WeatherAlert;
}

/*!
 * \internal
 *
 * Destroys the WeatherAlertMessagePrivate object.
 */
WeatherAlertMessagePrivate::~WeatherAlertMessagePrivate()
{

}

bool WeatherAlertMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:weather_alert.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "weather_alert.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:weather_alert.reportId
        if (!verify(data, baseType, 1, FitBaseType::String, "weather_alert.reportId")) return false;
        this->reportId = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:weather_alert.issueTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "weather_alert.issueTime")) return false;
        this->issueTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:weather_alert.expireTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "weather_alert.expireTime")) return false;
        this->expireTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:weather_alert.severity
        if (!verify(data, baseType, 1, FitBaseType::Enum, "weather_alert.severity")) return false;
        this->severity = static_cast<WeatherSeverity>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:weather_alert.type
        if (!verify(data, baseType, 1, FitBaseType::Enum, "weather_alert.type")) return false;
        this->type = static_cast<WeatherSevereType>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown weather_alert message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
