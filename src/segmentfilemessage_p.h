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

#ifndef QTFIT_SEGMENTFILEMESSAGE_P_H
#define QTFIT_SEGMENTFILEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SegmentFileMessage;

class SegmentFileMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SegmentFileMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The SegmentFileMessage FIT message's fileUuid field.
     *
     * UUID of the segment file
     */
    QString fileUuid;

    /*!
     * The SegmentFileMessage FIT message's enabled field.
     *
     * Enabled state of the segment file
     */
    bool enabled;

    /*!
     * The SegmentFileMessage FIT message's userProfilePrimaryKey field.
     *
     * Primary key of the user that created the segment file
     */
    quint32 userProfilePrimaryKey;

    /*!
     * The SegmentFileMessage FIT message's leaderType field.
     *
     * Leader type of each leader in the segment file
     */
    SegmentLeaderboardType leaderType;

    /*!
     * The SegmentFileMessage FIT message's leaderGroupPrimaryKey field.
     *
     * Group primary key of each leader in the segment file
     */
    quint32 leaderGroupPrimaryKey;

    /*!
     * The SegmentFileMessage FIT message's leaderActivityId field.
     *
     * Activity ID of each leader in the segment file
     */
    quint32 leaderActivityId;

    /*!
     * The SegmentFileMessage FIT message's leaderActivityIdString field.
     *
     * String version of the activity ID of each leader in the segment file. 21 characters long for
     * each ID, express in decimal
     */
    QString leaderActivityIdString;

    /*!
     * The SegmentFileMessage FIT message's defaultRaceLeader field.
     *
     * Index for the Leader Board entry selected as the default race participant
     */
    quint8 defaultRaceLeader;

    SegmentFileMessagePrivate() = delete;
    explicit SegmentFileMessagePrivate(SegmentFileMessage * const q);
    virtual ~SegmentFileMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SegmentFileMessage)
    Q_DISABLE_COPY(SegmentFileMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTFILEMESSAGE_P_H
