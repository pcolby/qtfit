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

/// @todo Generate implementation.
bool FileCapabilitiesMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
