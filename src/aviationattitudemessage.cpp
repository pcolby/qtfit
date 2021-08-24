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

/*!
 * \class AviationAttitudeMessage
 *
 * The AviationAttitudeMessage class represents a FIT AviationAttitudeMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a AviationAttitudeMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
AviationAttitudeMessage::AviationAttitudeMessage() : AbstractDataMessage(new AviationAttitudeMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a AviationAttitudeMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
AviationAttitudeMessage::AviationAttitudeMessage(AviationAttitudeMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the AviationAttitudeMessage data message's \c timestamp field's current value.
 *
 * Timestamp message was output
 *
 * \return the \c timestamp field value.
 */
DateTime AviationAttitudeMessage::timestamp() const
{
    Q_D(const AviationAttitudeMessage);
    return d->timestamp;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c timestampMs field's current value.
 *
 * Fractional part of timestamp, added to timestamp
 *
 * \return the \c timestampMs field value.
 */
quint16 AviationAttitudeMessage::timestampMs() const
{
    Q_D(const AviationAttitudeMessage);
    return d->timestampMs;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c systemTime field's current value.
 *
 * System time associated with sample expressed in ms.
 *
 * \return the \c systemTime field value.
 */
quint32 AviationAttitudeMessage::systemTime() const
{
    Q_D(const AviationAttitudeMessage);
    return d->systemTime;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c pitch field's current value.
 *
 * Range -PI/2 to +PI/2
 *
 * \return the \c pitch field value.
 */
qint16 AviationAttitudeMessage::pitch() const
{
    Q_D(const AviationAttitudeMessage);
    return d->pitch;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c roll field's current value.
 *
 * Range -PI to +PI
 *
 * \return the \c roll field value.
 */
qint16 AviationAttitudeMessage::roll() const
{
    Q_D(const AviationAttitudeMessage);
    return d->roll;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c accelLateral field's current value.
 *
 * Range -78.4 to +78.4 (-8 Gs to 8 Gs)
 *
 * \return the \c accelLateral field value.
 */
qint16 AviationAttitudeMessage::accelLateral() const
{
    Q_D(const AviationAttitudeMessage);
    return d->accelLateral;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c accelNormal field's current value.
 *
 * Range -78.4 to +78.4 (-8 Gs to 8 Gs)
 *
 * \return the \c accelNormal field value.
 */
qint16 AviationAttitudeMessage::accelNormal() const
{
    Q_D(const AviationAttitudeMessage);
    return d->accelNormal;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c turnRate field's current value.
 *
 * Range -8.727 to +8.727 (-500 degs/sec to +500 degs/sec)
 *
 * \return the \c turnRate field value.
 */
qint16 AviationAttitudeMessage::turnRate() const
{
    Q_D(const AviationAttitudeMessage);
    return d->turnRate;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c stage field's current value.
 *
 * \return the \c stage field value.
 */
AttitudeStage AviationAttitudeMessage::stage() const
{
    Q_D(const AviationAttitudeMessage);
    return d->stage;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c attitudeStageComplete field's current value.
 *
 * The percent complete of the current attitude stage.  Set to 0 for attitude stages 0, 1 and 2
 * and to 100 for attitude stage 3 by AHRS modules that do not support it.  Range - 100
 *
 * \return the \c attitudeStageComplete field value.
 */
quint8 AviationAttitudeMessage::attitudeStageComplete() const
{
    Q_D(const AviationAttitudeMessage);
    return d->attitudeStageComplete;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c track field's current value.
 *
 * Track Angle/Heading Range 0 - 2pi
 *
 * \return the \c track field value.
 */
quint16 AviationAttitudeMessage::track() const
{
    Q_D(const AviationAttitudeMessage);
    return d->track;
}

/*!
 * Returns the AviationAttitudeMessage data message's \c validity field's current value.
 *
 * \return the \c validity field value.
 */
AttitudeValidity AviationAttitudeMessage::validity() const
{
    Q_D(const AviationAttitudeMessage);
    return d->validity;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void AviationAttitudeMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(AviationAttitudeMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void AviationAttitudeMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(AviationAttitudeMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c systemTime field to \a systemTime.
 *
 * \param systemTime The field value to set.
 */
void AviationAttitudeMessage::setSystemTime(const quint32 systemTime)
{
    Q_D(AviationAttitudeMessage);
    d->systemTime = systemTime;
}
/*!
 * Sets the \c pitch field to \a pitch.
 *
 * \param pitch The field value to set.
 */
void AviationAttitudeMessage::setPitch(const qint16 pitch)
{
    Q_D(AviationAttitudeMessage);
    d->pitch = pitch;
}
/*!
 * Sets the \c roll field to \a roll.
 *
 * \param roll The field value to set.
 */
void AviationAttitudeMessage::setRoll(const qint16 roll)
{
    Q_D(AviationAttitudeMessage);
    d->roll = roll;
}
/*!
 * Sets the \c accelLateral field to \a accelLateral.
 *
 * \param accelLateral The field value to set.
 */
void AviationAttitudeMessage::setAccelLateral(const qint16 accelLateral)
{
    Q_D(AviationAttitudeMessage);
    d->accelLateral = accelLateral;
}
/*!
 * Sets the \c accelNormal field to \a accelNormal.
 *
 * \param accelNormal The field value to set.
 */
void AviationAttitudeMessage::setAccelNormal(const qint16 accelNormal)
{
    Q_D(AviationAttitudeMessage);
    d->accelNormal = accelNormal;
}
/*!
 * Sets the \c turnRate field to \a turnRate.
 *
 * \param turnRate The field value to set.
 */
void AviationAttitudeMessage::setTurnRate(const qint16 turnRate)
{
    Q_D(AviationAttitudeMessage);
    d->turnRate = turnRate;
}
/*!
 * Sets the \c stage field to \a stage.
 *
 * \param stage The field value to set.
 */
void AviationAttitudeMessage::setStage(const AttitudeStage stage)
{
    Q_D(AviationAttitudeMessage);
    d->stage = stage;
}
/*!
 * Sets the \c attitudeStageComplete field to \a attitudeStageComplete.
 *
 * \param attitudeStageComplete The field value to set.
 */
void AviationAttitudeMessage::setAttitudeStageComplete(const quint8 attitudeStageComplete)
{
    Q_D(AviationAttitudeMessage);
    d->attitudeStageComplete = attitudeStageComplete;
}
/*!
 * Sets the \c track field to \a track.
 *
 * \param track The field value to set.
 */
void AviationAttitudeMessage::setTrack(const quint16 track)
{
    Q_D(AviationAttitudeMessage);
    d->track = track;
}
/*!
 * Sets the \c validity field to \a validity.
 *
 * \param validity The field value to set.
 */
void AviationAttitudeMessage::setValidity(const AttitudeValidity validity)
{
    Q_D(AviationAttitudeMessage);
    d->validity = validity;
}

/// \cond internal

/*!
 * \internal
 *
 * \class AviationAttitudeMessagePrivate
 *
 * The AviationAttitudeMessagePrivate class provides private implementation for the AviationAttitudeMessage.
 *
 * \sa AviationAttitudeMessage
 */

/*!
 * \internal
 *
 * Constructs a AviationAttitudeMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
AviationAttitudeMessagePrivate::AviationAttitudeMessagePrivate(AviationAttitudeMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the AviationAttitudeMessagePrivate object.
 */
AviationAttitudeMessagePrivate::~AviationAttitudeMessagePrivate()
{

}

bool AviationAttitudeMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:aviation_attitude.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "aviation_attitude.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:aviation_attitude.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "aviation_attitude.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:aviation_attitude.systemTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "aviation_attitude.systemTime")) return false;
        this->systemTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:aviation_attitude.pitch
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "aviation_attitude.pitch")) return false;
        this->pitch = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:aviation_attitude.roll
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "aviation_attitude.roll")) return false;
        this->roll = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:aviation_attitude.accelLateral
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "aviation_attitude.accelLateral")) return false;
        this->accelLateral = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:aviation_attitude.accelNormal
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "aviation_attitude.accelNormal")) return false;
        this->accelNormal = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:aviation_attitude.turnRate
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "aviation_attitude.turnRate")) return false;
        this->turnRate = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 7: // See Profile.xlsx::Messages:aviation_attitude.stage
        if (!verify(data, baseType, 1, FitBaseType::Enum, "aviation_attitude.stage")) return false;
        this->stage = static_cast<AttitudeStage>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:aviation_attitude.attitudeStageComplete
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "aviation_attitude.attitudeStageComplete")) return false;
        this->attitudeStageComplete = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:aviation_attitude.track
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "aviation_attitude.track")) return false;
        this->track = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:aviation_attitude.validity
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "aviation_attitude.validity")) return false;
        this->validity = static_cast<AttitudeValidity>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "ignoring unknown aviation_attitude message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
