// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
