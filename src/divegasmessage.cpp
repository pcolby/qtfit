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

DiveGasMessagePrivate::DiveGasMessagePrivate(DiveGasMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::DiveGas;
}

DiveGasMessagePrivate::~DiveGasMessagePrivate()
{

}

/// @todo Generate implementation.
bool DiveGasMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE
