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

#include <QDebug>
#include <QtEndian>

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

bool ZonesTargetMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 1: // See Profile.xlsx::Messages:zones_target.maxHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "zones_target.maxHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "zones_target.maxHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        maxHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:zones_target.thresholdHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "zones_target.thresholdHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "zones_target.thresholdHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        thresholdHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:zones_target.functionalThresholdPower
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "zones_target.functionalThresholdPower has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "zones_target.functionalThresholdPower size is" << data.size() << "but should be" << 2;
            return false;
        }
        functionalThresholdPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:zones_target.hrCalcType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "zones_target.hrCalcType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "zones_target.hrCalcType size is" << data.size() << "but should be" << 1;
            return false;
        }
        hrCalcType = static_cast<HrZoneCalc>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:zones_target.pwrCalcType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "zones_target.pwrCalcType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "zones_target.pwrCalcType size is" << data.size() << "but should be" << 1;
            return false;
        }
        pwrCalcType = static_cast<PwrZoneCalc>(data.at(0));
        break;
    default:
        qWarning() << "unknown zones_target message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
