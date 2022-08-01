// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the VideoTitleMessage class.
 */

#ifndef QTFIT_VIDEOTITLEMESSAGE_H
#define QTFIT_VIDEOTITLEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class VideoTitleMessagePrivate;

class QTFIT_EXPORT VideoTitleMessage : public AbstractDataMessage {

public:
    VideoTitleMessage();
    ~VideoTitleMessage();

    MessageIndex messageIndex() const;
    quint16 messageCount() const;
    QString text() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setMessageCount(const quint16 messageCount);
    void setText(const QString text);

protected:
    /// \cond internal
    explicit VideoTitleMessage(VideoTitleMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(VideoTitleMessage)
  //Q_DISABLE_COPY(VideoTitleMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEOTITLEMESSAGE_H
