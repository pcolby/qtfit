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

#include "totalsmessage.h"
#include "totalsmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class TotalsMessage
 *
 * The TotalsMessage class represents a FIT TotalsMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid TotalsMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
TotalsMessage::TotalsMessage() : AbstractDataMessage(new TotalsMessagePrivate(this))
{

}

/*!
 * Returns the TotalsMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex TotalsMessage::messageIndex() const
{
    Q_D(const TotalsMessage);
    return d->messageIndex;
}

/*!
 * Returns the TotalsMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime TotalsMessage::timestamp() const
{
    Q_D(const TotalsMessage);
    return d->timestamp;
}

/*!
 * Returns the TotalsMessage data message's \c timerTime field's current value.
 *
 * \return the \c timerTime field value.
 */
quint32 TotalsMessage::timerTime() const
{
    Q_D(const TotalsMessage);
    return d->timerTime;
}

/*!
 * Returns the TotalsMessage data message's \c distance field's current value.
 *
 * \return the \c distance field value.
 */
quint32 TotalsMessage::distance() const
{
    Q_D(const TotalsMessage);
    return d->distance;
}

/*!
 * Returns the TotalsMessage data message's \c calories field's current value.
 *
 * \return the \c calories field value.
 */
quint32 TotalsMessage::calories() const
{
    Q_D(const TotalsMessage);
    return d->calories;
}

/*!
 * Returns the TotalsMessage data message's \c sport field's current value.
 *
 * \return the \c sport field value.
 */
Sport TotalsMessage::sport() const
{
    Q_D(const TotalsMessage);
    return d->sport;
}

/*!
 * Returns the TotalsMessage data message's \c elapsedTime field's current value.
 *
 * \return the \c elapsedTime field value.
 */
quint32 TotalsMessage::elapsedTime() const
{
    Q_D(const TotalsMessage);
    return d->elapsedTime;
}

/*!
 * Returns the TotalsMessage data message's \c sessions field's current value.
 *
 * \return the \c sessions field value.
 */
quint16 TotalsMessage::sessions() const
{
    Q_D(const TotalsMessage);
    return d->sessions;
}

/*!
 * Returns the TotalsMessage data message's \c activeTime field's current value.
 *
 * \return the \c activeTime field value.
 */
quint32 TotalsMessage::activeTime() const
{
    Q_D(const TotalsMessage);
    return d->activeTime;
}

/*!
 * Returns the TotalsMessage data message's \c sportIndex field's current value.
 *
 * \return the \c sportIndex field value.
 */
quint8 TotalsMessage::sportIndex() const
{
    Q_D(const TotalsMessage);
    return d->sportIndex;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void TotalsMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(TotalsMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void TotalsMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(TotalsMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timerTime field to \a timerTime.
 *
 * \param timerTime The field value to set.
 */
void TotalsMessage::setTimerTime(const quint32 timerTime)
{
    Q_D(TotalsMessage);
    d->timerTime = timerTime;
}
/*!
 * Sets the \c distance field to \a distance.
 *
 * \param distance The field value to set.
 */
void TotalsMessage::setDistance(const quint32 distance)
{
    Q_D(TotalsMessage);
    d->distance = distance;
}
/*!
 * Sets the \c calories field to \a calories.
 *
 * \param calories The field value to set.
 */
void TotalsMessage::setCalories(const quint32 calories)
{
    Q_D(TotalsMessage);
    d->calories = calories;
}
/*!
 * Sets the \c sport field to \a sport.
 *
 * \param sport The field value to set.
 */
void TotalsMessage::setSport(const Sport sport)
{
    Q_D(TotalsMessage);
    d->sport = sport;
}
/*!
 * Sets the \c elapsedTime field to \a elapsedTime.
 *
 * \param elapsedTime The field value to set.
 */
void TotalsMessage::setElapsedTime(const quint32 elapsedTime)
{
    Q_D(TotalsMessage);
    d->elapsedTime = elapsedTime;
}
/*!
 * Sets the \c sessions field to \a sessions.
 *
 * \param sessions The field value to set.
 */
void TotalsMessage::setSessions(const quint16 sessions)
{
    Q_D(TotalsMessage);
    d->sessions = sessions;
}
/*!
 * Sets the \c activeTime field to \a activeTime.
 *
 * \param activeTime The field value to set.
 */
void TotalsMessage::setActiveTime(const quint32 activeTime)
{
    Q_D(TotalsMessage);
    d->activeTime = activeTime;
}
/*!
 * Sets the \c sportIndex field to \a sportIndex.
 *
 * \param sportIndex The field value to set.
 */
void TotalsMessage::setSportIndex(const quint8 sportIndex)
{
    Q_D(TotalsMessage);
    d->sportIndex = sportIndex;
}

/*!
 * \internal
 *
 * \class TotalsMessagePrivate
 *
 * The TotalsMessagePrivate class provides private implementation for the TotalsMessage.
 *
 * \sa TotalsMessage
 */

/*!
 * \internal
 *
 * Constructs a TotalsMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
TotalsMessagePrivate::TotalsMessagePrivate(TotalsMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , timestamp(static_cast<DateTime>(-1))
  , timerTime(0xFFFFFFFF)
  , distance(0xFFFFFFFF)
  , calories(0xFFFFFFFF)
  , sport(static_cast<Sport>(-1))
  , elapsedTime(0xFFFFFFFF)
  , sessions(0xFFFF)
  , activeTime(0xFFFFFFFF)
  , sportIndex(0xFF)
{
    globalMessageNumber = MesgNum::Totals;
}

/*!
 * \internal
 *
 * Destroys the TotalsMessagePrivate object.
 */
TotalsMessagePrivate::~TotalsMessagePrivate()
{

}

bool TotalsMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:totals.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "totals.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 253: // See Profile.xlsx::Messages:totals.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "totals.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:totals.timerTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "totals.timerTime")) return false;
        this->timerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:totals.distance
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "totals.distance")) return false;
        this->distance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:totals.calories
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "totals.calories")) return false;
        this->calories = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:totals.sport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "totals.sport")) return false;
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:totals.elapsedTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "totals.elapsedTime")) return false;
        this->elapsedTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:totals.sessions
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "totals.sessions")) return false;
        this->sessions = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:totals.activeTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "totals.activeTime")) return false;
        this->activeTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 9: // See Profile.xlsx::Messages:totals.sportIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "totals.sportIndex")) return false;
        this->sportIndex = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown totals message field number" << fieldId;
        return AbstractDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
