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

/*!
 * \file
 * Defines the CapabilitiesMessage, and CapabilitiesMessagePrivate classes.
 */

#include <qtfit/capabilitiesmessage.h>
#include "capabilitiesmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class CapabilitiesMessage
 *
 * The CapabilitiesMessage class represents a FIT CapabilitiesMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a CapabilitiesMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
CapabilitiesMessage::CapabilitiesMessage() : AbstractDataMessage(new CapabilitiesMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a CapabilitiesMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
CapabilitiesMessage::CapabilitiesMessage(CapabilitiesMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the CapabilitiesMessage data message's \c languages field's current value.
 *
 * Use language_bits_x types where x is index of array.
 *
 * \return the \c languages field value.
 */
quint8z CapabilitiesMessage::languages() const
{
    Q_D(const CapabilitiesMessage);
    return d->languages;
}

/*!
 * Returns the CapabilitiesMessage data message's \c sports field's current value.
 *
 * Use sport_bits_x types where x is index of array.
 *
 * \return the \c sports field value.
 */
SportBits0 CapabilitiesMessage::sports() const
{
    Q_D(const CapabilitiesMessage);
    return d->sports;
}

/*!
 * Returns the CapabilitiesMessage data message's \c workoutsSupported field's current value.
 *
 * \return the \c workoutsSupported field value.
 */
WorkoutCapabilities CapabilitiesMessage::workoutsSupported() const
{
    Q_D(const CapabilitiesMessage);
    return d->workoutsSupported;
}

/*!
 * Returns the CapabilitiesMessage data message's \c connectivitySupported field's current value.
 *
 * \return the \c connectivitySupported field value.
 */
ConnectivityCapabilities CapabilitiesMessage::connectivitySupported() const
{
    Q_D(const CapabilitiesMessage);
    return d->connectivitySupported;
}

/*!
 * Sets the \c languages field to \a languages.
 *
 * \param languages The field value to set.
 */
void CapabilitiesMessage::setLanguages(const quint8z languages)
{
    Q_D(CapabilitiesMessage);
    d->languages = languages;
}
/*!
 * Sets the \c sports field to \a sports.
 *
 * \param sports The field value to set.
 */
void CapabilitiesMessage::setSports(const SportBits0 sports)
{
    Q_D(CapabilitiesMessage);
    d->sports = sports;
}
/*!
 * Sets the \c workoutsSupported field to \a workoutsSupported.
 *
 * \param workoutsSupported The field value to set.
 */
void CapabilitiesMessage::setWorkoutsSupported(const WorkoutCapabilities workoutsSupported)
{
    Q_D(CapabilitiesMessage);
    d->workoutsSupported = workoutsSupported;
}
/*!
 * Sets the \c connectivitySupported field to \a connectivitySupported.
 *
 * \param connectivitySupported The field value to set.
 */
void CapabilitiesMessage::setConnectivitySupported(const ConnectivityCapabilities connectivitySupported)
{
    Q_D(CapabilitiesMessage);
    d->connectivitySupported = connectivitySupported;
}

/// \cond internal

/*!
 * \internal
 *
 * \class CapabilitiesMessagePrivate
 *
 * The CapabilitiesMessagePrivate class provides private implementation for the CapabilitiesMessage.
 *
 * \sa CapabilitiesMessage
 */

/*!
 * \internal
 *
 * Constructs a CapabilitiesMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
CapabilitiesMessagePrivate::CapabilitiesMessagePrivate(CapabilitiesMessage * const q)
  : AbstractDataMessagePrivate(q)
  , languages(static_cast<quint8z>(-1))
  , sports(static_cast<SportBits0>(-1))
  , workoutsSupported(static_cast<WorkoutCapabilities>(-1))
  , connectivitySupported(static_cast<ConnectivityCapabilities>(-1))
{
    globalMessageNumber = MesgNum::Capabilities;
}

/*!
 * \internal
 *
 * Destroys the CapabilitiesMessagePrivate object.
 */
CapabilitiesMessagePrivate::~CapabilitiesMessagePrivate()
{

}

bool CapabilitiesMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:capabilities.languages
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "capabilities.languages")) return false;
        this->languages = static_cast<quint8z>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:capabilities.sports
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "capabilities.sports")) return false;
        this->sports = static_cast<SportBits0>(data.at(0));
        break;
    case 21: // See Profile.xlsx::Messages:capabilities.workoutsSupported
        if (!verify(data, baseType, 4, FitBaseType::Uint32z, "capabilities.workoutsSupported")) return false;
        this->workoutsSupported = static_cast<WorkoutCapabilities>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 23: // See Profile.xlsx::Messages:capabilities.connectivitySupported
        if (!verify(data, baseType, 4, FitBaseType::Uint32z, "capabilities.connectivitySupported")) return false;
        this->connectivitySupported = static_cast<ConnectivityCapabilities>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown capabilities message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
