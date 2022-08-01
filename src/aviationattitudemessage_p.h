// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the AviationAttitudeMessagePrivate class.
 */
#ifndef QTFIT_AVIATIONATTITUDEMESSAGE_P_H
#define QTFIT_AVIATIONATTITUDEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class AviationAttitudeMessage;

class AviationAttitudeMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The AviationAttitudeMessage FIT message's timestamp field.
     *
     * Timestamp message was output
     */
    DateTime timestamp;

    /*!
     * The AviationAttitudeMessage FIT message's timestampMs field.
     *
     * Fractional part of timestamp, added to timestamp
     */
    quint16 timestampMs;

    /*!
     * The AviationAttitudeMessage FIT message's systemTime field.
     *
     * System time associated with sample expressed in ms.
     */
    quint32 systemTime;

    /*!
     * The AviationAttitudeMessage FIT message's pitch field.
     *
     * Range -PI/2 to +PI/2
     */
    qint16 pitch;

    /*!
     * The AviationAttitudeMessage FIT message's roll field.
     *
     * Range -PI to +PI
     */
    qint16 roll;

    /*!
     * The AviationAttitudeMessage FIT message's accelLateral field.
     *
     * Range -78.4 to +78.4 (-8 Gs to 8 Gs)
     */
    qint16 accelLateral;

    /*!
     * The AviationAttitudeMessage FIT message's accelNormal field.
     *
     * Range -78.4 to +78.4 (-8 Gs to 8 Gs)
     */
    qint16 accelNormal;

    /*!
     * The AviationAttitudeMessage FIT message's turnRate field.
     *
     * Range -8.727 to +8.727 (-500 degs/sec to +500 degs/sec)
     */
    qint16 turnRate;

    /*!
     * The AviationAttitudeMessage FIT message's stage field.
     */
    AttitudeStage stage;

    /*!
     * The AviationAttitudeMessage FIT message's attitudeStageComplete field.
     *
     * The percent complete of the current attitude stage.  Set to 0 for attitude stages 0, 1 and 2
     * and to 100 for attitude stage 3 by AHRS modules that do not support it.  Range - 100
     */
    quint8 attitudeStageComplete;

    /*!
     * The AviationAttitudeMessage FIT message's track field.
     *
     * Track Angle/Heading Range 0 - 2pi
     */
    quint16 track;

    /*!
     * The AviationAttitudeMessage FIT message's validity field.
     */
    AttitudeValidity validity;

    AviationAttitudeMessagePrivate() = delete;
    explicit AviationAttitudeMessagePrivate(AviationAttitudeMessage * const q);
    virtual ~AviationAttitudeMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(AviationAttitudeMessage)
    Q_DISABLE_COPY(AviationAttitudeMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_AVIATIONATTITUDEMESSAGE_P_H
