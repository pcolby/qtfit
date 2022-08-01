// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ClimbProMessage class.
 */

#ifndef QTFIT_CLIMBPROMESSAGE_H
#define QTFIT_CLIMBPROMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ClimbProMessagePrivate;

class QTFIT_EXPORT ClimbProMessage : public AbstractDataMessage {

public:
    ClimbProMessage();
    ~ClimbProMessage();

    DateTime timestamp() const;
    qint32 positionLat() const;
    qint32 positionLong() const;
    ClimbProEvent climbProEvent() const;
    quint16 climbNumber() const;
    quint8 climbCategory() const;
    float currentDist() const;

    void setTimestamp(const DateTime timestamp);
    void setPositionLat(const qint32 positionLat);
    void setPositionLong(const qint32 positionLong);
    void setClimbProEvent(const ClimbProEvent climbProEvent);
    void setClimbNumber(const quint16 climbNumber);
    void setClimbCategory(const quint8 climbCategory);
    void setCurrentDist(const float currentDist);

protected:
    /// \cond internal
    explicit ClimbProMessage(ClimbProMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ClimbProMessage)
  //Q_DISABLE_COPY(ClimbProMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CLIMBPROMESSAGE_H
