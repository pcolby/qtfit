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

BikeProfileMessagePrivate::BikeProfileMessagePrivate(BikeProfileMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::BikeProfile;
}

BikeProfileMessagePrivate::~BikeProfileMessagePrivate()
{

}

/// @todo Generate implementation.
bool BikeProfileMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
