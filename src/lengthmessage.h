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

#ifndef QTFIT_LENGTHMESSAGE_H
#define QTFIT_LENGTHMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class LengthMessagePrivate;

class QTFIT_EXPORT LengthMessage : public AbstractDataMessage {

public:
    LengthMessage();
    ~LengthMessage();

    MessageIndex messageIndex() const;
    DateTime timestamp() const;
    Event event() const;
    EventType eventType() const;
    DateTime startTime() const;
    quint32 totalElapsedTime() const;
    quint32 totalTimerTime() const;
    quint16 totalStrokes() const;
    quint16 avgSpeed() const;
    SwimStroke swimStroke() const;
    quint8 avgSwimmingCadence() const;
    quint8 eventGroup() const;
    quint16 totalCalories() const;
    LengthType lengthType() const;
    quint16 playerScore() const;
    quint16 opponentScore() const;
    quint16 strokeCount() const;
    quint16 zoneCount() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setTimestamp(const DateTime timestamp);
    void setEvent(const Event event);
    void setEventType(const EventType eventType);
    void setStartTime(const DateTime startTime);
    void setTotalElapsedTime(const quint32 totalElapsedTime);
    void setTotalTimerTime(const quint32 totalTimerTime);
    void setTotalStrokes(const quint16 totalStrokes);
    void setAvgSpeed(const quint16 avgSpeed);
    void setSwimStroke(const SwimStroke swimStroke);
    void setAvgSwimmingCadence(const quint8 avgSwimmingCadence);
    void setEventGroup(const quint8 eventGroup);
    void setTotalCalories(const quint16 totalCalories);
    void setLengthType(const LengthType lengthType);
    void setPlayerScore(const quint16 playerScore);
    void setOpponentScore(const quint16 opponentScore);
    void setStrokeCount(const quint16 strokeCount);
    void setZoneCount(const quint16 zoneCount);

protected:
    /// \cond internal
    explicit LengthMessage(LengthMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(LengthMessage)
  //Q_DISABLE_COPY(LengthMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_LENGTHMESSAGE_H
