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

#include "filecreatormessage.h"
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
 * Constructs an invalid FileCreatorMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
FileCreatorMessage::FileCreatorMessage() : AbstractDataMessage(new FileCreatorMessagePrivate(this))
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

QTFIT_END_NAMESPACE
