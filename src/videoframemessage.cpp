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

VideoFrameMessagePrivate::VideoFrameMessagePrivate(VideoFrameMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::VideoFrame;
}

VideoFrameMessagePrivate::~VideoFrameMessagePrivate()
{

}

/// @todo Generate implementation.
bool VideoFrameMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE