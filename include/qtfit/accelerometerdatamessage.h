// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the AccelerometerDataMessage class.
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
    /// \cond internal
    explicit AccelerometerDataMessage(AccelerometerDataMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(AccelerometerDataMessage)
  //Q_DISABLE_COPY(AccelerometerDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ACCELEROMETERDATAMESSAGE_H
