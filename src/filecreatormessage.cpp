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

/// @todo Generate implementation.
bool FileCreatorMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
