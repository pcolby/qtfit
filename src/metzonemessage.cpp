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

#include "metzonemessage.h"
#include "metzonemessage_p.h"

QTFIT_BEGIN_NAMESPACE

MetZoneMessage::MetZoneMessage() : FitDataMessage(new MetZoneMessagePrivate(this))
{

}

MessageIndex MetZoneMessage::messageIndex() const
{
    Q_D(const MetZoneMessage);
    return d->messageIndex;
}

quint8 MetZoneMessage::highBpm() const
{
    Q_D(const MetZoneMessage);
    return d->highBpm;
}

quint16 MetZoneMessage::calories() const
{
    Q_D(const MetZoneMessage);
    return d->calories;
}

quint8 MetZoneMessage::fatCalories() const
{
    Q_D(const MetZoneMessage);
    return d->fatCalories;
}

void MetZoneMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(MetZoneMessage);
    d->messageIndex = messageIndex;
}
void MetZoneMessage::setHighBpm(const quint8 highBpm)
{
    Q_D(MetZoneMessage);
    d->highBpm = highBpm;
}
void MetZoneMessage::setCalories(const quint16 calories)
{
    Q_D(MetZoneMessage);
    d->calories = calories;
}
void MetZoneMessage::setFatCalories(const quint8 fatCalories)
{
    Q_D(MetZoneMessage);
    d->fatCalories = fatCalories;
}

MetZoneMessagePrivate::MetZoneMessagePrivate(MetZoneMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::MetZone;
}

MetZoneMessagePrivate::~MetZoneMessagePrivate()
{

}

/// @todo Generate implementation.
bool MetZoneMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
