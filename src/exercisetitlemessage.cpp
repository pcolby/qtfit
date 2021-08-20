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

#include "exercisetitlemessage.h"
#include "exercisetitlemessage_p.h"

QTFIT_BEGIN_NAMESPACE

ExerciseTitleMessage::ExerciseTitleMessage() : FitDataMessage(new ExerciseTitleMessagePrivate(this))
{

}

MessageIndex ExerciseTitleMessage::messageIndex() const
{
    Q_D(const ExerciseTitleMessage);
    return d->messageIndex;
}

ExerciseCategory ExerciseTitleMessage::exerciseCategory() const
{
    Q_D(const ExerciseTitleMessage);
    return d->exerciseCategory;
}

quint16 ExerciseTitleMessage::exerciseName() const
{
    Q_D(const ExerciseTitleMessage);
    return d->exerciseName;
}

QString ExerciseTitleMessage::wktStepName() const
{
    Q_D(const ExerciseTitleMessage);
    return d->wktStepName;
}

void ExerciseTitleMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(ExerciseTitleMessage);
    d->messageIndex = messageIndex;
}
void ExerciseTitleMessage::setExerciseCategory(const ExerciseCategory exerciseCategory)
{
    Q_D(ExerciseTitleMessage);
    d->exerciseCategory = exerciseCategory;
}
void ExerciseTitleMessage::setExerciseName(const quint16 exerciseName)
{
    Q_D(ExerciseTitleMessage);
    d->exerciseName = exerciseName;
}
void ExerciseTitleMessage::setWktStepName(const QString wktStepName)
{
    Q_D(ExerciseTitleMessage);
    d->wktStepName = wktStepName;
}

ExerciseTitleMessagePrivate::ExerciseTitleMessagePrivate(ExerciseTitleMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , exerciseCategory(static_cast<ExerciseCategory>(-1))
  , exerciseName(0xFFFF)
{
    globalMessageNumber = MesgNum::ExerciseTitle;
}

ExerciseTitleMessagePrivate::~ExerciseTitleMessagePrivate()
{

}

/// @todo Generate implementation.
bool ExerciseTitleMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
