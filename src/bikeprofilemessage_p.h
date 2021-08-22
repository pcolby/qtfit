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

#ifndef QTFIT_BIKEPROFILEMESSAGE_P_H
#define QTFIT_BIKEPROFILEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class BikeProfileMessage;

class BikeProfileMessagePrivate : public AbstractDataMessagePrivate {

public:
    MessageIndex messageIndex;
    QString name;
    Sport sport;
    SubSport subSport;
    quint32 odometer;
    quint16z bikeSpdAntId;
    quint16z bikeCadAntId;
    quint16z bikeSpdcadAntId;
    quint16z bikePowerAntId;
    quint16 customWheelsize;
    quint16 autoWheelsize;
    quint16 bikeWeight;
    quint16 powerCalFactor;
    bool autoWheelCal;
    bool autoPowerZero;
    quint8 id;
    bool spdEnabled;
    bool cadEnabled;
    bool spdcadEnabled;
    bool powerEnabled;
    quint8 crankLength;
    bool enabled;
    quint8z bikeSpdAntIdTransType;
    quint8z bikeCadAntIdTransType;
    quint8z bikeSpdcadAntIdTransType;
    quint8z bikePowerAntIdTransType;
    quint8 odometerRollover;
    quint8z frontGearNum;
    quint8z frontGear;
    quint8z rearGearNum;
    quint8z rearGear;
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
