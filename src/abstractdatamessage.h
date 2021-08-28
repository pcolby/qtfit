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
 * Declares the AbstractDataMessage class.
 */

#ifndef QTFIT_ABSTRACTDATAMESSAGE_H
#define QTFIT_ABSTRACTDATAMESSAGE_H

#include "QtFit_global.h"
#include "types.h"

QTFIT_BEGIN_NAMESPACE

struct DataDefinition;
class AbstractDataMessagePrivate;

class QTFIT_EXPORT AbstractDataMessage {

public:
    AbstractDataMessage() = delete;
    ~AbstractDataMessage();
    MesgNum globalMessageNumber() const;

    static AbstractDataMessage * fromData(const DataDefinition * const defn, const QByteArray &record);

protected:
    /// \cond internal
    AbstractDataMessagePrivate * const d_ptr; ///< Internal d-pointer.
    explicit AbstractDataMessage(AbstractDataMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(AbstractDataMessage)
    Q_DISABLE_COPY(AbstractDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ABSTRACTDATAMESSAGE_H
