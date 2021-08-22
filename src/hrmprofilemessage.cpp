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

#include "hrmprofilemessage.h"
#include "hrmprofilemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class HrmProfileMessage
 *
 * The HrmProfileMessage class represents a FIT HrmProfileMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid HrmProfileMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
HrmProfileMessage::HrmProfileMessage() : AbstractDataMessage(new HrmProfileMessagePrivate(this))
{

}

/*!
 * Returns the HrmProfileMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex HrmProfileMessage::messageIndex() const
{
    Q_D(const HrmProfileMessage);
    return d->messageIndex;
}

/*!
 * Returns the HrmProfileMessage data message's \c enabled field's current value.
 *
 * \return the \c enabled field value.
 */
bool HrmProfileMessage::enabled() const
{
    Q_D(const HrmProfileMessage);
    return d->enabled;
}

/*!
 * Returns the HrmProfileMessage data message's \c hrmAntId field's current value.
 *
 * \return the \c hrmAntId field value.
 */
quint16z HrmProfileMessage::hrmAntId() const
{
    Q_D(const HrmProfileMessage);
    return d->hrmAntId;
}

/*!
 * Returns the HrmProfileMessage data message's \c logHrv field's current value.
 *
 * \return the \c logHrv field value.
 */
bool HrmProfileMessage::logHrv() const
{
    Q_D(const HrmProfileMessage);
    return d->logHrv;
}

/*!
 * Returns the HrmProfileMessage data message's \c hrmAntIdTransType field's current value.
 *
 * \return the \c hrmAntIdTransType field value.
 */
quint8z HrmProfileMessage::hrmAntIdTransType() const
{
    Q_D(const HrmProfileMessage);
    return d->hrmAntIdTransType;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void HrmProfileMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(HrmProfileMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c enabled field to \a enabled.
 *
 * \param enabled The field value to set.
 */
void HrmProfileMessage::setEnabled(const bool enabled)
{
    Q_D(HrmProfileMessage);
    d->enabled = enabled;
}
/*!
 * Sets the \c hrmAntId field to \a hrmAntId.
 *
 * \param hrmAntId The field value to set.
 */
void HrmProfileMessage::setHrmAntId(const quint16z hrmAntId)
{
    Q_D(HrmProfileMessage);
    d->hrmAntId = hrmAntId;
}
/*!
 * Sets the \c logHrv field to \a logHrv.
 *
 * \param logHrv The field value to set.
 */
void HrmProfileMessage::setLogHrv(const bool logHrv)
{
    Q_D(HrmProfileMessage);
    d->logHrv = logHrv;
}
/*!
 * Sets the \c hrmAntIdTransType field to \a hrmAntIdTransType.
 *
 * \param hrmAntIdTransType The field value to set.
 */
void HrmProfileMessage::setHrmAntIdTransType(const quint8z hrmAntIdTransType)
{
    Q_D(HrmProfileMessage);
    d->hrmAntIdTransType = hrmAntIdTransType;
}

/*!
 * \internal
 *
 * \class HrmProfileMessagePrivate
 *
 * The HrmProfileMessagePrivate class provides private implementation for the HrmProfileMessage.
 *
 * \sa HrmProfileMessage
 */

/*!
 * \internal
 *
 * Constructs a HrmProfileMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
HrmProfileMessagePrivate::HrmProfileMessagePrivate(HrmProfileMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , enabled(static_cast<bool>(-1))
  , hrmAntId(0)
  , logHrv(static_cast<bool>(-1))
  , hrmAntIdTransType(static_cast<quint8z>(-1))
{
    globalMessageNumber = MesgNum::HrmProfile;
}

/*!
 * \internal
 *
 * Destroys the HrmProfileMessagePrivate object.
 */
HrmProfileMessagePrivate::~HrmProfileMessagePrivate()
{

}

bool HrmProfileMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:hrm_profile.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "hrm_profile.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:hrm_profile.enabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "hrm_profile.enabled")) return false;
        this->enabled = static_cast<bool>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:hrm_profile.hrmAntId
        if (!verify(data, baseType, 2, FitBaseType::Uint16z, "hrm_profile.hrmAntId")) return false;
        this->hrmAntId = static_cast<quint16z>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:hrm_profile.logHrv
        if (!verify(data, baseType, 0, FitBaseType::Byte, "hrm_profile.logHrv")) return false;
        this->logHrv = static_cast<bool>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:hrm_profile.hrmAntIdTransType
        if (!verify(data, baseType, 1, FitBaseType::Uint8z, "hrm_profile.hrmAntIdTransType")) return false;
        this->hrmAntIdTransType = static_cast<quint8z>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown hrm_profile message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

QTFIT_END_NAMESPACE
