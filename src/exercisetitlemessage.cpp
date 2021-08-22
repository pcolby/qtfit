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

#include <QDebug>
#include <QtEndian>

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

bool ExerciseTitleMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:exercise_title.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "exercise_title.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:exercise_title.exerciseCategory
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "exercise_title.exerciseCategory")) return false;
        this->exerciseCategory = static_cast<ExerciseCategory>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:exercise_title.exerciseName
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "exercise_title.exerciseName")) return false;
        this->exerciseName = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:exercise_title.wktStepName
        if (!verify(data, baseType, 1, FitBaseType::String, "exercise_title.wktStepName")) return false;
        this->wktStepName = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "unknown exercise_title message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
