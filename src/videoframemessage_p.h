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

/*!
 * \file
 * Declares the VideoFrameMessagePrivate class.
 */
#ifndef QTFIT_VIDEOFRAMEMESSAGE_P_H
#define QTFIT_VIDEOFRAMEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class VideoFrameMessage;

class VideoFrameMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The VideoFrameMessage FIT message's timestamp field.
     *
     * Whole second part of the timestamp
     */
    DateTime timestamp;

    /*!
     * The VideoFrameMessage FIT message's timestampMs field.
     *
     * Millisecond part of the timestamp.
     */
    quint16 timestampMs;

    /*!
     * The VideoFrameMessage FIT message's frameNumber field.
     *
     * Number of the frame that the timestamp and timestamp_ms correlate to
     */
    quint32 frameNumber;

    VideoFrameMessagePrivate() = delete;
    explicit VideoFrameMessagePrivate(VideoFrameMessage * const q);
    virtual ~VideoFrameMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(VideoFrameMessage)
    Q_DISABLE_COPY(VideoFrameMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_VIDEOFRAMEMESSAGE_P_H
