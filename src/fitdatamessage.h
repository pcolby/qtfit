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

#ifndef FITDATAMESSAGE_H
#define FITDATAMESSAGE_H

#include "QtFit_global.h"
#include "types.h"

QTFIT_BEGIN_NAMESPACE

class FitDataMessagePrivate;

class QTFIT_EXPORT FitDataMessage {

public:
    FitDataMessage();
    FitDataMessage(const FitDataMessage &other);
    FitDataMessage &operator=(const FitDataMessage &other);
    ~FitDataMessage();
    MesgNum globalMessageNumber() const;
    bool isNull() const;
//    bool isValid() const; ///< @todo?

protected:
    /// @cond internal
    FitDataMessagePrivate * const d_ptr; ///< Internal d-pointer.
    explicit FitDataMessage(FitDataMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(FitDataMessage)

};

QTFIT_END_NAMESPACE

#endif // FITDATAMESSAGE_H
