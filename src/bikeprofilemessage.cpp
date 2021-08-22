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

#include "bikeprofilemessage.h"
#include "bikeprofilemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class BikeProfileMessage
 *
 * The BikeProfileMessage class represents a FIT BikeProfileMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid BikeProfileMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
BikeProfileMessage::BikeProfileMessage() : FitDataMessage(new BikeProfileMessagePrivate(this))
{

}

/*!
 * Returns the BikeProfileMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex BikeProfileMessage::messageIndex() const
{
    Q_D(const BikeProfileMessage);
    return d->messageIndex;
}

/*!
 * Returns the BikeProfileMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString BikeProfileMessage::name() const
{
    Q_D(const BikeProfileMessage);
    return d->name;
}

/*!
 * Returns the BikeProfileMessage data message's \c sport field's current value.
 *
 * \return the \c sport field value.
 */
Sport BikeProfileMessage::sport() const
{
    Q_D(const BikeProfileMessage);
    return d->sport;
}

/*!
 * Returns the BikeProfileMessage data message's \c subSport field's current value.
 *
 * \return the \c subSport field value.
 */
SubSport BikeProfileMessage::subSport() const
{
    Q_D(const BikeProfileMessage);
    return d->subSport;
}

/*!
 * Returns the BikeProfileMessage data message's \c odometer field's current value.
 *
 * \return the \c odometer field value.
 */
quint32 BikeProfileMessage::odometer() const
{
    Q_D(const BikeProfileMessage);
    return d->odometer;
}

/*!
 * Returns the BikeProfileMessage data message's \c bikeSpdAntId field's current value.
 *
 * \return the \c bikeSpdAntId field value.
 */
quint16z BikeProfileMessage::bikeSpdAntId() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeSpdAntId;
}

/*!
 * Returns the BikeProfileMessage data message's \c bikeCadAntId field's current value.
 *
 * \return the \c bikeCadAntId field value.
 */
quint16z BikeProfileMessage::bikeCadAntId() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeCadAntId;
}

/*!
 * Returns the BikeProfileMessage data message's \c bikeSpdcadAntId field's current value.
 *
 * \return the \c bikeSpdcadAntId field value.
 */
quint16z BikeProfileMessage::bikeSpdcadAntId() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeSpdcadAntId;
}

/*!
 * Returns the BikeProfileMessage data message's \c bikePowerAntId field's current value.
 *
 * \return the \c bikePowerAntId field value.
 */
quint16z BikeProfileMessage::bikePowerAntId() const
{
    Q_D(const BikeProfileMessage);
    return d->bikePowerAntId;
}

/*!
 * Returns the BikeProfileMessage data message's \c customWheelsize field's current value.
 *
 * \return the \c customWheelsize field value.
 */
quint16 BikeProfileMessage::customWheelsize() const
{
    Q_D(const BikeProfileMessage);
    return d->customWheelsize;
}

/*!
 * Returns the BikeProfileMessage data message's \c autoWheelsize field's current value.
 *
 * \return the \c autoWheelsize field value.
 */
quint16 BikeProfileMessage::autoWheelsize() const
{
    Q_D(const BikeProfileMessage);
    return d->autoWheelsize;
}

/*!
 * Returns the BikeProfileMessage data message's \c bikeWeight field's current value.
 *
 * \return the \c bikeWeight field value.
 */
quint16 BikeProfileMessage::bikeWeight() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeWeight;
}

/*!
 * Returns the BikeProfileMessage data message's \c powerCalFactor field's current value.
 *
 * \return the \c powerCalFactor field value.
 */
quint16 BikeProfileMessage::powerCalFactor() const
{
    Q_D(const BikeProfileMessage);
    return d->powerCalFactor;
}

/*!
 * Returns the BikeProfileMessage data message's \c autoWheelCal field's current value.
 *
 * \return the \c autoWheelCal field value.
 */
