// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the CapabilitiesMessage class.
 */

#ifndef QTFIT_CAPABILITIESMESSAGE_H
#define QTFIT_CAPABILITIESMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class CapabilitiesMessagePrivate;

class QTFIT_EXPORT CapabilitiesMessage : public AbstractDataMessage {

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
    /// \cond internal
    explicit CapabilitiesMessage(CapabilitiesMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(CapabilitiesMessage)
  //Q_DISABLE_COPY(CapabilitiesMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CAPABILITIESMESSAGE_H
