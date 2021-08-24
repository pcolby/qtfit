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

/*!
 * \class ZonesTargetMessage
 *
 * The ZonesTargetMessage class represents a FIT ZonesTargetMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a ZonesTargetMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ZonesTargetMessage::ZonesTargetMessage() : AbstractDataMessage(new ZonesTargetMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a ZonesTargetMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
ZonesTargetMessage::ZonesTargetMessage(ZonesTargetMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the ZonesTargetMessage data message's \c maxHeartRate field's current value.
 *
 * \return the \c maxHeartRate field value.
 */
quint8 ZonesTargetMessage::maxHeartRate() const
{
    Q_D(const ZonesTargetMessage);
    return d->maxHeartRate;
}

/*!
 * Returns the ZonesTargetMessage data message's \c thresholdHeartRate field's current value.
 *
 * \return the \c thresholdHeartRate field value.
 */
quint8 ZonesTargetMessage::thresholdHeartRate() const
{
    Q_D(const ZonesTargetMessage);
    return d->thresholdHeartRate;
}

/*!
 * Returns the ZonesTargetMessage data message's \c functionalThresholdPower field's current value.
 *
 * \return the \c functionalThresholdPower field value.
 */
quint16 ZonesTargetMessage::functionalThresholdPower() const
{
    Q_D(const ZonesTargetMessage);
    return d->functionalThresholdPower;
}

/*!
 * Returns the ZonesTargetMessage data message's \c hrCalcType field's current value.
 *
 * \return the \c hrCalcType field value.
 */
HrZoneCalc ZonesTargetMessage::hrCalcType() const
{
    Q_D(const ZonesTargetMessage);
    return d->hrCalcType;
}

/*!
 * Returns the ZonesTargetMessage data message's \c pwrCalcType field's current value.
 *
 * \return the \c pwrCalcType field value.
 */
PwrZoneCalc ZonesTargetMessage::pwrCalcType() const
{
    Q_D(const ZonesTargetMessage);
    return d->pwrCalcType;
}

/*!
 * Sets the \c maxHeartRate field to \a maxHeartRate.
 *
 * \param maxHeartRate The field value to set.
 */
void ZonesTargetMessage::setMaxHeartRate(const quint8 maxHeartRate)
{
    Q_D(ZonesTargetMessage);
    d->maxHeartRate = maxHeartRate;
}
/*!
 * Sets the \c thresholdHeartRate field to \a thresholdHeartRate.
 *
 * \param thresholdHeartRate The field value to set.
 */
void ZonesTargetMessage::setThresholdHeartRate(const quint8 thresholdHeartRate)
{
    Q_D(ZonesTargetMessage);
    d->thresholdHeartRate = thresholdHeartRate;
}
/*!
 * Sets the \c functionalThresholdPower field to \a functionalThresholdPower.
 *
 * \param functionalThresholdPower The field value to set.
 */
void ZonesTargetMessage::setFunctionalThresholdPower(const quint16 functionalThresholdPower)
{
    Q_D(ZonesTargetMessage);
    d->functionalThresholdPower = functionalThresholdPower;
}
/*!
 * Sets the \c hrCalcType field to \a hrCalcType.
 *
 * \param hrCalcType The field value to set.
 */
void ZonesTargetMessage::setHrCalcType(const HrZoneCalc hrCalcType)
{
    Q_D(ZonesTargetMessage);
    d->hrCalcType = hrCalcType;
}
/*!
 * Sets the \c pwrCalcType field to \a pwrCalcType.
 *
 * \param pwrCalcType The field value to set.
 */
void ZonesTargetMessage::setPwrCalcType(const PwrZoneCalc pwrCalcType)
{
    Q_D(ZonesTargetMessage);
    d->pwrCalcType = pwrCalcType;
}

/// \cond internal

/*!
 * \internal
 *
 * \class ZonesTargetMessagePrivate
 *
 * The ZonesTargetMessagePrivate class provides private implementation for the ZonesTargetMessage.
 *
 * \sa ZonesTargetMessage
 */

/*!
 * \internal
 *
 * Constructs a ZonesTargetMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ZonesTargetMessagePrivate::ZonesTargetMessagePrivate(ZonesTargetMessage * const q)
  : AbstractDataMessagePrivate(q)
  , maxHeartRate(0xFF)
  , thresholdHeartRate(0xFF)
  , functionalThresholdPower(0xFFFF)
  , hrCalcType(static_cast<HrZoneCalc>(-1))
  , pwrCalcType(static_cast<PwrZoneCalc>(-1))
{
    globalMessageNumber = MesgNum::ZonesTarget;
}

/*!
 * \internal
 *
 * Destroys the ZonesTargetMessagePrivate object.
 */
ZonesTargetMessagePrivate::~ZonesTargetMessagePrivate()
{

}

bool ZonesTargetMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 1: // See Profile.xlsx::Messages:zones_target.maxHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "zones_target.maxHeartRate")) return false;
        this->maxHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:zones_target.thresholdHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "zones_target.thresholdHeartRate")) return false;
        this->thresholdHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:zones_target.functionalThresholdPower
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "zones_target.functionalThresholdPower")) return false;
        this->functionalThresholdPower = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:zones_target.hrCalcType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "zones_target.hrCalcType")) return false;
        this->hrCalcType = static_cast<HrZoneCalc>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:zones_target.pwrCalcType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "zones_target.pwrCalcType")) return false;
        this->pwrCalcType = static_cast<PwrZoneCalc>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown zones_target message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
