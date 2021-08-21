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

#include "videoframemessage.h"
#include "videoframemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

VideoFrameMessage::VideoFrameMessage() : FitDataMessage(new VideoFrameMessagePrivate(this))
{

}

DateTime VideoFrameMessage::timestamp() const
{
    Q_D(const VideoFrameMessage);
    return d->timestamp;
}

quint16 VideoFrameMessage::timestampMs() const
{
    Q_D(const VideoFrameMessage);
    return d->timestampMs;
}

quint32 VideoFrameMessage::frameNumber() const
{
    Q_D(const VideoFrameMessage);
    return d->frameNumber;
}

void VideoFrameMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(VideoFrameMessage);
    d->timestamp = timestamp;
}
void VideoFrameMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(VideoFrameMessage);
    d->timestampMs = timestampMs;
}
void VideoFrameMessage::setFrameNumber(const quint32 frameNumber)
{
    Q_D(VideoFrameMessage);
    d->frameNumber = frameNumber;
}

VideoFrameMessagePrivate::VideoFrameMessagePrivate(VideoFrameMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , frameNumber(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::VideoFrame;
}

VideoFrameMessagePrivate::~VideoFrameMessagePrivate()
{

}

bool VideoFrameMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:video_frame.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "video_frame.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "video_frame.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:video_frame.timestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "video_frame.timestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "video_frame.timestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:video_frame.frameNumber
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "video_frame.frameNumber has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "video_frame.frameNumber size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->frameNumber = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown video_frame message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
