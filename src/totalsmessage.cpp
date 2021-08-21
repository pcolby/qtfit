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

TotalsMessage::TotalsMessage() : FitDataMessage(new TotalsMessagePrivate(this))
{

}

MessageIndex TotalsMessage::messageIndex() const
{
    Q_D(const TotalsMessage);
    return d->messageIndex;
}

DateTime TotalsMessage::timestamp() const
{
    Q_D(const TotalsMessage);
    return d->timestamp;
}

quint32 TotalsMessage::timerTime() const
{
    Q_D(const TotalsMessage);
    return d->timerTime;
}

quint32 TotalsMessage::distance() const
{
    Q_D(const TotalsMessage);
    return d->distance;
}

quint32 TotalsMessage::calories() const
{
    Q_D(const TotalsMessage);
    return d->calories;
}

Sport TotalsMessage::sport() const
{
    Q_D(const TotalsMessage);
    return d->sport;
}

quint32 TotalsMessage::elapsedTime() const
{
    Q_D(const TotalsMessage);
    return d->elapsedTime;
}

quint16 TotalsMessage::sessions() const
{
    Q_D(const TotalsMessage);
    return d->sessions;
}

quint32 TotalsMessage::activeTime() const
{
    Q_D(const TotalsMessage);
    return d->activeTime;
}

quint8 TotalsMessage::sportIndex() const
{
    Q_D(const TotalsMessage);
    return d->sportIndex;
}

void TotalsMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(TotalsMessage);
    d->messageIndex = messageIndex;
}
void TotalsMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(TotalsMessage);
    d->timestamp = timestamp;
}
void TotalsMessage::setTimerTime(const quint32 timerTime)
{
    Q_D(TotalsMessage);
    d->timerTime = timerTime;
}
void TotalsMessage::setDistance(const quint32 distance)
{
    Q_D(TotalsMessage);
    d->distance = distance;
}
void TotalsMessage::setCalories(const quint32 calories)
{
    Q_D(TotalsMessage);
    d->calories = calories;
}
void TotalsMessage::setSport(const Sport sport)
{
    Q_D(TotalsMessage);
    d->sport = sport;
}
void TotalsMessage::setElapsedTime(const quint32 elapsedTime)
{
    Q_D(TotalsMessage);
    d->elapsedTime = elapsedTime;
}
void TotalsMessage::setSessions(const quint16 sessions)
{
    Q_D(TotalsMessage);
    d->sessions = sessions;
}
void TotalsMessage::setActiveTime(const quint32 activeTime)
{
    Q_D(TotalsMessage);
    d->activeTime = activeTime;
}
void TotalsMessage::setSportIndex(const quint8 sportIndex)
{
    Q_D(TotalsMessage);
    d->sportIndex = sportIndex;
}

TotalsMessagePrivate::TotalsMessagePrivate(TotalsMessage * const q)
  : FitDataMessagePrivate(q)
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

TotalsMessagePrivate::~TotalsMessagePrivate()
{

}

bool TotalsMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:totals.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "totals.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "totals.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 253: // See Profile.xlsx::Messages:totals.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "totals.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "totals.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:totals.timerTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "totals.timerTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "totals.timerTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timerTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:totals.distance
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "totals.distance has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "totals.distance size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->distance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:totals.calories
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "totals.calories has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "totals.calories size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->calories = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:totals.sport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "totals.sport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "totals.sport size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:totals.elapsedTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "totals.elapsedTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "totals.elapsedTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->elapsedTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:totals.sessions
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "totals.sessions has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "totals.sessions size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->sessions = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:totals.activeTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "totals.activeTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "totals.activeTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->activeTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 9: // See Profile.xlsx::Messages:totals.sportIndex
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "totals.sportIndex has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "totals.sportIndex size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->sportIndex = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown totals message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
