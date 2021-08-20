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

#include "obdiidatamessage.h"
#include "obdiidatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

ObdiiDataMessage::ObdiiDataMessage() : FitDataMessage(new ObdiiDataMessagePrivate(this))
{

}

DateTime ObdiiDataMessage::timestamp() const
{
    Q_D(const ObdiiDataMessage);
    return d->timestamp;
}

quint16 ObdiiDataMessage::timestampMs() const
{
    Q_D(const ObdiiDataMessage);
    return d->timestampMs;
}

quint16 ObdiiDataMessage::timeOffset() const
{
    Q_D(const ObdiiDataMessage);
    return d->timeOffset;
}

quint8 ObdiiDataMessage::pid() const
{
    Q_D(const ObdiiDataMessage);
    return d->pid;
}

quint8 ObdiiDataMessage::rawData() const
{
    Q_D(const ObdiiDataMessage);
    return d->rawData;
}

quint8 ObdiiDataMessage::pidDataSize() const
{
    Q_D(const ObdiiDataMessage);
    return d->pidDataSize;
}

quint32 ObdiiDataMessage::systemTime() const
{
    Q_D(const ObdiiDataMessage);
    return d->systemTime;
}

DateTime ObdiiDataMessage::startTimestamp() const
{
    Q_D(const ObdiiDataMessage);
    return d->startTimestamp;
}

quint16 ObdiiDataMessage::startTimestampMs() const
{
    Q_D(const ObdiiDataMessage);
    return d->startTimestampMs;
}

void ObdiiDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(ObdiiDataMessage);
    d->timestamp = timestamp;
}
void ObdiiDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(ObdiiDataMessage);
    d->timestampMs = timestampMs;
}
void ObdiiDataMessage::setTimeOffset(const quint16 timeOffset)
{
    Q_D(ObdiiDataMessage);
    d->timeOffset = timeOffset;
}
void ObdiiDataMessage::setPid(const quint8 pid)
{
    Q_D(ObdiiDataMessage);
    d->pid = pid;
}
void ObdiiDataMessage::setRawData(const quint8 rawData)
{
    Q_D(ObdiiDataMessage);
    d->rawData = rawData;
}
void ObdiiDataMessage::setPidDataSize(const quint8 pidDataSize)
{
    Q_D(ObdiiDataMessage);
    d->pidDataSize = pidDataSize;
}
void ObdiiDataMessage::setSystemTime(const quint32 systemTime)
{
    Q_D(ObdiiDataMessage);
    d->systemTime = systemTime;
}
void ObdiiDataMessage::setStartTimestamp(const DateTime startTimestamp)
{
    Q_D(ObdiiDataMessage);
    d->startTimestamp = startTimestamp;
}
void ObdiiDataMessage::setStartTimestampMs(const quint16 startTimestampMs)
{
    Q_D(ObdiiDataMessage);
    d->startTimestampMs = startTimestampMs;
}

ObdiiDataMessagePrivate::ObdiiDataMessagePrivate(ObdiiDataMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , timeOffset(0xFFFF)
  , pid(0xFF)
  , rawData(0xFF)
  , pidDataSize(0xFF)
  , systemTime(0xFFFFFFFF)
  , startTimestamp(static_cast<DateTime>(-1))
  , startTimestampMs(0xFFFF)
{
    globalMessageNumber = MesgNum::ObdiiData;
}

ObdiiDataMessagePrivate::~ObdiiDataMessagePrivate()
{

}

/// @todo Generate implementation.
bool ObdiiDataMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
