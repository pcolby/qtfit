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

#ifndef QTFIT_SEGMENTLEADERBOARDENTRYMESSAGE_H
#define QTFIT_SEGMENTLEADERBOARDENTRYMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SegmentLeaderboardEntryMessagePrivate;

class QTFIT_EXPORT SegmentLeaderboardEntryMessage : public FitDataMessage {

public:
    SegmentLeaderboardEntryMessage();
    ~SegmentLeaderboardEntryMessage();

    MessageIndex messageIndex() const;
    QString name() const;
    SegmentLeaderboardType type() const;
    quint32 groupPrimaryKey() const;
    quint32 activityId() const;
    quint32 segmentTime() const;
    QString activityIdString() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setName(const QString name);
    void setType(const SegmentLeaderboardType type);
    void setGroupPrimaryKey(const quint32 groupPrimaryKey);
    void setActivityId(const quint32 activityId);
    void setSegmentTime(const quint32 segmentTime);
    void setActivityIdString(const QString activityIdString);

protected:
    /// @cond internal
    explicit SegmentLeaderboardEntryMessage(SegmentLeaderboardEntryMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SegmentLeaderboardEntryMessage)
  //Q_DISABLE_COPY(SegmentLeaderboardEntryMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTLEADERBOARDENTRYMESSAGE_H
