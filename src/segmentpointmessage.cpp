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

#include "segmentpointmessage.h"
#include "segmentpointmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

SegmentPointMessage::SegmentPointMessage() : FitDataMessage(new SegmentPointMessagePrivate(this))
{

}

MessageIndex SegmentPointMessage::messageIndex() const
{
    Q_D(const SegmentPointMessage);
    return d->messageIndex;
}

qint32 SegmentPointMessage::positionLat() const
{
    Q_D(const SegmentPointMessage);
    return d->positionLat;
}

qint32 SegmentPointMessage::positionLong() const
{
    Q_D(const SegmentPointMessage);
    return d->positionLong;
}

quint32 SegmentPointMessage::distance() const
{
    Q_D(const SegmentPointMessage);
    return d->distance;
}

quint16 SegmentPointMessage::altitude() const
{
    Q_D(const SegmentPointMessage);
    return d->altitude;
}

quint32 SegmentPointMessage::leaderTime() const
{
    Q_D(const SegmentPointMessage);
    return d->leaderTime;
}

void SegmentPointMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SegmentPointMessage);
    d->messageIndex = messageIndex;
}
void SegmentPointMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(SegmentPointMessage);
    d->positionLat = positionLat;
}
void SegmentPointMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(SegmentPointMessage);
    d->positionLong = positionLong;
}
void SegmentPointMessage::setDistance(const quint32 distance)
{
    Q_D(SegmentPointMessage);
    d->distance = distance;
}
void SegmentPointMessage::setAltitude(const quint16 altitude)
{
    Q_D(SegmentPointMessage);
    d->altitude = altitude;
}
void SegmentPointMessage::setLeaderTime(const quint32 leaderTime)
{
    Q_D(SegmentPointMessage);
    d->leaderTime = leaderTime;
}

SegmentPointMessagePrivate::SegmentPointMessagePrivate(SegmentPointMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , positionLat(0x7FFFFFFF)
  , positionLong(0x7FFFFFFF)
  , distance(0xFFFFFFFF)
  , altitude(0xFFFF)
  , leaderTime(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::SegmentPoint;
}

SegmentPointMessagePrivate::~SegmentPointMessagePrivate()
{

}

bool SegmentPointMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:segment_point.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_point.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_point.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 1: // See Profile.xlsx::Messages:segment_point.positionLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_point.positionLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_point.positionLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->positionLat = static_cast<qint32>(bigEndian ? qFromBigEndian<qint32>(data) : qFromLittleEndian<qint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:segment_point.positionLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_point.positionLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_point.positionLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->positionLong = static_cast<qint32>(bigEndian ? qFromBigEndian<qint32>(data) : qFromLittleEndian<qint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:segment_point.distance
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_point.distance has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_point.distance size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->distance = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:segment_point.altitude
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_point.altitude has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "segment_point.altitude size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->altitude = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:segment_point.leaderTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "segment_point.leaderTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "segment_point.leaderTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->leaderTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown segment_point message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
