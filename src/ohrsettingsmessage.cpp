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

/// @todo Generate implementation.
bool OhrSettingsMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
