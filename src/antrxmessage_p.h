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

#ifndef QTFIT_ANTRXMESSAGE_P_H
#define QTFIT_ANTRXMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class AntRxMessage;

class AntRxMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The AntRxMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The AntRxMessage FIT message's fractionalTimestamp field.
     */
    quint16 fractionalTimestamp;

    /*!
     * The AntRxMessage FIT message's mesgId field.
     */
    quint8 mesgId;

    /*!
     * The AntRxMessage FIT message's mesgData field.
     */
    quint8 mesgData;

    /*!
     * The AntRxMessage FIT message's channelNumber field.
     */
    quint8 channelNumber;

    /*!
     * The AntRxMessage FIT message's data field.
     */
    quint8 data;

    AntRxMessagePrivate() = delete;
    explicit AntRxMessagePrivate(AntRxMessage * const q);
    virtual ~AntRxMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(AntRxMessage)
    Q_DISABLE_COPY(AntRxMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTRXMESSAGE_P_H
