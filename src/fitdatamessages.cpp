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
 *
 * \todo Document this.
 */

#include "fitdatamessage.h"
#include "fitdatamessage_p.h"

// include all other message type headers.
#include "fileidmessage.h"

QTFIT_BEGIN_NAMESPACE

FitDataMessage * FitDataMessage::fromData(const DataDefinition * const defn, const QByteArray &record)
{
    Q_ASSERT(defn);
    FitDataMessage * message = nullptr;
    switch (defn->globalMessageNumber) {
    case MesgNum::FileId: message = new fit::FileIdMessage; break;
    /// \todo Auto-generate case statements for all message types.
    }
    if (message) {
        message->d_ptr->setFields(defn, record);
    }
    return message;
}

QTFIT_END_NAMESPACE
