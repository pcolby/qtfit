// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the CapabilitiesMessagePrivate class.
 */
#ifndef QTFIT_CAPABILITIESMESSAGE_P_H
#define QTFIT_CAPABILITIESMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class CapabilitiesMessage;

class CapabilitiesMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The CapabilitiesMessage FIT message's languages field.
     *
     * Use language_bits_x types where x is index of array.
     */
    quint8z languages;

    /*!
     * The CapabilitiesMessage FIT message's sports field.
     *
     * Use sport_bits_x types where x is index of array.
     */
    SportBits0 sports;

    /*!
     * The CapabilitiesMessage FIT message's workoutsSupported field.
     */
    WorkoutCapabilities workoutsSupported;

    /*!
     * The CapabilitiesMessage FIT message's connectivitySupported field.
     */
    ConnectivityCapabilities connectivitySupported;

    CapabilitiesMessagePrivate() = delete;
    explicit CapabilitiesMessagePrivate(CapabilitiesMessage * const q);
    virtual ~CapabilitiesMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(CapabilitiesMessage)
    Q_DISABLE_COPY(CapabilitiesMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CAPABILITIESMESSAGE_P_H
