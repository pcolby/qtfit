// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the VideoClipMessage class.
 */

#ifndef QTFIT_VIDEOCLIPMESSAGE_H
#define QTFIT_VIDEOCLIPMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class VideoClipMessagePrivate;

class QTFIT_EXPORT VideoClipMessage : public AbstractDataMessage {

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
    /// \cond internal
    explicit VideoClipMessage(VideoClipMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(VideoClipMessage)
  //Q_DISABLE_COPY(VideoClipMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEOCLIPMESSAGE_H
