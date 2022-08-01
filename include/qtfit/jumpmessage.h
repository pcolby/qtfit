// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the JumpMessage class.
 */

#ifndef QTFIT_JUMPMESSAGE_H
#define QTFIT_JUMPMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class JumpMessagePrivate;

class QTFIT_EXPORT JumpMessage : public AbstractDataMessage {

public:
    JumpMessage();
    ~JumpMessage();

    DateTime timestamp() const;
    float distance() const;
    float height() const;
    quint8 rotations() const;
    float hangTime() const;
    float score() const;
    qint32 positionLat() const;
    qint32 positionLong() const;
    quint16 speed() const;
    quint32 enhancedSpeed() const;

    void setTimestamp(const DateTime timestamp);
    void setDistance(const float distance);
    void setHeight(const float height);
    void setRotations(const quint8 rotations);
    void setHangTime(const float hangTime);
    void setScore(const float score);
    void setPositionLat(const qint32 positionLat);
    void setPositionLong(const qint32 positionLong);
    void setSpeed(const quint16 speed);
    void setEnhancedSpeed(const quint32 enhancedSpeed);

protected:
    /// \cond internal
    explicit JumpMessage(JumpMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(JumpMessage)
  //Q_DISABLE_COPY(JumpMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_JUMPMESSAGE_H
