// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the VideoDescriptionMessage, and VideoDescriptionMessagePrivate classes.
 */

#include <qtfit/videodescriptionmessage.h>
#include "videodescriptionmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class VideoDescriptionMessage
 *
 * The VideoDescriptionMessage class represents a FIT VideoDescriptionMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a VideoDescriptionMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
VideoDescriptionMessage::VideoDescriptionMessage() : AbstractDataMessage(new VideoDescriptionMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a VideoDescriptionMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
VideoDescriptionMessage::VideoDescriptionMessage(VideoDescriptionMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the VideoDescriptionMessage data message's \c messageIndex field's current value.
 *
 * Long descriptions will be split into multiple parts
 *
 * \return the \c messageIndex field value.
 */
MessageIndex VideoDescriptionMessage::messageIndex() const
{
    Q_D(const VideoDescriptionMessage);
    return d->messageIndex;
}

/*!
 * Returns the VideoDescriptionMessage data message's \c messageCount field's current value.
 *
 * Total number of description parts
 *
 * \return the \c messageCount field value.
 */
quint16 VideoDescriptionMessage::messageCount() const
{
    Q_D(const VideoDescriptionMessage);
    return d->messageCount;
}

/*!
 * Returns the VideoDescriptionMessage data message's \c text field's current value.
 *
 * \return the \c text field value.
 */
QString VideoDescriptionMessage::text() const
{
    Q_D(const VideoDescriptionMessage);
    return d->text;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void VideoDescriptionMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(VideoDescriptionMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c messageCount field to \a messageCount.
 *
 * \param messageCount The field value to set.
 */
void VideoDescriptionMessage::setMessageCount(const quint16 messageCount)
{
    Q_D(VideoDescriptionMessage);
    d->messageCount = messageCount;
}
/*!
 * Sets the \c text field to \a text.
 *
 * \param text The field value to set.
 */
void VideoDescriptionMessage::setText(const QString text)
{
    Q_D(VideoDescriptionMessage);
    d->text = text;
}

/// \cond internal

/*!
 * \internal
 *
 * \class VideoDescriptionMessagePrivate
 *
 * The VideoDescriptionMessagePrivate class provides private implementation for the VideoDescriptionMessage.
 *
 * \sa VideoDescriptionMessage
 */

/*!
 * \internal
 *
 * Constructs a VideoDescriptionMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
VideoDescriptionMessagePrivate::VideoDescriptionMessagePrivate(VideoDescriptionMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , messageCount(0xFFFF)
{
    globalMessageNumber = MesgNum::VideoDescription;
}

/*!
 * \internal
 *
 * Destroys the VideoDescriptionMessagePrivate object.
 */
VideoDescriptionMessagePrivate::~VideoDescriptionMessagePrivate()
{

}

bool VideoDescriptionMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:video_description.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "video_description.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:video_description.messageCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "video_description.messageCount")) return false;
        this->messageCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:video_description.text
        if (!verify(data, baseType, 1, FitBaseType::String, "video_description.text")) return false;
        this->text = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown video_description message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
