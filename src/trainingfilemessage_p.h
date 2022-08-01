// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
