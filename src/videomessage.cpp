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

#include "videomessage.h"
#include "videomessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

VideoMessage::VideoMessage() : FitDataMessage(new VideoMessagePrivate(this))
{

}

QString VideoMessage::url() const
{
    Q_D(const VideoMessage);
    return d->url;
}

QString VideoMessage::hostingProvider() const
{
    Q_D(const VideoMessage);
    return d->hostingProvider;
}

quint32 VideoMessage::duration() const
{
    Q_D(const VideoMessage);
    return d->duration;
}

void VideoMessage::setUrl(const QString url)
{
    Q_D(VideoMessage);
    d->url = url;
}
void VideoMessage::setHostingProvider(const QString hostingProvider)
{
    Q_D(VideoMessage);
    d->hostingProvider = hostingProvider;
}
void VideoMessage::setDuration(const quint32 duration)
{
    Q_D(VideoMessage);
    d->duration = duration;
}

VideoMessagePrivate::VideoMessagePrivate(VideoMessage * const q)
  : FitDataMessagePrivate(q)
  , duration(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::Video;
}

VideoMessagePrivate::~VideoMessagePrivate()
{

}

bool VideoMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:video.url
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "video.url has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "video.url size is" << data.size() << "but should be" << 1;
            return false;
        }
        url = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:video.hostingProvider
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "video.hostingProvider has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "video.hostingProvider size is" << data.size() << "but should be" << 1;
            return false;
        }
        hostingProvider = QString::fromUtf8(data);
        break;
    case 2: // See Profile.xlsx::Messages:video.duration
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "video.duration has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "video.duration size is" << data.size() << "but should be" << 4;
            return false;
        }
        duration = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown video message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
