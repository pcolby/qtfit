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

#include "powerzonemessage.h"
#include "powerzonemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

PowerZoneMessage::PowerZoneMessage() : FitDataMessage(new PowerZoneMessagePrivate(this))
{

}

MessageIndex PowerZoneMessage::messageIndex() const
{
    Q_D(const PowerZoneMessage);
    return d->messageIndex;
}

quint16 PowerZoneMessage::highValue() const
{
    Q_D(const PowerZoneMessage);
    return d->highValue;
}

QString PowerZoneMessage::name() const
{
    Q_D(const PowerZoneMessage);
    return d->name;
}

void PowerZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(PowerZoneMessage);
    d->messageIndex = messageIndex;
}
void PowerZoneMessage::setHighValue(const quint16 highValue)
{
    Q_D(PowerZoneMessage);
    d->highValue = highValue;
}
void PowerZoneMessage::setName(const QString name)
{
    Q_D(PowerZoneMessage);
    d->name = name;
}

PowerZoneMessagePrivate::PowerZoneMessagePrivate(PowerZoneMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , highValue(0xFFFF)
{
    globalMessageNumber = MesgNum::PowerZone;
}

PowerZoneMessagePrivate::~PowerZoneMessagePrivate()
{

}

bool PowerZoneMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:power_zone.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "power_zone.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "power_zone.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 1: // See Profile.xlsx::Messages:power_zone.highValue
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "power_zone.highValue has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "power_zone.highValue size is" << data.size() << "but should be" << 2;
            return false;
        }
        highValue = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:power_zone.name
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "power_zone.name has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "power_zone.name size is" << data.size() << "but should be" << 1;
            return false;
        }
        name = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "unknown power_zone message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
