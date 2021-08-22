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

#ifndef QTFIT_BIKEPROFILEMESSAGE_H
#define QTFIT_BIKEPROFILEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class BikeProfileMessagePrivate;

class QTFIT_EXPORT BikeProfileMessage : public AbstractDataMessage {

public:
    BikeProfileMessage();
    ~BikeProfileMessage();

    MessageIndex messageIndex() const;
    QString name() const;
    Sport sport() const;
    SubSport subSport() const;
    quint32 odometer() const;
    quint16z bikeSpdAntId() const;
    quint16z bikeCadAntId() const;
    quint16z bikeSpdcadAntId() const;
    quint16z bikePowerAntId() const;
    quint16 customWheelsize() const;
    quint16 autoWheelsize() const;
    quint16 bikeWeight() const;
    quint16 powerCalFactor() const;
    bool autoWheelCal() const;
    bool autoPowerZero() const;
    quint8 id() const;
    bool spdEnabled() const;
    bool cadEnabled() const;
    bool spdcadEnabled() const;
    bool powerEnabled() const;
    quint8 crankLength() const;
    bool enabled() const;
    quint8z bikeSpdAntIdTransType() const;
    quint8z bikeCadAntIdTransType() const;
    quint8z bikeSpdcadAntIdTransType() const;
    quint8z bikePowerAntIdTransType() const;
    quint8 odometerRollover() const;
    quint8z frontGearNum() const;
    quint8z frontGear() const;
    quint8z rearGearNum() const;
    quint8z rearGear() const;
    bool shimanoDi2Enabled() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setName(const QString name);
    void setSport(const Sport sport);
    void setSubSport(const SubSport subSport);
    void setOdometer(const quint32 odometer);
    void setBikeSpdAntId(const quint16z bikeSpdAntId);
    void setBikeCadAntId(const quint16z bikeCadAntId);
    void setBikeSpdcadAntId(const quint16z bikeSpdcadAntId);
    void setBikePowerAntId(const quint16z bikePowerAntId);
    void setCustomWheelsize(const quint16 customWheelsize);
    void setAutoWheelsize(const quint16 autoWheelsize);
    void setBikeWeight(const quint16 bikeWeight);
    void setPowerCalFactor(const quint16 powerCalFactor);
    void setAutoWheelCal(const bool autoWheelCal);
    void setAutoPowerZero(const bool autoPowerZero);
    void setId(const quint8 id);
    void setSpdEnabled(const bool spdEnabled);
    void setCadEnabled(const bool cadEnabled);
    void setSpdcadEnabled(const bool spdcadEnabled);
    void setPowerEnabled(const bool powerEnabled);
    void setCrankLength(const quint8 crankLength);
    void setEnabled(const bool enabled);
    void setBikeSpdAntIdTransType(const quint8z bikeSpdAntIdTransType);
    void setBikeCadAntIdTransType(const quint8z bikeCadAntIdTransType);
    void setBikeSpdcadAntIdTransType(const quint8z bikeSpdcadAntIdTransType);
    void setBikePowerAntIdTransType(const quint8z bikePowerAntIdTransType);
    void setOdometerRollover(const quint8 odometerRollover);
    void setFrontGearNum(const quint8z frontGearNum);
    void setFrontGear(const quint8z frontGear);
    void setRearGearNum(const quint8z rearGearNum);
    void setRearGear(const quint8z rearGear);
    void setShimanoDi2Enabled(const bool shimanoDi2Enabled);

protected:
    /// \cond internal
    explicit BikeProfileMessage(BikeProfileMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(BikeProfileMessage)
  //Q_DISABLE_COPY(BikeProfileMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_BIKEPROFILEMESSAGE_H
