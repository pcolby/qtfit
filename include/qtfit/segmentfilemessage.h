// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SegmentFileMessage class.
 */

#ifndef QTFIT_SEGMENTFILEMESSAGE_H
#define QTFIT_SEGMENTFILEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SegmentFileMessagePrivate;

class QTFIT_EXPORT SegmentFileMessage : public AbstractDataMessage {

public:
    SegmentFileMessage();
    ~SegmentFileMessage();

    MessageIndex messageIndex() const;
    QString fileUuid() const;
    bool enabled() const;
    quint32 userProfilePrimaryKey() const;
    SegmentLeaderboardType leaderType() const;
    quint32 leaderGroupPrimaryKey() const;
    quint32 leaderActivityId() const;
    QString leaderActivityIdString() const;
    quint8 defaultRaceLeader() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setFileUuid(const QString fileUuid);
    void setEnabled(const bool enabled);
    void setUserProfilePrimaryKey(const quint32 userProfilePrimaryKey);
    void setLeaderType(const SegmentLeaderboardType leaderType);
    void setLeaderGroupPrimaryKey(const quint32 leaderGroupPrimaryKey);
    void setLeaderActivityId(const quint32 leaderActivityId);
    void setLeaderActivityIdString(const QString leaderActivityIdString);
    void setDefaultRaceLeader(const quint8 defaultRaceLeader);

protected:
    /// \cond internal
    explicit SegmentFileMessage(SegmentFileMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SegmentFileMessage)
  //Q_DISABLE_COPY(SegmentFileMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTFILEMESSAGE_H
