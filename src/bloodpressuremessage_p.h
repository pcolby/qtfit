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

/*!
 * \file
 * Declares the BloodPressureMessagePrivate class.
 */
#ifndef QTFIT_BLOODPRESSUREMESSAGE_P_H
#define QTFIT_BLOODPRESSUREMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class BloodPressureMessage;

class BloodPressureMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The BloodPressureMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The BloodPressureMessage FIT message's systolicPressure field.
     */
    quint16 systolicPressure;

    /*!
     * The BloodPressureMessage FIT message's diastolicPressure field.
     */
    quint16 diastolicPressure;

    /*!
     * The BloodPressureMessage FIT message's meanArterialPressure field.
     */
    quint16 meanArterialPressure;

    /*!
     * The BloodPressureMessage FIT message's map3SampleMean field.
     */
    quint16 map3SampleMean;

    /*!
     * The BloodPressureMessage FIT message's mapMorningValues field.
     */
    quint16 mapMorningValues;

    /*!
     * The BloodPressureMessage FIT message's mapEveningValues field.
     */
    quint16 mapEveningValues;

    /*!
     * The BloodPressureMessage FIT message's heartRate field.
     */
    quint8 heartRate;

    /*!
     * The BloodPressureMessage FIT message's heartRateType field.
     */
    HrType heartRateType;

    /*!
     * The BloodPressureMessage FIT message's status field.
     */
    BpStatus status;

    /*!
     * The BloodPressureMessage FIT message's userProfileIndex field.
     *
     * Associates this blood pressure message to a user.  This corresponds to the index of the user
     * profile message in the blood pressure file.
     */
    MessageIndex userProfileIndex;

    BloodPressureMessagePrivate() = delete;
    explicit BloodPressureMessagePrivate(BloodPressureMessage * const q);
    virtual ~BloodPressureMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(BloodPressureMessage)
    Q_DISABLE_COPY(BloodPressureMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_BLOODPRESSUREMESSAGE_P_H
