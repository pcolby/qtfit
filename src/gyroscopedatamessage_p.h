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

#ifndef QTFIT_GYROSCOPEDATAMESSAGE_P_H
#define QTFIT_GYROSCOPEDATAMESSAGE_P_H

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class GyroscopeDataMessage;

class GyroscopeDataMessagePrivate : public FitDataMessagePrivate {

public:
    DateTime timestamp;
    quint16 timestampMs;
    quint16 sampleTimeOffset;
    quint16 gyroX;
    quint16 gyroY;
    quint16 gyroZ;
    float calibratedGyroX;
    float calibratedGyroY;
    float calibratedGyroZ;

    GyroscopeDataMessagePrivate() = delete;
    explicit GyroscopeDataMessagePrivate(GyroscopeDataMessage * const q);
    virtual ~GyroscopeDataMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(GyroscopeDataMessage)
    Q_DISABLE_COPY(GyroscopeDataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_GYROSCOPEDATAMESSAGE_P_H
