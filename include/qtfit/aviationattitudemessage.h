// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the AviationAttitudeMessage class.
 */

#ifndef QTFIT_AVIATIONATTITUDEMESSAGE_H
#define QTFIT_AVIATIONATTITUDEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class AviationAttitudeMessagePrivate;

class QTFIT_EXPORT AviationAttitudeMessage : public AbstractDataMessage {

public:
    AviationAttitudeMessage();
    ~AviationAttitudeMessage();

    DateTime timestamp() const;
    quint16 timestampMs() const;
    quint32 systemTime() const;
    qint16 pitch() const;
    qint16 roll() const;
    qint16 accelLateral() const;
    qint16 accelNormal() const;
    qint16 turnRate() const;
    AttitudeStage stage() const;
    quint8 attitudeStageComplete() const;
    quint16 track() const;
    AttitudeValidity validity() const;

    void setTimestamp(const DateTime timestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setSystemTime(const quint32 systemTime);
    void setPitch(const qint16 pitch);
    void setRoll(const qint16 roll);
    void setAccelLateral(const qint16 accelLateral);
    void setAccelNormal(const qint16 accelNormal);
    void setTurnRate(const qint16 turnRate);
    void setStage(const AttitudeStage stage);
    void setAttitudeStageComplete(const quint8 attitudeStageComplete);
    void setTrack(const quint16 track);
    void setValidity(const AttitudeValidity validity);

protected:
    /// \cond internal
    explicit AviationAttitudeMessage(AviationAttitudeMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(AviationAttitudeMessage)
  //Q_DISABLE_COPY(AviationAttitudeMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_AVIATIONATTITUDEMESSAGE_H
