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

#ifndef FITDATAMESSAGE_P_H
#define FITDATAMESSAGE_P_H

#include "QtFit_global.h"
#include "types.h"
#include "types_p.h"

QTFIT_BEGIN_NAMESPACE

class FitDataMessage;

class FitDataMessagePrivate {

public:
    MesgNum globalMessageNumber;
    bool isNull;

    FitDataMessagePrivate() = delete;
    explicit FitDataMessagePrivate(FitDataMessage * const q);
    virtual ~FitDataMessagePrivate();


    static FitDataMessage fromDataRecord(const MesgNum globalMessageNumber, const QByteArray record);

    bool setFields(const DataDefinition * const defn, const QByteArray &record);

protected:
    FitDataMessage * const q_ptr; ///< Internal q-pointer.

    /// @todo Make base type enum.
    virtual bool setField(const int fieldId, const QByteArray data, int baseType);

private:
    Q_DECLARE_PUBLIC(FitDataMessage)
    Q_DISABLE_COPY(FitDataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // FITDATAMESSAGE_P_H
