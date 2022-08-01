// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the VideoFrameMessage, and VideoFrameMessagePrivate classes.
 */

#include <qtfit/videoframemessage.h>
#include "videoframemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class VideoFrameMessage
 *
 * The VideoFrameMessage class represents a FIT VideoFrameMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a VideoFrameMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
VideoFrameMessage::VideoFrameMessage() : AbstractDataMessage(new VideoFrameMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a VideoFrameMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
VideoFrameMessage::VideoFrameMessage(VideoFrameMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the VideoFrameMessage data message's \c timestamp field's current value.
 *
 * Whole second part of the timestamp
 *
 * \return the \c timestamp field value.
 */
DateTime VideoFrameMessage::timestamp() const
{
    Q_D(const VideoFrameMessage);
    return d->timestamp;
}

/*!
 * Returns the VideoFrameMessage data message's \c timestampMs field's current value.
 *
 * Millisecond part of the timestamp.
 *
 * \return the \c timestampMs field value.
 */
quint16 VideoFrameMessage::timestampMs() const
{
    Q_D(const VideoFrameMessage);
    return d->timestampMs;
}

/*!
 * Returns the VideoFrameMessage data message's \c frameNumber field's current value.
 *
 * Number of the frame that the timestamp and timestamp_ms correlate to
 *
 * \return the \c frameNumber field value.
 */
quint32 VideoFrameMessage::frameNumber() const
{
    Q_D(const VideoFrameMessage);
    return d->frameNumber;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void VideoFrameMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(VideoFrameMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void VideoFrameMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(VideoFrameMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c frameNumber field to \a frameNumber.
 *
 * \param frameNumber The field value to set.
 */
void VideoFrameMessage::setFrameNumber(const quint32 frameNumber)
{
    Q_D(VideoFrameMessage);
    d->frameNumber = frameNumber;
}

/// \cond internal

/*!
 * \internal
 *
 * \class VideoFrameMessagePrivate
 *
 * The VideoFrameMessagePrivate class provides private implementation for the VideoFrameMessage.
 *
 * \sa VideoFrameMessage
 */

/*!
 * \internal
 *
 * Constructs a VideoFrameMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
VideoFrameMessagePrivate::VideoFrameMessagePrivate(VideoFrameMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , frameNumber(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::VideoFrame;
}

/*!
 * \internal
 *
 * Destroys the VideoFrameMessagePrivate object.
 */
VideoFrameMessagePrivate::~VideoFrameMessagePrivate()
{

}

bool VideoFrameMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:video_frame.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "video_frame.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:video_frame.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "video_frame.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:video_frame.frameNumber
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "video_frame.frameNumber")) return false;
        this->frameNumber = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown video_frame message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
