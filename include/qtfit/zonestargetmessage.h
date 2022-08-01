// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ZonesTargetMessage class.
 */

#ifndef QTFIT_ZONESTARGETMESSAGE_H
#define QTFIT_ZONESTARGETMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ZonesTargetMessagePrivate;

class QTFIT_EXPORT ZonesTargetMessage : public AbstractDataMessage {

public:
    ZonesTargetMessage();
    ~ZonesTargetMessage();

    quint8 maxHeartRate() const;
    quint8 thresholdHeartRate() const;
    quint16 functionalThresholdPower() const;
    HrZoneCalc hrCalcType() const;
    PwrZoneCalc pwrCalcType() const;

    void setMaxHeartRate(const quint8 maxHeartRate);
    void setThresholdHeartRate(const quint8 thresholdHeartRate);
    void setFunctionalThresholdPower(const quint16 functionalThresholdPower);
    void setHrCalcType(const HrZoneCalc hrCalcType);
    void setPwrCalcType(const PwrZoneCalc pwrCalcType);

protected:
    /// \cond internal
    explicit ZonesTargetMessage(ZonesTargetMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ZonesTargetMessage)
  //Q_DISABLE_COPY(ZonesTargetMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ZONESTARGETMESSAGE_H
