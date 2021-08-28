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
 * Declares the VideoFrameMessage class.
 */

#ifndef QTFIT_VIDEOFRAMEMESSAGE_H
#define QTFIT_VIDEOFRAMEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class VideoFrameMessagePrivate;

class QTFIT_EXPORT VideoFrameMessage : public AbstractDataMessage {

public:
    VideoFrameMessage();
    ~VideoFrameMessage();

    DateTime timestamp() const;
    quint16 timestampMs() const;
    quint32 frameNumber() const;

    void setTimestamp(const DateTime timestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setFrameNumber(const quint32 frameNumber);

protected:
    /// \cond internal
    explicit VideoFrameMessage(VideoFrameMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(VideoFrameMessage)
  //Q_DISABLE_COPY(VideoFrameMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEOFRAMEMESSAGE_H
