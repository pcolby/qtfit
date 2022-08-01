// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
