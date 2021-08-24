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
    /*!
     * The WeightScaleMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The WeightScaleMessage FIT message's weight field.
     */
    Weight weight;

    /*!
     * The WeightScaleMessage FIT message's percentFat field.
     */
    quint16 percentFat;

    /*!
     * The WeightScaleMessage FIT message's percentHydration field.
     */
    quint16 percentHydration;

    /*!
     * The WeightScaleMessage FIT message's visceralFatMass field.
     */
    quint16 visceralFatMass;

    /*!
     * The WeightScaleMessage FIT message's boneMass field.
     */
    quint16 boneMass;

    /*!
     * The WeightScaleMessage FIT message's muscleMass field.
     */
    quint16 muscleMass;

    /*!
     * The WeightScaleMessage FIT message's basalMet field.
     */
    quint16 basalMet;

    /*!
     * The WeightScaleMessage FIT message's physiqueRating field.
     */
    quint8 physiqueRating;

    /*!
     * The WeightScaleMessage FIT message's activeMet field.
     *
     * ~4kJ per kcal, 0.25 allows max 16384 kcal
     */
    quint16 activeMet;

    /*!
     * The WeightScaleMessage FIT message's metabolicAge field.
     */
    quint8 metabolicAge;

    /*!
     * The WeightScaleMessage FIT message's visceralFatRating field.
     */
    quint8 visceralFatRating;

    /*!
     * The WeightScaleMessage FIT message's userProfileIndex field.
     *
     * Associates this weight scale message to a user.  This corresponds to the index of the user
     * profile message in the weight scale file.
     */
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
