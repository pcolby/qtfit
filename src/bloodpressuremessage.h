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

#ifndef QTFIT_BLOODPRESSUREMESSAGE_H
#define QTFIT_BLOODPRESSUREMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class BloodPressureMessagePrivate;

class QTFIT_EXPORT BloodPressureMessage : public AbstractDataMessage {

public:
    BloodPressureMessage();
    ~BloodPressureMessage();

    DateTime timestamp() const;
    quint16 systolicPressure() const;
    quint16 diastolicPressure() const;
    quint16 meanArterialPressure() const;
    quint16 map3SampleMean() const;
    quint16 mapMorningValues() const;
    quint16 mapEveningValues() const;
    quint8 heartRate() const;
    HrType heartRateType() const;
    BpStatus status() const;
    MessageIndex userProfileIndex() const;

    void setTimestamp(const DateTime timestamp);
    void setSystolicPressure(const quint16 systolicPressure);
    void setDiastolicPressure(const quint16 diastolicPressure);
    void setMeanArterialPressure(const quint16 meanArterialPressure);
    void setMap3SampleMean(const quint16 map3SampleMean);
    void setMapMorningValues(const quint16 mapMorningValues);
    void setMapEveningValues(const quint16 mapEveningValues);
    void setHeartRate(const quint8 heartRate);
    void setHeartRateType(const HrType heartRateType);
    void setStatus(const BpStatus status);
    void setUserProfileIndex(const MessageIndex userProfileIndex);

protected:
    /// @cond internal
    explicit BloodPressureMessage(BloodPressureMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(BloodPressureMessage)
  //Q_DISABLE_COPY(BloodPressureMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_BLOODPRESSUREMESSAGE_H
