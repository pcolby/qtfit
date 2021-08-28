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
 * Declares the EventMessage class.
 */

#ifndef QTFIT_EVENTMESSAGE_H
#define QTFIT_EVENTMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class EventMessagePrivate;

class QTFIT_EXPORT EventMessage : public AbstractDataMessage {

public:
    EventMessage();
    ~EventMessage();

    DateTime timestamp() const;
    Event event() const;
    EventType eventType() const;
    quint16 data16() const;
    quint32 data() const;
    quint8 eventGroup() const;
    quint16 score() const;
    quint16 opponentScore() const;
    quint8z frontGearNum() const;
    quint8z frontGear() const;
    quint8z rearGearNum() const;
    quint8z rearGear() const;
    DeviceIndex deviceIndex() const;
    RadarThreatLevelType radarThreatLevelMax() const;
    quint8 radarThreatCount() const;

    void setTimestamp(const DateTime timestamp);
    void setEvent(const Event event);
    void setEventType(const EventType eventType);
    void setData16(const quint16 data16);
    void setData(const quint32 data);
    void setEventGroup(const quint8 eventGroup);
    void setScore(const quint16 score);
    void setOpponentScore(const quint16 opponentScore);
    void setFrontGearNum(const quint8z frontGearNum);
    void setFrontGear(const quint8z frontGear);
    void setRearGearNum(const quint8z rearGearNum);
    void setRearGear(const quint8z rearGear);
    void setDeviceIndex(const DeviceIndex deviceIndex);
    void setRadarThreatLevelMax(const RadarThreatLevelType radarThreatLevelMax);
    void setRadarThreatCount(const quint8 radarThreatCount);

protected:
    /// \cond internal
    explicit EventMessage(EventMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(EventMessage)
  //Q_DISABLE_COPY(EventMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EVENTMESSAGE_H
