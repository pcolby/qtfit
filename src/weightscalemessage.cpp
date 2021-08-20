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

/// @todo Generate implementation.
bool WeightScaleMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
