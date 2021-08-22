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
    /// @cond internal
    explicit ZonesTargetMessage(ZonesTargetMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ZonesTargetMessage)
  //Q_DISABLE_COPY(ZonesTargetMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ZONESTARGETMESSAGE_H
