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

/*!
 * \class BloodPressureMessage
 *
 * The BloodPressureMessage class represents a FIT BloodPressureMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid BloodPressureMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
BloodPressureMessage::BloodPressureMessage() : AbstractDataMessage(new BloodPressureMessagePrivate(this))
{

}

/*!
 * Returns the BloodPressureMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime BloodPressureMessage::timestamp() const
{
    Q_D(const BloodPressureMessage);
    return d->timestamp;
}

/*!
 * Returns the BloodPressureMessage data message's \c systolicPressure field's current value.
 *
 * \return the \c systolicPressure field value.
 */
quint16 BloodPressureMessage::systolicPressure() const
{
    Q_D(const BloodPressureMessage);
    return d->systolicPressure;
}

/*!
 * Returns the BloodPressureMessage data message's \c diastolicPressure field's current value.
 *
 * \return the \c diastolicPressure field value.
 */
quint16 BloodPressureMessage::diastolicPressure() const
{
    Q_D(const BloodPressureMessage);
    return d->diastolicPressure;
}

/*!
 * Returns the BloodPressureMessage data message's \c meanArterialPressure field's current value.
 *
 * \return the \c meanArterialPressure field value.
 */
quint16 BloodPressureMessage::meanArterialPressure() const
{
    Q_D(const BloodPressureMessage);
    return d->meanArterialPressure;
}

/*!
 * Returns the BloodPressureMessage data message's \c map3SampleMean field's current value.
 *
 * \return the \c map3SampleMean field value.
 */
quint16 BloodPressureMessage::map3SampleMean() const
{
    Q_D(const BloodPressureMessage);
    return d->map3SampleMean;
}

/*!
 * Returns the BloodPressureMessage data message's \c mapMorningValues field's current value.
 *
 * \return the \c mapMorningValues field value.
 */
quint16 BloodPressureMessage::mapMorningValues() const
{
    Q_D(const BloodPressureMessage);
    return d->mapMorningValues;
}

/*!
 * Returns the BloodPressureMessage data message's \c mapEveningValues field's current value.
 *
 * \return the \c mapEveningValues field value.
 */
quint16 BloodPressureMessage::mapEveningValues() const
{
    Q_D(const BloodPressureMessage);
    return d->mapEveningValues;
}

/*!
 * Returns the BloodPressureMessage data message's \c heartRate field's current value.
 *
 * \return the \c heartRate field value.
 */
quint8 BloodPressureMessage::heartRate() const
{
    Q_D(const BloodPressureMessage);
    return d->heartRate;
}

/*!
 * Returns the BloodPressureMessage data message's \c heartRateType field's current value.
 *
 * \return the \c heartRateType field value.
 */
HrType BloodPressureMessage::heartRateType() const
{
    Q_D(const BloodPressureMessage);
    return d->heartRateType;
}

/*!
 * Returns the BloodPressureMessage data message's \c status field's current value.
 *
 * \return the \c status field value.
 */
BpStatus BloodPressureMessage::status() const
{
    Q_D(const BloodPressureMessage);
    return d->status;
}

/*!
 * Returns the BloodPressureMessage data message's \c userProfileIndex field's current value.
 *
 * Associates this blood pressure message to a user.  This corresponds to the index of the user profile message in the blood pressure file.
 *
 * \return the \c userProfileIndex field value.
 */
