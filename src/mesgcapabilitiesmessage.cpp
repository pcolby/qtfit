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

#include <QDebug>
#include <QtEndian>

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

MesgCapabilitiesMessagePrivate::MesgCapabilitiesMessagePrivate(MesgCapabilitiesMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , file(static_cast<File>(-1))
  , mesgNum(static_cast<MesgNum>(-1))
  , countType(static_cast<MesgCount>(-1))
  , count(0xFFFF)
{
    globalMessageNumber = MesgNum::MesgCapabilities;
}

MesgCapabilitiesMessagePrivate::~MesgCapabilitiesMessagePrivate()
{

}

bool MesgCapabilitiesMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:mesg_capabilities.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "mesg_capabilities.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "mesg_capabilities.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:mesg_capabilities.file
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "mesg_capabilities.file has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "mesg_capabilities.file size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->file = static_cast<File>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:mesg_capabilities.mesgNum
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "mesg_capabilities.mesgNum has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "mesg_capabilities.mesgNum size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->mesgNum = static_cast<MesgNum>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:mesg_capabilities.countType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "mesg_capabilities.countType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "mesg_capabilities.countType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->countType = static_cast<MesgCount>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:mesg_capabilities.count
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "mesg_capabilities.count has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "mesg_capabilities.count size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->count = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown mesg_capabilities message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
