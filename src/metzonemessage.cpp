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

#include "metzonemessage.h"
#include "metzonemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

MetZoneMessage::MetZoneMessage() : FitDataMessage(new MetZoneMessagePrivate(this))
{

}

MessageIndex MetZoneMessage::messageIndex() const
{
    Q_D(const MetZoneMessage);
    return d->messageIndex;
}

quint8 MetZoneMessage::highBpm() const
{
    Q_D(const MetZoneMessage);
    return d->highBpm;
}

quint16 MetZoneMessage::calories() const
{
    Q_D(const MetZoneMessage);
    return d->calories;
}

quint8 MetZoneMessage::fatCalories() const
{
    Q_D(const MetZoneMessage);
    return d->fatCalories;
}

void MetZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(MetZoneMessage);
    d->messageIndex = messageIndex;
}
void MetZoneMessage::setHighBpm(const quint8 highBpm)
{
    Q_D(MetZoneMessage);
    d->highBpm = highBpm;
}
void MetZoneMessage::setCalories(const quint16 calories)
{
    Q_D(MetZoneMessage);
    d->calories = calories;
}
void MetZoneMessage::setFatCalories(const quint8 fatCalories)
{
    Q_D(MetZoneMessage);
    d->fatCalories = fatCalories;
}

MetZoneMessagePrivate::MetZoneMessagePrivate(MetZoneMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , highBpm(0xFF)
  , calories(0xFFFF)
  , fatCalories(0xFF)
{
    globalMessageNumber = MesgNum::MetZone;
}

MetZoneMessagePrivate::~MetZoneMessagePrivate()
{

}

bool MetZoneMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:met_zone.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "met_zone.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "met_zone.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:met_zone.highBpm
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "met_zone.highBpm has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "met_zone.highBpm size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->highBpm = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:met_zone.calories
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "met_zone.calories has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "met_zone.calories size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->calories = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:met_zone.fatCalories
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "met_zone.fatCalories has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "met_zone.fatCalories size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->fatCalories = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown met_zone message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
