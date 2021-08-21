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

#include "hrmessage.h"
#include "hrmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

HrMessage::HrMessage() : FitDataMessage(new HrMessagePrivate(this))
{

}

DateTime HrMessage::timestamp() const
{
    Q_D(const HrMessage);
    return d->timestamp;
}

quint16 HrMessage::fractionalTimestamp() const
{
    Q_D(const HrMessage);
    return d->fractionalTimestamp;
}

quint8 HrMessage::time256() const
{
    Q_D(const HrMessage);
    return d->time256;
}

quint8 HrMessage::filteredBpm() const
{
    Q_D(const HrMessage);
    return d->filteredBpm;
}

quint32 HrMessage::eventTimestamp() const
{
    Q_D(const HrMessage);
    return d->eventTimestamp;
}

quint8 HrMessage::eventTimestamp12() const
{
    Q_D(const HrMessage);
    return d->eventTimestamp12;
}

void HrMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(HrMessage);
    d->timestamp = timestamp;
}
void HrMessage::setFractionalTimestamp(const quint16 fractionalTimestamp)
{
    Q_D(HrMessage);
    d->fractionalTimestamp = fractionalTimestamp;
}
void HrMessage::setTime256(const quint8 time256)
{
    Q_D(HrMessage);
    d->time256 = time256;
}
void HrMessage::setFilteredBpm(const quint8 filteredBpm)
{
    Q_D(HrMessage);
    d->filteredBpm = filteredBpm;
}
void HrMessage::setEventTimestamp(const quint32 eventTimestamp)
{
    Q_D(HrMessage);
    d->eventTimestamp = eventTimestamp;
}
void HrMessage::setEventTimestamp12(const quint8 eventTimestamp12)
{
    Q_D(HrMessage);
    d->eventTimestamp12 = eventTimestamp12;
}

HrMessagePrivate::HrMessagePrivate(HrMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , fractionalTimestamp(0xFFFF)
  , time256(0xFF)
  , filteredBpm(0xFF)
  , eventTimestamp(0xFFFFFFFF)
  , eventTimestamp12(0xFF)
{
    globalMessageNumber = MesgNum::Hr;
}

HrMessagePrivate::~HrMessagePrivate()
{

}

bool HrMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:hr.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "hr.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "hr.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:hr.fractionalTimestamp
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "hr.fractionalTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "hr.fractionalTimestamp size is" << data.size() << "but should be" << 2;
            return false;
        }
        fractionalTimestamp = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:hr.time256
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "hr.time256 has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "hr.time256 size is" << data.size() << "but should be" << 1;
            return false;
        }
        time256 = static_cast<quint8>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:hr.filteredBpm
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "hr.filteredBpm has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "hr.filteredBpm size is" << data.size() << "but should be" << 1;
            return false;
        }
        filteredBpm = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:hr.eventTimestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "hr.eventTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "hr.eventTimestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        eventTimestamp = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 10: // See Profile.xlsx::Messages:hr.eventTimestamp12
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "hr.eventTimestamp12 has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "hr.eventTimestamp12 size is" << data.size() << "but should be" << 1;
            return false;
        }
        eventTimestamp12 = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown hr message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
