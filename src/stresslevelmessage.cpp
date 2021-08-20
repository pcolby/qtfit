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

#include "stresslevelmessage.h"
#include "stresslevelmessage_p.h"

QTFIT_BEGIN_NAMESPACE

StressLevelMessage::StressLevelMessage() : FitDataMessage(new StressLevelMessagePrivate(this))
{

}

qint16 StressLevelMessage::stressLevelValue() const
{
    Q_D(const StressLevelMessage);
    return d->stressLevelValue;
}

DateTime StressLevelMessage::stressLevelTime() const
{
    Q_D(const StressLevelMessage);
    return d->stressLevelTime;
}

void StressLevelMessage::setStressLevelValue(const qint16 stressLevelValue)
{
    Q_D(StressLevelMessage);
    d->stressLevelValue = stressLevelValue;
}
void StressLevelMessage::setStressLevelTime(const DateTime stressLevelTime)
{
    Q_D(StressLevelMessage);
    d->stressLevelTime = stressLevelTime;
}

StressLevelMessagePrivate::StressLevelMessagePrivate(StressLevelMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::StressLevel;
}

StressLevelMessagePrivate::~StressLevelMessagePrivate()
{

}

/// @todo Generate implementation.
bool StressLevelMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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