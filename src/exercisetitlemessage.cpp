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

/*!
 * \class ExerciseTitleMessage
 *
 * The ExerciseTitleMessage class represents a FIT ExerciseTitleMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid ExerciseTitleMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ExerciseTitleMessage::ExerciseTitleMessage() : AbstractDataMessage(new ExerciseTitleMessagePrivate(this))
{

}

/*!
 * Returns the ExerciseTitleMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex ExerciseTitleMessage::messageIndex() const
{
    Q_D(const ExerciseTitleMessage);
    return d->messageIndex;
}

/*!
 * Returns the ExerciseTitleMessage data message's \c exerciseCategory field's current value.
 *
 * \return the \c exerciseCategory field value.
 */
ExerciseCategory ExerciseTitleMessage::exerciseCategory() const
{
    Q_D(const ExerciseTitleMessage);
    return d->exerciseCategory;
}

/*!
 * Returns the ExerciseTitleMessage data message's \c exerciseName field's current value.
 *
 * \return the \c exerciseName field value.
 */
quint16 ExerciseTitleMessage::exerciseName() const
{
    Q_D(const ExerciseTitleMessage);
    return d->exerciseName;
}

/*!
 * Returns the ExerciseTitleMessage data message's \c wktStepName field's current value.
 *
 * \return the \c wktStepName field value.
 */
QString ExerciseTitleMessage::wktStepName() const
{
    Q_D(const ExerciseTitleMessage);
    return d->wktStepName;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void ExerciseTitleMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(ExerciseTitleMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c exerciseCategory field to \a exerciseCategory.
 *
 * \param exerciseCategory The field value to set.
 */
void ExerciseTitleMessage::setExerciseCategory(const ExerciseCategory exerciseCategory)
{
    Q_D(ExerciseTitleMessage);
    d->exerciseCategory = exerciseCategory;
}
/*!
 * Sets the \c exerciseName field to \a exerciseName.
 *
 * \param exerciseName The field value to set.
 */
void ExerciseTitleMessage::setExerciseName(const quint16 exerciseName)
{
    Q_D(ExerciseTitleMessage);
    d->exerciseName = exerciseName;
}
/*!
 * Sets the \c wktStepName field to \a wktStepName.
 *
 * \param wktStepName The field value to set.
 */
void ExerciseTitleMessage::setWktStepName(const QString wktStepName)
{
    Q_D(ExerciseTitleMessage);
    d->wktStepName = wktStepName;
}

/*!
 * \internal
 *
 * \class ExerciseTitleMessagePrivate
 *
 * The ExerciseTitleMessagePrivate class provides private implementation for the ExerciseTitleMessage.
 *
 * \sa ExerciseTitleMessage
 */

/*!
 * \internal
 *
 * Constructs a ExerciseTitleMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ExerciseTitleMessagePrivate::ExerciseTitleMessagePrivate(ExerciseTitleMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , exerciseCategory(static_cast<ExerciseCategory>(-1))
  , exerciseName(0xFFFF)
{
    globalMessageNumber = MesgNum::ExerciseTitle;
}

/*!
 * \internal
 *
 * Destroys the ExerciseTitleMessagePrivate object.
 */
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
        return AbstractDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
