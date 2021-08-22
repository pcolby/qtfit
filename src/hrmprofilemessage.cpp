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

HrmProfileMessage::HrmProfileMessage() : FitDataMessage(new HrmProfileMessagePrivate(this))
{

}

MessageIndex HrmProfileMessage::messageIndex() const
{
    Q_D(const HrmProfileMessage);
    return d->messageIndex;
}

bool HrmProfileMessage::enabled() const
{
    Q_D(const HrmProfileMessage);
    return d->enabled;
}

quint16z HrmProfileMessage::hrmAntId() const
{
    Q_D(const HrmProfileMessage);
    return d->hrmAntId;
}

bool HrmProfileMessage::logHrv() const
{
    Q_D(const HrmProfileMessage);
    return d->logHrv;
}

quint8z HrmProfileMessage::hrmAntIdTransType() const
{
    Q_D(const HrmProfileMessage);
    return d->hrmAntIdTransType;
}

void HrmProfileMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(HrmProfileMessage);
    d->messageIndex = messageIndex;
}
void HrmProfileMessage::setEnabled(const bool enabled)
{
    Q_D(HrmProfileMessage);
    d->enabled = enabled;
}
void HrmProfileMessage::setHrmAntId(const quint16z hrmAntId)
{
    Q_D(HrmProfileMessage);
    d->hrmAntId = hrmAntId;
}
void HrmProfileMessage::setLogHrv(const bool logHrv)
{
    Q_D(HrmProfileMessage);
    d->logHrv = logHrv;
}
void HrmProfileMessage::setHrmAntIdTransType(const quint8z hrmAntIdTransType)
{
    Q_D(HrmProfileMessage);
    d->hrmAntIdTransType = hrmAntIdTransType;
}

HrmProfileMessagePrivate::HrmProfileMessagePrivate(HrmProfileMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , enabled(static_cast<bool>(-1))
  , hrmAntId(0)
  , logHrv(static_cast<bool>(-1))
  , hrmAntIdTransType(static_cast<quint8z>(-1))
{
    globalMessageNumber = MesgNum::HrmProfile;
}

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
        qWarning() << "unknown hrm_profile message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
