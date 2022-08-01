// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
