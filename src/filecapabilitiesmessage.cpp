// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the FileCapabilitiesMessage, and FileCapabilitiesMessagePrivate classes.
 */

#include <qtfit/filecapabilitiesmessage.h>
#include "filecapabilitiesmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class FileCapabilitiesMessage
 *
 * The FileCapabilitiesMessage class represents a FIT FileCapabilitiesMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a FileCapabilitiesMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
FileCapabilitiesMessage::FileCapabilitiesMessage() : AbstractDataMessage(new FileCapabilitiesMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a FileCapabilitiesMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
FileCapabilitiesMessage::FileCapabilitiesMessage(FileCapabilitiesMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the FileCapabilitiesMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex FileCapabilitiesMessage::messageIndex() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->messageIndex;
}

/*!
 * Returns the FileCapabilitiesMessage data message's \c type field's current value.
 *
 * \return the \c type field value.
 */
File FileCapabilitiesMessage::type() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->type;
}

/*!
 * Returns the FileCapabilitiesMessage data message's \c flags field's current value.
 *
 * \return the \c flags field value.
 */
FileFlags FileCapabilitiesMessage::flags() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->flags;
}

/*!
 * Returns the FileCapabilitiesMessage data message's \c directory field's current value.
 *
 * \return the \c directory field value.
 */
QString FileCapabilitiesMessage::directory() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->directory;
}

/*!
 * Returns the FileCapabilitiesMessage data message's \c maxCount field's current value.
 *
 * \return the \c maxCount field value.
 */
quint16 FileCapabilitiesMessage::maxCount() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->maxCount;
}

/*!
 * Returns the FileCapabilitiesMessage data message's \c maxSize field's current value.
 *
 * \return the \c maxSize field value.
 */
quint32 FileCapabilitiesMessage::maxSize() const
{
    Q_D(const FileCapabilitiesMessage);
    return d->maxSize;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void FileCapabilitiesMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(FileCapabilitiesMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c type field to \a type.
 *
 * \param type The field value to set.
 */
void FileCapabilitiesMessage::setType(const File type)
{
    Q_D(FileCapabilitiesMessage);
    d->type = type;
}
/*!
 * Sets the \c flags field to \a flags.
 *
 * \param flags The field value to set.
 */
void FileCapabilitiesMessage::setFlags(const FileFlags flags)
{
    Q_D(FileCapabilitiesMessage);
    d->flags = flags;
}
/*!
 * Sets the \c directory field to \a directory.
 *
 * \param directory The field value to set.
 */
void FileCapabilitiesMessage::setDirectory(const QString directory)
{
    Q_D(FileCapabilitiesMessage);
    d->directory = directory;
}
/*!
 * Sets the \c maxCount field to \a maxCount.
 *
 * \param maxCount The field value to set.
 */
void FileCapabilitiesMessage::setMaxCount(const quint16 maxCount)
{
    Q_D(FileCapabilitiesMessage);
    d->maxCount = maxCount;
}
/*!
 * Sets the \c maxSize field to \a maxSize.
 *
 * \param maxSize The field value to set.
 */
void FileCapabilitiesMessage::setMaxSize(const quint32 maxSize)
{
    Q_D(FileCapabilitiesMessage);
    d->maxSize = maxSize;
}

/// \cond internal

/*!
 * \internal
 *
 * \class FileCapabilitiesMessagePrivate
 *
 * The FileCapabilitiesMessagePrivate class provides private implementation for the FileCapabilitiesMessage.
 *
 * \sa FileCapabilitiesMessage
 */

/*!
 * \internal
 *
 * Constructs a FileCapabilitiesMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
FileCapabilitiesMessagePrivate::FileCapabilitiesMessagePrivate(FileCapabilitiesMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , type(static_cast<File>(-1))
  , flags(static_cast<FileFlags>(-1))
  , maxCount(0xFFFF)
  , maxSize(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::FileCapabilities;
}

/*!
 * \internal
 *
 * Destroys the FileCapabilitiesMessagePrivate object.
 */
FileCapabilitiesMessagePrivate::~FileCapabilitiesMessagePrivate()
{

}

bool FileCapabilitiesMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:file_capabilities.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "file_capabilities.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:file_capabilities.type
        if (!verify(data, baseType, 1, FitBaseType::Enum, "file_capabilities.type")) return false;
        this->type = static_cast<File>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:file_capabilities.flags
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "file_capabilities.flags")) return false;
        this->flags = static_cast<FileFlags>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:file_capabilities.directory
        if (!verify(data, baseType, 1, FitBaseType::String, "file_capabilities.directory")) return false;
        this->directory = QString::fromUtf8(data);
        break;
    case 3: // See Profile.xlsx::Messages:file_capabilities.maxCount
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "file_capabilities.maxCount")) return false;
        this->maxCount = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:file_capabilities.maxSize
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "file_capabilities.maxSize")) return false;
        this->maxSize = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown file_capabilities message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
