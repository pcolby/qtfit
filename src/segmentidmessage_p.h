// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SegmentIdMessagePrivate class.
 */
#ifndef QTFIT_SEGMENTIDMESSAGE_P_H
#define QTFIT_SEGMENTIDMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SegmentIdMessage;

class SegmentIdMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SegmentIdMessage FIT message's name field.
     *
     * Friendly name assigned to segment
     */
    QString name;

    /*!
     * The SegmentIdMessage FIT message's uuid field.
     *
     * UUID of the segment
     */
    QString uuid;

    /*!
     * The SegmentIdMessage FIT message's sport field.
     *
     * Sport associated with the segment
     */
    Sport sport;

    /*!
     * The SegmentIdMessage FIT message's enabled field.
     *
     * Segment enabled for evaluation
     */
    bool enabled;

    /*!
     * The SegmentIdMessage FIT message's userProfilePrimaryKey field.
     *
     * Primary key of the user that created the segment
     */
    quint32 userProfilePrimaryKey;

    /*!
     * The SegmentIdMessage FIT message's deviceId field.
     *
     * ID of the device that created the segment
     */
    quint32 deviceId;

    /*!
     * The SegmentIdMessage FIT message's defaultRaceLeader field.
     *
     * Index for the Leader Board entry selected as the default race participant
     */
    quint8 defaultRaceLeader;

    /*!
     * The SegmentIdMessage FIT message's deleteStatus field.
     *
     * Indicates if any segments should be deleted
     */
    SegmentDeleteStatus deleteStatus;

    /*!
     * The SegmentIdMessage FIT message's selectionType field.
     *
     * Indicates how the segment was selected to be sent to the device
     */
    SegmentSelectionType selectionType;

    SegmentIdMessagePrivate() = delete;
    explicit SegmentIdMessagePrivate(SegmentIdMessage * const q);
    virtual ~SegmentIdMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SegmentIdMessage)
    Q_DISABLE_COPY(SegmentIdMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SEGMENTIDMESSAGE_P_H
