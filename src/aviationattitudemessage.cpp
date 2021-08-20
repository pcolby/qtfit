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

#include "aviationattitudemessage.h"
#include "aviationattitudemessage_p.h"

QTFIT_BEGIN_NAMESPACE

AviationAttitudeMessage::AviationAttitudeMessage() : FitDataMessage(new AviationAttitudeMessagePrivate(this))
{

}

DateTime AviationAttitudeMessage::timestamp() const
{
    Q_D(const AviationAttitudeMessage);
    return d->timestamp;
}

quint16 AviationAttitudeMessage::timestampMs() const
{
    Q_D(const AviationAttitudeMessage);
    return d->timestampMs;
}

quint32 AviationAttitudeMessage::systemTime() const
{
    Q_D(const AviationAttitudeMessage);
    return d->systemTime;
}

qint16 AviationAttitudeMessage::pitch() const
{
    Q_D(const AviationAttitudeMessage);
    return d->pitch;
}

qint16 AviationAttitudeMessage::roll() const
{
    Q_D(const AviationAttitudeMessage);
    return d->roll;
}

qint16 AviationAttitudeMessage::accelLateral() const
{
    Q_D(const AviationAttitudeMessage);
    return d->accelLateral;
}

qint16 AviationAttitudeMessage::accelNormal() const
{
    Q_D(const AviationAttitudeMessage);
    return d->accelNormal;
}

qint16 AviationAttitudeMessage::turnRate() const
{
    Q_D(const AviationAttitudeMessage);
    return d->turnRate;
}

AttitudeStage AviationAttitudeMessage::stage() const
{
    Q_D(const AviationAttitudeMessage);
    return d->stage;
}

quint8 AviationAttitudeMessage::attitudeStageComplete() const
{
    Q_D(const AviationAttitudeMessage);
    return d->attitudeStageComplete;
}

quint16 AviationAttitudeMessage::track() const
{
    Q_D(const AviationAttitudeMessage);
    return d->track;
}

AttitudeValidity AviationAttitudeMessage::validity() const
{
    Q_D(const AviationAttitudeMessage);
    return d->validity;
}

void AviationAttitudeMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(AviationAttitudeMessage);
    d->timestamp = timestamp;
}
void AviationAttitudeMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(AviationAttitudeMessage);
    d->timestampMs = timestampMs;
}
void AviationAttitudeMessage::setSystemTime(const quint32 systemTime)
{
    Q_D(AviationAttitudeMessage);
    d->systemTime = systemTime;
}
void AviationAttitudeMessage::setPitch(const qint16 pitch)
{
    Q_D(AviationAttitudeMessage);
    d->pitch = pitch;
}
void AviationAttitudeMessage::setRoll(const qint16 roll)
{
    Q_D(AviationAttitudeMessage);
    d->roll = roll;
}
void AviationAttitudeMessage::setAccelLateral(const qint16 accelLateral)
{
    Q_D(AviationAttitudeMessage);
    d->accelLateral = accelLateral;
}
void AviationAttitudeMessage::setAccelNormal(const qint16 accelNormal)
{
    Q_D(AviationAttitudeMessage);
    d->accelNormal = accelNormal;
}
void AviationAttitudeMessage::setTurnRate(const qint16 turnRate)
{
    Q_D(AviationAttitudeMessage);
    d->turnRate = turnRate;
}
void AviationAttitudeMessage::setStage(const AttitudeStage stage)
{
    Q_D(AviationAttitudeMessage);
    d->stage = stage;
}
void AviationAttitudeMessage::setAttitudeStageComplete(const quint8 attitudeStageComplete)
{
    Q_D(AviationAttitudeMessage);
    d->attitudeStageComplete = attitudeStageComplete;
}
void AviationAttitudeMessage::setTrack(const quint16 track)
{
    Q_D(AviationAttitudeMessage);
    d->track = track;
}
void AviationAttitudeMessage::setValidity(const AttitudeValidity validity)
{
    Q_D(AviationAttitudeMessage);
    d->validity = validity;
}

AviationAttitudeMessagePrivate::AviationAttitudeMessagePrivate(AviationAttitudeMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , systemTime(0xFFFFFFFF)
  , pitch(0x7FFF)
  , roll(0x7FFF)
  , accelLateral(0x7FFF)
  , accelNormal(0x7FFF)
  , turnRate(0x7FFF)
  , stage(static_cast<AttitudeStage>(-1))
  , attitudeStageComplete(0xFF)
  , track(0xFFFF)
  , validity(static_cast<AttitudeValidity>(-1))
{
    globalMessageNumber = MesgNum::AviationAttitude;
}

AviationAttitudeMessagePrivate::~AviationAttitudeMessagePrivate()
{

}

/// @todo Generate implementation.
bool AviationAttitudeMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
