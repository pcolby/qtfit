// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SegmentIdMessage class.
 */

#ifndef QTFIT_SEGMENTIDMESSAGE_H
#define QTFIT_SEGMENTIDMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SegmentIdMessagePrivate;

class QTFIT_EXPORT SegmentIdMessage : public AbstractDataMessage {

public:
    SegmentIdMessage();
    ~SegmentIdMessage();

    QString name() const;
    QString uuid() const;
    Sport sport() const;
    bool enabled() const;
    quint32 userProfilePrimaryKey() const;
    quint32 deviceId() const;
    quint8 defaultRaceLeader() const;
    SegmentDeleteStatus deleteStatus() const;
    SegmentSelectionType selectionType() const;

    void setName(const QString name);
    void setUuid(const QString uuid);
    void setSport(const Sport sport);
    void setEnabled(const bool enabled);
    void setUserProfilePrimaryKey(const quint32 userProfilePrimaryKey);
    void setDeviceId(const quint32 deviceId);
    void setDefaultRaceLeader(const quint8 defaultRaceLeader);
    void setDeleteStatus(const SegmentDeleteStatus deleteStatus);
    void setSelectionType(const SegmentSelectionType selectionType);

protected:
    /// \cond internal
    explicit SegmentIdMessage(SegmentIdMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SegmentIdMessage)
  //Q_DISABLE_COPY(SegmentIdMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTIDMESSAGE_H
