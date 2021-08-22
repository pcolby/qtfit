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

#include "mesgcapabilitiesmessage.h"
#include "mesgcapabilitiesmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class MesgCapabilitiesMessage
 *
 * The MesgCapabilitiesMessage class represents a FIT MesgCapabilitiesMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid MesgCapabilitiesMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
MesgCapabilitiesMessage::MesgCapabilitiesMessage() : FitDataMessage(new MesgCapabilitiesMessagePrivate(this))
{

}

/*!
 * Returns the MesgCapabilitiesMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex MesgCapabilitiesMessage::messageIndex() const
{
    Q_D(const MesgCapabilitiesMessage);
    return d->messageIndex;
}

/*!
 * Returns the MesgCapabilitiesMessage data message's \c file field's current value.
 *
 * \return the \c file field value.
 */
File MesgCapabilitiesMessage::file() const
{
    Q_D(const MesgCapabilitiesMessage);
    return d->file;
}

/*!
 * Returns the MesgCapabilitiesMessage data message's \c mesgNum field's current value.
 *
 * \return the \c mesgNum field value.
 */
MesgNum MesgCapabilitiesMessage::mesgNum() const
{
    Q_D(const MesgCapabilitiesMessage);
    return d->mesgNum;
}

/*!
 * Returns the MesgCapabilitiesMessage data message's \c countType field's current value.
 *
 * \return the \c countType field value.
 */
MesgCount MesgCapabilitiesMessage::countType() const
{
    Q_D(const MesgCapabilitiesMessage);
    return d->countType;
}

/*!
 * Returns the MesgCapabilitiesMessage data message's \c count field's current value.
 *
 * \return the \c count field value.
 */
quint16 MesgCapabilitiesMessage::count() const
{
    Q_D(const MesgCapabilitiesMessage);
    return d->count;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void MesgCapabilitiesMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(MesgCapabilitiesMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c file field to \a file.
 *
 * \param file The field value to set.
 */
void MesgCapabilitiesMessage::setFile(const File file)
{
    Q_D(MesgCapabilitiesMessage);
    d->file = file;
}
/*!
 * Sets the \c mesgNum field to \a mesgNum.
 *
 * \param mesgNum The field value to set.
 */
void MesgCapabilitiesMessage::setMesgNum(const MesgNum mesgNum)
{
    Q_D(MesgCapabilitiesMessage);
    d->mesgNum = mesgNum;
}
/*!
 * Sets the \c countType field to \a countType.
 *
 * \param countType The field value to set.
 */
void MesgCapabilitiesMessage::setCountType(const MesgCount countType)
{
    Q_D(MesgCapabilitiesMessage);
    d->countType = countType;
}
/*!
 * Sets the \c count field to \a count.
 *
 * \param count The field value to set.
 */
void MesgCapabilitiesMessage::setCount(const quint16 count)
{
    Q_D(MesgCapabilitiesMessage);
    d->count = count;
}

/*!
 * \internal
 *
 * \class MesgCapabilitiesMessagePrivate
 *
 * The MesgCapabilitiesMessagePrivate class provides private implementation for the MesgCapabilitiesMessage.
 *
 * \sa MesgCapabilitiesMessage
 */

/*!
 * \internal
 *
 * Constructs a MesgCapabilitiesMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
MesgCapabilitiesMessagePrivate::MesgCapabilitiesMessagePrivate(MesgCapabilitiesMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , file(static_cast<File>(-1))
  , mesgNum(static_cast<MesgNum>(-1))
  , countType(static_cast<MesgCount>(-1))
  , count(0xFFFF)
{
    globalMessageNumber = MesgNum::MesgCapabilities;
}

/*!
 * \internal
 *
 * Destroys the MesgCapabilitiesMessagePrivate object.
 */
MesgCapabilitiesMessagePrivate::~MesgCapabilitiesMessagePrivate()
{

}

bool MesgCapabilitiesMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:mesg_capabilities.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "mesg_capabilities.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:mesg_capabilities.file
        if (!verify(data, baseType, 1, FitBaseType::Enum, "mesg_capabilities.file")) return false;
        this->file = static_cast<File>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:mesg_capabilities.mesgNum
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "mesg_capabilities.mesgNum")) return false;
        this->mesgNum = static_cast<MesgNum>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:mesg_capabilities.countType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "mesg_capabilities.countType")) return false;
        this->countType = static_cast<MesgCount>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:mesg_capabilities.count
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "mesg_capabilities.count")) return false;
        this->count = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown mesg_capabilities message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
