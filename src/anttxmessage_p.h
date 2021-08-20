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

#ifndef QTFIT_ANTTXMESSAGE_P_H
#define QTFIT_ANTTXMESSAGE_P_H

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class AntTxMessage;

class AntTxMessagePrivate : public FitDataMessagePrivate {

public:
    DateTime timestamp;
    quint16 fractionalTimestamp;
    quint8 mesgId;
    quint8 mesgData;
    quint8 channelNumber;
    quint8 data;

    AntTxMessagePrivate() = delete;
    explicit AntTxMessagePrivate(AntTxMessage * const q);
    virtual ~AntTxMessagePrivate();

protected:
    /// @todo Make base type enum.
    bool setField(const int fieldId, const QByteArray data, int baseType) override;

private:
    Q_DECLARE_PUBLIC(AntTxMessage)
    Q_DISABLE_COPY(AntTxMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTTXMESSAGE_P_H
