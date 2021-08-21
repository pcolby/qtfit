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

#include "fieldcapabilitiesmessage.h"
#include "fieldcapabilitiesmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

FieldCapabilitiesMessage::FieldCapabilitiesMessage() : FitDataMessage(new FieldCapabilitiesMessagePrivate(this))
{

}

MessageIndex FieldCapabilitiesMessage::messageIndex() const
{
    Q_D(const FieldCapabilitiesMessage);
    return d->messageIndex;
}

File FieldCapabilitiesMessage::file() const
{
    Q_D(const FieldCapabilitiesMessage);
    return d->file;
}

MesgNum FieldCapabilitiesMessage::mesgNum() const
{
    Q_D(const FieldCapabilitiesMessage);
    return d->mesgNum;
}

quint8 FieldCapabilitiesMessage::fieldNum() const
{
    Q_D(const FieldCapabilitiesMessage);
    return d->fieldNum;
}

quint16 FieldCapabilitiesMessage::count() const
{
    Q_D(const FieldCapabilitiesMessage);
    return d->count;
}

void FieldCapabilitiesMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(FieldCapabilitiesMessage);
    d->messageIndex = messageIndex;
}
void FieldCapabilitiesMessage::setFile(const File file)
{
    Q_D(FieldCapabilitiesMessage);
    d->file = file;
}
void FieldCapabilitiesMessage::setMesgNum(const MesgNum mesgNum)
{
    Q_D(FieldCapabilitiesMessage);
    d->mesgNum = mesgNum;
}
void FieldCapabilitiesMessage::setFieldNum(const quint8 fieldNum)
{
    Q_D(FieldCapabilitiesMessage);
    d->fieldNum = fieldNum;
}
void FieldCapabilitiesMessage::setCount(const quint16 count)
{
    Q_D(FieldCapabilitiesMessage);
    d->count = count;
}

FieldCapabilitiesMessagePrivate::FieldCapabilitiesMessagePrivate(FieldCapabilitiesMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , file(static_cast<File>(-1))
  , mesgNum(static_cast<MesgNum>(-1))
  , fieldNum(0xFF)
  , count(0xFFFF)
{
    globalMessageNumber = MesgNum::FieldCapabilities;
}

FieldCapabilitiesMessagePrivate::~FieldCapabilitiesMessagePrivate()
{

}

bool FieldCapabilitiesMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:field_capabilities.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_capabilities.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "field_capabilities.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:field_capabilities.file
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_capabilities.file has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_capabilities.file size is" << data.size() << "but should be" << 1;
            return false;
        }
        file = static_cast<File>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:field_capabilities.mesgNum
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_capabilities.mesgNum has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "field_capabilities.mesgNum size is" << data.size() << "but should be" << 2;
            return false;
        }
        mesgNum = static_cast<MesgNum>(bigEndian ? qFromBigEndian<MesgNum>(data) : qFromLittleEndian<MesgNum>(data));
        break;
    case 2: // See Profile.xlsx::Messages:field_capabilities.fieldNum
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_capabilities.fieldNum has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "field_capabilities.fieldNum size is" << data.size() << "but should be" << 1;
            return false;
        }
        fieldNum = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:field_capabilities.count
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "field_capabilities.count has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "field_capabilities.count size is" << data.size() << "but should be" << 2;
            return false;
        }
        count = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown field_capabilities message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
