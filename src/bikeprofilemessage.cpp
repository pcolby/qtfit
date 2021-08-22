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

BikeProfileMessage::BikeProfileMessage() : FitDataMessage(new BikeProfileMessagePrivate(this))
{

}

MessageIndex BikeProfileMessage::messageIndex() const
{
    Q_D(const BikeProfileMessage);
    return d->messageIndex;
}

QString BikeProfileMessage::name() const
{
    Q_D(const BikeProfileMessage);
    return d->name;
}

Sport BikeProfileMessage::sport() const
{
    Q_D(const BikeProfileMessage);
    return d->sport;
}

SubSport BikeProfileMessage::subSport() const
{
    Q_D(const BikeProfileMessage);
    return d->subSport;
}

quint32 BikeProfileMessage::odometer() const
{
    Q_D(const BikeProfileMessage);
    return d->odometer;
}

quint16z BikeProfileMessage::bikeSpdAntId() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeSpdAntId;
}

quint16z BikeProfileMessage::bikeCadAntId() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeCadAntId;
}

quint16z BikeProfileMessage::bikeSpdcadAntId() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeSpdcadAntId;
}

quint16z BikeProfileMessage::bikePowerAntId() const
{
    Q_D(const BikeProfileMessage);
    return d->bikePowerAntId;
}

quint16 BikeProfileMessage::customWheelsize() const
{
    Q_D(const BikeProfileMessage);
    return d->customWheelsize;
}

quint16 BikeProfileMessage::autoWheelsize() const
{
    Q_D(const BikeProfileMessage);
    return d->autoWheelsize;
}

quint16 BikeProfileMessage::bikeWeight() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeWeight;
}

quint16 BikeProfileMessage::powerCalFactor() const
{
    Q_D(const BikeProfileMessage);
    return d->powerCalFactor;
}

bool BikeProfileMessage::autoWheelCal() const
{
    Q_D(const BikeProfileMessage);
    return d->autoWheelCal;
}

bool BikeProfileMessage::autoPowerZero() const
{
    Q_D(const BikeProfileMessage);
    return d->autoPowerZero;
}

quint8 BikeProfileMessage::id() const
{
    Q_D(const BikeProfileMessage);
    return d->id;
}

bool BikeProfileMessage::spdEnabled() const
{
    Q_D(const BikeProfileMessage);
    return d->spdEnabled;
}

bool BikeProfileMessage::cadEnabled() const
{
    Q_D(const BikeProfileMessage);
    return d->cadEnabled;
}

bool BikeProfileMessage::spdcadEnabled() const
{
    Q_D(const BikeProfileMessage);
    return d->spdcadEnabled;
}

bool BikeProfileMessage::powerEnabled() const
{
    Q_D(const BikeProfileMessage);
    return d->powerEnabled;
}

quint8 BikeProfileMessage::crankLength() const
{
    Q_D(const BikeProfileMessage);
    return d->crankLength;
}

bool BikeProfileMessage::enabled() const
{
    Q_D(const BikeProfileMessage);
    return d->enabled;
}

quint8z BikeProfileMessage::bikeSpdAntIdTransType() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeSpdAntIdTransType;
}

quint8z BikeProfileMessage::bikeCadAntIdTransType() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeCadAntIdTransType;
}

quint8z BikeProfileMessage::bikeSpdcadAntIdTransType() const
{
    Q_D(const BikeProfileMessage);
    return d->bikeSpdcadAntIdTransType;
}

quint8z BikeProfileMessage::bikePowerAntIdTransType() const
{
    Q_D(const BikeProfileMessage);
    return d->bikePowerAntIdTransType;
}

quint8 BikeProfileMessage::odometerRollover() const
{
    Q_D(const BikeProfileMessage);
    return d->odometerRollover;
}

quint8z BikeProfileMessage::frontGearNum() const
{
    Q_D(const BikeProfileMessage);
    return d->frontGearNum;
}

quint8z BikeProfileMessage::frontGear() const
{
    Q_D(const BikeProfileMessage);
    return d->frontGear;
}

quint8z BikeProfileMessage::rearGearNum() const
{
    Q_D(const BikeProfileMessage);
    return d->rearGearNum;
}

quint8z BikeProfileMessage::rearGear() const
{
    Q_D(const BikeProfileMessage);
    return d->rearGear;
}

bool BikeProfileMessage::shimanoDi2Enabled() const
{
    Q_D(const BikeProfileMessage);
    return d->shimanoDi2Enabled;
}

void BikeProfileMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(BikeProfileMessage);
    d->messageIndex = messageIndex;
}
void BikeProfileMessage::setName(const QString name)
{
    Q_D(BikeProfileMessage);
    d->name = name;
}
void BikeProfileMessage::setSport(const Sport sport)
{
    Q_D(BikeProfileMessage);
    d->sport = sport;
}
void BikeProfileMessage::setSubSport(const SubSport subSport)
{
    Q_D(BikeProfileMessage);
    d->subSport = subSport;
}
void BikeProfileMessage::setOdometer(const quint32 odometer)
{
    Q_D(BikeProfileMessage);
    d->odometer = odometer;
}
void BikeProfileMessage::setBikeSpdAntId(const quint16z bikeSpdAntId)
{
    Q_D(BikeProfileMessage);
    d->bikeSpdAntId = bikeSpdAntId;
}
void BikeProfileMessage::setBikeCadAntId(const quint16z bikeCadAntId)
{
    Q_D(BikeProfileMessage);
    d->bikeCadAntId = bikeCadAntId;
}
void BikeProfileMessage::setBikeSpdcadAntId(const quint16z bikeSpdcadAntId)
{
    Q_D(BikeProfileMessage);
    d->bikeSpdcadAntId = bikeSpdcadAntId;
}
void BikeProfileMessage::setBikePowerAntId(const quint16z bikePowerAntId)
{
    Q_D(BikeProfileMessage);
    d->bikePowerAntId = bikePowerAntId;
}
void BikeProfileMessage::setCustomWheelsize(const quint16 customWheelsize)
{
    Q_D(BikeProfileMessage);
    d->customWheelsize = customWheelsize;
}
void BikeProfileMessage::setAutoWheelsize(const quint16 autoWheelsize)
{
    Q_D(BikeProfileMessage);
    d->autoWheelsize = autoWheelsize;
}
void BikeProfileMessage::setBikeWeight(const quint16 bikeWeight)
{
    Q_D(BikeProfileMessage);
    d->bikeWeight = bikeWeight;
}
void BikeProfileMessage::setPowerCalFactor(const quint16 powerCalFactor)
{
    Q_D(BikeProfileMessage);
    d->powerCalFactor = powerCalFactor;
}
void BikeProfileMessage::setAutoWheelCal(const bool autoWheelCal)
{
    Q_D(BikeProfileMessage);
    d->autoWheelCal = autoWheelCal;
}
void BikeProfileMessage::setAutoPowerZero(const bool autoPowerZero)
{
    Q_D(BikeProfileMessage);
    d->autoPowerZero = autoPowerZero;
}
void BikeProfileMessage::setId(const quint8 id)
{
    Q_D(BikeProfileMessage);
    d->id = id;
}
void BikeProfileMessage::setSpdEnabled(const bool spdEnabled)
{
    Q_D(BikeProfileMessage);
    d->spdEnabled = spdEnabled;
}
void BikeProfileMessage::setCadEnabled(const bool cadEnabled)
{
    Q_D(BikeProfileMessage);
    d->cadEnabled = cadEnabled;
}
void BikeProfileMessage::setSpdcadEnabled(const bool spdcadEnabled)
{
    Q_D(BikeProfileMessage);
    d->spdcadEnabled = spdcadEnabled;
}
void BikeProfileMessage::setPowerEnabled(const bool powerEnabled)
{
    Q_D(BikeProfileMessage);
    d->powerEnabled = powerEnabled;
}
void BikeProfileMessage::setCrankLength(const quint8 crankLength)
{
    Q_D(BikeProfileMessage);
    d->crankLength = crankLength;
}
void BikeProfileMessage::setEnabled(const bool enabled)
{
    Q_D(BikeProfileMessage);
    d->enabled = enabled;
}
void BikeProfileMessage::setBikeSpdAntIdTransType(const quint8z bikeSpdAntIdTransType)
{
    Q_D(BikeProfileMessage);
    d->bikeSpdAntIdTransType = bikeSpdAntIdTransType;
}
void BikeProfileMessage::setBikeCadAntIdTransType(const quint8z bikeCadAntIdTransType)
{
    Q_D(BikeProfileMessage);
    d->bikeCadAntIdTransType = bikeCadAntIdTransType;
}
void BikeProfileMessage::setBikeSpdcadAntIdTransType(const quint8z bikeSpdcadAntIdTransType)
{
    Q_D(BikeProfileMessage);
    d->bikeSpdcadAntIdTransType = bikeSpdcadAntIdTransType;
}
void BikeProfileMessage::setBikePowerAntIdTransType(const quint8z bikePowerAntIdTransType)
{
    Q_D(BikeProfileMessage);
    d->bikePowerAntIdTransType = bikePowerAntIdTransType;
}
void BikeProfileMessage::setOdometerRollover(const quint8 odometerRollover)
{
    Q_D(BikeProfileMessage);
    d->odometerRollover = odometerRollover;
}
void BikeProfileMessage::setFrontGearNum(const quint8z frontGearNum)
{
    Q_D(BikeProfileMessage);
    d->frontGearNum = frontGearNum;
}
void BikeProfileMessage::setFrontGear(const quint8z frontGear)
{
    Q_D(BikeProfileMessage);
    d->frontGear = frontGear;
}
void BikeProfileMessage::setRearGearNum(const quint8z rearGearNum)
{
    Q_D(BikeProfileMessage);
    d->rearGearNum = rearGearNum;
}
void BikeProfileMessage::setRearGear(const quint8z rearGear)
{
    Q_D(BikeProfileMessage);
    d->rearGear = rearGear;
}
void BikeProfileMessage::setShimanoDi2Enabled(const bool shimanoDi2Enabled)
{
    Q_D(BikeProfileMessage);
    d->shimanoDi2Enabled = shimanoDi2Enabled;
}

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
