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

#include "weightscalemessage.h"
#include "weightscalemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

WeightScaleMessage::WeightScaleMessage() : FitDataMessage(new WeightScaleMessagePrivate(this))
{

}

DateTime WeightScaleMessage::timestamp() const
{
    Q_D(const WeightScaleMessage);
    return d->timestamp;
}

Weight WeightScaleMessage::weight() const
{
    Q_D(const WeightScaleMessage);
    return d->weight;
}

quint16 WeightScaleMessage::percentFat() const
{
    Q_D(const WeightScaleMessage);
    return d->percentFat;
}

quint16 WeightScaleMessage::percentHydration() const
{
    Q_D(const WeightScaleMessage);
    return d->percentHydration;
}

quint16 WeightScaleMessage::visceralFatMass() const
{
    Q_D(const WeightScaleMessage);
    return d->visceralFatMass;
}

quint16 WeightScaleMessage::boneMass() const
{
    Q_D(const WeightScaleMessage);
    return d->boneMass;
}

quint16 WeightScaleMessage::muscleMass() const
{
    Q_D(const WeightScaleMessage);
    return d->muscleMass;
}

quint16 WeightScaleMessage::basalMet() const
{
    Q_D(const WeightScaleMessage);
    return d->basalMet;
}

quint8 WeightScaleMessage::physiqueRating() const
{
    Q_D(const WeightScaleMessage);
    return d->physiqueRating;
}

quint16 WeightScaleMessage::activeMet() const
{
    Q_D(const WeightScaleMessage);
    return d->activeMet;
}

quint8 WeightScaleMessage::metabolicAge() const
{
    Q_D(const WeightScaleMessage);
    return d->metabolicAge;
}

quint8 WeightScaleMessage::visceralFatRating() const
{
    Q_D(const WeightScaleMessage);
    return d->visceralFatRating;
}

MessageIndex WeightScaleMessage::userProfileIndex() const
{
    Q_D(const WeightScaleMessage);
    return d->userProfileIndex;
}

void WeightScaleMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(WeightScaleMessage);
    d->timestamp = timestamp;
}
void WeightScaleMessage::setWeight(const Weight weight)
{
    Q_D(WeightScaleMessage);
    d->weight = weight;
}
void WeightScaleMessage::setPercentFat(const quint16 percentFat)
{
    Q_D(WeightScaleMessage);
    d->percentFat = percentFat;
}
void WeightScaleMessage::setPercentHydration(const quint16 percentHydration)
{
    Q_D(WeightScaleMessage);
    d->percentHydration = percentHydration;
}
void WeightScaleMessage::setVisceralFatMass(const quint16 visceralFatMass)
{
    Q_D(WeightScaleMessage);
    d->visceralFatMass = visceralFatMass;
}
void WeightScaleMessage::setBoneMass(const quint16 boneMass)
{
    Q_D(WeightScaleMessage);
    d->boneMass = boneMass;
}
void WeightScaleMessage::setMuscleMass(const quint16 muscleMass)
{
    Q_D(WeightScaleMessage);
    d->muscleMass = muscleMass;
}
void WeightScaleMessage::setBasalMet(const quint16 basalMet)
{
    Q_D(WeightScaleMessage);
    d->basalMet = basalMet;
}
void WeightScaleMessage::setPhysiqueRating(const quint8 physiqueRating)
{
    Q_D(WeightScaleMessage);
    d->physiqueRating = physiqueRating;
}
void WeightScaleMessage::setActiveMet(const quint16 activeMet)
{
    Q_D(WeightScaleMessage);
    d->activeMet = activeMet;
}
void WeightScaleMessage::setMetabolicAge(const quint8 metabolicAge)
{
    Q_D(WeightScaleMessage);
    d->metabolicAge = metabolicAge;
}
void WeightScaleMessage::setVisceralFatRating(const quint8 visceralFatRating)
{
    Q_D(WeightScaleMessage);
    d->visceralFatRating = visceralFatRating;
}
void WeightScaleMessage::setUserProfileIndex(const MessageIndex userProfileIndex)
{
    Q_D(WeightScaleMessage);
    d->userProfileIndex = userProfileIndex;
}

WeightScaleMessagePrivate::WeightScaleMessagePrivate(WeightScaleMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , weight(static_cast<Weight>(-1))
  , percentFat(0xFFFF)
  , percentHydration(0xFFFF)
  , visceralFatMass(0xFFFF)
  , boneMass(0xFFFF)
  , muscleMass(0xFFFF)
  , basalMet(0xFFFF)
  , physiqueRating(0xFF)
  , activeMet(0xFFFF)
  , metabolicAge(0xFF)
  , visceralFatRating(0xFF)
  , userProfileIndex(static_cast<MessageIndex>(-1))
{
    globalMessageNumber = MesgNum::WeightScale;
}

WeightScaleMessagePrivate::~WeightScaleMessagePrivate()
{

}

bool WeightScaleMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:weight_scale.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "weight_scale.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:weight_scale.weight
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weight_scale.weight")) return false;
        this->weight = static_cast<Weight>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:weight_scale.percentFat
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weight_scale.percentFat")) return false;
        this->percentFat = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:weight_scale.percentHydration
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weight_scale.percentHydration")) return false;
        this->percentHydration = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:weight_scale.visceralFatMass
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weight_scale.visceralFatMass")) return false;
        this->visceralFatMass = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:weight_scale.boneMass
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weight_scale.boneMass")) return false;
        this->boneMass = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:weight_scale.muscleMass
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weight_scale.muscleMass")) return false;
        this->muscleMass = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 7: // See Profile.xlsx::Messages:weight_scale.basalMet
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weight_scale.basalMet")) return false;
        this->basalMet = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:weight_scale.physiqueRating
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "weight_scale.physiqueRating")) return false;
        this->physiqueRating = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:weight_scale.activeMet
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weight_scale.activeMet")) return false;
        this->activeMet = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:weight_scale.metabolicAge
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "weight_scale.metabolicAge")) return false;
        this->metabolicAge = static_cast<quint8>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:weight_scale.visceralFatRating
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "weight_scale.visceralFatRating")) return false;
        this->visceralFatRating = static_cast<quint8>(data.at(0));
        break;
    case 12: // See Profile.xlsx::Messages:weight_scale.userProfileIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "weight_scale.userProfileIndex")) return false;
        this->userProfileIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown weight_scale message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
