// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the DeveloperDataIdMessage class.
 */

#ifndef QTFIT_DEVELOPERDATAIDMESSAGE_H
#define QTFIT_DEVELOPERDATAIDMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class DeveloperDataIdMessagePrivate;

class QTFIT_EXPORT DeveloperDataIdMessage : public AbstractDataMessage {

public:
    DeveloperDataIdMessage();
    ~DeveloperDataIdMessage();

    quint8 developerId() const;
    quint8 applicationId() const;
    Manufacturer manufacturerId() const;
    quint8 developerDataIndex() const;
    quint32 applicationVersion() const;

    void setDeveloperId(const quint8 developerId);
    void setApplicationId(const quint8 applicationId);
    void setManufacturerId(const Manufacturer manufacturerId);
    void setDeveloperDataIndex(const quint8 developerDataIndex);
    void setApplicationVersion(const quint32 applicationVersion);

protected:
    /// \cond internal
    explicit DeveloperDataIdMessage(DeveloperDataIdMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(DeveloperDataIdMessage)
  //Q_DISABLE_COPY(DeveloperDataIdMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DEVELOPERDATAIDMESSAGE_H
