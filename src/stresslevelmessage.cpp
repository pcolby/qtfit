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

#include "stresslevelmessage.h"
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
 * Constructs an invalid StressLevelMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
StressLevelMessage::StressLevelMessage() : AbstractDataMessage(new StressLevelMessagePrivate(this))
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
