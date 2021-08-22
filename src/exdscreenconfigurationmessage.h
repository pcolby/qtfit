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

#ifndef QTFIT_EXDSCREENCONFIGURATIONMESSAGE_H
#define QTFIT_EXDSCREENCONFIGURATIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ExdScreenConfigurationMessagePrivate;

class QTFIT_EXPORT ExdScreenConfigurationMessage : public AbstractDataMessage {

public:
    ExdScreenConfigurationMessage();
    ~ExdScreenConfigurationMessage();

    quint8 screenIndex() const;
    quint8 fieldCount() const;
    ExdLayout layout() const;
    bool screenEnabled() const;

    void setScreenIndex(const quint8 screenIndex);
    void setFieldCount(const quint8 fieldCount);
    void setLayout(const ExdLayout layout);
    void setScreenEnabled(const bool screenEnabled);

protected:
    /// @cond internal
    explicit ExdScreenConfigurationMessage(ExdScreenConfigurationMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ExdScreenConfigurationMessage)
  //Q_DISABLE_COPY(ExdScreenConfigurationMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EXDSCREENCONFIGURATIONMESSAGE_H
