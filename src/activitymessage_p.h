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
 * Declares the ActivityMessagePrivate class.
 */
#ifndef QTFIT_ACTIVITYMESSAGE_P_H
#define QTFIT_ACTIVITYMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ActivityMessage;

class ActivityMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ActivityMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The ActivityMessage FIT message's totalTimerTime field.
     *
     * Exclude pauses
     */
    quint32 totalTimerTime;

    /*!
     * The ActivityMessage FIT message's numSessions field.
     */
    quint16 numSessions;

    /*!
     * The ActivityMessage FIT message's type field.
     */
    Activity type;

    /*!
     * The ActivityMessage FIT message's event field.
     */
    Event event;

    /*!
     * The ActivityMessage FIT message's eventType field.
     */
    EventType eventType;

    /*!
     * The ActivityMessage FIT message's localTimestamp field.
     *
     * timestamp epoch expressed in local time, used to convert activity timestamps to local time 
     */
    LocalDateTime localTimestamp;

    /*!
     * The ActivityMessage FIT message's eventGroup field.
     */
    quint8 eventGroup;

    ActivityMessagePrivate() = delete;
    explicit ActivityMessagePrivate(ActivityMessage * const q);
    virtual ~ActivityMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ActivityMessage)
    Q_DISABLE_COPY(ActivityMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ACTIVITYMESSAGE_P_H
