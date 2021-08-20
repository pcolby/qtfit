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

#include "hrmessage.h"
#include "hrmessage_p.h"

QTFIT_BEGIN_NAMESPACE

HrMessage::HrMessage() : FitDataMessage(new HrMessagePrivate(this))
{

}

DateTime HrMessage::timestamp() const
{
    Q_D(const HrMessage);
    return d->timestamp;
}

quint16 HrMessage::fractionalTimestamp() const
{
    Q_D(const HrMessage);
    return d->fractionalTimestamp;
}

quint8 HrMessage::time256() const
{
    Q_D(const HrMessage);
    return d->time256;
}

quint8 HrMessage::filteredBpm() const
{
    Q_D(const HrMessage);
    return d->filteredBpm;
}

quint32 HrMessage::eventTimestamp() const
{
    Q_D(const HrMessage);
    return d->eventTimestamp;
}

quint8 HrMessage::eventTimestamp12() const
{
    Q_D(const HrMessage);
    return d->eventTimestamp12;
}

void HrMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(HrMessage);
    d->timestamp = timestamp;
}
void HrMessage::setFractionalTimestamp(const quint16 fractionalTimestamp)
{
    Q_D(HrMessage);
    d->fractionalTimestamp = fractionalTimestamp;
}
void HrMessage::setTime256(const quint8 time256)
{
    Q_D(HrMessage);
    d->time256 = time256;
}
void HrMessage::setFilteredBpm(const quint8 filteredBpm)
{
    Q_D(HrMessage);
    d->filteredBpm = filteredBpm;
}
void HrMessage::setEventTimestamp(const quint32 eventTimestamp)
{
    Q_D(HrMessage);
    d->eventTimestamp = eventTimestamp;
}
void HrMessage::setEventTimestamp12(const quint8 eventTimestamp12)
{
    Q_D(HrMessage);
    d->eventTimestamp12 = eventTimestamp12;
}

HrMessagePrivate::HrMessagePrivate(HrMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , fractionalTimestamp(0xFFFF)
  , time256(0xFF)
  , filteredBpm(0xFF)
  , eventTimestamp(0xFFFFFFFF)
  , eventTimestamp12(0xFF)
{
    globalMessageNumber = MesgNum::Hr;
}

HrMessagePrivate::~HrMessagePrivate()
{

}

/// @todo Generate implementation.
bool HrMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
