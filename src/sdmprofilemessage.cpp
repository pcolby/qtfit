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

#include "sdmprofilemessage.h"
#include "sdmprofilemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class SdmProfileMessage
 *
 * The SdmProfileMessage class represents a FIT SdmProfileMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid SdmProfileMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SdmProfileMessage::SdmProfileMessage() : AbstractDataMessage(new SdmProfileMessagePrivate(this))
{

}

/*!
 * Returns the SdmProfileMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex SdmProfileMessage::messageIndex() const
{
    Q_D(const SdmProfileMessage);
    return d->messageIndex;
}

/*!
 * Returns the SdmProfileMessage data message's \c enabled field's current value.
 *
 * \return the \c enabled field value.
 */
bool SdmProfileMessage::enabled() const
{
    Q_D(const SdmProfileMessage);
    return d->enabled;
}

/*!
 * Returns the SdmProfileMessage data message's \c sdmAntId field's current value.
 *
 * \return the \c sdmAntId field value.
 */
quint16z SdmProfileMessage::sdmAntId() const
{
    Q_D(const SdmProfileMessage);
    return d->sdmAntId;
}

/*!
 * Returns the SdmProfileMessage data message's \c sdmCalFactor field's current value.
 *
 * \return the \c sdmCalFactor field value.
 */
quint16 SdmProfileMessage::sdmCalFactor() const
{
    Q_D(const SdmProfileMessage);
    return d->sdmCalFactor;
}

/*!
 * Returns the SdmProfileMessage data message's \c odometer field's current value.
 *
 * \return the \c odometer field value.
 */
quint32 SdmProfileMessage::odometer() const
{
    Q_D(const SdmProfileMessage);
    return d->odometer;
}

/*!
 * Returns the SdmProfileMessage data message's \c speedSource field's current value.
 *
 * \return the \c speedSource field value.
 */
bool SdmProfileMessage::speedSource() const
{
    Q_D(const SdmProfileMessage);
    return d->speedSource;
}

/*!
 * Returns the SdmProfileMessage data message's \c sdmAntIdTransType field's current value.
 *
 * \return the \c sdmAntIdTransType field value.
 */
quint8z SdmProfileMessage::sdmAntIdTransType() const
{
    Q_D(const SdmProfileMessage);
    return d->sdmAntIdTransType;
}

/*!
 * Returns the SdmProfileMessage data message's \c odometerRollover field's current value.
 *
 * \return the \c odometerRollover field value.
 */
quint8 SdmProfileMessage::odometerRollover() const
{
    Q_D(const SdmProfileMessage);
    return d->odometerRollover;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void SdmProfileMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SdmProfileMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c enabled field to \a enabled.
 *
 * \param enabled The field value to set.
 */
void SdmProfileMessage::setEnabled(const bool enabled)
{
    Q_D(SdmProfileMessage);
    d->enabled = enabled;
}
/*!
 * Sets the \c sdmAntId field to \a sdmAntId.
 *
 * \param sdmAntId The field value to set.
 */
void SdmProfileMessage::setSdmAntId(const quint16z sdmAntId)
{
    Q_D(SdmProfileMessage);
    d->sdmAntId = sdmAntId;
}
/*!
 * Sets the \c sdmCalFactor field to \a sdmCalFactor.
 *
 * \param sdmCalFactor The field value to set.
 */
void SdmProfileMessage::setSdmCalFactor(const quint16 sdmCalFactor)
{
    Q_D(SdmProfileMessage);
    d->sdmCalFactor = sdmCalFactor;
}
/*!
 * Sets the \c odometer field to \a odometer.
 *
 * \param odometer The field value to set.
 */
void SdmProfileMessage::setOdometer(const quint32 odometer)
{
    Q_D(SdmProfileMessage);
    d->odometer = odometer;
}
/*!
 * Sets the \c speedSource field to \a speedSource.
 *
 * \param speedSource The field value to set.
 */
void SdmProfileMessage::setSpeedSource(const bool speedSource)
{
    Q_D(SdmProfileMessage);
    d->speedSource = speedSource;
}
/*!
 * Sets the \c sdmAntIdTransType field to \a sdmAntIdTransType.
 *
 * \param sdmAntIdTransType The field value to set.
 */
void SdmProfileMessage::setSdmAntIdTransType(const quint8z sdmAntIdTransType)
{
    Q_D(SdmProfileMessage);
    d->sdmAntIdTransType = sdmAntIdTransType;
}
/*!
 * Sets the \c odometerRollover field to \a odometerRollover.
 *
 * \param odometerRollover The field value to set.
 */
void SdmProfileMessage::setOdometerRollover(const quint8 odometerRollover)
{
    Q_D(SdmProfileMessage);
    d->odometerRollover = odometerRollover;
}

/*!
 * \internal
 *
 * \class SdmProfileMessagePrivate
 *
 * The SdmProfileMessagePrivate class provides private implementation for the SdmProfileMessage.
 *
 * \sa SdmProfileMessage
 */

/*!
 * \internal
 *
 * Constructs a SdmProfileMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SdmProfileMessagePrivate::SdmProfileMessagePrivate(SdmProfileMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , enabled(static_cast<bool>(-1))
  , sdmAntId(0)
  , sdmCalFactor(0xFFFF)
  , odometer(0xFFFFFFFF)
  , speedSource(static_cast<bool>(-1))
  , sdmAntIdTransType(static_cast<quint8z>(-1))
  , odometerRollover(0xFF)
{
    globalMessageNumber = MesgNum::SdmProfile;
}

/*!
 * \internal
 *
 * Destroys the SdmProfileMessagePrivate object.
 */
SdmProfileMessagePrivate::~SdmProfileMessagePrivate()
{

}

bool SdmProfileMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:sdm_profile.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "sdm_profile.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:sdm_profile.enabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "sdm_profile.enabled")) return false;
        this->enabled = static_cast<bool>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:sdm_profile.sdmAntId
        if (!verify(data, baseType, 2, FitBaseType::Uint16z, "sdm_profile.sdmAntId")) return false;
        this->sdmAntId = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:sdm_profile.sdmCalFactor
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "sdm_profile.sdmCalFactor")) return false;
        this->sdmCalFactor = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:sdm_profile.odometer
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "sdm_profile.odometer")) return false;
        this->odometer = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:sdm_profile.speedSource
        if (!verify(data, baseType, 0, FitBaseType::Byte, "sdm_profile.speedSource")) return false;
        this->speedSource = static_cast<bool>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:sdm_profile.sdmAntIdTransType
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "sdm_profile.sdmAntIdTransType")) return false;
        this->sdmAntIdTransType = static_cast<quint8z>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:sdm_profile.odometerRollover
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "sdm_profile.odometerRollover")) return false;
        this->odometerRollover = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown sdm_profile message field number" << fieldId;
        return AbstractDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
