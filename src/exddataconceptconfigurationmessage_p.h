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
