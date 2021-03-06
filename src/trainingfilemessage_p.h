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
 * Declares the TrainingFileMessagePrivate class.
 */
#ifndef QTFIT_TRAININGFILEMESSAGE_P_H
#define QTFIT_TRAININGFILEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class TrainingFileMessage;

class TrainingFileMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The TrainingFileMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The TrainingFileMessage FIT message's type field.
     */
    File type;

    /*!
     * The TrainingFileMessage FIT message's manufacturer field.
     */
    Manufacturer manufacturer;

    /*!
     * The TrainingFileMessage FIT message's product field.
     */
    quint16 product;

    /*!
     * The TrainingFileMessage FIT message's serialNumber field.
     */
    quint32z serialNumber;

    /*!
     * The TrainingFileMessage FIT message's timeCreated field.
     */
    DateTime timeCreated;

    TrainingFileMessagePrivate() = delete;
    explicit TrainingFileMessagePrivate(TrainingFileMessage * const q);
    virtual ~TrainingFileMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(TrainingFileMessage)
    Q_DISABLE_COPY(TrainingFileMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_TRAININGFILEMESSAGE_P_H
