// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the BarometerDataMessage, and BarometerDataMessagePrivate classes.
 */

#include <qtfit/barometerdatamessage.h>
#include "barometerdatamessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class BarometerDataMessage
 *
 * The BarometerDataMessage class represents a FIT BarometerDataMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a BarometerDataMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
BarometerDataMessage::BarometerDataMessage() : AbstractDataMessage(new BarometerDataMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a BarometerDataMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
BarometerDataMessage::BarometerDataMessage(BarometerDataMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the BarometerDataMessage data message's \c timestamp field's current value.
 *
 * Whole second part of the timestamp
 *
 * \return the \c timestamp field value.
 */
DateTime BarometerDataMessage::timestamp() const
{
    Q_D(const BarometerDataMessage);
    return d->timestamp;
}

/*!
 * Returns the BarometerDataMessage data message's \c timestampMs field's current value.
 *
 * Millisecond part of the timestamp.
 *
 * \return the \c timestampMs field value.
 */
quint16 BarometerDataMessage::timestampMs() const
{
    Q_D(const BarometerDataMessage);
    return d->timestampMs;
}

/*!
 * Returns the BarometerDataMessage data message's \c sampleTimeOffset field's current value.
 *
 * Each time in the array describes the time at which the barometer sample with the
 * corrosponding index was taken. The samples may span across seconds. Array size must match the
 * number of samples in baro_cal
 *
 * \return the \c sampleTimeOffset field value.
 */
quint16 BarometerDataMessage::sampleTimeOffset() const
{
    Q_D(const BarometerDataMessage);
    return d->sampleTimeOffset;
}

/*!
 * Returns the BarometerDataMessage data message's \c baroPres field's current value.
 *
 * These are the raw ADC reading. The samples may span across seconds. A conversion will need to
 * be done on this data once read.
 *
 * \return the \c baroPres field value.
 */
quint32 BarometerDataMessage::baroPres() const
{
    Q_D(const BarometerDataMessage);
    return d->baroPres;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void BarometerDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(BarometerDataMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void BarometerDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(BarometerDataMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c sampleTimeOffset field to \a sampleTimeOffset.
 *
 * \param sampleTimeOffset The field value to set.
 */
void BarometerDataMessage::setSampleTimeOffset(const quint16 sampleTimeOffset)
{
    Q_D(BarometerDataMessage);
    d->sampleTimeOffset = sampleTimeOffset;
}
/*!
 * Sets the \c baroPres field to \a baroPres.
 *
 * \param baroPres The field value to set.
 */
void BarometerDataMessage::setBaroPres(const quint32 baroPres)
{
    Q_D(BarometerDataMessage);
    d->baroPres = baroPres;
}

/// \cond internal

/*!
 * \internal
 *
 * \class BarometerDataMessagePrivate
 *
 * The BarometerDataMessagePrivate class provides private implementation for the BarometerDataMessage.
 *
 * \sa BarometerDataMessage
 */

/*!
 * \internal
 *
 * Constructs a BarometerDataMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
BarometerDataMessagePrivate::BarometerDataMessagePrivate(BarometerDataMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , sampleTimeOffset(0xFFFF)
  , baroPres(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::BarometerData;
}

/*!
 * \internal
 *
 * Destroys the BarometerDataMessagePrivate object.
 */
BarometerDataMessagePrivate::~BarometerDataMessagePrivate()
{

}

bool BarometerDataMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:barometer_data.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "barometer_data.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:barometer_data.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "barometer_data.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:barometer_data.sampleTimeOffset
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "barometer_data.sampleTimeOffset")) return false;
        this->sampleTimeOffset = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:barometer_data.baroPres
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "barometer_data.baroPres")) return false;
        this->baroPres = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown barometer_data message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
