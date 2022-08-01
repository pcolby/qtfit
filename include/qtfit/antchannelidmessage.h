// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the AntChannelIdMessage class.
 */

#ifndef QTFIT_ANTCHANNELIDMESSAGE_H
#define QTFIT_ANTCHANNELIDMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class AntChannelIdMessagePrivate;

class QTFIT_EXPORT AntChannelIdMessage : public AbstractDataMessage {

public:
    AntChannelIdMessage();
    ~AntChannelIdMessage();

    quint8 channelNumber() const;
    quint8z deviceType() const;
    quint16z deviceNumber() const;
    quint8z transmissionType() const;
    DeviceIndex deviceIndex() const;

    void setChannelNumber(const quint8 channelNumber);
    void setDeviceType(const quint8z deviceType);
    void setDeviceNumber(const quint16z deviceNumber);
    void setTransmissionType(const quint8z transmissionType);
    void setDeviceIndex(const DeviceIndex deviceIndex);

protected:
    /// \cond internal
    explicit AntChannelIdMessage(AntChannelIdMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(AntChannelIdMessage)
  //Q_DISABLE_COPY(AntChannelIdMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTCHANNELIDMESSAGE_H
