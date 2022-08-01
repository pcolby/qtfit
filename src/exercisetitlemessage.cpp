// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the ExerciseTitleMessage, and ExerciseTitleMessagePrivate classes.
 */

#include <qtfit/exercisetitlemessage.h>
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
 * Constructs a ExerciseTitleMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ExerciseTitleMessage::ExerciseTitleMessage() : AbstractDataMessage(new ExerciseTitleMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a ExerciseTitleMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
ExerciseTitleMessage::ExerciseTitleMessage(ExerciseTitleMessagePrivate * const d) : AbstractDataMessage(d)
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

/// \cond internal

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
        qWarning() << "ignoring unknown exercise_title message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
