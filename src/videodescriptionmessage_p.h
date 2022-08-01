// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the VideoDescriptionMessagePrivate class.
 */
#ifndef QTFIT_VIDEODESCRIPTIONMESSAGE_P_H
#define QTFIT_VIDEODESCRIPTIONMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class VideoDescriptionMessage;

class VideoDescriptionMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The VideoDescriptionMessage FIT message's messageIndex field.
     *
     * Long descriptions will be split into multiple parts
     */
    MessageIndex messageIndex;

    /*!
     * The VideoDescriptionMessage FIT message's messageCount field.
     *
     * Total number of description parts
     */
    quint16 messageCount;

    /*!
     * The VideoDescriptionMessage FIT message's text field.
     */
    QString text;

    VideoDescriptionMessagePrivate() = delete;
    explicit VideoDescriptionMessagePrivate(VideoDescriptionMessage * const q);
    virtual ~VideoDescriptionMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(VideoDescriptionMessage)
    Q_DISABLE_COPY(VideoDescriptionMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEODESCRIPTIONMESSAGE_P_H
