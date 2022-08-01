// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the TrainingFileMessage class.
 */

#ifndef QTFIT_TRAININGFILEMESSAGE_H
#define QTFIT_TRAININGFILEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class TrainingFileMessagePrivate;

class QTFIT_EXPORT TrainingFileMessage : public AbstractDataMessage {

public:
    TrainingFileMessage();
    ~TrainingFileMessage();

    DateTime timestamp() const;
    File type() const;
    Manufacturer manufacturer() const;
    quint16 product() const;
    quint32z serialNumber() const;
    DateTime timeCreated() const;

    void setTimestamp(const DateTime timestamp);
    void setType(const File type);
    void setManufacturer(const Manufacturer manufacturer);
    void setProduct(const quint16 product);
    void setSerialNumber(const quint32z serialNumber);
    void setTimeCreated(const DateTime timeCreated);

protected:
    /// \cond internal
    explicit TrainingFileMessage(TrainingFileMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(TrainingFileMessage)
  //Q_DISABLE_COPY(TrainingFileMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_TRAININGFILEMESSAGE_H
