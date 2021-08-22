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
    /// @cond internal
    explicit MagnetometerDataMessage(MagnetometerDataMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MagnetometerDataMessage)
  //Q_DISABLE_COPY(MagnetometerDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MAGNETOMETERDATAMESSAGE_H
