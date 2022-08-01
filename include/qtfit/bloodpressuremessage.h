// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the BloodPressureMessage class.
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
    /// \cond internal
    explicit BloodPressureMessage(BloodPressureMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(BloodPressureMessage)
  //Q_DISABLE_COPY(BloodPressureMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_BLOODPRESSUREMESSAGE_H
