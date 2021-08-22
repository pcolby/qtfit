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

#ifndef QTFIT_ACCELEROMETERDATAMESSAGE_H
#define QTFIT_ACCELEROMETERDATAMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class AccelerometerDataMessagePrivate;

class QTFIT_EXPORT AccelerometerDataMessage : public AbstractDataMessage {

public:
    AccelerometerDataMessage();
    ~AccelerometerDataMessage();

    DateTime timestamp() const;
    quint16 timestampMs() const;
    quint16 sampleTimeOffset() const;
    quint16 accelX() const;
    quint16 accelY() const;
    quint16 accelZ() const;
    float calibratedAccelX() const;
    float calibratedAccelY() const;
    float calibratedAccelZ() const;
    qint16 compressedCalibratedAccelX() const;
    qint16 compressedCalibratedAccelY() const;
    qint16 compressedCalibratedAccelZ() const;

    void setTimestamp(const DateTime timestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setSampleTimeOffset(const quint16 sampleTimeOffset);
    void setAccelX(const quint16 accelX);
    void setAccelY(const quint16 accelY);
    void setAccelZ(const quint16 accelZ);
    void setCalibratedAccelX(const float calibratedAccelX);
    void setCalibratedAccelY(const float calibratedAccelY);
    void setCalibratedAccelZ(const float calibratedAccelZ);
    void setCompressedCalibratedAccelX(const qint16 compressedCalibratedAccelX);
    void setCompressedCalibratedAccelY(const qint16 compressedCalibratedAccelY);
    void setCompressedCalibratedAccelZ(const qint16 compressedCalibratedAccelZ);

protected:
    /// @cond internal
    explicit AccelerometerDataMessage(AccelerometerDataMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AccelerometerDataMessage)
  //Q_DISABLE_COPY(AccelerometerDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ACCELEROMETERDATAMESSAGE_H
