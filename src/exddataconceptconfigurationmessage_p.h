// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ExdDataConceptConfigurationMessagePrivate class.
 */
#ifndef QTFIT_EXDDATACONCEPTCONFIGURATIONMESSAGE_P_H
#define QTFIT_EXDDATACONCEPTCONFIGURATIONMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ExdDataConceptConfigurationMessage;

class ExdDataConceptConfigurationMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ExdDataConceptConfigurationMessage FIT message's screenIndex field.
     */
    quint8 screenIndex;

    /*!
     * The ExdDataConceptConfigurationMessage FIT message's conceptField field.
     */
    quint8 conceptField;

    /*!
     * The ExdDataConceptConfigurationMessage FIT message's fieldId field.
     */
    quint8 fieldId;

    /*!
     * The ExdDataConceptConfigurationMessage FIT message's conceptIndex field.
     */
    quint8 conceptIndex;

    /*!
     * The ExdDataConceptConfigurationMessage FIT message's dataPage field.
     */
    quint8 dataPage;

    /*!
     * The ExdDataConceptConfigurationMessage FIT message's conceptKey field.
     */
    quint8 conceptKey;

    /*!
     * The ExdDataConceptConfigurationMessage FIT message's scaling field.
     */
    quint8 scaling;

    /*!
     * The ExdDataConceptConfigurationMessage FIT message's dataUnits field.
     */
    ExdDataUnits dataUnits;

    /*!
     * The ExdDataConceptConfigurationMessage FIT message's qualifier field.
     */
    ExdQualifiers qualifier;

    /*!
     * The ExdDataConceptConfigurationMessage FIT message's descriptor field.
     */
    ExdDescriptors descriptor;

    /*!
     * The ExdDataConceptConfigurationMessage FIT message's isSigned field.
     */
    bool isSigned;

    ExdDataConceptConfigurationMessagePrivate() = delete;
    explicit ExdDataConceptConfigurationMessagePrivate(ExdDataConceptConfigurationMessage * const q);
    virtual ~ExdDataConceptConfigurationMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ExdDataConceptConfigurationMessage)
    Q_DISABLE_COPY(ExdDataConceptConfigurationMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EXDDATACONCEPTCONFIGURATIONMESSAGE_P_H
