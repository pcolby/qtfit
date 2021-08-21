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
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "bike_profile.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:bike_profile.name
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.name has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.name size is" << data.size() << "but should be" << 1;
            return false;
        }
        name = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:bike_profile.sport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.sport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.sport size is" << data.size() << "but should be" << 1;
            return false;
        }
        sport = static_cast<Sport>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:bike_profile.subSport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.subSport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.subSport size is" << data.size() << "but should be" << 1;
            return false;
        }
        subSport = static_cast<SubSport>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:bike_profile.odometer
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.odometer has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "bike_profile.odometer size is" << data.size() << "but should be" << 4;
            return false;
        }
        odometer = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:bike_profile.bikeSpdAntId
        if (baseType != FitBaseType::Uint16z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.bikeSpdAntId has base type" << static_cast<int>(baseType) << "but should be Uint16z";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "bike_profile.bikeSpdAntId size is" << data.size() << "but should be" << 2;
            return false;
        }
        bikeSpdAntId = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16z>(data) : qFromLittleEndian<quint16z>(data));
        break;
    case 5: // See Profile.xlsx::Messages:bike_profile.bikeCadAntId
        if (baseType != FitBaseType::Uint16z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.bikeCadAntId has base type" << static_cast<int>(baseType) << "but should be Uint16z";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "bike_profile.bikeCadAntId size is" << data.size() << "but should be" << 2;
            return false;
        }
        bikeCadAntId = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16z>(data) : qFromLittleEndian<quint16z>(data));
        break;
    case 6: // See Profile.xlsx::Messages:bike_profile.bikeSpdcadAntId
        if (baseType != FitBaseType::Uint16z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.bikeSpdcadAntId has base type" << static_cast<int>(baseType) << "but should be Uint16z";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "bike_profile.bikeSpdcadAntId size is" << data.size() << "but should be" << 2;
            return false;
        }
        bikeSpdcadAntId = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16z>(data) : qFromLittleEndian<quint16z>(data));
        break;
    case 7: // See Profile.xlsx::Messages:bike_profile.bikePowerAntId
        if (baseType != FitBaseType::Uint16z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.bikePowerAntId has base type" << static_cast<int>(baseType) << "but should be Uint16z";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "bike_profile.bikePowerAntId size is" << data.size() << "but should be" << 2;
            return false;
        }
        bikePowerAntId = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16z>(data) : qFromLittleEndian<quint16z>(data));
        break;
    case 8: // See Profile.xlsx::Messages:bike_profile.customWheelsize
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.customWheelsize has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "bike_profile.customWheelsize size is" << data.size() << "but should be" << 2;
            return false;
        }
        customWheelsize = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 9: // See Profile.xlsx::Messages:bike_profile.autoWheelsize
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.autoWheelsize has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "bike_profile.autoWheelsize size is" << data.size() << "but should be" << 2;
            return false;
        }
        autoWheelsize = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:bike_profile.bikeWeight
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.bikeWeight has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "bike_profile.bikeWeight size is" << data.size() << "but should be" << 2;
            return false;
        }
        bikeWeight = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 11: // See Profile.xlsx::Messages:bike_profile.powerCalFactor
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.powerCalFactor has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "bike_profile.powerCalFactor size is" << data.size() << "but should be" << 2;
            return false;
        }
        powerCalFactor = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 12: // See Profile.xlsx::Messages:bike_profile.autoWheelCal
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.autoWheelCal has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "bike_profile.autoWheelCal size is" << data.size() << "but should be" << 0;
            return false;
        }
        autoWheelCal = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    case 13: // See Profile.xlsx::Messages:bike_profile.autoPowerZero
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.autoPowerZero has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "bike_profile.autoPowerZero size is" << data.size() << "but should be" << 0;
            return false;
        }
        autoPowerZero = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    case 14: // See Profile.xlsx::Messages:bike_profile.id
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.id has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.id size is" << data.size() << "but should be" << 1;
            return false;
        }
        id = static_cast<quint8>(data.at(0));
        break;
    case 15: // See Profile.xlsx::Messages:bike_profile.spdEnabled
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.spdEnabled has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "bike_profile.spdEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        spdEnabled = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    case 16: // See Profile.xlsx::Messages:bike_profile.cadEnabled
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.cadEnabled has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "bike_profile.cadEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        cadEnabled = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    case 17: // See Profile.xlsx::Messages:bike_profile.spdcadEnabled
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.spdcadEnabled has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "bike_profile.spdcadEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        spdcadEnabled = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    case 18: // See Profile.xlsx::Messages:bike_profile.powerEnabled
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.powerEnabled has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "bike_profile.powerEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        powerEnabled = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    case 19: // See Profile.xlsx::Messages:bike_profile.crankLength
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.crankLength has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.crankLength size is" << data.size() << "but should be" << 1;
            return false;
        }
        crankLength = static_cast<quint8>(data.at(0));
        break;
    case 20: // See Profile.xlsx::Messages:bike_profile.enabled
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.enabled has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "bike_profile.enabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        enabled = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    case 21: // See Profile.xlsx::Messages:bike_profile.bikeSpdAntIdTransType
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.bikeSpdAntIdTransType has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.bikeSpdAntIdTransType size is" << data.size() << "but should be" << 1;
            return false;
        }
        bikeSpdAntIdTransType = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 22: // See Profile.xlsx::Messages:bike_profile.bikeCadAntIdTransType
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.bikeCadAntIdTransType has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.bikeCadAntIdTransType size is" << data.size() << "but should be" << 1;
            return false;
        }
        bikeCadAntIdTransType = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 23: // See Profile.xlsx::Messages:bike_profile.bikeSpdcadAntIdTransType
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.bikeSpdcadAntIdTransType has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.bikeSpdcadAntIdTransType size is" << data.size() << "but should be" << 1;
            return false;
        }
        bikeSpdcadAntIdTransType = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 24: // See Profile.xlsx::Messages:bike_profile.bikePowerAntIdTransType
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.bikePowerAntIdTransType has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.bikePowerAntIdTransType size is" << data.size() << "but should be" << 1;
            return false;
        }
        bikePowerAntIdTransType = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 37: // See Profile.xlsx::Messages:bike_profile.odometerRollover
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.odometerRollover has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.odometerRollover size is" << data.size() << "but should be" << 1;
            return false;
        }
        odometerRollover = static_cast<quint8>(data.at(0));
        break;
    case 38: // See Profile.xlsx::Messages:bike_profile.frontGearNum
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.frontGearNum has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.frontGearNum size is" << data.size() << "but should be" << 1;
            return false;
        }
        frontGearNum = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 39: // See Profile.xlsx::Messages:bike_profile.frontGear
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.frontGear has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.frontGear size is" << data.size() << "but should be" << 1;
            return false;
        }
        frontGear = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 40: // See Profile.xlsx::Messages:bike_profile.rearGearNum
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.rearGearNum has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.rearGearNum size is" << data.size() << "but should be" << 1;
            return false;
        }
        rearGearNum = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 41: // See Profile.xlsx::Messages:bike_profile.rearGear
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.rearGear has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "bike_profile.rearGear size is" << data.size() << "but should be" << 1;
            return false;
        }
        rearGear = static_cast<quint8z>(bigEndian ? qFromBigEndian<quint8z>(data) : qFromLittleEndian<quint8z>(data));
        break;
    case 44: // See Profile.xlsx::Messages:bike_profile.shimanoDi2Enabled
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "bike_profile.shimanoDi2Enabled has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "bike_profile.shimanoDi2Enabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        shimanoDi2Enabled = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    default:
        qWarning() << "unknown bike_profile message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
