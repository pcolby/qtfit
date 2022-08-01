// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the MagnetometerDataMessage class.
 */

#ifndef QTFIT_MAGNETOMETERDATAMESSAGE_H
#define QTFIT_MAGNETOMETERDATAMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class MagnetometerDataMessagePrivate;

class QTFIT_EXPORT MagnetometerDataMessage : public AbstractDataMessage {

public:
    MagnetometerDataMessage();
    ~MagnetometerDataMessage();

    DateTime timestamp() const;
    quint16 timestampMs() const;
    quint16 sampleTimeOffset() const;
    quint16 magX() const;
    quint16 magY() const;
    quint16 magZ() const;
    float calibratedMagX() const;
    float calibratedMagY() const;
    float calibratedMagZ() const;

    void setTimestamp(const DateTime timestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setSampleTimeOffset(const quint16 sampleTimeOffset);
    void setMagX(const quint16 magX);
    void setMagY(const quint16 magY);
    void setMagZ(const quint16 magZ);
    void setCalibratedMagX(const float calibratedMagX);
    void setCalibratedMagY(const float calibratedMagY);
    void setCalibratedMagZ(const float calibratedMagZ);

protected:
    /// \cond internal
    explicit MagnetometerDataMessage(MagnetometerDataMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(MagnetometerDataMessage)
  //Q_DISABLE_COPY(MagnetometerDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MAGNETOMETERDATAMESSAGE_H
