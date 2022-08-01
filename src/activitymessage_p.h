// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
