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

#include "obdiidatamessage.h"
#include "obdiidatamessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

ObdiiDataMessage::ObdiiDataMessage() : FitDataMessage(new ObdiiDataMessagePrivate(this))
{

}

DateTime ObdiiDataMessage::timestamp() const
{
    Q_D(const ObdiiDataMessage);
    return d->timestamp;
}

quint16 ObdiiDataMessage::timestampMs() const
{
    Q_D(const ObdiiDataMessage);
    return d->timestampMs;
}

quint16 ObdiiDataMessage::timeOffset() const
{
    Q_D(const ObdiiDataMessage);
    return d->timeOffset;
}

quint8 ObdiiDataMessage::pid() const
{
    Q_D(const ObdiiDataMessage);
    return d->pid;
}

quint8 ObdiiDataMessage::rawData() const
{
    Q_D(const ObdiiDataMessage);
    return d->rawData;
}

quint8 ObdiiDataMessage::pidDataSize() const
{
    Q_D(const ObdiiDataMessage);
    return d->pidDataSize;
}

quint32 ObdiiDataMessage::systemTime() const
{
    Q_D(const ObdiiDataMessage);
    return d->systemTime;
}

DateTime ObdiiDataMessage::startTimestamp() const
{
    Q_D(const ObdiiDataMessage);
    return d->startTimestamp;
}

quint16 ObdiiDataMessage::startTimestampMs() const
{
    Q_D(const ObdiiDataMessage);
    return d->startTimestampMs;
}

void ObdiiDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(ObdiiDataMessage);
    d->timestamp = timestamp;
}
void ObdiiDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(ObdiiDataMessage);
    d->timestampMs = timestampMs;
}
void ObdiiDataMessage::setTimeOffset(const quint16 timeOffset)
{
    Q_D(ObdiiDataMessage);
    d->timeOffset = timeOffset;
}
void ObdiiDataMessage::setPid(const quint8 pid)
{
    Q_D(ObdiiDataMessage);
    d->pid = pid;
}
void ObdiiDataMessage::setRawData(const quint8 rawData)
{
    Q_D(ObdiiDataMessage);
    d->rawData = rawData;
}
void ObdiiDataMessage::setPidDataSize(const quint8 pidDataSize)
{
    Q_D(ObdiiDataMessage);
    d->pidDataSize = pidDataSize;
}
void ObdiiDataMessage::setSystemTime(const quint32 systemTime)
{
    Q_D(ObdiiDataMessage);
    d->systemTime = systemTime;
}
void ObdiiDataMessage::setStartTimestamp(const DateTime startTimestamp)
{
    Q_D(ObdiiDataMessage);
    d->startTimestamp = startTimestamp;
}
void ObdiiDataMessage::setStartTimestampMs(const quint16 startTimestampMs)
{
    Q_D(ObdiiDataMessage);
    d->startTimestampMs = startTimestampMs;
}

ObdiiDataMessagePrivate::ObdiiDataMessagePrivate(ObdiiDataMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , timeOffset(0xFFFF)
  , pid(0xFF)
  , rawData(0xFF)
  , pidDataSize(0xFF)
  , systemTime(0xFFFFFFFF)
  , startTimestamp(static_cast<DateTime>(-1))
  , startTimestampMs(0xFFFF)
{
    globalMessageNumber = MesgNum::ObdiiData;
}

ObdiiDataMessagePrivate::~ObdiiDataMessagePrivate()
{

}

bool ObdiiDataMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:obdii_data.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "obdii_data.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "obdii_data.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:obdii_data.timestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "obdii_data.timestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "obdii_data.timestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:obdii_data.timeOffset
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "obdii_data.timeOffset has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "obdii_data.timeOffset size is" << data.size() << "but should be" << 2;
            return false;
        }
        timeOffset = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:obdii_data.pid
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "obdii_data.pid has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "obdii_data.pid size is" << data.size() << "but should be" << 1;
            return false;
        }
        pid = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:obdii_data.rawData
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "obdii_data.rawData has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "obdii_data.rawData size is" << data.size() << "but should be" << 1;
            return false;
        }
        rawData = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:obdii_data.pidDataSize
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "obdii_data.pidDataSize has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "obdii_data.pidDataSize size is" << data.size() << "but should be" << 1;
            return false;
        }
        pidDataSize = static_cast<quint8>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:obdii_data.systemTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "obdii_data.systemTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "obdii_data.systemTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        systemTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:obdii_data.startTimestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "obdii_data.startTimestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "obdii_data.startTimestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        startTimestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 7: // See Profile.xlsx::Messages:obdii_data.startTimestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "obdii_data.startTimestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "obdii_data.startTimestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        startTimestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown obdii_data message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
