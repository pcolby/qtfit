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

OhrSettingsMessage::OhrSettingsMessage() : FitDataMessage(new OhrSettingsMessagePrivate(this))
{

}

DateTime OhrSettingsMessage::timestamp() const
{
    Q_D(const OhrSettingsMessage);
    return d->timestamp;
}

Switch OhrSettingsMessage::enabled() const
{
    Q_D(const OhrSettingsMessage);
    return d->enabled;
}

void OhrSettingsMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(OhrSettingsMessage);
    d->timestamp = timestamp;
}
void OhrSettingsMessage::setEnabled(const Switch enabled)
{
    Q_D(OhrSettingsMessage);
    d->enabled = enabled;
}

OhrSettingsMessagePrivate::OhrSettingsMessagePrivate(OhrSettingsMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , enabled(static_cast<Switch>(-1))
{
    globalMessageNumber = MesgNum::OhrSettings;
}

OhrSettingsMessagePrivate::~OhrSettingsMessagePrivate()
{

}

bool OhrSettingsMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:ohr_settings.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "ohr_settings.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "ohr_settings.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:ohr_settings.enabled
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "ohr_settings.enabled has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "ohr_settings.enabled size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->enabled = static_cast<Switch>(data.at(0));
        break;
    default:
        qWarning() << "unknown ohr_settings message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
