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
 * Defines the VideoTitleMessage, and VideoTitleMessagePrivate classes.
 */

#include "videotitlemessage.h"
#include "videotitlemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class VideoTitleMessage
 *
 * The VideoTitleMessage class represents a FIT VideoTitleMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a VideoTitleMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
VideoTitleMessage::VideoTitleMessage() : AbstractDataMessage(new VideoTitleMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a VideoTitleMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
VideoTitleMessage::VideoTitleMessage(VideoTitleMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the VideoTitleMessage data message's \c messageIndex field's current value.
 *
 * Long titles will be split into multiple parts
 *
 * \return the \c messageIndex field value.
 */
MessageIndex VideoTitleMessage::messageIndex() const
{
    Q_D(const VideoTitleMessage);
    return d->messageIndex;
}

/*!
 * Returns the VideoTitleMessage data message's \c messageCount field's current value.
 *
 * Total number of title parts
 *
 * \return the \c messageCount field value.
 */
quint16 VideoTitleMessage::messageCount() const
{
    Q_D(const VideoTitleMessage);
    return d->messageCount;
}

/*!
 * Returns the VideoTitleMessage data message's \c text field's current value.
 *
 * \return the \c text field value.
 */
QString VideoTitleMessage::text() const
{
    Q_D(const VideoTitleMessage);
    return d->text;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void VideoTitleMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(VideoTitleMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c messageCount field to \a messageCount.
 *
 * \param messageCount The field value to set.
 */
void VideoTitleMessage::setMessageCount(const quint16 messageCount)
{
    Q_D(VideoTitleMessage);
    d->messageCount = messageCount;
}
/*!
 * Sets the \c text field to \a text.
 *
 * \param text The field value to set.
 */
void VideoTitleMessage::setText(const QString text)
{
    Q_D(VideoTitleMessage);
    d->text = text;
}

/// \cond internal

/*!
 * \internal
 *
 * \class VideoTitleMessagePrivate
 *
 * The VideoTitleMessagePrivate class provides private implementation for the VideoTitleMessage.
 *
 * \sa VideoTitleMessage
 */

/*!
 * \internal
 *
 * Constructs a VideoTitleMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
VideoTitleMessagePrivate::VideoTitleMessagePrivate(VideoTitleMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , messageCount(0xFFFF)
{
    globalMessageNumber = MesgNum::VideoTitle;
}

/*!
 * \internal
 *
 * Destroys the VideoTitleMessagePrivate object.
 */
VideoTitleMessagePrivate::~VideoTitleMessagePrivate()
{

}

bool VideoTitleMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:video_title.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "video_title.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:video_title.messageCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "video_title.messageCount")) return false;
        this->messageCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:video_title.text
        if (!verify(data, baseType, 1, FitBaseType::String, "video_title.text")) return false;
        this->text = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown video_title message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
