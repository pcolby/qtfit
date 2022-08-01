// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SlaveDeviceMessagePrivate class.
 */
#ifndef QTFIT_SLAVEDEVICEMESSAGE_P_H
#define QTFIT_SLAVEDEVICEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SlaveDeviceMessage;

class SlaveDeviceMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SlaveDeviceMessage FIT message's manufacturer field.
     */
    Manufacturer manufacturer;

    /*!
     * The SlaveDeviceMessage FIT message's product field.
     */
    quint16 product;

    SlaveDeviceMessagePrivate() = delete;
    explicit SlaveDeviceMessagePrivate(SlaveDeviceMessage * const q);
    virtual ~SlaveDeviceMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SlaveDeviceMessage)
    Q_DISABLE_COPY(SlaveDeviceMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SLAVEDEVICEMESSAGE_P_H
