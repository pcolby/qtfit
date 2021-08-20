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

#include "climbpromessage.h"
#include "climbpromessage_p.h"

QTFIT_BEGIN_NAMESPACE

ClimbProMessage::ClimbProMessage() : FitDataMessage(new ClimbProMessagePrivate(this))
{

}

DateTime ClimbProMessage::timestamp() const
{
    Q_D(const ClimbProMessage);
    return d->timestamp;
}

qint32 ClimbProMessage::positionLat() const
{
    Q_D(const ClimbProMessage);
    return d->positionLat;
}

qint32 ClimbProMessage::positionLong() const
{
    Q_D(const ClimbProMessage);
    return d->positionLong;
}

ClimbProEvent ClimbProMessage::climbProEvent() const
{
    Q_D(const ClimbProMessage);
    return d->climbProEvent;
}

quint16 ClimbProMessage::climbNumber() const
{
    Q_D(const ClimbProMessage);
    return d->climbNumber;
}

quint8 ClimbProMessage::climbCategory() const
{
    Q_D(const ClimbProMessage);
    return d->climbCategory;
}

float ClimbProMessage::currentDist() const
{
    Q_D(const ClimbProMessage);
    return d->currentDist;
}

void ClimbProMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(ClimbProMessage);
    d->timestamp = timestamp;
}
void ClimbProMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(ClimbProMessage);
    d->positionLat = positionLat;
}
void ClimbProMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(ClimbProMessage);
    d->positionLong = positionLong;
}
void ClimbProMessage::setClimbProEvent(const ClimbProEvent climbProEvent)
{
    Q_D(ClimbProMessage);
    d->climbProEvent = climbProEvent;
}
void ClimbProMessage::setClimbNumber(const quint16 climbNumber)
{
    Q_D(ClimbProMessage);
    d->climbNumber = climbNumber;
}
void ClimbProMessage::setClimbCategory(const quint8 climbCategory)
{
    Q_D(ClimbProMessage);
    d->climbCategory = climbCategory;
}
void ClimbProMessage::setCurrentDist(const float currentDist)
{
    Q_D(ClimbProMessage);
    d->currentDist = currentDist;
}

ClimbProMessagePrivate::ClimbProMessagePrivate(ClimbProMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::ClimbPro;
}

ClimbProMessagePrivate::~ClimbProMessagePrivate()
{

}

/// @todo Generate implementation.
bool ClimbProMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