MessageIndex BloodPressureMessage::userProfileIndex() const
{
    Q_D(const BloodPressureMessage);
    return d->userProfileIndex;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void BloodPressureMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(BloodPressureMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c systolicPressure field to \a systolicPressure.
 *
 * \param systolicPressure The field value to set.
 */
void BloodPressureMessage::setSystolicPressure(const quint16 systolicPressure)
{
    Q_D(BloodPressureMessage);
    d->systolicPressure = systolicPressure;
}
/*!
 * Sets the \c diastolicPressure field to \a diastolicPressure.
 *
 * \param diastolicPressure The field value to set.
 */
void BloodPressureMessage::setDiastolicPressure(const quint16 diastolicPressure)
{
    Q_D(BloodPressureMessage);
    d->diastolicPressure = diastolicPressure;
}
/*!
 * Sets the \c meanArterialPressure field to \a meanArterialPressure.
 *
 * \param meanArterialPressure The field value to set.
 */
void BloodPressureMessage::setMeanArterialPressure(const quint16 meanArterialPressure)
{
    Q_D(BloodPressureMessage);
    d->meanArterialPressure = meanArterialPressure;
}
/*!
 * Sets the \c map3SampleMean field to \a map3SampleMean.
 *
 * \param map3SampleMean The field value to set.
 */
void BloodPressureMessage::setMap3SampleMean(const quint16 map3SampleMean)
{
    Q_D(BloodPressureMessage);
    d->map3SampleMean = map3SampleMean;
}
/*!
 * Sets the \c mapMorningValues field to \a mapMorningValues.
 *
 * \param mapMorningValues The field value to set.
 */
void BloodPressureMessage::setMapMorningValues(const quint16 mapMorningValues)
{
    Q_D(BloodPressureMessage);
    d->mapMorningValues = mapMorningValues;
}
/*!
 * Sets the \c mapEveningValues field to \a mapEveningValues.
 *
 * \param mapEveningValues The field value to set.
 */
void BloodPressureMessage::setMapEveningValues(const quint16 mapEveningValues)
{
    Q_D(BloodPressureMessage);
    d->mapEveningValues = mapEveningValues;
}
/*!
 * Sets the \c heartRate field to \a heartRate.
 *
 * \param heartRate The field value to set.
 */
void BloodPressureMessage::setHeartRate(const quint8 heartRate)
{
    Q_D(BloodPressureMessage);
    d->heartRate = heartRate;
}
/*!
 * Sets the \c heartRateType field to \a heartRateType.
 *
 * \param heartRateType The field value to set.
 */
void BloodPressureMessage::setHeartRateType(const HrType heartRateType)
{
    Q_D(BloodPressureMessage);
    d->heartRateType = heartRateType;
}
/*!
 * Sets the \c status field to \a status.
 *
 * \param status The field value to set.
 */
void BloodPressureMessage::setStatus(const BpStatus status)
{
    Q_D(BloodPressureMessage);
    d->status = status;
}
/*!
 * Sets the \c userProfileIndex field to \a userProfileIndex.
 *
 * \param userProfileIndex The field value to set.
 */
void BloodPressureMessage::setUserProfileIndex(const MessageIndex userProfileIndex)
{
    Q_D(BloodPressureMessage);
    d->userProfileIndex = userProfileIndex;
}

/// \cond internal

/*!
 * \internal
 *
 * \class BloodPressureMessagePrivate
 *
 * The BloodPressureMessagePrivate class provides private implementation for the BloodPressureMessage.
 *
 * \sa BloodPressureMessage
 */

/*!
 * \internal
 *
 * Constructs a BloodPressureMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
BloodPressureMessagePrivate::BloodPressureMessagePrivate(BloodPressureMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the BloodPressureMessagePrivate object.
 */
BloodPressureMessagePrivate::~BloodPressureMessagePrivate()
{

}

bool BloodPressureMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:blood_pressure.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "blood_pressure.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:blood_pressure.systolicPressure
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "blood_pressure.systolicPressure")) return false;
        this->systolicPressure = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:blood_pressure.diastolicPressure
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "blood_pressure.diastolicPressure")) return false;
        this->diastolicPressure = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:blood_pressure.meanArterialPressure
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "blood_pressure.meanArterialPressure")) return false;
        this->meanArterialPressure = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:blood_pressure.map3SampleMean
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "blood_pressure.map3SampleMean")) return false;
        this->map3SampleMean = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:blood_pressure.mapMorningValues
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "blood_pressure.mapMorningValues")) return false;
        this->mapMorningValues = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:blood_pressure.mapEveningValues
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "blood_pressure.mapEveningValues")) return false;
        this->mapEveningValues = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:blood_pressure.heartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "blood_pressure.heartRate")) return false;
        this->heartRate = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:blood_pressure.heartRateType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "blood_pressure.heartRateType")) return false;
        this->heartRateType = static_cast<HrType>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:blood_pressure.status
        if (!verify(data, baseType, 1, FitBaseType::Enum, "blood_pressure.status")) return false;
        this->status = static_cast<BpStatus>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:blood_pressure.userProfileIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "blood_pressure.userProfileIndex")) return false;
        this->userProfileIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "ignoring unknown blood_pressure message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
