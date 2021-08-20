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

#ifndef QTFIT_AVIATIONATTITUDEMESSAGE_P_H
#define QTFIT_AVIATIONATTITUDEMESSAGE_P_H

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class AviationAttitudeMessage;

class AviationAttitudeMessagePrivate : public FitDataMessagePrivate {

public:
    DateTime timestamp;
    quint16 timestampMs;
    quint32 systemTime;
    qint16 pitch;
    qint16 roll;
    qint16 accelLateral;
    qint16 accelNormal;
    qint16 turnRate;
    AttitudeStage stage;
    quint8 attitudeStageComplete;
    quint16 track;
    AttitudeValidity validity;

    AviationAttitudeMessagePrivate() = delete;
    explicit AviationAttitudeMessagePrivate(AviationAttitudeMessage * const q);
    virtual ~AviationAttitudeMessagePrivate();

protected:
    /// @todo Make base type enum.
    bool setField(const int fieldId, const QByteArray data, int baseType) override;

private:
    Q_DECLARE_PUBLIC(AviationAttitudeMessage)
    Q_DISABLE_COPY(AviationAttitudeMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_AVIATIONATTITUDEMESSAGE_P_H