bool BikeProfileMessage::autoWheelCal() const
{
    Q_D(const BikeProfileMessage);
    return d->autoWheelCal;
}

/*!
 * Returns the BikeProfileMessage data message's \c autoPowerZero field's current value.
 *
 * \return the \c autoPowerZero field value.
 */
bool BikeProfileMessage::autoPowerZero() const
{
    Q_D(const BikeProfileMessage);
    return d->autoPowerZero;
}

/*!
 * Returns the BikeProfileMessage data message's \c id field's current value.
 *
 * \return the \c id field value.
 */
quint8 BikeProfileMessage::id() const
{
    Q_D(const BikeProfileMessage);
    return d->id;
}

/*!
 * Returns the BikeProfileMessage data message's \c spdEnabled field's current value.
 *
 * \return the \c spdEnabled field value.
 */
bool BikeProfileMessage::spdEnabled() const
{
    Q_D(const BikeProfileMessage);
    return d->spdEnabled;
}

/*!
 * Returns the BikeProfileMessage data message's \c cadEnabled field's current value.
 *
 * \return the \c cadEnabled field value.
 */
bool BikeProfileMessage::cadEnabled() const
{
    Q_D(const BikeProfileMessage);
    return d->cadEnabled;
}

/*!
 * Returns the BikeProfileMessage data message's \c spdcadEnabled field's current value.
 *
 * \return the \c spdcadEnabled field value.
 */
bool BikeProfileMessage::spdcadEnabled() const
{
    Q_D(const BikeProfileMessage);
    return d->spdcadEnabled;
}

/*!
 * Returns the BikeProfileMessage data message's \c powerEnabled field's current value.
 *
 * \return the \c powerEnabled field value.
 */
bool BikeProfileMessage::powerEnabled() const
{
    Q_D(const BikeProfileMessage);
    return d->powerEnabled;
}

/*!
 * Returns the BikeProfileMessage data message's \c crankLength field's current value.
 *
 * \return the \c crankLength field value.
 */
quint8 BikeProfileMessage::crankLength() const
{
    Q_D(const BikeProfileMessage);
    return d->crankLength;
}

/*!
 * Returns the BikeProfileMessage data message's \c enabled field's current value.
 *
 * \return the \c enabled field value.
 */
bool BikeProfileMessage::enabled() const
{
    Q_D(const BikeProfileMessage);
    return d->enabled;
}

/*!
 * Returns the BikeProfileMessage data message's \c bikeSpdAntIdTransType field's current value.
 *
 * \return the \c bikeSpdAntIdTransType field value.
 */
quint8z BikeProfileMessage::bikeSpdAntIdTransType() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeSpdAntIdTransType;
}

/*!
 * Returns the BikeProfileMessage data message's \c bikeCadAntIdTransType field's current value.
 *
 * \return the \c bikeCadAntIdTransType field value.
 */
quint8z BikeProfileMessage::bikeCadAntIdTransType() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeCadAntIdTransType;
}

/*!
 * Returns the BikeProfileMessage data message's \c bikeSpdcadAntIdTransType field's current value.
 *
 * \return the \c bikeSpdcadAntIdTransType field value.
 */
quint8z BikeProfileMessage::bikeSpdcadAntIdTransType() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeSpdcadAntIdTransType;
}

/*!
 * Returns the BikeProfileMessage data message's \c bikePowerAntIdTransType field's current value.
 *
 * \return the \c bikePowerAntIdTransType field value.
 */
quint8z BikeProfileMessage::bikePowerAntIdTransType() const
{
    Q_D(const BikeProfileMessage);
    return d->bikePowerAntIdTransType;
}

/*!
 * Returns the BikeProfileMessage data message's \c odometerRollover field's current value.
 *
 * \return the \c odometerRollover field value.
 */
quint8 BikeProfileMessage::odometerRollover() const
{
    Q_D(const BikeProfileMessage);
    return d->odometerRollover;
}

