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

#ifndef QTFIT_ANTCHANNELIDMESSAGE_H
#define QTFIT_ANTCHANNELIDMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class AntChannelIdMessagePrivate;

class QTFIT_EXPORT AntChannelIdMessage : public FitDataMessage {

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
    /// @cond internal
    explicit AntChannelIdMessage(AntChannelIdMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AntChannelIdMessage)
  //Q_DISABLE_COPY(AntChannelIdMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTCHANNELIDMESSAGE_H
