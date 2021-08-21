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

FileCreatorMessage::FileCreatorMessage() : FitDataMessage(new FileCreatorMessagePrivate(this))
{

}

quint16 FileCreatorMessage::softwareVersion() const
{
    Q_D(const FileCreatorMessage);
    return d->softwareVersion;
}

quint8 FileCreatorMessage::hardwareVersion() const
{
    Q_D(const FileCreatorMessage);
    return d->hardwareVersion;
}

void FileCreatorMessage::setSoftwareVersion(const quint16 softwareVersion)
{
    Q_D(FileCreatorMessage);
    d->softwareVersion = softwareVersion;
}
void FileCreatorMessage::setHardwareVersion(const quint8 hardwareVersion)
{
    Q_D(FileCreatorMessage);
    d->hardwareVersion = hardwareVersion;
}

FileCreatorMessagePrivate::FileCreatorMessagePrivate(FileCreatorMessage * const q)
  : FitDataMessagePrivate(q)
  , softwareVersion(0xFFFF)
  , hardwareVersion(0xFF)
{
    globalMessageNumber = MesgNum::FileCreator;
}

FileCreatorMessagePrivate::~FileCreatorMessagePrivate()
{

}

bool FileCreatorMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:file_creator.softwareVersion
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_creator.softwareVersion has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "file_creator.softwareVersion size is" << data.size() << "but should be" << 2;
            return false;
        }
        softwareVersion = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:file_creator.hardwareVersion
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "file_creator.hardwareVersion has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "file_creator.hardwareVersion size is" << data.size() << "but should be" << 1;
            return false;
        }
        hardwareVersion = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown file_creator message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
