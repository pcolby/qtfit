// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SegmentLeaderboardEntryMessage class.
 */

#ifndef QTFIT_SEGMENTLEADERBOARDENTRYMESSAGE_H
#define QTFIT_SEGMENTLEADERBOARDENTRYMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SegmentLeaderboardEntryMessagePrivate;

class QTFIT_EXPORT SegmentLeaderboardEntryMessage : public AbstractDataMessage {

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
    /// \cond internal
    explicit SegmentLeaderboardEntryMessage(SegmentLeaderboardEntryMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SegmentLeaderboardEntryMessage)
  //Q_DISABLE_COPY(SegmentLeaderboardEntryMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTLEADERBOARDENTRYMESSAGE_H
