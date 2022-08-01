// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the VideoTitleMessagePrivate class.
 */
#ifndef QTFIT_VIDEOTITLEMESSAGE_P_H
#define QTFIT_VIDEOTITLEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class VideoTitleMessage;

class VideoTitleMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The VideoTitleMessage FIT message's messageIndex field.
     *
     * Long titles will be split into multiple parts
     */
    MessageIndex messageIndex;

    /*!
     * The VideoTitleMessage FIT message's messageCount field.
     *
     * Total number of title parts
     */
    quint16 messageCount;

    /*!
     * The VideoTitleMessage FIT message's text field.
     */
    QString text;

    VideoTitleMessagePrivate() = delete;
    explicit VideoTitleMessagePrivate(VideoTitleMessage * const q);
    virtual ~VideoTitleMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(VideoTitleMessage)
    Q_DISABLE_COPY(VideoTitleMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEOTITLEMESSAGE_P_H
