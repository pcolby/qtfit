// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the HrvMessage, and HrvMessagePrivate classes.
 */

#include <qtfit/hrvmessage.h>
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
 * Constructs a HrvMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
HrvMessage::HrvMessage() : AbstractDataMessage(new HrvMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a HrvMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
HrvMessage::HrvMessage(HrvMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the HrvMessage data message's \c time field's current value.
 *
 * Time between beats
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
