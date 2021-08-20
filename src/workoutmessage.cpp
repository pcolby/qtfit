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

#include "workoutmessage.h"
#include "workoutmessage_p.h"

QTFIT_BEGIN_NAMESPACE

WorkoutMessage::WorkoutMessage() : FitDataMessage(new WorkoutMessagePrivate(this))
{

}

Sport WorkoutMessage::sport() const
{
    Q_D(const WorkoutMessage);
    return d->sport;
}

WorkoutCapabilities WorkoutMessage::capabilities() const
{
    Q_D(const WorkoutMessage);
    return d->capabilities;
}

quint16 WorkoutMessage::numValidSteps() const
{
    Q_D(const WorkoutMessage);
    return d->numValidSteps;
}

QString WorkoutMessage::wktName() const
{
    Q_D(const WorkoutMessage);
    return d->wktName;
}

SubSport WorkoutMessage::subSport() const
{
    Q_D(const WorkoutMessage);
    return d->subSport;
}

quint16 WorkoutMessage::poolLength() const
{
    Q_D(const WorkoutMessage);
    return d->poolLength;
}

DisplayMeasure WorkoutMessage::poolLengthUnit() const
{
    Q_D(const WorkoutMessage);
    return d->poolLengthUnit;
}

void WorkoutMessage::setSport(const Sport sport)
{
    Q_D(WorkoutMessage);
    d->sport = sport;
}
void WorkoutMessage::setCapabilities(const WorkoutCapabilities capabilities)
{
    Q_D(WorkoutMessage);
    d->capabilities = capabilities;
}
void WorkoutMessage::setNumValidSteps(const quint16 numValidSteps)
{
    Q_D(WorkoutMessage);
    d->numValidSteps = numValidSteps;
}
void WorkoutMessage::setWktName(const QString wktName)
{
    Q_D(WorkoutMessage);
    d->wktName = wktName;
}
void WorkoutMessage::setSubSport(const SubSport subSport)
{
    Q_D(WorkoutMessage);
    d->subSport = subSport;
}
void WorkoutMessage::setPoolLength(const quint16 poolLength)
{
    Q_D(WorkoutMessage);
    d->poolLength = poolLength;
}
void WorkoutMessage::setPoolLengthUnit(const DisplayMeasure poolLengthUnit)
{
    Q_D(WorkoutMessage);
    d->poolLengthUnit = poolLengthUnit;
}

WorkoutMessagePrivate::WorkoutMessagePrivate(WorkoutMessage * const q)
  : FitDataMessagePrivate(q)
  , sport(static_cast<Sport>(-1))
  , capabilities(static_cast<WorkoutCapabilities>(-1))
  , numValidSteps(0xFFFF)
  , subSport(static_cast<SubSport>(-1))
  , poolLength(0xFFFF)
  , poolLengthUnit(static_cast<DisplayMeasure>(-1))
{
    globalMessageNumber = MesgNum::Workout;
}

WorkoutMessagePrivate::~WorkoutMessagePrivate()
{

}

/// @todo Generate implementation.
bool WorkoutMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
