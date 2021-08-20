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

TotalsMessagePrivate::TotalsMessagePrivate(TotalsMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::Totals;
}

TotalsMessagePrivate::~TotalsMessagePrivate()
{

}

/// @todo Generate implementation.
bool TotalsMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
