// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the WeightScaleMessage class.
 */

#ifndef QTFIT_WEIGHTSCALEMESSAGE_H
#define QTFIT_WEIGHTSCALEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class WeightScaleMessagePrivate;

class QTFIT_EXPORT WeightScaleMessage : public AbstractDataMessage {

public:
    WeightScaleMessage();
    ~WeightScaleMessage();

    DateTime timestamp() const;
    Weight weight() const;
    quint16 percentFat() const;
    quint16 percentHydration() const;
    quint16 visceralFatMass() const;
    quint16 boneMass() const;
    quint16 muscleMass() const;
    quint16 basalMet() const;
    quint8 physiqueRating() const;
    quint16 activeMet() const;
    quint8 metabolicAge() const;
    quint8 visceralFatRating() const;
    MessageIndex userProfileIndex() const;

    void setTimestamp(const DateTime timestamp);
    void setWeight(const Weight weight);
    void setPercentFat(const quint16 percentFat);
    void setPercentHydration(const quint16 percentHydration);
    void setVisceralFatMass(const quint16 visceralFatMass);
    void setBoneMass(const quint16 boneMass);
    void setMuscleMass(const quint16 muscleMass);
    void setBasalMet(const quint16 basalMet);
    void setPhysiqueRating(const quint8 physiqueRating);
    void setActiveMet(const quint16 activeMet);
    void setMetabolicAge(const quint8 metabolicAge);
    void setVisceralFatRating(const quint8 visceralFatRating);
    void setUserProfileIndex(const MessageIndex userProfileIndex);

protected:
    /// \cond internal
    explicit WeightScaleMessage(WeightScaleMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(WeightScaleMessage)
  //Q_DISABLE_COPY(WeightScaleMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WEIGHTSCALEMESSAGE_H
