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

#ifndef QTFIT_ANTRXMESSAGE_H
#define QTFIT_ANTRXMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class AntRxMessagePrivate;

class QTFIT_EXPORT AntRxMessage : public AbstractDataMessage {

public:
    AntRxMessage();
    ~AntRxMessage();

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
    /// \cond internal
    explicit AntRxMessage(AntRxMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(AntRxMessage)
  //Q_DISABLE_COPY(AntRxMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTRXMESSAGE_H
