// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SlaveDeviceMessage class.
 */

#ifndef QTFIT_SLAVEDEVICEMESSAGE_H
#define QTFIT_SLAVEDEVICEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SlaveDeviceMessagePrivate;

class QTFIT_EXPORT SlaveDeviceMessage : public AbstractDataMessage {

public:
    SlaveDeviceMessage();
    ~SlaveDeviceMessage();

    Manufacturer manufacturer() const;
    quint16 product() const;

    void setManufacturer(const Manufacturer manufacturer);
    void setProduct(const quint16 product);

protected:
    /// \cond internal
    explicit SlaveDeviceMessage(SlaveDeviceMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SlaveDeviceMessage)
  //Q_DISABLE_COPY(SlaveDeviceMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SLAVEDEVICEMESSAGE_H
