// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the VideoMessage class.
 */

#ifndef QTFIT_VIDEOMESSAGE_H
#define QTFIT_VIDEOMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class VideoMessagePrivate;

class QTFIT_EXPORT VideoMessage : public AbstractDataMessage {

public:
    VideoMessage();
    ~VideoMessage();

    QString url() const;
    QString hostingProvider() const;
    quint32 duration() const;

    void setUrl(const QString url);
    void setHostingProvider(const QString hostingProvider);
    void setDuration(const quint32 duration);

protected:
    /// \cond internal
    explicit VideoMessage(VideoMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(VideoMessage)
  //Q_DISABLE_COPY(VideoMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEOMESSAGE_H
