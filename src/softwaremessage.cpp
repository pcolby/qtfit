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

/*!
 * \class SoftwareMessage
 *
 * The SoftwareMessage class represents a FIT SoftwareMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid SoftwareMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SoftwareMessage::SoftwareMessage() : FitDataMessage(new SoftwareMessagePrivate(this))
{

}

/*!
 * Returns the SoftwareMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex SoftwareMessage::messageIndex() const
{
    Q_D(const SoftwareMessage);
    return d->messageIndex;
}

/*!
 * Returns the SoftwareMessage data message's \c version field's current value.
 *
 * \return the \c version field value.
 */
quint16 SoftwareMessage::version() const
{
    Q_D(const SoftwareMessage);
    return d->version;
}

/*!
 * Returns the SoftwareMessage data message's \c partNumber field's current value.
 *
 * \return the \c partNumber field value.
 */
QString SoftwareMessage::partNumber() const
{
    Q_D(const SoftwareMessage);
    return d->partNumber;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void SoftwareMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SoftwareMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c version field to \a version.
 *
 * \param version The field value to set.
 */
void SoftwareMessage::setVersion(const quint16 version)
{
    Q_D(SoftwareMessage);
    d->version = version;
}
/*!
 * Sets the \c partNumber field to \a partNumber.
 *
 * \param partNumber The field value to set.
 */
void SoftwareMessage::setPartNumber(const QString partNumber)
{
    Q_D(SoftwareMessage);
    d->partNumber = partNumber;
}

/*!
 * \internal
 *
 * \class SoftwareMessagePrivate
 *
 * The SoftwareMessagePrivate class provides private implementation for the SoftwareMessage.
 *
 * \sa SoftwareMessage
 */

/*!
 * \internal
 *
 * Constructs a SoftwareMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SoftwareMessagePrivate::SoftwareMessagePrivate(SoftwareMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , version(0xFFFF)
{
    globalMessageNumber = MesgNum::Software;
}

/*!
 * \internal
 *
 * Destroys the SoftwareMessagePrivate object.
 */
SoftwareMessagePrivate::~SoftwareMessagePrivate()
{

}

bool SoftwareMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:software.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "software.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:software.version
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "software.version")) return false;
        this->version = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:software.partNumber
        if (!verify(data, baseType, 1, FitBaseType::String, "software.partNumber")) return false;
        this->partNumber = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "unknown software message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
