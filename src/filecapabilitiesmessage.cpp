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

#include "filecapabilitiesmessage.h"
#include "filecapabilitiesmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

FileCapabilitiesMessage::FileCapabilitiesMessage() : FitDataMessage(new FileCapabilitiesMessagePrivate(this))
{

}

MessageIndex FileCapabilitiesMessage::messageIndex() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->messageIndex;
}

File FileCapabilitiesMessage::type() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->type;
}

FileFlags FileCapabilitiesMessage::flags() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->flags;
}

QString FileCapabilitiesMessage::directory() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->directory;
}

quint16 FileCapabilitiesMessage::maxCount() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->maxCount;
}

quint32 FileCapabilitiesMessage::maxSize() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->maxSize;
}

void FileCapabilitiesMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(FileCapabilitiesMessage);
    d->messageIndex = messageIndex;
}
void FileCapabilitiesMessage::setType(const File type)
{
    Q_D(FileCapabilitiesMessage);
    d->type = type;
}
void FileCapabilitiesMessage::setFlags(const FileFlags flags)
{
    Q_D(FileCapabilitiesMessage);
    d->flags = flags;
}
void FileCapabilitiesMessage::setDirectory(const QString directory)
{
    Q_D(FileCapabilitiesMessage);
    d->directory = directory;
}
void FileCapabilitiesMessage::setMaxCount(const quint16 maxCount)
{
    Q_D(FileCapabilitiesMessage);
    d->maxCount = maxCount;
}
void FileCapabilitiesMessage::setMaxSize(const quint32 maxSize)
{
    Q_D(FileCapabilitiesMessage);
    d->maxSize = maxSize;
}

FileCapabilitiesMessagePrivate::FileCapabilitiesMessagePrivate(FileCapabilitiesMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , type(static_cast<File>(-1))
  , flags(static_cast<FileFlags>(-1))
  , maxCount(0xFFFF)
  , maxSize(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::FileCapabilities;
}

FileCapabilitiesMessagePrivate::~FileCapabilitiesMessagePrivate()
{

}

bool FileCapabilitiesMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:file_capabilities.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_capabilities.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "file_capabilities.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:file_capabilities.type
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_capabilities.type has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "file_capabilities.type size is" << data.size() << "but should be" << 1;
            return false;
        }
        type = static_cast<File>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:file_capabilities.flags
        if (baseType != FitBaseType::Uint8z) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_capabilities.flags has base type" << static_cast<int>(baseType) << "but should be Uint8z";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "file_capabilities.flags size is" << data.size() << "but should be" << 1;
            return false;
        }
        flags = static_cast<FileFlags>(bigEndian ? qFromBigEndian<FileFlags>(data) : qFromLittleEndian<FileFlags>(data));
        break;
    case 2: // See Profile.xlsx::Messages:file_capabilities.directory
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_capabilities.directory has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "file_capabilities.directory size is" << data.size() << "but should be" << 1;
            return false;
        }
        directory = QString::fromUtf8(data);
        break;
    case 3: // See Profile.xlsx::Messages:file_capabilities.maxCount
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_capabilities.maxCount has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "file_capabilities.maxCount size is" << data.size() << "but should be" << 2;
            return false;
        }
        maxCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:file_capabilities.maxSize
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_capabilities.maxSize has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "file_capabilities.maxSize size is" << data.size() << "but should be" << 4;
            return false;
        }
        maxSize = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown file_capabilities message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
