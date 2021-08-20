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

#include "videoclipmessage.h"
#include "videoclipmessage_p.h"

QTFIT_BEGIN_NAMESPACE

VideoClipMessage::VideoClipMessage() : FitDataMessage(new VideoClipMessagePrivate(this))
{

}

quint16 VideoClipMessage::clipNumber() const
{
    Q_D(const VideoClipMessage);
    return d->clipNumber;
}

DateTime VideoClipMessage::startTimestamp() const
{
    Q_D(const VideoClipMessage);
    return d->startTimestamp;
}

quint16 VideoClipMessage::startTimestampMs() const
{
    Q_D(const VideoClipMessage);
    return d->startTimestampMs;
}

DateTime VideoClipMessage::endTimestamp() const
{
    Q_D(const VideoClipMessage);
    return d->endTimestamp;
}

quint16 VideoClipMessage::endTimestampMs() const
{
    Q_D(const VideoClipMessage);
    return d->endTimestampMs;
}

quint32 VideoClipMessage::clipStart() const
{
    Q_D(const VideoClipMessage);
    return d->clipStart;
}

quint32 VideoClipMessage::clipEnd() const
{
    Q_D(const VideoClipMessage);
    return d->clipEnd;
}

void VideoClipMessage::setClipNumber(const quint16 clipNumber)
{
    Q_D(VideoClipMessage);
    d->clipNumber = clipNumber;
}
void VideoClipMessage::setStartTimestamp(const DateTime startTimestamp)
{
    Q_D(VideoClipMessage);
    d->startTimestamp = startTimestamp;
}
void VideoClipMessage::setStartTimestampMs(const quint16 startTimestampMs)
{
    Q_D(VideoClipMessage);
    d->startTimestampMs = startTimestampMs;
}
void VideoClipMessage::setEndTimestamp(const DateTime endTimestamp)
{
    Q_D(VideoClipMessage);
    d->endTimestamp = endTimestamp;
}
void VideoClipMessage::setEndTimestampMs(const quint16 endTimestampMs)
{
    Q_D(VideoClipMessage);
    d->endTimestampMs = endTimestampMs;
}
void VideoClipMessage::setClipStart(const quint32 clipStart)
{
    Q_D(VideoClipMessage);
    d->clipStart = clipStart;
}
void VideoClipMessage::setClipEnd(const quint32 clipEnd)
{
    Q_D(VideoClipMessage);
    d->clipEnd = clipEnd;
}

VideoClipMessagePrivate::VideoClipMessagePrivate(VideoClipMessage * const q)
  : FitDataMessagePrivate(q)
  , clipNumber(0xFFFF)
  , startTimestamp(static_cast<DateTime>(-1))
  , startTimestampMs(0xFFFF)
  , endTimestamp(static_cast<DateTime>(-1))
  , endTimestampMs(0xFFFF)
  , clipStart(0xFFFFFFFF)
  , clipEnd(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::VideoClip;
}

VideoClipMessagePrivate::~VideoClipMessagePrivate()
{

}

/// @todo Generate implementation.
bool VideoClipMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
