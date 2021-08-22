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
    /// @cond internal
    explicit DeveloperDataIdMessage(DeveloperDataIdMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(DeveloperDataIdMessage)
  //Q_DISABLE_COPY(DeveloperDataIdMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DEVELOPERDATAIDMESSAGE_H
