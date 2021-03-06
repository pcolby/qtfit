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
