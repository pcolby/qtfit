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

#ifndef QTFIT_EVENTMESSAGE_P_H
#define QTFIT_EVENTMESSAGE_P_H

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class EventMessage;

class EventMessagePrivate : public FitDataMessagePrivate {

public:
    DateTime timestamp;
    Event event;
    EventType eventType;
    quint16 data16;
    quint32 data;
    quint8 eventGroup;
    quint16 score;
    quint16 opponentScore;
    quint8z frontGearNum;
    quint8z frontGear;
    quint8z rearGearNum;
    quint8z rearGear;
    DeviceIndex deviceIndex;
    RadarThreatLevelType radarThreatLevelMax;
    quint8 radarThreatCount;

    EventMessagePrivate() = delete;
    explicit EventMessagePrivate(EventMessage * const q);
    virtual ~EventMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(EventMessage)
    Q_DISABLE_COPY(EventMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EVENTMESSAGE_P_H
