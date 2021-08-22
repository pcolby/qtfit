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

#include "hrzonemessage.h"
#include "hrzonemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

HrZoneMessage::HrZoneMessage() : FitDataMessage(new HrZoneMessagePrivate(this))
{

}

MessageIndex HrZoneMessage::messageIndex() const
{
    Q_D(const HrZoneMessage);
    return d->messageIndex;
}

quint8 HrZoneMessage::highBpm() const
{
    Q_D(const HrZoneMessage);
    return d->highBpm;
}

QString HrZoneMessage::name() const
{
    Q_D(const HrZoneMessage);
    return d->name;
}

void HrZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(HrZoneMessage);
    d->messageIndex = messageIndex;
}
void HrZoneMessage::setHighBpm(const quint8 highBpm)
{
    Q_D(HrZoneMessage);
    d->highBpm = highBpm;
}
void HrZoneMessage::setName(const QString name)
{
    Q_D(HrZoneMessage);
    d->name = name;
}

HrZoneMessagePrivate::HrZoneMessagePrivate(HrZoneMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , highBpm(0xFF)
{
    globalMessageNumber = MesgNum::HrZone;
}

HrZoneMessagePrivate::~HrZoneMessagePrivate()
{

}

bool HrZoneMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:hr_zone.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "hr_zone.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:hr_zone.highBpm
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "hr_zone.highBpm")) return false;
        this->highBpm = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:hr_zone.name
        if (!verify(data, baseType, 1, FitBaseType::String, "hr_zone.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "unknown hr_zone message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
