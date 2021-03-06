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

/*!
 * \file
 * Declares the ZonesTargetMessagePrivate class.
 */
#ifndef QTFIT_ZONESTARGETMESSAGE_P_H
#define QTFIT_ZONESTARGETMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ZonesTargetMessage;

class ZonesTargetMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ZonesTargetMessage FIT message's maxHeartRate field.
     */
    quint8 maxHeartRate;

    /*!
     * The ZonesTargetMessage FIT message's thresholdHeartRate field.
     */
    quint8 thresholdHeartRate;

    /*!
     * The ZonesTargetMessage FIT message's functionalThresholdPower field.
     */
    quint16 functionalThresholdPower;

    /*!
     * The ZonesTargetMessage FIT message's hrCalcType field.
     */
    HrZoneCalc hrCalcType;

    /*!
     * The ZonesTargetMessage FIT message's pwrCalcType field.
     */
    PwrZoneCalc pwrCalcType;

    ZonesTargetMessagePrivate() = delete;
    explicit ZonesTargetMessagePrivate(ZonesTargetMessage * const q);
    virtual ~ZonesTargetMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ZonesTargetMessage)
    Q_DISABLE_COPY(ZonesTargetMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ZONESTARGETMESSAGE_P_H
