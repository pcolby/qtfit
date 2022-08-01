// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SegmentLeaderboardEntryMessagePrivate class.
 */
#ifndef QTFIT_SEGMENTLEADERBOARDENTRYMESSAGE_P_H
#define QTFIT_SEGMENTLEADERBOARDENTRYMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SegmentLeaderboardEntryMessage;

class SegmentLeaderboardEntryMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SegmentLeaderboardEntryMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The SegmentLeaderboardEntryMessage FIT message's name field.
     *
     * Friendly name assigned to leader
     */
    QString name;

    /*!
     * The SegmentLeaderboardEntryMessage FIT message's type field.
     *
     * Leader classification
     */
    SegmentLeaderboardType type;

    /*!
     * The SegmentLeaderboardEntryMessage FIT message's groupPrimaryKey field.
     *
     * Primary user ID of this leader
     */
    quint32 groupPrimaryKey;

    /*!
     * The SegmentLeaderboardEntryMessage FIT message's activityId field.
     *
     * ID of the activity associated with this leader time
     */
    quint32 activityId;

    /*!
     * The SegmentLeaderboardEntryMessage FIT message's segmentTime field.
     *
     * Segment Time (includes pauses)
     */
    quint32 segmentTime;

    /*!
     * The SegmentLeaderboardEntryMessage FIT message's activityIdString field.
     *
     * String version of the activity_id. 21 characters long, express in decimal
     */
    QString activityIdString;

    SegmentLeaderboardEntryMessagePrivate() = delete;
    explicit SegmentLeaderboardEntryMessagePrivate(SegmentLeaderboardEntryMessage * const q);
    virtual ~SegmentLeaderboardEntryMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SegmentLeaderboardEntryMessage)
    Q_DISABLE_COPY(SegmentLeaderboardEntryMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTLEADERBOARDENTRYMESSAGE_P_H
