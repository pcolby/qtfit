// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the VideoClipMessage, and VideoClipMessagePrivate classes.
 */

#include <qtfit/videoclipmessage.h>
#include "videoclipmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class VideoClipMessage
 *
 * The VideoClipMessage class represents a FIT VideoClipMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a VideoClipMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
VideoClipMessage::VideoClipMessage() : AbstractDataMessage(new VideoClipMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a VideoClipMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
VideoClipMessage::VideoClipMessage(VideoClipMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the VideoClipMessage data message's \c clipNumber field's current value.
 *
 * \return the \c clipNumber field value.
 */
quint16 VideoClipMessage::clipNumber() const
{
    Q_D(const VideoClipMessage);
    return d->clipNumber;
}

/*!
 * Returns the VideoClipMessage data message's \c startTimestamp field's current value.
 *
 * \return the \c startTimestamp field value.
 */
DateTime VideoClipMessage::startTimestamp() const
{
    Q_D(const VideoClipMessage);
    return d->startTimestamp;
}

/*!
 * Returns the VideoClipMessage data message's \c startTimestampMs field's current value.
 *
 * \return the \c startTimestampMs field value.
 */
quint16 VideoClipMessage::startTimestampMs() const
{
    Q_D(const VideoClipMessage);
    return d->startTimestampMs;
}

/*!
 * Returns the VideoClipMessage data message's \c endTimestamp field's current value.
 *
 * \return the \c endTimestamp field value.
 */
DateTime VideoClipMessage::endTimestamp() const
{
    Q_D(const VideoClipMessage);
    return d->endTimestamp;
}

/*!
 * Returns the VideoClipMessage data message's \c endTimestampMs field's current value.
 *
 * \return the \c endTimestampMs field value.
 */
quint16 VideoClipMessage::endTimestampMs() const
{
    Q_D(const VideoClipMessage);
    return d->endTimestampMs;
}

/*!
 * Returns the VideoClipMessage data message's \c clipStart field's current value.
 *
 * Start of clip in video time
 *
 * \return the \c clipStart field value.
 */
quint32 VideoClipMessage::clipStart() const
{
    Q_D(const VideoClipMessage);
    return d->clipStart;
}

/*!
 * Returns the VideoClipMessage data message's \c clipEnd field's current value.
 *
 * End of clip in video time
 *
 * \return the \c clipEnd field value.
 */
quint32 VideoClipMessage::clipEnd() const
{
    Q_D(const VideoClipMessage);
    return d->clipEnd;
}

/*!
 * Sets the \c clipNumber field to \a clipNumber.
 *
 * \param clipNumber The field value to set.
 */
void VideoClipMessage::setClipNumber(const quint16 clipNumber)
{
    Q_D(VideoClipMessage);
    d->clipNumber = clipNumber;
}
/*!
 * Sets the \c startTimestamp field to \a startTimestamp.
 *
 * \param startTimestamp The field value to set.
 */
void VideoClipMessage::setStartTimestamp(const DateTime startTimestamp)
{
    Q_D(VideoClipMessage);
    d->startTimestamp = startTimestamp;
}
/*!
 * Sets the \c startTimestampMs field to \a startTimestampMs.
 *
 * \param startTimestampMs The field value to set.
 */
void VideoClipMessage::setStartTimestampMs(const quint16 startTimestampMs)
{
    Q_D(VideoClipMessage);
    d->startTimestampMs = startTimestampMs;
}
/*!
 * Sets the \c endTimestamp field to \a endTimestamp.
 *
 * \param endTimestamp The field value to set.
 */
void VideoClipMessage::setEndTimestamp(const DateTime endTimestamp)
{
    Q_D(VideoClipMessage);
    d->endTimestamp = endTimestamp;
}
/*!
 * Sets the \c endTimestampMs field to \a endTimestampMs.
 *
 * \param endTimestampMs The field value to set.
 */
void VideoClipMessage::setEndTimestampMs(const quint16 endTimestampMs)
{
    Q_D(VideoClipMessage);
    d->endTimestampMs = endTimestampMs;
}
/*!
 * Sets the \c clipStart field to \a clipStart.
 *
 * \param clipStart The field value to set.
 */
void VideoClipMessage::setClipStart(const quint32 clipStart)
{
    Q_D(VideoClipMessage);
    d->clipStart = clipStart;
}
/*!
 * Sets the \c clipEnd field to \a clipEnd.
 *
 * \param clipEnd The field value to set.
 */
void VideoClipMessage::setClipEnd(const quint32 clipEnd)
{
    Q_D(VideoClipMessage);
    d->clipEnd = clipEnd;
}

/// \cond internal

/*!
 * \internal
 *
 * \class VideoClipMessagePrivate
 *
 * The VideoClipMessagePrivate class provides private implementation for the VideoClipMessage.
 *
 * \sa VideoClipMessage
 */

/*!
 * \internal
 *
 * Constructs a VideoClipMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
VideoClipMessagePrivate::VideoClipMessagePrivate(VideoClipMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the VideoClipMessagePrivate object.
 */
VideoClipMessagePrivate::~VideoClipMessagePrivate()
{

}

bool VideoClipMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:video_clip.clipNumber
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "video_clip.clipNumber")) return false;
        this->clipNumber = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:video_clip.startTimestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "video_clip.startTimestamp")) return false;
        this->startTimestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:video_clip.startTimestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "video_clip.startTimestampMs")) return false;
        this->startTimestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:video_clip.endTimestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "video_clip.endTimestamp")) return false;
        this->endTimestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:video_clip.endTimestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "video_clip.endTimestampMs")) return false;
        this->endTimestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 6: // See Profile.xlsx::Messages:video_clip.clipStart
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "video_clip.clipStart")) return false;
        this->clipStart = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:video_clip.clipEnd
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "video_clip.clipEnd")) return false;
        this->clipEnd = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown video_clip message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
