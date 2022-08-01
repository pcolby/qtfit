// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the NmeaSentenceMessage, and NmeaSentenceMessagePrivate classes.
 */

#include <qtfit/nmeasentencemessage.h>
#include "nmeasentencemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class NmeaSentenceMessage
 *
 * The NmeaSentenceMessage class represents a FIT NmeaSentenceMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a NmeaSentenceMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
NmeaSentenceMessage::NmeaSentenceMessage() : AbstractDataMessage(new NmeaSentenceMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a NmeaSentenceMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
NmeaSentenceMessage::NmeaSentenceMessage(NmeaSentenceMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the NmeaSentenceMessage data message's \c timestamp field's current value.
 *
 * Timestamp message was output
 *
 * \return the \c timestamp field value.
 */
DateTime NmeaSentenceMessage::timestamp() const
{
    Q_D(const NmeaSentenceMessage);
    return d->timestamp;
}

/*!
 * Returns the NmeaSentenceMessage data message's \c timestampMs field's current value.
 *
 * Fractional part of timestamp, added to timestamp
 *
 * \return the \c timestampMs field value.
 */
quint16 NmeaSentenceMessage::timestampMs() const
{
    Q_D(const NmeaSentenceMessage);
    return d->timestampMs;
}

/*!
 * Returns the NmeaSentenceMessage data message's \c sentence field's current value.
 *
 * NMEA sentence
 *
 * \return the \c sentence field value.
 */
QString NmeaSentenceMessage::sentence() const
{
    Q_D(const NmeaSentenceMessage);
    return d->sentence;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void NmeaSentenceMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(NmeaSentenceMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void NmeaSentenceMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(NmeaSentenceMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c sentence field to \a sentence.
 *
 * \param sentence The field value to set.
 */
void NmeaSentenceMessage::setSentence(const QString sentence)
{
    Q_D(NmeaSentenceMessage);
    d->sentence = sentence;
}

/// \cond internal

/*!
 * \internal
 *
 * \class NmeaSentenceMessagePrivate
 *
 * The NmeaSentenceMessagePrivate class provides private implementation for the NmeaSentenceMessage.
 *
 * \sa NmeaSentenceMessage
 */

/*!
 * \internal
 *
 * Constructs a NmeaSentenceMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
NmeaSentenceMessagePrivate::NmeaSentenceMessagePrivate(NmeaSentenceMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
{
    globalMessageNumber = MesgNum::NmeaSentence;
}

/*!
 * \internal
 *
 * Destroys the NmeaSentenceMessagePrivate object.
 */
NmeaSentenceMessagePrivate::~NmeaSentenceMessagePrivate()
{

}

bool NmeaSentenceMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:nmea_sentence.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "nmea_sentence.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:nmea_sentence.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "nmea_sentence.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:nmea_sentence.sentence
        if (!verify(data, baseType, 1, FitBaseType::String, "nmea_sentence.sentence")) return false;
        this->sentence = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown nmea_sentence message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
