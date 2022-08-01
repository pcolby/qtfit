// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the FileCreatorMessage, and FileCreatorMessagePrivate classes.
 */

#include <qtfit/filecreatormessage.h>
#include "filecreatormessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class FileCreatorMessage
 *
 * The FileCreatorMessage class represents a FIT FileCreatorMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a FileCreatorMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
FileCreatorMessage::FileCreatorMessage() : AbstractDataMessage(new FileCreatorMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a FileCreatorMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
FileCreatorMessage::FileCreatorMessage(FileCreatorMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the FileCreatorMessage data message's \c softwareVersion field's current value.
 *
 * \return the \c softwareVersion field value.
 */
quint16 FileCreatorMessage::softwareVersion() const
{
    Q_D(const FileCreatorMessage);
    return d->softwareVersion;
}

/*!
 * Returns the FileCreatorMessage data message's \c hardwareVersion field's current value.
 *
 * \return the \c hardwareVersion field value.
 */
quint8 FileCreatorMessage::hardwareVersion() const
{
    Q_D(const FileCreatorMessage);
    return d->hardwareVersion;
}

/*!
 * Sets the \c softwareVersion field to \a softwareVersion.
 *
 * \param softwareVersion The field value to set.
 */
void FileCreatorMessage::setSoftwareVersion(const quint16 softwareVersion)
{
    Q_D(FileCreatorMessage);
    d->softwareVersion = softwareVersion;
}
/*!
 * Sets the \c hardwareVersion field to \a hardwareVersion.
 *
 * \param hardwareVersion The field value to set.
 */
void FileCreatorMessage::setHardwareVersion(const quint8 hardwareVersion)
{
    Q_D(FileCreatorMessage);
    d->hardwareVersion = hardwareVersion;
}

/// \cond internal

/*!
 * \internal
 *
 * \class FileCreatorMessagePrivate
 *
 * The FileCreatorMessagePrivate class provides private implementation for the FileCreatorMessage.
 *
 * \sa FileCreatorMessage
 */

/*!
 * \internal
 *
 * Constructs a FileCreatorMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
FileCreatorMessagePrivate::FileCreatorMessagePrivate(FileCreatorMessage * const q)
  : AbstractDataMessagePrivate(q)
  , softwareVersion(0xFFFF)
  , hardwareVersion(0xFF)
{
    globalMessageNumber = MesgNum::FileCreator;
}

/*!
 * \internal
 *
 * Destroys the FileCreatorMessagePrivate object.
 */
FileCreatorMessagePrivate::~FileCreatorMessagePrivate()
{

}

bool FileCreatorMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:file_creator.softwareVersion
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "file_creator.softwareVersion")) return false;
        this->softwareVersion = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:file_creator.hardwareVersion
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "file_creator.hardwareVersion")) return false;
        this->hardwareVersion = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown file_creator message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
