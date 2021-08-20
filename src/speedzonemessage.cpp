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

#include "speedzonemessage.h"
#include "speedzonemessage_p.h"

QTFIT_BEGIN_NAMESPACE

SpeedZoneMessage::SpeedZoneMessage() : FitDataMessage(new SpeedZoneMessagePrivate(this))
{

}

MessageIndex SpeedZoneMessage::messageIndex() const
{
    Q_D(const SpeedZoneMessage);
    return d->messageIndex;
}

quint16 SpeedZoneMessage::highValue() const
{
    Q_D(const SpeedZoneMessage);
    return d->highValue;
}

QString SpeedZoneMessage::name() const
{
    Q_D(const SpeedZoneMessage);
    return d->name;
}

void SpeedZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(SpeedZoneMessage);
    d->messageIndex = messageIndex;
}
void SpeedZoneMessage::setHighValue(const quint16 highValue)
{
    Q_D(SpeedZoneMessage);
    d->highValue = highValue;
}
void SpeedZoneMessage::setName(const QString name)
{
    Q_D(SpeedZoneMessage);
    d->name = name;
}

SpeedZoneMessagePrivate::SpeedZoneMessagePrivate(SpeedZoneMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::SpeedZone;
}

SpeedZoneMessagePrivate::~SpeedZoneMessagePrivate()
{

}

/// @todo Generate implementation.
bool SpeedZoneMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
