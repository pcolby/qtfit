// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the VideoClipMessagePrivate class.
 */
#ifndef QTFIT_VIDEOCLIPMESSAGE_P_H
#define QTFIT_VIDEOCLIPMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class VideoClipMessage;

class VideoClipMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The VideoClipMessage FIT message's clipNumber field.
     */
    quint16 clipNumber;

    /*!
     * The VideoClipMessage FIT message's startTimestamp field.
     */
    DateTime startTimestamp;

    /*!
     * The VideoClipMessage FIT message's startTimestampMs field.
     */
    quint16 startTimestampMs;

    /*!
     * The VideoClipMessage FIT message's endTimestamp field.
     */
    DateTime endTimestamp;

    /*!
     * The VideoClipMessage FIT message's endTimestampMs field.
     */
    quint16 endTimestampMs;

    /*!
     * The VideoClipMessage FIT message's clipStart field.
     *
     * Start of clip in video time
     */
    quint32 clipStart;

    /*!
     * The VideoClipMessage FIT message's clipEnd field.
     *
     * End of clip in video time
     */
    quint32 clipEnd;

    VideoClipMessagePrivate() = delete;
    explicit VideoClipMessagePrivate(VideoClipMessage * const q);
    virtual ~VideoClipMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(VideoClipMessage)
    Q_DISABLE_COPY(VideoClipMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEOCLIPMESSAGE_P_H
