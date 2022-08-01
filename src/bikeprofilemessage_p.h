// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the BikeProfileMessagePrivate class.
 */
#ifndef QTFIT_BIKEPROFILEMESSAGE_P_H
#define QTFIT_BIKEPROFILEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class BikeProfileMessage;

class BikeProfileMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The BikeProfileMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The BikeProfileMessage FIT message's name field.
     */
    QString name;

    /*!
     * The BikeProfileMessage FIT message's sport field.
     */
    Sport sport;

    /*!
     * The BikeProfileMessage FIT message's subSport field.
     */
    SubSport subSport;

    /*!
     * The BikeProfileMessage FIT message's odometer field.
     */
    quint32 odometer;

    /*!
     * The BikeProfileMessage FIT message's bikeSpdAntId field.
     */
    quint16z bikeSpdAntId;

    /*!
     * The BikeProfileMessage FIT message's bikeCadAntId field.
     */
    quint16z bikeCadAntId;

    /*!
     * The BikeProfileMessage FIT message's bikeSpdcadAntId field.
     */
    quint16z bikeSpdcadAntId;

    /*!
     * The BikeProfileMessage FIT message's bikePowerAntId field.
     */
    quint16z bikePowerAntId;

    /*!
     * The BikeProfileMessage FIT message's customWheelsize field.
     */
    quint16 customWheelsize;

    /*!
     * The BikeProfileMessage FIT message's autoWheelsize field.
     */
    quint16 autoWheelsize;

    /*!
     * The BikeProfileMessage FIT message's bikeWeight field.
     */
    quint16 bikeWeight;

    /*!
     * The BikeProfileMessage FIT message's powerCalFactor field.
     */
    quint16 powerCalFactor;

    /*!
     * The BikeProfileMessage FIT message's autoWheelCal field.
     */
    bool autoWheelCal;

    /*!
     * The BikeProfileMessage FIT message's autoPowerZero field.
     */
    bool autoPowerZero;

    /*!
     * The BikeProfileMessage FIT message's id field.
     */
    quint8 id;

    /*!
     * The BikeProfileMessage FIT message's spdEnabled field.
     */
    bool spdEnabled;

    /*!
     * The BikeProfileMessage FIT message's cadEnabled field.
     */
    bool cadEnabled;

    /*!
     * The BikeProfileMessage FIT message's spdcadEnabled field.
     */
    bool spdcadEnabled;

    /*!
     * The BikeProfileMessage FIT message's powerEnabled field.
     */
    bool powerEnabled;

    /*!
     * The BikeProfileMessage FIT message's crankLength field.
     */
    quint8 crankLength;

    /*!
     * The BikeProfileMessage FIT message's enabled field.
     */
    bool enabled;

    /*!
     * The BikeProfileMessage FIT message's bikeSpdAntIdTransType field.
     */
    quint8z bikeSpdAntIdTransType;

    /*!
     * The BikeProfileMessage FIT message's bikeCadAntIdTransType field.
     */
    quint8z bikeCadAntIdTransType;

    /*!
     * The BikeProfileMessage FIT message's bikeSpdcadAntIdTransType field.
     */
    quint8z bikeSpdcadAntIdTransType;

    /*!
     * The BikeProfileMessage FIT message's bikePowerAntIdTransType field.
     */
    quint8z bikePowerAntIdTransType;

    /*!
     * The BikeProfileMessage FIT message's odometerRollover field.
     *
     * Rollover counter that can be used to extend the odometer
     */
    quint8 odometerRollover;

    /*!
     * The BikeProfileMessage FIT message's frontGearNum field.
     *
     * Number of front gears
     */
    quint8z frontGearNum;

    /*!
     * The BikeProfileMessage FIT message's frontGear field.
     *
     * Number of teeth on each gear 0 is innermost
     */
    quint8z frontGear;

    /*!
     * The BikeProfileMessage FIT message's rearGearNum field.
     *
     * Number of rear gears
     */
    quint8z rearGearNum;

    /*!
     * The BikeProfileMessage FIT message's rearGear field.
     *
     * Number of teeth on each gear 0 is innermost
     */
    quint8z rearGear;

    /*!
     * The BikeProfileMessage FIT message's shimanoDi2Enabled field.
     */
    bool shimanoDi2Enabled;

    BikeProfileMessagePrivate() = delete;
    explicit BikeProfileMessagePrivate(BikeProfileMessage * const q);
    virtual ~BikeProfileMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(BikeProfileMessage)
    Q_DISABLE_COPY(BikeProfileMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_BIKEPROFILEMESSAGE_P_H
