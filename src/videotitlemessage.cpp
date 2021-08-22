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

#include "videotitlemessage.h"
#include "videotitlemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

VideoTitleMessage::VideoTitleMessage() : FitDataMessage(new VideoTitleMessagePrivate(this))
{

}

MessageIndex VideoTitleMessage::messageIndex() const
{
    Q_D(const VideoTitleMessage);
    return d->messageIndex;
}

quint16 VideoTitleMessage::messageCount() const
{
    Q_D(const VideoTitleMessage);
    return d->messageCount;
}

QString VideoTitleMessage::text() const
{
    Q_D(const VideoTitleMessage);
    return d->text;
}

void VideoTitleMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(VideoTitleMessage);
    d->messageIndex = messageIndex;
}
void VideoTitleMessage::setMessageCount(const quint16 messageCount)
{
    Q_D(VideoTitleMessage);
    d->messageCount = messageCount;
}
void VideoTitleMessage::setText(const QString text)
{
    Q_D(VideoTitleMessage);
    d->text = text;
}

VideoTitleMessagePrivate::VideoTitleMessagePrivate(VideoTitleMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , messageCount(0xFFFF)
{
    globalMessageNumber = MesgNum::VideoTitle;
}

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
        qWarning() << "unknown video_title message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
