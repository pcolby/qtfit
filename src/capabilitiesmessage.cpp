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

#include <QDebug>
#include <QtEndian>

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

bool CapabilitiesMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:capabilities.languages
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "capabilities.languages has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "capabilities.languages size is" << data.size() << "but should be" << 1;
            return false;
        }
        languages = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 1: // See Profile.xlsx::Messages:capabilities.sports
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "capabilities.sports has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "capabilities.sports size is" << data.size() << "but should be" << 1;
            return false;
        }
        sports = static_cast<SportBits0>(bigEndian ? qFromBigEndian<SportBits0>(data) : qFromLittleEndian<SportBits0>(data));
        break;
    case 21: // See Profile.xlsx::Messages:capabilities.workoutsSupported
        if (baseType != FitBaseType::Uint32z) {
            /// \todo Add toString function for baseType.
            qWarning() << "capabilities.workoutsSupported has base type" << static_cast<int>(baseType) << "but should be Uint32z";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "capabilities.workoutsSupported size is" << data.size() << "but should be" << 4;
            return false;
        }
        workoutsSupported = static_cast<WorkoutCapabilities>(bigEndian ? qFromBigEndian<WorkoutCapabilities>(data) : qFromLittleEndian<WorkoutCapabilities>(data));
        break;
    case 23: // See Profile.xlsx::Messages:capabilities.connectivitySupported
        if (baseType != FitBaseType::Uint32z) {
            /// \todo Add toString function for baseType.
            qWarning() << "capabilities.connectivitySupported has base type" << static_cast<int>(baseType) << "but should be Uint32z";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "capabilities.connectivitySupported size is" << data.size() << "but should be" << 4;
            return false;
        }
        connectivitySupported = static_cast<ConnectivityCapabilities>(bigEndian ? qFromBigEndian<ConnectivityCapabilities>(data) : qFromLittleEndian<ConnectivityCapabilities>(data));
        break;
    default:
        qWarning() << "unknown capabilities message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
