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

#ifndef QTFIT_MAGNETOMETERDATAMESSAGE_H
#define QTFIT_MAGNETOMETERDATAMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class MagnetometerDataMessagePrivate;

class QTFIT_EXPORT MagnetometerDataMessage : public FitDataMessage {

public:
    MagnetometerDataMessage();
    ~MagnetometerDataMessage();

    /// @todo Generate getters/setters.

protected:
    /// @cond internal
    explicit MagnetometerDataMessage(MagnetometerDataMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MagnetometerDataMessage)
  //Q_DISABLE_COPY(MagnetometerDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MAGNETOMETERDATAMESSAGE_H
