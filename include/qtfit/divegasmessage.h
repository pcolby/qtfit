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
 * Declares the DiveGasMessage class.
 */

#ifndef QTFIT_DIVEGASMESSAGE_H
#define QTFIT_DIVEGASMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class DiveGasMessagePrivate;

class QTFIT_EXPORT DiveGasMessage : public AbstractDataMessage {

public:
    DiveGasMessage();
    ~DiveGasMessage();

    MessageIndex messageIndex() const;
    quint8 heliumContent() const;
    quint8 oxygenContent() const;
    DiveGasStatus status() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setHeliumContent(const quint8 heliumContent);
    void setOxygenContent(const quint8 oxygenContent);
    void setStatus(const DiveGasStatus status);

protected:
    /// \cond internal
    explicit DiveGasMessage(DiveGasMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(DiveGasMessage)
  //Q_DISABLE_COPY(DiveGasMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DIVEGASMESSAGE_H
