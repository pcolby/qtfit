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

BloodPressureMessagePrivate::BloodPressureMessagePrivate(BloodPressureMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::BloodPressure;
}

BloodPressureMessagePrivate::~BloodPressureMessagePrivate()
{

}

/// @todo Generate implementation.
bool BloodPressureMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
