// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the VideoDescriptionMessage class.
 */

#ifndef QTFIT_VIDEODESCRIPTIONMESSAGE_H
#define QTFIT_VIDEODESCRIPTIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class VideoDescriptionMessagePrivate;

class QTFIT_EXPORT VideoDescriptionMessage : public AbstractDataMessage {

public:
    VideoDescriptionMessage();
    ~VideoDescriptionMessage();

    MessageIndex messageIndex() const;
    quint16 messageCount() const;
    QString text() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setMessageCount(const quint16 messageCount);
    void setText(const QString text);

protected:
    /// \cond internal
    explicit VideoDescriptionMessage(VideoDescriptionMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(VideoDescriptionMessage)
  //Q_DISABLE_COPY(VideoDescriptionMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEODESCRIPTIONMESSAGE_H
