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

#ifndef QTFIT_WEIGHTSCALEMESSAGE_P_H
#define QTFIT_WEIGHTSCALEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class WeightScaleMessage;

class WeightScaleMessagePrivate : public AbstractDataMessagePrivate {

public:
    DateTime timestamp;
    Weight weight;
    quint16 percentFat;
    quint16 percentHydration;
    quint16 visceralFatMass;
    quint16 boneMass;
    quint16 muscleMass;
    quint16 basalMet;
    quint8 physiqueRating;
    quint16 activeMet;
    quint8 metabolicAge;
    quint8 visceralFatRating;
    MessageIndex userProfileIndex;

    WeightScaleMessagePrivate() = delete;
    explicit WeightScaleMessagePrivate(WeightScaleMessage * const q);
    virtual ~WeightScaleMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(WeightScaleMessage)
    Q_DISABLE_COPY(WeightScaleMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_WEIGHTSCALEMESSAGE_P_H
