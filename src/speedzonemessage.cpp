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

#include "speedzonemessage.h"
#include "speedzonemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

SpeedZoneMessage::SpeedZoneMessage() : FitDataMessage(new SpeedZoneMessagePrivate(this))
{

}

MessageIndex SpeedZoneMessage::messageIndex() const
{
    Q_D(const SpeedZoneMessage);
    return d->messageIndex;
}

quint16 SpeedZoneMessage::highValue() const
{
    Q_D(const SpeedZoneMessage);
    return d->highValue;
}

QString SpeedZoneMessage::name() const
{
    Q_D(const SpeedZoneMessage);
    return d->name;
}

void SpeedZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SpeedZoneMessage);
    d->messageIndex = messageIndex;
}
void SpeedZoneMessage::setHighValue(const quint16 highValue)
{
    Q_D(SpeedZoneMessage);
    d->highValue = highValue;
}
void SpeedZoneMessage::setName(const QString name)
{
    Q_D(SpeedZoneMessage);
    d->name = name;
}

SpeedZoneMessagePrivate::SpeedZoneMessagePrivate(SpeedZoneMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , highValue(0xFFFF)
{
    globalMessageNumber = MesgNum::SpeedZone;
}

SpeedZoneMessagePrivate::~SpeedZoneMessagePrivate()
{

}

bool SpeedZoneMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:speed_zone.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "speed_zone.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "speed_zone.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:speed_zone.highValue
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "speed_zone.highValue has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "speed_zone.highValue size is" << data.size() << "but should be" << 2;
            return false;
        }
        highValue = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:speed_zone.name
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "speed_zone.name has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "speed_zone.name size is" << data.size() << "but should be" << 1;
            return false;
        }
        name = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "unknown speed_zone message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
