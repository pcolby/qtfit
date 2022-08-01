// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the GyroscopeDataMessage class.
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
    /// \cond internal
    explicit GyroscopeDataMessage(GyroscopeDataMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(GyroscopeDataMessage)
  //Q_DISABLE_COPY(GyroscopeDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_GYROSCOPEDATAMESSAGE_H
