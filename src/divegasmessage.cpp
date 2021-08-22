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

#include "divegasmessage.h"
#include "divegasmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

DiveGasMessage::DiveGasMessage() : FitDataMessage(new DiveGasMessagePrivate(this))
{

}

MessageIndex DiveGasMessage::messageIndex() const
{
    Q_D(const DiveGasMessage);
    return d->messageIndex;
}

quint8 DiveGasMessage::heliumContent() const
{
    Q_D(const DiveGasMessage);
    return d->heliumContent;
}

quint8 DiveGasMessage::oxygenContent() const
{
    Q_D(const DiveGasMessage);
    return d->oxygenContent;
}

DiveGasStatus DiveGasMessage::status() const
{
    Q_D(const DiveGasMessage);
    return d->status;
}

void DiveGasMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(DiveGasMessage);
    d->messageIndex = messageIndex;
}
void DiveGasMessage::setHeliumContent(const quint8 heliumContent)
{
    Q_D(DiveGasMessage);
    d->heliumContent = heliumContent;
}
void DiveGasMessage::setOxygenContent(const quint8 oxygenContent)
{
    Q_D(DiveGasMessage);
    d->oxygenContent = oxygenContent;
}
void DiveGasMessage::setStatus(const DiveGasStatus status)
{
    Q_D(DiveGasMessage);
    d->status = status;
}

DiveGasMessagePrivate::DiveGasMessagePrivate(DiveGasMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , heliumContent(0xFF)
  , oxygenContent(0xFF)
  , status(static_cast<DiveGasStatus>(-1))
{
    globalMessageNumber = MesgNum::DiveGas;
}

DiveGasMessagePrivate::~DiveGasMessagePrivate()
{

}

bool DiveGasMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:dive_gas.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_gas.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:dive_gas.heliumContent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_gas.heliumContent")) return false;
        this->heliumContent = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:dive_gas.oxygenContent
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_gas.oxygenContent")) return false;
        this->oxygenContent = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:dive_gas.status
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_gas.status")) return false;
        this->status = static_cast<DiveGasStatus>(data.at(0));
        break;
    default:
        qWarning() << "unknown dive_gas message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
