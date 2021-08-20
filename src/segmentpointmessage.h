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

#ifndef QTFIT_SEGMENTPOINTMESSAGE_H
#define QTFIT_SEGMENTPOINTMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SegmentPointMessagePrivate;

class QTFIT_EXPORT SegmentPointMessage : public FitDataMessage {

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
    /// @cond internal
    explicit SegmentPointMessage(SegmentPointMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SegmentPointMessage)
  //Q_DISABLE_COPY(SegmentPointMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTPOINTMESSAGE_H
