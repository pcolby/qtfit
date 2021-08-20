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

#ifndef QTFIT_CAPABILITIESMESSAGE_H
#define QTFIT_CAPABILITIESMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class CapabilitiesMessagePrivate;

class QTFIT_EXPORT CapabilitiesMessage : public FitDataMessage {

public:
    CapabilitiesMessage();
    ~CapabilitiesMessage();

    quint8z languages() const;
    SportBits0 sports() const;
    WorkoutCapabilities workoutsSupported() const;
    ConnectivityCapabilities connectivitySupported() const;

    void setLanguages(const quint8z languages);
    void setSports(const SportBits0 sports);
    void setWorkoutsSupported(const WorkoutCapabilities workoutsSupported);
    void setConnectivitySupported(const ConnectivityCapabilities connectivitySupported);

protected:
    /// @cond internal
    explicit CapabilitiesMessage(CapabilitiesMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(CapabilitiesMessage)
  //Q_DISABLE_COPY(CapabilitiesMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CAPABILITIESMESSAGE_H
