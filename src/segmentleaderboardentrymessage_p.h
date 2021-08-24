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
