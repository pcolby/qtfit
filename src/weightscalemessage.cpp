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

/*!
 * \class WeightScaleMessage
 *
 * The WeightScaleMessage class represents a FIT WeightScaleMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid WeightScaleMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
WeightScaleMessage::WeightScaleMessage() : AbstractDataMessage(new WeightScaleMessagePrivate(this))
{

}

/*!
 * Returns the WeightScaleMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime WeightScaleMessage::timestamp() const
{
    Q_D(const WeightScaleMessage);
    return d->timestamp;
}

/*!
 * Returns the WeightScaleMessage data message's \c weight field's current value.
 *
 * \return the \c weight field value.
 */
Weight WeightScaleMessage::weight() const
{
    Q_D(const WeightScaleMessage);
    return d->weight;
}

/*!
 * Returns the WeightScaleMessage data message's \c percentFat field's current value.
 *
 * \return the \c percentFat field value.
 */
quint16 WeightScaleMessage::percentFat() const
{
    Q_D(const WeightScaleMessage);
    return d->percentFat;
}

/*!
 * Returns the WeightScaleMessage data message's \c percentHydration field's current value.
 *
 * \return the \c percentHydration field value.
 */
quint16 WeightScaleMessage::percentHydration() const
{
    Q_D(const WeightScaleMessage);
    return d->percentHydration;
}

/*!
 * Returns the WeightScaleMessage data message's \c visceralFatMass field's current value.
 *
 * \return the \c visceralFatMass field value.
 */
quint16 WeightScaleMessage::visceralFatMass() const
{
    Q_D(const WeightScaleMessage);
    return d->visceralFatMass;
}

/*!
 * Returns the WeightScaleMessage data message's \c boneMass field's current value.
 *
 * \return the \c boneMass field value.
 */
quint16 WeightScaleMessage::boneMass() const
{
    Q_D(const WeightScaleMessage);
    return d->boneMass;
}

/*!
 * Returns the WeightScaleMessage data message's \c muscleMass field's current value.
 *
 * \return the \c muscleMass field value.
 */
quint16 WeightScaleMessage::muscleMass() const
{
    Q_D(const WeightScaleMessage);
    return d->muscleMass;
}

/*!
 * Returns the WeightScaleMessage data message's \c basalMet field's current value.
 *
 * \return the \c basalMet field value.
 */
quint16 WeightScaleMessage::basalMet() const
{
    Q_D(const WeightScaleMessage);
    return d->basalMet;
}

/*!
 * Returns the WeightScaleMessage data message's \c physiqueRating field's current value.
 *
 * \return the \c physiqueRating field value.
 */
quint8 WeightScaleMessage::physiqueRating() const
{
    Q_D(const WeightScaleMessage);
    return d->physiqueRating;
}

/*!
 * Returns the WeightScaleMessage data message's \c activeMet field's current value.
 *
 * ~4kJ per kcal, 0.25 allows max 16384 kcal
 *
 * \return the \c activeMet field value.
 */
quint16 WeightScaleMessage::activeMet() const
{
    Q_D(const WeightScaleMessage);
    return d->activeMet;
}

/*!
 * Returns the WeightScaleMessage data message's \c metabolicAge field's current value.
 *
 * \return the \c metabolicAge field value.
 */
quint8 WeightScaleMessage::metabolicAge() const
{
    Q_D(const WeightScaleMessage);
    return d->metabolicAge;
}

/*!
 * Returns the WeightScaleMessage data message's \c visceralFatRating field's current value.
 *
 * \return the \c visceralFatRating field value.
 */
quint8 WeightScaleMessage::visceralFatRating() const
{
    Q_D(const WeightScaleMessage);
    return d->visceralFatRating;
}

/*!
 * Returns the WeightScaleMessage data message's \c userProfileIndex field's current value.
 *
 * Associates this weight scale message to a user.  This corresponds to the index of the user profile message in the weight scale file.
 *
 * \return the \c userProfileIndex field value.
 */
