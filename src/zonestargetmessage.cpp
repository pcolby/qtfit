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

#include "zonestargetmessage.h"
#include "zonestargetmessage_p.h"

QTFIT_BEGIN_NAMESPACE

ZonesTargetMessage::ZonesTargetMessage() : FitDataMessage(new ZonesTargetMessagePrivate(this))
{

}

quint8 ZonesTargetMessage::maxHeartRate() const
{
    Q_D(const ZonesTargetMessage);
    return d->maxHeartRate;
}

quint8 ZonesTargetMessage::thresholdHeartRate() const
{
    Q_D(const ZonesTargetMessage);
    return d->thresholdHeartRate;
}

quint16 ZonesTargetMessage::functionalThresholdPower() const
{
    Q_D(const ZonesTargetMessage);
    return d->functionalThresholdPower;
}

HrZoneCalc ZonesTargetMessage::hrCalcType() const
{
    Q_D(const ZonesTargetMessage);
    return d->hrCalcType;
}

PwrZoneCalc ZonesTargetMessage::pwrCalcType() const
{
    Q_D(const ZonesTargetMessage);
    return d->pwrCalcType;
}

void ZonesTargetMessage::setMaxHeartRate(const quint8 maxHeartRate)
{
    Q_D(ZonesTargetMessage);
    d->maxHeartRate = maxHeartRate;
}
void ZonesTargetMessage::setThresholdHeartRate(const quint8 thresholdHeartRate)
{
    Q_D(ZonesTargetMessage);
    d->thresholdHeartRate = thresholdHeartRate;
}
void ZonesTargetMessage::setFunctionalThresholdPower(const quint16 functionalThresholdPower)
{
    Q_D(ZonesTargetMessage);
    d->functionalThresholdPower = functionalThresholdPower;
}
void ZonesTargetMessage::setHrCalcType(const HrZoneCalc hrCalcType)
{
    Q_D(ZonesTargetMessage);
    d->hrCalcType = hrCalcType;
}
void ZonesTargetMessage::setPwrCalcType(const PwrZoneCalc pwrCalcType)
{
    Q_D(ZonesTargetMessage);
    d->pwrCalcType = pwrCalcType;
}

ZonesTargetMessagePrivate::ZonesTargetMessagePrivate(ZonesTargetMessage * const q)
  : FitDataMessagePrivate(q)
  , maxHeartRate(0xFF)
  , thresholdHeartRate(0xFF)
  , functionalThresholdPower(0xFFFF)
  , hrCalcType(static_cast<HrZoneCalc>(-1))
  , pwrCalcType(static_cast<PwrZoneCalc>(-1))
{
    globalMessageNumber = MesgNum::ZonesTarget;
}

ZonesTargetMessagePrivate::~ZonesTargetMessagePrivate()
{

}

/// @todo Generate implementation.
bool ZonesTargetMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
