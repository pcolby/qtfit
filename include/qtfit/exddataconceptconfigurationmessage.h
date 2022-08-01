// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ExdDataConceptConfigurationMessage class.
 */

#ifndef QTFIT_EXDDATACONCEPTCONFIGURATIONMESSAGE_H
#define QTFIT_EXDDATACONCEPTCONFIGURATIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ExdDataConceptConfigurationMessagePrivate;

class QTFIT_EXPORT ExdDataConceptConfigurationMessage : public AbstractDataMessage {

public:
    ExdDataConceptConfigurationMessage();
    ~ExdDataConceptConfigurationMessage();

    quint8 screenIndex() const;
    quint8 conceptField() const;
    quint8 fieldId() const;
    quint8 conceptIndex() const;
    quint8 dataPage() const;
    quint8 conceptKey() const;
    quint8 scaling() const;
    ExdDataUnits dataUnits() const;
    ExdQualifiers qualifier() const;
    ExdDescriptors descriptor() const;
    bool isSigned() const;

    void setScreenIndex(const quint8 screenIndex);
    void setConceptField(const quint8 conceptField);
    void setFieldId(const quint8 fieldId);
    void setConceptIndex(const quint8 conceptIndex);
    void setDataPage(const quint8 dataPage);
    void setConceptKey(const quint8 conceptKey);
    void setScaling(const quint8 scaling);
    void setDataUnits(const ExdDataUnits dataUnits);
    void setQualifier(const ExdQualifiers qualifier);
    void setDescriptor(const ExdDescriptors descriptor);
    void setIsSigned(const bool isSigned);

protected:
    /// \cond internal
    explicit ExdDataConceptConfigurationMessage(ExdDataConceptConfigurationMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ExdDataConceptConfigurationMessage)
  //Q_DISABLE_COPY(ExdDataConceptConfigurationMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EXDDATACONCEPTCONFIGURATIONMESSAGE_H
