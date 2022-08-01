// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ExdDataFieldConfigurationMessage class.
 */

#ifndef QTFIT_EXDDATAFIELDCONFIGURATIONMESSAGE_H
#define QTFIT_EXDDATAFIELDCONFIGURATIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ExdDataFieldConfigurationMessagePrivate;

class QTFIT_EXPORT ExdDataFieldConfigurationMessage : public AbstractDataMessage {

public:
    ExdDataFieldConfigurationMessage();
    ~ExdDataFieldConfigurationMessage();

    quint8 screenIndex() const;
    quint8 conceptField() const;
    quint8 fieldId() const;
    quint8 conceptCount() const;
    ExdDisplayType displayType() const;
    QString title() const;

    void setScreenIndex(const quint8 screenIndex);
    void setConceptField(const quint8 conceptField);
    void setFieldId(const quint8 fieldId);
    void setConceptCount(const quint8 conceptCount);
    void setDisplayType(const ExdDisplayType displayType);
    void setTitle(const QString title);

protected:
    /// \cond internal
    explicit ExdDataFieldConfigurationMessage(ExdDataFieldConfigurationMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ExdDataFieldConfigurationMessage)
  //Q_DISABLE_COPY(ExdDataFieldConfigurationMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EXDDATAFIELDCONFIGURATIONMESSAGE_H
