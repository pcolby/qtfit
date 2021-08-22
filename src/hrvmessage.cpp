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

#include "hrvmessage.h"
#include "hrvmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class HrvMessage
 *
 * The HrvMessage class represents a FIT HrvMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid HrvMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
HrvMessage::HrvMessage() : AbstractDataMessage(new HrvMessagePrivate(this))
{

}

/*!
 * Returns the HrvMessage data message's \c time field's current value.
 *
 * \return the \c time field value.
 */
quint16 HrvMessage::time() const
{
    Q_D(const HrvMessage);
    return d->time;
}

/*!
 * Sets the \c time field to \a time.
 *
 * \param time The field value to set.
 */
void HrvMessage::setTime(const quint16 time)
{
    Q_D(HrvMessage);
    d->time = time;
}

/// \cond internal

/*!
 * \internal
 *
 * \class HrvMessagePrivate
 *
 * The HrvMessagePrivate class provides private implementation for the HrvMessage.
 *
 * \sa HrvMessage
 */

/*!
 * \internal
 *
 * Constructs a HrvMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
HrvMessagePrivate::HrvMessagePrivate(HrvMessage * const q)
  : AbstractDataMessagePrivate(q)
  , time(0xFFFF)
{
    globalMessageNumber = MesgNum::Hrv;
}

/*!
 * \internal
 *
 * Destroys the HrvMessagePrivate object.
 */
HrvMessagePrivate::~HrvMessagePrivate()
{

}

bool HrvMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:hrv.time
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "hrv.time")) return false;
        this->time = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "ignoring unknown hrv message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
