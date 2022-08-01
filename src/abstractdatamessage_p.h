// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * Declares the AbstractDataMessagePrivate class.
 */

#ifndef QTFIT_ABSTRACTDATAMESSAGE_P_H
#define QTFIT_ABSTRACTDATAMESSAGE_P_H

#include <qtfit/QtFit_global.h>
#include <qtfit/types.h>
#include "types_p.h"

QTFIT_BEGIN_NAMESPACE

class AbstractDataMessage;

class AbstractDataMessagePrivate {

public:
    MesgNum globalMessageNumber; ///< FIT Globla Message Number for this FIT Data Message.

    AbstractDataMessagePrivate() = delete;
    explicit AbstractDataMessagePrivate(AbstractDataMessage * const q);
    virtual ~AbstractDataMessagePrivate();

    bool setFields(const DataDefinition * const defn, const QByteArray &record);

protected:
    AbstractDataMessage * const q_ptr; ///< Internal q-pointer.

    virtual bool setField(const int fieldId, const QByteArray &data,
                          const FitBaseType baseType, const bool bigEndian) = 0;

    bool verify(const QByteArray &data, const FitBaseType actualType, const int expectedSize,
                       const FitBaseType expectedType, const char *messageFieldName);

private:
    Q_DECLARE_PUBLIC(AbstractDataMessage)
    Q_DISABLE_COPY(AbstractDataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ABSTRACTDATAMESSAGE_P_H
