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

SdmProfileMessage::SdmProfileMessage() : FitDataMessage(new SdmProfileMessagePrivate(this))
{

}

MessageIndex SdmProfileMessage::messageIndex() const
{
    Q_D(const SdmProfileMessage);
    return d->messageIndex;
}

bool SdmProfileMessage::enabled() const
{
    Q_D(const SdmProfileMessage);
    return d->enabled;
}

quint16z SdmProfileMessage::sdmAntId() const
{
    Q_D(const SdmProfileMessage);
    return d->sdmAntId;
}

quint16 SdmProfileMessage::sdmCalFactor() const
{
    Q_D(const SdmProfileMessage);
    return d->sdmCalFactor;
}

quint32 SdmProfileMessage::odometer() const
{
    Q_D(const SdmProfileMessage);
    return d->odometer;
}

bool SdmProfileMessage::speedSource() const
{
    Q_D(const SdmProfileMessage);
    return d->speedSource;
}

quint8z SdmProfileMessage::sdmAntIdTransType() const
{
    Q_D(const SdmProfileMessage);
    return d->sdmAntIdTransType;
}

quint8 SdmProfileMessage::odometerRollover() const
{
    Q_D(const SdmProfileMessage);
    return d->odometerRollover;
}

void SdmProfileMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SdmProfileMessage);
    d->messageIndex = messageIndex;
}
void SdmProfileMessage::setEnabled(const bool enabled)
{
    Q_D(SdmProfileMessage);
    d->enabled = enabled;
}
void SdmProfileMessage::setSdmAntId(const quint16z sdmAntId)
{
    Q_D(SdmProfileMessage);
    d->sdmAntId = sdmAntId;
}
void SdmProfileMessage::setSdmCalFactor(const quint16 sdmCalFactor)
{
    Q_D(SdmProfileMessage);
    d->sdmCalFactor = sdmCalFactor;
}
void SdmProfileMessage::setOdometer(const quint32 odometer)
{
    Q_D(SdmProfileMessage);
    d->odometer = odometer;
}
void SdmProfileMessage::setSpeedSource(const bool speedSource)
{
    Q_D(SdmProfileMessage);
    d->speedSource = speedSource;
}
void SdmProfileMessage::setSdmAntIdTransType(const quint8z sdmAntIdTransType)
{
    Q_D(SdmProfileMessage);
    d->sdmAntIdTransType = sdmAntIdTransType;
}
void SdmProfileMessage::setOdometerRollover(const quint8 odometerRollover)
{
    Q_D(SdmProfileMessage);
    d->odometerRollover = odometerRollover;
}

SdmProfileMessagePrivate::SdmProfileMessagePrivate(SdmProfileMessage * const q)
  : FitDataMessagePrivate(q)
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
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
