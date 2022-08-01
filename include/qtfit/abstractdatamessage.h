// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