/*!
 * Returns the BikeProfileMessage data message's \c frontGearNum field's current value.
 *
 * \return the \c frontGearNum field value.
 */
quint8z BikeProfileMessage::frontGearNum() const
{
    Q_D(const BikeProfileMessage);
    return d->frontGearNum;
}

/*!
 * Returns the BikeProfileMessage data message's \c frontGear field's current value.
 *
 * \return the \c frontGear field value.
 */
quint8z BikeProfileMessage::frontGear() const
{
    Q_D(const BikeProfileMessage);
    return d->frontGear;
}

/*!
 * Returns the BikeProfileMessage data message's \c rearGearNum field's current value.
 *
 * \return the \c rearGearNum field value.
 */
quint8z BikeProfileMessage::rearGearNum() const
{
    Q_D(const BikeProfileMessage);
    return d->rearGearNum;
}

/*!
 * Returns the BikeProfileMessage data message's \c rearGear field's current value.
 *
 * \return the \c rearGear field value.
 */
quint8z BikeProfileMessage::rearGear() const
{
    Q_D(const BikeProfileMessage);
    return d->rearGear;
}

/*!
 * Returns the BikeProfileMessage data message's \c shimanoDi2Enabled field's current value.
 *
 * \return the \c shimanoDi2Enabled field value.
 */
