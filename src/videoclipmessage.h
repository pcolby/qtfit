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

#ifndef QTFIT_VIDEOCLIPMESSAGE_H
#define QTFIT_VIDEOCLIPMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class VideoClipMessagePrivate;

class QTFIT_EXPORT VideoClipMessage : public FitDataMessage {

public:
    VideoClipMessage();
    ~VideoClipMessage();

    quint16 clipNumber() const;
    DateTime startTimestamp() const;
    quint16 startTimestampMs() const;
    DateTime endTimestamp() const;
    quint16 endTimestampMs() const;
    quint32 clipStart() const;
    quint32 clipEnd() const;

    void setClipNumber(const quint16 clipNumber);
    void setStartTimestamp(const DateTime startTimestamp);
    void setStartTimestampMs(const quint16 startTimestampMs);
    void setEndTimestamp(const DateTime endTimestamp);
    void setEndTimestampMs(const quint16 endTimestampMs);
    void setClipStart(const quint32 clipStart);
    void setClipEnd(const quint32 clipEnd);

protected:
    /// @cond internal
    explicit VideoClipMessage(VideoClipMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(VideoClipMessage)
  //Q_DISABLE_COPY(VideoClipMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEOCLIPMESSAGE_H
