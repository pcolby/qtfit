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

#include "ohrsettingsmessage.h"
#include "ohrsettingsmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class OhrSettingsMessage
 *
 * The OhrSettingsMessage class represents a FIT OhrSettingsMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid OhrSettingsMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
OhrSettingsMessage::OhrSettingsMessage() : AbstractDataMessage(new OhrSettingsMessagePrivate(this))
{

}

/*!
 * Returns the OhrSettingsMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime OhrSettingsMessage::timestamp() const
{
    Q_D(const OhrSettingsMessage);
    return d->timestamp;
}

/*!
 * Returns the OhrSettingsMessage data message's \c enabled field's current value.
 *
 * \return the \c enabled field value.
 */
Switch OhrSettingsMessage::enabled() const
{
    Q_D(const OhrSettingsMessage);
    return d->enabled;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void OhrSettingsMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(OhrSettingsMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c enabled field to \a enabled.
 *
 * \param enabled The field value to set.
 */
void OhrSettingsMessage::setEnabled(const Switch enabled)
{
    Q_D(OhrSettingsMessage);
    d->enabled = enabled;
}

/*!
 * \internal
 *
 * \class OhrSettingsMessagePrivate
 *
 * The OhrSettingsMessagePrivate class provides private implementation for the OhrSettingsMessage.
 *
 * \sa OhrSettingsMessage
 */

/*!
 * \internal
 *
 * Constructs a OhrSettingsMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
OhrSettingsMessagePrivate::OhrSettingsMessagePrivate(OhrSettingsMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , enabled(static_cast<Switch>(-1))
{
    globalMessageNumber = MesgNum::OhrSettings;
}

/*!
 * \internal
 *
 * Destroys the OhrSettingsMessagePrivate object.
 */
OhrSettingsMessagePrivate::~OhrSettingsMessagePrivate()
{

}

bool OhrSettingsMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:ohr_settings.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "ohr_settings.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:ohr_settings.enabled
        if (!verify(data, baseType, 1, FitBaseType::Enum, "ohr_settings.enabled")) return false;
        this->enabled = static_cast<Switch>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown ohr_settings message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

QTFIT_END_NAMESPACE