bool BikeProfileMessage::shimanoDi2Enabled() const
{
    Q_D(const BikeProfileMessage);
    return d->shimanoDi2Enabled;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void BikeProfileMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(BikeProfileMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void BikeProfileMessage::setName(const QString name)
{
    Q_D(BikeProfileMessage);
    d->name = name;
}
/*!
 * Sets the \c sport field to \a sport.
 *
 * \param sport The field value to set.
 */
void BikeProfileMessage::setSport(const Sport sport)
{
    Q_D(BikeProfileMessage);
    d->sport = sport;
}
/*!
 * Sets the \c subSport field to \a subSport.
 *
 * \param subSport The field value to set.
 */
void BikeProfileMessage::setSubSport(const SubSport subSport)
{
    Q_D(BikeProfileMessage);
    d->subSport = subSport;
}
/*!
 * Sets the \c odometer field to \a odometer.
 *
 * \param odometer The field value to set.
 */
void BikeProfileMessage::setOdometer(const quint32 odometer)
{
    Q_D(BikeProfileMessage);
    d->odometer = odometer;
}
/*!
 * Sets the \c bikeSpdAntId field to \a bikeSpdAntId.
 *
 * \param bikeSpdAntId The field value to set.
 */
void BikeProfileMessage::setBikeSpdAntId(const quint16z bikeSpdAntId)
{
    Q_D(BikeProfileMessage);
    d->bikeSpdAntId = bikeSpdAntId;
}
/*!
 * Sets the \c bikeCadAntId field to \a bikeCadAntId.
 *
 * \param bikeCadAntId The field value to set.
 */
void BikeProfileMessage::setBikeCadAntId(const quint16z bikeCadAntId)
{
    Q_D(BikeProfileMessage);
    d->bikeCadAntId = bikeCadAntId;
}
/*!
 * Sets the \c bikeSpdcadAntId field to \a bikeSpdcadAntId.
 *
 * \param bikeSpdcadAntId The field value to set.
 */
void BikeProfileMessage::setBikeSpdcadAntId(const quint16z bikeSpdcadAntId)
{
    Q_D(BikeProfileMessage);
    d->bikeSpdcadAntId = bikeSpdcadAntId;
}
/*!
 * Sets the \c bikePowerAntId field to \a bikePowerAntId.
 *
 * \param bikePowerAntId The field value to set.
 */
void BikeProfileMessage::setBikePowerAntId(const quint16z bikePowerAntId)
{
    Q_D(BikeProfileMessage);
    d->bikePowerAntId = bikePowerAntId;
}
/*!
 * Sets the \c customWheelsize field to \a customWheelsize.
 *
 * \param customWheelsize The field value to set.
 */
void BikeProfileMessage::setCustomWheelsize(const quint16 customWheelsize)
{
    Q_D(BikeProfileMessage);
    d->customWheelsize = customWheelsize;
}
/*!
 * Sets the \c autoWheelsize field to \a autoWheelsize.
 *
 * \param autoWheelsize The field value to set.
 */
void BikeProfileMessage::setAutoWheelsize(const quint16 autoWheelsize)
{
    Q_D(BikeProfileMessage);
    d->autoWheelsize = autoWheelsize;
}
/*!
 * Sets the \c bikeWeight field to \a bikeWeight.
 *
 * \param bikeWeight The field value to set.
 */
void BikeProfileMessage::setBikeWeight(const quint16 bikeWeight)
{
    Q_D(BikeProfileMessage);
    d->bikeWeight = bikeWeight;
}
/*!
 * Sets the \c powerCalFactor field to \a powerCalFactor.
 *
 * \param powerCalFactor The field value to set.
 */
void BikeProfileMessage::setPowerCalFactor(const quint16 powerCalFactor)
{
    Q_D(BikeProfileMessage);
    d->powerCalFactor = powerCalFactor;
}
/*!
 * Sets the \c autoWheelCal field to \a autoWheelCal.
 *
 * \param autoWheelCal The field value to set.
 */
void BikeProfileMessage::setAutoWheelCal(const bool autoWheelCal)
{
    Q_D(BikeProfileMessage);
    d->autoWheelCal = autoWheelCal;
}
/*!
 * Sets the \c autoPowerZero field to \a autoPowerZero.
 *
 * \param autoPowerZero The field value to set.
 */
void BikeProfileMessage::setAutoPowerZero(const bool autoPowerZero)
{
    Q_D(BikeProfileMessage);
    d->autoPowerZero = autoPowerZero;
}
/*!
 * Sets the \c id field to \a id.
 *
 * \param id The field value to set.
 */
void BikeProfileMessage::setId(const quint8 id)
{
    Q_D(BikeProfileMessage);
    d->id = id;
}
/*!
 * Sets the \c spdEnabled field to \a spdEnabled.
 *
 * \param spdEnabled The field value to set.
 */
void BikeProfileMessage::setSpdEnabled(const bool spdEnabled)
{
    Q_D(BikeProfileMessage);
    d->spdEnabled = spdEnabled;
}
/*!
 * Sets the \c cadEnabled field to \a cadEnabled.
 *
 * \param cadEnabled The field value to set.
 */
void BikeProfileMessage::setCadEnabled(const bool cadEnabled)
{
    Q_D(BikeProfileMessage);
    d->cadEnabled = cadEnabled;
}
/*!
 * Sets the \c spdcadEnabled field to \a spdcadEnabled.
 *
 * \param spdcadEnabled The field value to set.
 */
void BikeProfileMessage::setSpdcadEnabled(const bool spdcadEnabled)
{
    Q_D(BikeProfileMessage);
    d->spdcadEnabled = spdcadEnabled;
}
/*!
 * Sets the \c powerEnabled field to \a powerEnabled.
 *
 * \param powerEnabled The field value to set.
 */
void BikeProfileMessage::setPowerEnabled(const bool powerEnabled)
{
    Q_D(BikeProfileMessage);
    d->powerEnabled = powerEnabled;
}
/*!
 * Sets the \c crankLength field to \a crankLength.
 *
 * \param crankLength The field value to set.
 */
void BikeProfileMessage::setCrankLength(const quint8 crankLength)
{
    Q_D(BikeProfileMessage);
    d->crankLength = crankLength;
}
/*!
 * Sets the \c enabled field to \a enabled.
 *
 * \param enabled The field value to set.
 */
void BikeProfileMessage::setEnabled(const bool enabled)
{
    Q_D(BikeProfileMessage);
    d->enabled = enabled;
}
/*!
 * Sets the \c bikeSpdAntIdTransType field to \a bikeSpdAntIdTransType.
 *
 * \param bikeSpdAntIdTransType The field value to set.
 */
void BikeProfileMessage::setBikeSpdAntIdTransType(const quint8z bikeSpdAntIdTransType)
{
    Q_D(BikeProfileMessage);
    d->bikeSpdAntIdTransType = bikeSpdAntIdTransType;
}
/*!
 * Sets the \c bikeCadAntIdTransType field to \a bikeCadAntIdTransType.
 *
 * \param bikeCadAntIdTransType The field value to set.
 */
void BikeProfileMessage::setBikeCadAntIdTransType(const quint8z bikeCadAntIdTransType)
{
    Q_D(BikeProfileMessage);
    d->bikeCadAntIdTransType = bikeCadAntIdTransType;
}
/*!
 * Sets the \c bikeSpdcadAntIdTransType field to \a bikeSpdcadAntIdTransType.
 *
 * \param bikeSpdcadAntIdTransType The field value to set.
 */
void BikeProfileMessage::setBikeSpdcadAntIdTransType(const quint8z bikeSpdcadAntIdTransType)
{
    Q_D(BikeProfileMessage);
    d->bikeSpdcadAntIdTransType = bikeSpdcadAntIdTransType;
}
/*!
 * Sets the \c bikePowerAntIdTransType field to \a bikePowerAntIdTransType.
 *
 * \param bikePowerAntIdTransType The field value to set.
 */
void BikeProfileMessage::setBikePowerAntIdTransType(const quint8z bikePowerAntIdTransType)
{
    Q_D(BikeProfileMessage);
    d->bikePowerAntIdTransType = bikePowerAntIdTransType;
}
/*!
 * Sets the \c odometerRollover field to \a odometerRollover.
 *
 * \param odometerRollover The field value to set.
 */
void BikeProfileMessage::setOdometerRollover(const quint8 odometerRollover)
{
    Q_D(BikeProfileMessage);
    d->odometerRollover = odometerRollover;
}
/*!
 * Sets the \c frontGearNum field to \a frontGearNum.
 *
 * \param frontGearNum The field value to set.
 */
void BikeProfileMessage::setFrontGearNum(const quint8z frontGearNum)
{
    Q_D(BikeProfileMessage);
    d->frontGearNum = frontGearNum;
}
/*!
 * Sets the \c frontGear field to \a frontGear.
 *
 * \param frontGear The field value to set.
 */
void BikeProfileMessage::setFrontGear(const quint8z frontGear)
{
    Q_D(BikeProfileMessage);
    d->frontGear = frontGear;
}
/*!
 * Sets the \c rearGearNum field to \a rearGearNum.
 *
 * \param rearGearNum The field value to set.
 */
void BikeProfileMessage::setRearGearNum(const quint8z rearGearNum)
{
    Q_D(BikeProfileMessage);
    d->rearGearNum = rearGearNum;
}
/*!
 * Sets the \c rearGear field to \a rearGear.
 *
 * \param rearGear The field value to set.
 */
void BikeProfileMessage::setRearGear(const quint8z rearGear)
{
    Q_D(BikeProfileMessage);
    d->rearGear = rearGear;
}
/*!
 * Sets the \c shimanoDi2Enabled field to \a shimanoDi2Enabled.
 *
 * \param shimanoDi2Enabled The field value to set.
 */
void BikeProfileMessage::setShimanoDi2Enabled(const bool shimanoDi2Enabled)
{
    Q_D(BikeProfileMessage);
    d->shimanoDi2Enabled = shimanoDi2Enabled;
}

/*!
 * \internal
 *
 * \class BikeProfileMessagePrivate
 *
 * The BikeProfileMessagePrivate class provides private implementation for the BikeProfileMessage.
 *
 * \sa BikeProfileMessage
 */

/*!
 * \internal
 *
 * Constructs a BikeProfileMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
BikeProfileMessagePrivate::BikeProfileMessagePrivate(BikeProfileMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , sport(static_cast<Sport>(-1))
  , subSport(static_cast<SubSport>(-1))
  , odometer(0xFFFFFFFF)
  , bikeSpdAntId(0)
  , bikeCadAntId(0)
  , bikeSpdcadAntId(0)
  , bikePowerAntId(0)
  , customWheelsize(0xFFFF)
  , autoWheelsize(0xFFFF)
  , bikeWeight(0xFFFF)
  , powerCalFactor(0xFFFF)
  , autoWheelCal(static_cast<bool>(-1))
  , autoPowerZero(static_cast<bool>(-1))
  , id(0xFF)
  , spdEnabled(static_cast<bool>(-1))
  , cadEnabled(static_cast<bool>(-1))
  , spdcadEnabled(static_cast<bool>(-1))
  , powerEnabled(static_cast<bool>(-1))
  , crankLength(0xFF)
  , enabled(static_cast<bool>(-1))
  , bikeSpdAntIdTransType(static_cast<quint8z>(-1))
  , bikeCadAntIdTransType(static_cast<quint8z>(-1))
  , bikeSpdcadAntIdTransType(static_cast<quint8z>(-1))
  , bikePowerAntIdTransType(static_cast<quint8z>(-1))
  , odometerRollover(0xFF)
  , frontGearNum(static_cast<quint8z>(-1))
  , frontGear(static_cast<quint8z>(-1))
  , rearGearNum(static_cast<quint8z>(-1))
  , rearGear(static_cast<quint8z>(-1))
  , shimanoDi2Enabled(static_cast<bool>(-1))
{
    globalMessageNumber = MesgNum::BikeProfile;
}

/*!
 * \internal
 *
 * Destroys the BikeProfileMessagePrivate object.
 */
BikeProfileMessagePrivate::~BikeProfileMessagePrivate()
{

}

bool BikeProfileMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:bike_profile.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "bike_profile.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:bike_profile.name
        if (!verify(data, baseType, 1, FitBaseType::String, "bike_profile.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:bike_profile.sport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "bike_profile.sport")) return false;
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:bike_profile.subSport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "bike_profile.subSport")) return false;
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:bike_profile.odometer
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "bike_profile.odometer")) return false;
        this->odometer = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:bike_profile.bikeSpdAntId
        if (!verify(data, baseType, 2, FitBaseType::Uint16z, "bike_profile.bikeSpdAntId")) return false;
        this->bikeSpdAntId = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:bike_profile.bikeCadAntId
        if (!verify(data, baseType, 2, FitBaseType::Uint16z, "bike_profile.bikeCadAntId")) return false;
        this->bikeCadAntId = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:bike_profile.bikeSpdcadAntId
        if (!verify(data, baseType, 2, FitBaseType::Uint16z, "bike_profile.bikeSpdcadAntId")) return false;
        this->bikeSpdcadAntId = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 7: // See Profile.xlsx::Messages:bike_profile.bikePowerAntId
        if (!verify(data, baseType, 2, FitBaseType::Uint16z, "bike_profile.bikePowerAntId")) return false;
        this->bikePowerAntId = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:bike_profile.customWheelsize
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "bike_profile.customWheelsize")) return false;
        this->customWheelsize = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 9: // See Profile.xlsx::Messages:bike_profile.autoWheelsize
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "bike_profile.autoWheelsize")) return false;
        this->autoWheelsize = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:bike_profile.bikeWeight
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "bike_profile.bikeWeight")) return false;
        this->bikeWeight = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 11: // See Profile.xlsx::Messages:bike_profile.powerCalFactor
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "bike_profile.powerCalFactor")) return false;
        this->powerCalFactor = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 12: // See Profile.xlsx::Messages:bike_profile.autoWheelCal
        if (!verify(data, baseType, 0, FitBaseType::Byte, "bike_profile.autoWheelCal")) return false;
        this->autoWheelCal = static_cast<bool>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:bike_profile.autoPowerZero
        if (!verify(data, baseType, 0, FitBaseType::Byte, "bike_profile.autoPowerZero")) return false;
        this->autoPowerZero = static_cast<bool>(data.at(0));
        break;
    case 14: // See Profile.xlsx::Messages:bike_profile.id
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "bike_profile.id")) return false;
        this->id = static_cast<quint8>(data.at(0));
        break;
    case 15: // See Profile.xlsx::Messages:bike_profile.spdEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "bike_profile.spdEnabled")) return false;
        this->spdEnabled = static_cast<bool>(data.at(0));
        break;
    case 16: // See Profile.xlsx::Messages:bike_profile.cadEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "bike_profile.cadEnabled")) return false;
        this->cadEnabled = static_cast<bool>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:bike_profile.spdcadEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "bike_profile.spdcadEnabled")) return false;
        this->spdcadEnabled = static_cast<bool>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:bike_profile.powerEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "bike_profile.powerEnabled")) return false;
        this->powerEnabled = static_cast<bool>(data.at(0));
        break;
    case 19: // See Profile.xlsx::Messages:bike_profile.crankLength
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "bike_profile.crankLength")) return false;
        this->crankLength = static_cast<quint8>(data.at(0));
        break;
    case 20: // See Profile.xlsx::Messages:bike_profile.enabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "bike_profile.enabled")) return false;
        this->enabled = static_cast<bool>(data.at(0));
        break;
    case 21: // See Profile.xlsx::Messages:bike_profile.bikeSpdAntIdTransType
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "bike_profile.bikeSpdAntIdTransType")) return false;
        this->bikeSpdAntIdTransType = static_cast<quint8z>(data.at(0));
        break;
    case 22: // See Profile.xlsx::Messages:bike_profile.bikeCadAntIdTransType
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "bike_profile.bikeCadAntIdTransType")) return false;
        this->bikeCadAntIdTransType = static_cast<quint8z>(data.at(0));
        break;
    case 23: // See Profile.xlsx::Messages:bike_profile.bikeSpdcadAntIdTransType
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "bike_profile.bikeSpdcadAntIdTransType")) return false;
        this->bikeSpdcadAntIdTransType = static_cast<quint8z>(data.at(0));
        break;
    case 24: // See Profile.xlsx::Messages:bike_profile.bikePowerAntIdTransType
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "bike_profile.bikePowerAntIdTransType")) return false;
        this->bikePowerAntIdTransType = static_cast<quint8z>(data.at(0));
        break;
    case 37: // See Profile.xlsx::Messages:bike_profile.odometerRollover
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "bike_profile.odometerRollover")) return false;
        this->odometerRollover = static_cast<quint8>(data.at(0));
        break;
    case 38: // See Profile.xlsx::Messages:bike_profile.frontGearNum
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "bike_profile.frontGearNum")) return false;
        this->frontGearNum = static_cast<quint8z>(data.at(0));
        break;
    case 39: // See Profile.xlsx::Messages:bike_profile.frontGear
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "bike_profile.frontGear")) return false;
        this->frontGear = static_cast<quint8z>(data.at(0));
        break;
    case 40: // See Profile.xlsx::Messages:bike_profile.rearGearNum
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "bike_profile.rearGearNum")) return false;
        this->rearGearNum = static_cast<quint8z>(data.at(0));
        break;
    case 41: // See Profile.xlsx::Messages:bike_profile.rearGear
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "bike_profile.rearGear")) return false;
        this->rearGear = static_cast<quint8z>(data.at(0));
        break;
    case 44: // See Profile.xlsx::Messages:bike_profile.shimanoDi2Enabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "bike_profile.shimanoDi2Enabled")) return false;
        this->shimanoDi2Enabled = static_cast<bool>(data.at(0));
        break;
    default:
        qWarning() << "unknown bike_profile message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
