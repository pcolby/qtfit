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

#include <QDebug>
#include <QtEndian>

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

bool WorkoutMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 4: // See Profile.xlsx::Messages:workout.sport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout.sport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout.sport size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:workout.capabilities
        if (baseType != FitBaseType::Uint32z) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout.capabilities has base type" << static_cast<int>(baseType) << "but should be Uint32z";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "workout.capabilities size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->capabilities = static_cast<WorkoutCapabilities>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 6: // See Profile.xlsx::Messages:workout.numValidSteps
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout.numValidSteps has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout.numValidSteps size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->numValidSteps = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:workout.wktName
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout.wktName has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout.wktName size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->wktName = QString::fromUtf8(data);
        break;
    case 11: // See Profile.xlsx::Messages:workout.subSport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout.subSport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout.subSport size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 14: // See Profile.xlsx::Messages:workout.poolLength
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout.poolLength has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout.poolLength size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->poolLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 15: // See Profile.xlsx::Messages:workout.poolLengthUnit
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout.poolLengthUnit has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout.poolLengthUnit size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->poolLengthUnit = static_cast<DisplayMeasure>(data.at(0));
        break;
    default:
        qWarning() << "unknown workout message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