MessageIndex WeightScaleMessage::userProfileIndex() const
{
    Q_D(const WeightScaleMessage);
    return d->userProfileIndex;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void WeightScaleMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(WeightScaleMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c weight field to \a weight.
 *
 * \param weight The field value to set.
 */
void WeightScaleMessage::setWeight(const Weight weight)
{
    Q_D(WeightScaleMessage);
    d->weight = weight;
}
/*!
 * Sets the \c percentFat field to \a percentFat.
 *
 * \param percentFat The field value to set.
 */
void WeightScaleMessage::setPercentFat(const quint16 percentFat)
{
    Q_D(WeightScaleMessage);
    d->percentFat = percentFat;
}
/*!
 * Sets the \c percentHydration field to \a percentHydration.
 *
 * \param percentHydration The field value to set.
 */
void WeightScaleMessage::setPercentHydration(const quint16 percentHydration)
{
    Q_D(WeightScaleMessage);
    d->percentHydration = percentHydration;
}
/*!
 * Sets the \c visceralFatMass field to \a visceralFatMass.
 *
 * \param visceralFatMass The field value to set.
 */
void WeightScaleMessage::setVisceralFatMass(const quint16 visceralFatMass)
{
    Q_D(WeightScaleMessage);
    d->visceralFatMass = visceralFatMass;
}
/*!
 * Sets the \c boneMass field to \a boneMass.
 *
 * \param boneMass The field value to set.
 */
void WeightScaleMessage::setBoneMass(const quint16 boneMass)
{
    Q_D(WeightScaleMessage);
    d->boneMass = boneMass;
}
/*!
 * Sets the \c muscleMass field to \a muscleMass.
 *
 * \param muscleMass The field value to set.
 */
void WeightScaleMessage::setMuscleMass(const quint16 muscleMass)
{
    Q_D(WeightScaleMessage);
    d->muscleMass = muscleMass;
}
/*!
 * Sets the \c basalMet field to \a basalMet.
 *
 * \param basalMet The field value to set.
 */
void WeightScaleMessage::setBasalMet(const quint16 basalMet)
{
    Q_D(WeightScaleMessage);
    d->basalMet = basalMet;
}
/*!
 * Sets the \c physiqueRating field to \a physiqueRating.
 *
 * \param physiqueRating The field value to set.
 */
void WeightScaleMessage::setPhysiqueRating(const quint8 physiqueRating)
{
    Q_D(WeightScaleMessage);
    d->physiqueRating = physiqueRating;
}
/*!
 * Sets the \c activeMet field to \a activeMet.
 *
 * \param activeMet The field value to set.
 */
void WeightScaleMessage::setActiveMet(const quint16 activeMet)
{
    Q_D(WeightScaleMessage);
    d->activeMet = activeMet;
}
/*!
 * Sets the \c metabolicAge field to \a metabolicAge.
 *
 * \param metabolicAge The field value to set.
 */
void WeightScaleMessage::setMetabolicAge(const quint8 metabolicAge)
{
    Q_D(WeightScaleMessage);
    d->metabolicAge = metabolicAge;
}
/*!
 * Sets the \c visceralFatRating field to \a visceralFatRating.
 *
 * \param visceralFatRating The field value to set.
 */
void WeightScaleMessage::setVisceralFatRating(const quint8 visceralFatRating)
{
    Q_D(WeightScaleMessage);
    d->visceralFatRating = visceralFatRating;
}
/*!
 * Sets the \c userProfileIndex field to \a userProfileIndex.
 *
 * \param userProfileIndex The field value to set.
 */
void WeightScaleMessage::setUserProfileIndex(const MessageIndex userProfileIndex)
{
    Q_D(WeightScaleMessage);
    d->userProfileIndex = userProfileIndex;
}

/// \cond internal

/*!
 * \internal
 *
 * \class WeightScaleMessagePrivate
 *
 * The WeightScaleMessagePrivate class provides private implementation for the WeightScaleMessage.
 *
 * \sa WeightScaleMessage
 */

/*!
 * \internal
 *
 * Constructs a WeightScaleMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
WeightScaleMessagePrivate::WeightScaleMessagePrivate(WeightScaleMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the WeightScaleMessagePrivate object.
 */
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
        qWarning() << "ignoring unknown weight_scale message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
