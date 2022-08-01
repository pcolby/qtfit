// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SegmentPointMessage class.
 */

#ifndef QTFIT_SEGMENTPOINTMESSAGE_H
#define QTFIT_SEGMENTPOINTMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SegmentPointMessagePrivate;

class QTFIT_EXPORT SegmentPointMessage : public AbstractDataMessage {

public:
    SegmentPointMessage();
    ~SegmentPointMessage();

    MessageIndex messageIndex() const;
    qint32 positionLat() const;
    qint32 positionLong() const;
    quint32 distance() const;
    quint16 altitude() const;
    quint32 leaderTime() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setPositionLat(const qint32 positionLat);
    void setPositionLong(const qint32 positionLong);
    void setDistance(const quint32 distance);
    void setAltitude(const quint16 altitude);
    void setLeaderTime(const quint32 leaderTime);

protected:
    /// \cond internal
    explicit SegmentPointMessage(SegmentPointMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SegmentPointMessage)
  //Q_DISABLE_COPY(SegmentPointMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTPOINTMESSAGE_H
