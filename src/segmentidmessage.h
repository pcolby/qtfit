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

#ifndef QTFIT_SEGMENTIDMESSAGE_H
#define QTFIT_SEGMENTIDMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SegmentIdMessagePrivate;

class QTFIT_EXPORT SegmentIdMessage : public FitDataMessage {

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
    /// @cond internal
    explicit SegmentIdMessage(SegmentIdMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SegmentIdMessage)
  //Q_DISABLE_COPY(SegmentIdMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTIDMESSAGE_H
