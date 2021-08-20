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

#ifndef QTFIT_JUMPMESSAGE_H
#define QTFIT_JUMPMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class JumpMessagePrivate;

class QTFIT_EXPORT JumpMessage : public FitDataMessage {

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
    /// @cond internal
    explicit JumpMessage(JumpMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(JumpMessage)
  //Q_DISABLE_COPY(JumpMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_JUMPMESSAGE_H
