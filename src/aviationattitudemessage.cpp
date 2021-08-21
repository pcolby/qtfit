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

#include <QDebug>
#include <QtEndian>

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

bool AviationAttitudeMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:aviation_attitude.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "aviation_attitude.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:aviation_attitude.timestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.timestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "aviation_attitude.timestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:aviation_attitude.systemTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.systemTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "aviation_attitude.systemTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        systemTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:aviation_attitude.pitch
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.pitch has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "aviation_attitude.pitch size is" << data.size() << "but should be" << 2;
            return false;
        }
        pitch = static_cast<qint16>(bigEndian ? qFromBigEndian<qint16>(data) : qFromLittleEndian<qint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:aviation_attitude.roll
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.roll has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "aviation_attitude.roll size is" << data.size() << "but should be" << 2;
            return false;
        }
        roll = static_cast<qint16>(bigEndian ? qFromBigEndian<qint16>(data) : qFromLittleEndian<qint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:aviation_attitude.accelLateral
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.accelLateral has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "aviation_attitude.accelLateral size is" << data.size() << "but should be" << 2;
            return false;
        }
        accelLateral = static_cast<qint16>(bigEndian ? qFromBigEndian<qint16>(data) : qFromLittleEndian<qint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:aviation_attitude.accelNormal
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.accelNormal has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "aviation_attitude.accelNormal size is" << data.size() << "but should be" << 2;
            return false;
        }
        accelNormal = static_cast<qint16>(bigEndian ? qFromBigEndian<qint16>(data) : qFromLittleEndian<qint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:aviation_attitude.turnRate
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.turnRate has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "aviation_attitude.turnRate size is" << data.size() << "but should be" << 2;
            return false;
        }
        turnRate = static_cast<qint16>(bigEndian ? qFromBigEndian<qint16>(data) : qFromLittleEndian<qint16>(data));
        break;
    case 7: // See Profile.xlsx::Messages:aviation_attitude.stage
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.stage has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "aviation_attitude.stage size is" << data.size() << "but should be" << 1;
            return false;
        }
        stage = static_cast<AttitudeStage>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:aviation_attitude.attitudeStageComplete
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.attitudeStageComplete has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "aviation_attitude.attitudeStageComplete size is" << data.size() << "but should be" << 1;
            return false;
        }
        attitudeStageComplete = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:aviation_attitude.track
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.track has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "aviation_attitude.track size is" << data.size() << "but should be" << 2;
            return false;
        }
        track = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:aviation_attitude.validity
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "aviation_attitude.validity has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "aviation_attitude.validity size is" << data.size() << "but should be" << 2;
            return false;
        }
        validity = static_cast<AttitudeValidity>(bigEndian ? qFromBigEndian<AttitudeValidity>(data) : qFromLittleEndian<AttitudeValidity>(data));
        break;
    default:
        qWarning() << "unknown aviation_attitude message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
