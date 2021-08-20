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

#ifndef QTFIT_ANTTXMESSAGE_H
#define QTFIT_ANTTXMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class AntTxMessagePrivate;

class QTFIT_EXPORT AntTxMessage : public FitDataMessage {

public:
    AntTxMessage();
    ~AntTxMessage();

    DateTime timestamp() const;
    quint16 fractionalTimestamp() const;
    quint8 mesgId() const;
    quint8 mesgData() const;
    quint8 channelNumber() const;
    quint8 data() const;

    void setTimestamp(const DateTime timestamp);
    void setFractionalTimestamp(const quint16 fractionalTimestamp);
    void setMesgId(const quint8 mesgId);
    void setMesgData(const quint8 mesgData);
    void setChannelNumber(const quint8 channelNumber);
    void setData(const quint8 data);

protected:
    /// @cond internal
    explicit AntTxMessage(AntTxMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AntTxMessage)
  //Q_DISABLE_COPY(AntTxMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTTXMESSAGE_H
