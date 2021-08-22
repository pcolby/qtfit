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

#ifndef QTFIT_GYROSCOPEDATAMESSAGE_H
#define QTFIT_GYROSCOPEDATAMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class GyroscopeDataMessagePrivate;

class QTFIT_EXPORT GyroscopeDataMessage : public AbstractDataMessage {

public:
    GyroscopeDataMessage();
    ~GyroscopeDataMessage();

    DateTime timestamp() const;
    quint16 timestampMs() const;
    quint16 sampleTimeOffset() const;
    quint16 gyroX() const;
    quint16 gyroY() const;
    quint16 gyroZ() const;
    float calibratedGyroX() const;
    float calibratedGyroY() const;
    float calibratedGyroZ() const;

    void setTimestamp(const DateTime timestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setSampleTimeOffset(const quint16 sampleTimeOffset);
    void setGyroX(const quint16 gyroX);
    void setGyroY(const quint16 gyroY);
    void setGyroZ(const quint16 gyroZ);
    void setCalibratedGyroX(const float calibratedGyroX);
    void setCalibratedGyroY(const float calibratedGyroY);
    void setCalibratedGyroZ(const float calibratedGyroZ);

protected:
    /// @cond internal
    explicit GyroscopeDataMessage(GyroscopeDataMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(GyroscopeDataMessage)
  //Q_DISABLE_COPY(GyroscopeDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_GYROSCOPEDATAMESSAGE_H
