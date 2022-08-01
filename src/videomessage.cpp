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

/*!
 * \file
 * Defines the VideoMessage, and VideoMessagePrivate classes.
 */

#include <qtfit/videomessage.h>
#include "videomessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class VideoMessage
 *
 * The VideoMessage class represents a FIT VideoMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a VideoMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
VideoMessage::VideoMessage() : AbstractDataMessage(new VideoMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a VideoMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
VideoMessage::VideoMessage(VideoMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the VideoMessage data message's \c url field's current value.
 *
 * \return the \c url field value.
 */
QString VideoMessage::url() const
{
    Q_D(const VideoMessage);
    return d->url;
}

/*!
 * Returns the VideoMessage data message's \c hostingProvider field's current value.
 *
 * \return the \c hostingProvider field value.
 */
QString VideoMessage::hostingProvider() const
{
    Q_D(const VideoMessage);
    return d->hostingProvider;
}

/*!
 * Returns the VideoMessage data message's \c duration field's current value.
 *
 * Playback time of video
 *
 * \return the \c duration field value.
 */
quint32 VideoMessage::duration() const
{
    Q_D(const VideoMessage);
    return d->duration;
}

/*!
 * Sets the \c url field to \a url.
 *
 * \param url The field value to set.
 */
void VideoMessage::setUrl(const QString url)
{
    Q_D(VideoMessage);
    d->url = url;
}
/*!
 * Sets the \c hostingProvider field to \a hostingProvider.
 *
 * \param hostingProvider The field value to set.
 */
void VideoMessage::setHostingProvider(const QString hostingProvider)
{
    Q_D(VideoMessage);
    d->hostingProvider = hostingProvider;
}
/*!
 * Sets the \c duration field to \a duration.
 *
 * \param duration The field value to set.
 */
void VideoMessage::setDuration(const quint32 duration)
{
    Q_D(VideoMessage);
    d->duration = duration;
}

/// \cond internal

/*!
 * \internal
 *
 * \class VideoMessagePrivate
 *
 * The VideoMessagePrivate class provides private implementation for the VideoMessage.
 *
 * \sa VideoMessage
 */

/*!
 * \internal
 *
 * Constructs a VideoMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
VideoMessagePrivate::VideoMessagePrivate(VideoMessage * const q)
  : AbstractDataMessagePrivate(q)
  , duration(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::Video;
}

/*!
 * \internal
 *
 * Destroys the VideoMessagePrivate object.
 */
VideoMessagePrivate::~VideoMessagePrivate()
{

}

bool VideoMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:video.url
        if (!verify(data, baseType, 1, FitBaseType::String, "video.url")) return false;
        this->url = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:video.hostingProvider
        if (!verify(data, baseType, 1, FitBaseType::String, "video.hostingProvider")) return false;
        this->hostingProvider = QString::fromUtf8(data);
        break;
    case 2: // See Profile.xlsx::Messages:video.duration
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "video.duration")) return false;
        this->duration = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown video message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
