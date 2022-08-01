// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SdmProfileMessagePrivate class.
 */
#ifndef QTFIT_SDMPROFILEMESSAGE_P_H
#define QTFIT_SDMPROFILEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SdmProfileMessage;

class SdmProfileMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SdmProfileMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The SdmProfileMessage FIT message's enabled field.
     */
    bool enabled;

    /*!
     * The SdmProfileMessage FIT message's sdmAntId field.
     */
    quint16z sdmAntId;

    /*!
     * The SdmProfileMessage FIT message's sdmCalFactor field.
     */
    quint16 sdmCalFactor;

    /*!
     * The SdmProfileMessage FIT message's odometer field.
     */
    quint32 odometer;

    /*!
     * The SdmProfileMessage FIT message's speedSource field.
     *
     * Use footpod for speed source instead of GPS
     */
    bool speedSource;

    /*!
     * The SdmProfileMessage FIT message's sdmAntIdTransType field.
     */
    quint8z sdmAntIdTransType;

    /*!
     * The SdmProfileMessage FIT message's odometerRollover field.
     *
     * Rollover counter that can be used to extend the odometer
     */
    quint8 odometerRollover;

    SdmProfileMessagePrivate() = delete;
    explicit SdmProfileMessagePrivate(SdmProfileMessage * const q);
    virtual ~SdmProfileMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SdmProfileMessage)
    Q_DISABLE_COPY(SdmProfileMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SDMPROFILEMESSAGE_P_H
