// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the WorkoutSessionMessage, and WorkoutSessionMessagePrivate classes.
 */

#include <qtfit/workoutsessionmessage.h>
#include "workoutsessionmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class WorkoutSessionMessage
 *
 * The WorkoutSessionMessage class represents a FIT WorkoutSessionMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a WorkoutSessionMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
WorkoutSessionMessage::WorkoutSessionMessage() : AbstractDataMessage(new WorkoutSessionMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a WorkoutSessionMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
WorkoutSessionMessage::WorkoutSessionMessage(WorkoutSessionMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the WorkoutSessionMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex WorkoutSessionMessage::messageIndex() const
{
    Q_D(const WorkoutSessionMessage);
    return d->messageIndex;
}

/*!
 * Returns the WorkoutSessionMessage data message's \c sport field's current value.
 *
 * \return the \c sport field value.
 */
Sport WorkoutSessionMessage::sport() const
{
    Q_D(const WorkoutSessionMessage);
    return d->sport;
}

/*!
 * Returns the WorkoutSessionMessage data message's \c subSport field's current value.
 *
 * \return the \c subSport field value.
 */
SubSport WorkoutSessionMessage::subSport() const
{
    Q_D(const WorkoutSessionMessage);
    return d->subSport;
}

/*!
 * Returns the WorkoutSessionMessage data message's \c numValidSteps field's current value.
 *
 * \return the \c numValidSteps field value.
 */
quint16 WorkoutSessionMessage::numValidSteps() const
{
    Q_D(const WorkoutSessionMessage);
    return d->numValidSteps;
}

/*!
 * Returns the WorkoutSessionMessage data message's \c firstStepIndex field's current value.
 *
 * \return the \c firstStepIndex field value.
 */
quint16 WorkoutSessionMessage::firstStepIndex() const
{
    Q_D(const WorkoutSessionMessage);
    return d->firstStepIndex;
}

/*!
 * Returns the WorkoutSessionMessage data message's \c poolLength field's current value.
 *
 * \return the \c poolLength field value.
 */
quint16 WorkoutSessionMessage::poolLength() const
{
    Q_D(const WorkoutSessionMessage);
    return d->poolLength;
}

/*!
 * Returns the WorkoutSessionMessage data message's \c poolLengthUnit field's current value.
 *
 * \return the \c poolLengthUnit field value.
 */
DisplayMeasure WorkoutSessionMessage::poolLengthUnit() const
{
    Q_D(const WorkoutSessionMessage);
    return d->poolLengthUnit;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void WorkoutSessionMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(WorkoutSessionMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c sport field to \a sport.
 *
 * \param sport The field value to set.
 */
void WorkoutSessionMessage::setSport(const Sport sport)
{
    Q_D(WorkoutSessionMessage);
    d->sport = sport;
}
/*!
 * Sets the \c subSport field to \a subSport.
 *
 * \param subSport The field value to set.
 */
void WorkoutSessionMessage::setSubSport(const SubSport subSport)
{
    Q_D(WorkoutSessionMessage);
    d->subSport = subSport;
}
/*!
 * Sets the \c numValidSteps field to \a numValidSteps.
 *
 * \param numValidSteps The field value to set.
 */
void WorkoutSessionMessage::setNumValidSteps(const quint16 numValidSteps)
{
    Q_D(WorkoutSessionMessage);
    d->numValidSteps = numValidSteps;
}
/*!
 * Sets the \c firstStepIndex field to \a firstStepIndex.
 *
 * \param firstStepIndex The field value to set.
 */
void WorkoutSessionMessage::setFirstStepIndex(const quint16 firstStepIndex)
{
    Q_D(WorkoutSessionMessage);
    d->firstStepIndex = firstStepIndex;
}
/*!
 * Sets the \c poolLength field to \a poolLength.
 *
 * \param poolLength The field value to set.
 */
void WorkoutSessionMessage::setPoolLength(const quint16 poolLength)
{
    Q_D(WorkoutSessionMessage);
    d->poolLength = poolLength;
}
/*!
 * Sets the \c poolLengthUnit field to \a poolLengthUnit.
 *
 * \param poolLengthUnit The field value to set.
 */
void WorkoutSessionMessage::setPoolLengthUnit(const DisplayMeasure poolLengthUnit)
{
    Q_D(WorkoutSessionMessage);
    d->poolLengthUnit = poolLengthUnit;
}

/// \cond internal

/*!
 * \internal
 *
 * \class WorkoutSessionMessagePrivate
 *
 * The WorkoutSessionMessagePrivate class provides private implementation for the WorkoutSessionMessage.
 *
 * \sa WorkoutSessionMessage
 */

/*!
 * \internal
 *
 * Constructs a WorkoutSessionMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
WorkoutSessionMessagePrivate::WorkoutSessionMessagePrivate(WorkoutSessionMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the WorkoutSessionMessagePrivate object.
 */
WorkoutSessionMessagePrivate::~WorkoutSessionMessagePrivate()
{

}

bool WorkoutSessionMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:workout_session.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "workout_session.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:workout_session.sport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "workout_session.sport")) return false;
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:workout_session.subSport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "workout_session.subSport")) return false;
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:workout_session.numValidSteps
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "workout_session.numValidSteps")) return false;
        this->numValidSteps = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:workout_session.firstStepIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "workout_session.firstStepIndex")) return false;
        this->firstStepIndex = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:workout_session.poolLength
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "workout_session.poolLength")) return false;
        this->poolLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:workout_session.poolLengthUnit
        if (!verify(data, baseType, 1, FitBaseType::Enum, "workout_session.poolLengthUnit")) return false;
        this->poolLengthUnit = static_cast<DisplayMeasure>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown workout_session message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
