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

#include <QDebug>
#include <QtEndian>

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

bool WorkoutSessionMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:workout_session.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_session.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout_session.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:workout_session.sport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_session.sport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout_session.sport size is" << data.size() << "but should be" << 1;
            return false;
        }
        sport = static_cast<Sport>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:workout_session.subSport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_session.subSport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout_session.subSport size is" << data.size() << "but should be" << 1;
            return false;
        }
        subSport = static_cast<SubSport>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:workout_session.numValidSteps
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_session.numValidSteps has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout_session.numValidSteps size is" << data.size() << "but should be" << 2;
            return false;
        }
        numValidSteps = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:workout_session.firstStepIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_session.firstStepIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout_session.firstStepIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        firstStepIndex = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:workout_session.poolLength
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_session.poolLength has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "workout_session.poolLength size is" << data.size() << "but should be" << 2;
            return false;
        }
        poolLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:workout_session.poolLengthUnit
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "workout_session.poolLengthUnit has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "workout_session.poolLengthUnit size is" << data.size() << "but should be" << 1;
            return false;
        }
        poolLengthUnit = static_cast<DisplayMeasure>(data.at(0));
        break;
    default:
        qWarning() << "unknown workout_session message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
