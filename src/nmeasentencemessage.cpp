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

#include "nmeasentencemessage.h"
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
 * Constructs an invalid NmeaSentenceMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
NmeaSentenceMessage::NmeaSentenceMessage() : FitDataMessage(new NmeaSentenceMessagePrivate(this))
{

}

/*!
 * Returns the NmeaSentenceMessage data message's \c timestamp field's current value.
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
  : FitDataMessagePrivate(q)
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
        qWarning() << "unknown nmea_sentence message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
