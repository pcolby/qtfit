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
 * Declares the SegmentPointMessagePrivate class.
 */
#ifndef QTFIT_SEGMENTPOINTMESSAGE_P_H
#define QTFIT_SEGMENTPOINTMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SegmentPointMessage;

class SegmentPointMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SegmentPointMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The SegmentPointMessage FIT message's positionLat field.
     */
    qint32 positionLat;

    /*!
     * The SegmentPointMessage FIT message's positionLong field.
     */
    qint32 positionLong;

    /*!
     * The SegmentPointMessage FIT message's distance field.
     *
     * Accumulated distance along the segment at the described point
     */
    quint32 distance;

    /*!
     * The SegmentPointMessage FIT message's altitude field.
     *
     * Accumulated altitude along the segment at the described point
     */
    quint16 altitude;

    /*!
     * The SegmentPointMessage FIT message's leaderTime field.
     *
     * Accumualted time each leader board member required to reach the described point. This value
     * is zero for all leader board members at the starting point of the segment.
     */
    quint32 leaderTime;

    SegmentPointMessagePrivate() = delete;
    explicit SegmentPointMessagePrivate(SegmentPointMessage * const q);
    virtual ~SegmentPointMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SegmentPointMessage)
    Q_DISABLE_COPY(SegmentPointMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTPOINTMESSAGE_P_H
