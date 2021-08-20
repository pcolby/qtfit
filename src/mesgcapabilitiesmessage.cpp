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

#include "mesgcapabilitiesmessage.h"
#include "mesgcapabilitiesmessage_p.h"

QTFIT_BEGIN_NAMESPACE

MesgCapabilitiesMessage::MesgCapabilitiesMessage() : FitDataMessage(new MesgCapabilitiesMessagePrivate(this))
{

}

MessageIndex MesgCapabilitiesMessage::messageIndex() const
{
    Q_D(const MesgCapabilitiesMessage);
    return d->messageIndex;
}

File MesgCapabilitiesMessage::file() const
{
    Q_D(const MesgCapabilitiesMessage);
    return d->file;
}

MesgNum MesgCapabilitiesMessage::mesgNum() const
{
    Q_D(const MesgCapabilitiesMessage);
    return d->mesgNum;
}

MesgCount MesgCapabilitiesMessage::countType() const
{
    Q_D(const MesgCapabilitiesMessage);
    return d->countType;
}

quint16 MesgCapabilitiesMessage::count() const
{
    Q_D(const MesgCapabilitiesMessage);
    return d->count;
}

void MesgCapabilitiesMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(MesgCapabilitiesMessage);
    d->messageIndex = messageIndex;
}
void MesgCapabilitiesMessage::setFile(const File file)
{
    Q_D(MesgCapabilitiesMessage);
    d->file = file;
}
void MesgCapabilitiesMessage::setMesgNum(const MesgNum mesgNum)
{
    Q_D(MesgCapabilitiesMessage);
    d->mesgNum = mesgNum;
}
void MesgCapabilitiesMessage::setCountType(const MesgCount countType)
{
    Q_D(MesgCapabilitiesMessage);
    d->countType = countType;
}
void MesgCapabilitiesMessage::setCount(const quint16 count)
{
    Q_D(MesgCapabilitiesMessage);
    d->count = count;
}

MesgCapabilitiesMessagePrivate::MesgCapabilitiesMessagePrivate(MesgCapabilitiesMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::MesgCapabilities;
}

MesgCapabilitiesMessagePrivate::~MesgCapabilitiesMessagePrivate()
{

}

/// @todo Generate implementation.
bool MesgCapabilitiesMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
