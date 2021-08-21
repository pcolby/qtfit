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

#include "bloodpressuremessage.h"
#include "bloodpressuremessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

BloodPressureMessage::BloodPressureMessage() : FitDataMessage(new BloodPressureMessagePrivate(this))
{

}

DateTime BloodPressureMessage::timestamp() const
{
    Q_D(const BloodPressureMessage);
    return d->timestamp;
}

quint16 BloodPressureMessage::systolicPressure() const
{
    Q_D(const BloodPressureMessage);
    return d->systolicPressure;
}

quint16 BloodPressureMessage::diastolicPressure() const
{
    Q_D(const BloodPressureMessage);
    return d->diastolicPressure;
}

quint16 BloodPressureMessage::meanArterialPressure() const
{
    Q_D(const BloodPressureMessage);
    return d->meanArterialPressure;
}

quint16 BloodPressureMessage::map3SampleMean() const
{
    Q_D(const BloodPressureMessage);
    return d->map3SampleMean;
}

quint16 BloodPressureMessage::mapMorningValues() const
{
    Q_D(const BloodPressureMessage);
    return d->mapMorningValues;
}

quint16 BloodPressureMessage::mapEveningValues() const
{
    Q_D(const BloodPressureMessage);
    return d->mapEveningValues;
}

quint8 BloodPressureMessage::heartRate() const
{
    Q_D(const BloodPressureMessage);
    return d->heartRate;
}

HrType BloodPressureMessage::heartRateType() const
{
    Q_D(const BloodPressureMessage);
    return d->heartRateType;
}

BpStatus BloodPressureMessage::status() const
{
    Q_D(const BloodPressureMessage);
    return d->status;
}

MessageIndex BloodPressureMessage::userProfileIndex() const
{
    Q_D(const BloodPressureMessage);
    return d->userProfileIndex;
}

void BloodPressureMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(BloodPressureMessage);
    d->timestamp = timestamp;
}
void BloodPressureMessage::setSystolicPressure(const quint16 systolicPressure)
{
    Q_D(BloodPressureMessage);
    d->systolicPressure = systolicPressure;
}
void BloodPressureMessage::setDiastolicPressure(const quint16 diastolicPressure)
{
    Q_D(BloodPressureMessage);
    d->diastolicPressure = diastolicPressure;
}
void BloodPressureMessage::setMeanArterialPressure(const quint16 meanArterialPressure)
{
    Q_D(BloodPressureMessage);
    d->meanArterialPressure = meanArterialPressure;
}
void BloodPressureMessage::setMap3SampleMean(const quint16 map3SampleMean)
{
    Q_D(BloodPressureMessage);
    d->map3SampleMean = map3SampleMean;
}
void BloodPressureMessage::setMapMorningValues(const quint16 mapMorningValues)
{
    Q_D(BloodPressureMessage);
    d->mapMorningValues = mapMorningValues;
}
void BloodPressureMessage::setMapEveningValues(const quint16 mapEveningValues)
{
    Q_D(BloodPressureMessage);
    d->mapEveningValues = mapEveningValues;
}
void BloodPressureMessage::setHeartRate(const quint8 heartRate)
{
    Q_D(BloodPressureMessage);
    d->heartRate = heartRate;
}
void BloodPressureMessage::setHeartRateType(const HrType heartRateType)
{
    Q_D(BloodPressureMessage);
    d->heartRateType = heartRateType;
}
void BloodPressureMessage::setStatus(const BpStatus status)
{
    Q_D(BloodPressureMessage);
    d->status = status;
}
void BloodPressureMessage::setUserProfileIndex(const MessageIndex userProfileIndex)
{
    Q_D(BloodPressureMessage);
    d->userProfileIndex = userProfileIndex;
}

BloodPressureMessagePrivate::BloodPressureMessagePrivate(BloodPressureMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , systolicPressure(0xFFFF)
  , diastolicPressure(0xFFFF)
  , meanArterialPressure(0xFFFF)
  , map3SampleMean(0xFFFF)
  , mapMorningValues(0xFFFF)
  , mapEveningValues(0xFFFF)
  , heartRate(0xFF)
  , heartRateType(static_cast<HrType>(-1))
  , status(static_cast<BpStatus>(-1))
  , userProfileIndex(static_cast<MessageIndex>(-1))
{
    globalMessageNumber = MesgNum::BloodPressure;
}

BloodPressureMessagePrivate::~BloodPressureMessagePrivate()
{

}

bool BloodPressureMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:blood_pressure.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "blood_pressure.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:blood_pressure.systolicPressure
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.systolicPressure has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "blood_pressure.systolicPressure size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->systolicPressure = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:blood_pressure.diastolicPressure
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.diastolicPressure has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "blood_pressure.diastolicPressure size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->diastolicPressure = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:blood_pressure.meanArterialPressure
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.meanArterialPressure has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "blood_pressure.meanArterialPressure size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->meanArterialPressure = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:blood_pressure.map3SampleMean
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.map3SampleMean has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "blood_pressure.map3SampleMean size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->map3SampleMean = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:blood_pressure.mapMorningValues
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.mapMorningValues has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "blood_pressure.mapMorningValues size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->mapMorningValues = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:blood_pressure.mapEveningValues
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.mapEveningValues has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "blood_pressure.mapEveningValues size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->mapEveningValues = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:blood_pressure.heartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.heartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "blood_pressure.heartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->heartRate = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:blood_pressure.heartRateType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.heartRateType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "blood_pressure.heartRateType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->heartRateType = static_cast<HrType>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:blood_pressure.status
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.status has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "blood_pressure.status size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->status = static_cast<BpStatus>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:blood_pressure.userProfileIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "blood_pressure.userProfileIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "blood_pressure.userProfileIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->userProfileIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown blood_pressure message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
