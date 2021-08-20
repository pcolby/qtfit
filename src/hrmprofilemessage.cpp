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

/// @todo Generate implementation.
bool HrmProfileMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
