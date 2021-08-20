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

#include "capabilitiesmessage.h"
#include "capabilitiesmessage_p.h"

QTFIT_BEGIN_NAMESPACE

CapabilitiesMessage::CapabilitiesMessage() : FitDataMessage(new CapabilitiesMessagePrivate(this))
{

}

quint8z CapabilitiesMessage::languages() const
{
    Q_D(const CapabilitiesMessage);
    return d->languages;
}

SportBits0 CapabilitiesMessage::sports() const
{
    Q_D(const CapabilitiesMessage);
    return d->sports;
}

WorkoutCapabilities CapabilitiesMessage::workoutsSupported() const
{
    Q_D(const CapabilitiesMessage);
    return d->workoutsSupported;
}

ConnectivityCapabilities CapabilitiesMessage::connectivitySupported() const
{
    Q_D(const CapabilitiesMessage);
    return d->connectivitySupported;
}

void CapabilitiesMessage::setLanguages(const quint8z languages)
{
    Q_D(CapabilitiesMessage);
    d->languages = languages;
}
void CapabilitiesMessage::setSports(const SportBits0 sports)
{
    Q_D(CapabilitiesMessage);
    d->sports = sports;
}
void CapabilitiesMessage::setWorkoutsSupported(const WorkoutCapabilities workoutsSupported)
{
    Q_D(CapabilitiesMessage);
    d->workoutsSupported = workoutsSupported;
}
void CapabilitiesMessage::setConnectivitySupported(const ConnectivityCapabilities connectivitySupported)
{
    Q_D(CapabilitiesMessage);
    d->connectivitySupported = connectivitySupported;
}

CapabilitiesMessagePrivate::CapabilitiesMessagePrivate(CapabilitiesMessage * const q)
  : FitDataMessagePrivate(q)
  , languages(static_cast<quint8z>(-1))
  , sports(static_cast<SportBits0>(-1))
  , workoutsSupported(static_cast<WorkoutCapabilities>(-1))
  , connectivitySupported(static_cast<ConnectivityCapabilities>(-1))
{
    globalMessageNumber = MesgNum::Capabilities;
}

CapabilitiesMessagePrivate::~CapabilitiesMessagePrivate()
{

}

/// @todo Generate implementation.
bool CapabilitiesMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
