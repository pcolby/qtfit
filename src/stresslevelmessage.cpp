// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the StressLevelMessage, and StressLevelMessagePrivate classes.
 */

#include <qtfit/stresslevelmessage.h>
#include "stresslevelmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class StressLevelMessage
 *
 * The StressLevelMessage class represents a FIT StressLevelMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a StressLevelMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
StressLevelMessage::StressLevelMessage() : AbstractDataMessage(new StressLevelMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a StressLevelMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
StressLevelMessage::StressLevelMessage(StressLevelMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the StressLevelMessage data message's \c stressLevelValue field's current value.
 *
 * \return the \c stressLevelValue field value.
 */
qint16 StressLevelMessage::stressLevelValue() const
{
    Q_D(const StressLevelMessage);
    return d->stressLevelValue;
}

/*!
 * Returns the StressLevelMessage data message's \c stressLevelTime field's current value.
 *
 * Time stress score was calculated
 *
 * \return the \c stressLevelTime field value.
 */
DateTime StressLevelMessage::stressLevelTime() const
{
    Q_D(const StressLevelMessage);
    return d->stressLevelTime;
}

/*!
 * Sets the \c stressLevelValue field to \a stressLevelValue.
 *
 * \param stressLevelValue The field value to set.
 */
void StressLevelMessage::setStressLevelValue(const qint16 stressLevelValue)
{
    Q_D(StressLevelMessage);
    d->stressLevelValue = stressLevelValue;
}
/*!
 * Sets the \c stressLevelTime field to \a stressLevelTime.
 *
 * \param stressLevelTime The field value to set.
 */
void StressLevelMessage::setStressLevelTime(const DateTime stressLevelTime)
{
    Q_D(StressLevelMessage);
    d->stressLevelTime = stressLevelTime;
}

/// \cond internal

/*!
 * \internal
 *
 * \class StressLevelMessagePrivate
 *
 * The StressLevelMessagePrivate class provides private implementation for the StressLevelMessage.
 *
 * \sa StressLevelMessage
 */

/*!
 * \internal
 *
 * Constructs a StressLevelMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
StressLevelMessagePrivate::StressLevelMessagePrivate(StressLevelMessage * const q)
  : AbstractDataMessagePrivate(q)
  , stressLevelValue(0x7FFF)
  , stressLevelTime(static_cast<DateTime>(-1))
{
    globalMessageNumber = MesgNum::StressLevel;
}

/*!
 * \internal
 *
 * Destroys the StressLevelMessagePrivate object.
 */
StressLevelMessagePrivate::~StressLevelMessagePrivate()
{

}

bool StressLevelMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:stress_level.stressLevelValue
        if (!verify(data, baseType, 2, FitBaseType::Sint16, "stress_level.stressLevelValue")) return false;
        this->stressLevelValue = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:stress_level.stressLevelTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "stress_level.stressLevelTime")) return false;
        this->stressLevelTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown stress_level message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
