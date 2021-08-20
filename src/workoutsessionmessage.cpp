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

#include "workoutsessionmessage.h"
#include "workoutsessionmessage_p.h"

QTFIT_BEGIN_NAMESPACE

WorkoutSessionMessage::WorkoutSessionMessage() : FitDataMessage(new WorkoutSessionMessagePrivate(this))
{

}

MessageIndex WorkoutSessionMessage::messageIndex() const
{
    Q_D(const WorkoutSessionMessage);
    return d->messageIndex;
}

Sport WorkoutSessionMessage::sport() const
{
    Q_D(const WorkoutSessionMessage);
    return d->sport;
}

SubSport WorkoutSessionMessage::subSport() const
{
    Q_D(const WorkoutSessionMessage);
    return d->subSport;
}

quint16 WorkoutSessionMessage::numValidSteps() const
{
    Q_D(const WorkoutSessionMessage);
    return d->numValidSteps;
}

quint16 WorkoutSessionMessage::firstStepIndex() const
{
    Q_D(const WorkoutSessionMessage);
    return d->firstStepIndex;
}

quint16 WorkoutSessionMessage::poolLength() const
{
    Q_D(const WorkoutSessionMessage);
    return d->poolLength;
}

DisplayMeasure WorkoutSessionMessage::poolLengthUnit() const
{
    Q_D(const WorkoutSessionMessage);
    return d->poolLengthUnit;
}

void WorkoutSessionMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(WorkoutSessionMessage);
    d->messageIndex = messageIndex;
}
void WorkoutSessionMessage::setSport(const Sport sport)
{
    Q_D(WorkoutSessionMessage);
    d->sport = sport;
}
void WorkoutSessionMessage::setSubSport(const SubSport subSport)
{
    Q_D(WorkoutSessionMessage);
    d->subSport = subSport;
}
void WorkoutSessionMessage::setNumValidSteps(const quint16 numValidSteps)
{
    Q_D(WorkoutSessionMessage);
    d->numValidSteps = numValidSteps;
}
void WorkoutSessionMessage::setFirstStepIndex(const quint16 firstStepIndex)
{
    Q_D(WorkoutSessionMessage);
    d->firstStepIndex = firstStepIndex;
}
void WorkoutSessionMessage::setPoolLength(const quint16 poolLength)
{
    Q_D(WorkoutSessionMessage);
    d->poolLength = poolLength;
}
void WorkoutSessionMessage::setPoolLengthUnit(const DisplayMeasure poolLengthUnit)
{
    Q_D(WorkoutSessionMessage);
    d->poolLengthUnit = poolLengthUnit;
}

WorkoutSessionMessagePrivate::WorkoutSessionMessagePrivate(WorkoutSessionMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , sport(static_cast<Sport>(-1))
  , subSport(static_cast<SubSport>(-1))
  , numValidSteps(0xFFFF)
  , firstStepIndex(0xFFFF)
  , poolLength(0xFFFF)
  , poolLengthUnit(static_cast<DisplayMeasure>(-1))
{
    globalMessageNumber = MesgNum::WorkoutSession;
}

WorkoutSessionMessagePrivate::~WorkoutSessionMessagePrivate()
{

}

/// @todo Generate implementation.
bool WorkoutSessionMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
