// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the VideoMessagePrivate class.
 */
#ifndef QTFIT_VIDEOMESSAGE_P_H
#define QTFIT_VIDEOMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class VideoMessage;

class VideoMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The VideoMessage FIT message's url field.
     */
    QString url;

    /*!
     * The VideoMessage FIT message's hostingProvider field.
     */
    QString hostingProvider;

    /*!
     * The VideoMessage FIT message's duration field.
     *
     * Playback time of video
     */
    quint32 duration;

    VideoMessagePrivate() = delete;
    explicit VideoMessagePrivate(VideoMessage * const q);
    virtual ~VideoMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(VideoMessage)
    Q_DISABLE_COPY(VideoMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEOMESSAGE_P_H
