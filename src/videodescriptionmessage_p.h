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
