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

#include "softwaremessage.h"
#include "softwaremessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

SoftwareMessage::SoftwareMessage() : FitDataMessage(new SoftwareMessagePrivate(this))
{

}

MessageIndex SoftwareMessage::messageIndex() const
{
    Q_D(const SoftwareMessage);
    return d->messageIndex;
}

quint16 SoftwareMessage::version() const
{
    Q_D(const SoftwareMessage);
    return d->version;
}

QString SoftwareMessage::partNumber() const
{
    Q_D(const SoftwareMessage);
    return d->partNumber;
}

void SoftwareMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SoftwareMessage);
    d->messageIndex = messageIndex;
}
void SoftwareMessage::setVersion(const quint16 version)
{
    Q_D(SoftwareMessage);
    d->version = version;
}
void SoftwareMessage::setPartNumber(const QString partNumber)
{
    Q_D(SoftwareMessage);
    d->partNumber = partNumber;
}

SoftwareMessagePrivate::SoftwareMessagePrivate(SoftwareMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , version(0xFFFF)
{
    globalMessageNumber = MesgNum::Software;
}

SoftwareMessagePrivate::~SoftwareMessagePrivate()
{

}

bool SoftwareMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:software.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "software.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "software.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 3: // See Profile.xlsx::Messages:software.version
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "software.version has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "software.version size is" << data.size() << "but should be" << 2;
            return false;
        }
        version = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:software.partNumber
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "software.partNumber has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "software.partNumber size is" << data.size() << "but should be" << 1;
            return false;
        }
        partNumber = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "unknown software message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
