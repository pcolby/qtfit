// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the FileIdMessage class.
 */

#ifndef QTFIT_FILEIDMESSAGE_H
#define QTFIT_FILEIDMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class FileIdMessagePrivate;

class QTFIT_EXPORT FileIdMessage : public AbstractDataMessage {

public:
    FileIdMessage();
    ~FileIdMessage();

    File type() const;
    Manufacturer manufacturer() const;
    quint16 product() const;
    quint32z serialNumber() const;
    DateTime timeCreated() const;
    quint16 number() const;
    QString productName() const;

    void setType(const File type);
    void setManufacturer(const Manufacturer manufacturer);
    void setProduct(const quint16 product);
    void setSerialNumber(const quint32z serialNumber);
    void setTimeCreated(const DateTime timeCreated);
    void setNumber(const quint16 number);
    void setProductName(const QString productName);

protected:
    /// \cond internal
    explicit FileIdMessage(FileIdMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(FileIdMessage)
  //Q_DISABLE_COPY(FileIdMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FILEIDMESSAGE_H
