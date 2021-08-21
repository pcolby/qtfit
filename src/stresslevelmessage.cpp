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

StressLevelMessage::StressLevelMessage() : FitDataMessage(new StressLevelMessagePrivate(this))
{

}

qint16 StressLevelMessage::stressLevelValue() const
{
    Q_D(const StressLevelMessage);
    return d->stressLevelValue;
}

DateTime StressLevelMessage::stressLevelTime() const
{
    Q_D(const StressLevelMessage);
    return d->stressLevelTime;
}

void StressLevelMessage::setStressLevelValue(const qint16 stressLevelValue)
{
    Q_D(StressLevelMessage);
    d->stressLevelValue = stressLevelValue;
}
void StressLevelMessage::setStressLevelTime(const DateTime stressLevelTime)
{
    Q_D(StressLevelMessage);
    d->stressLevelTime = stressLevelTime;
}

StressLevelMessagePrivate::StressLevelMessagePrivate(StressLevelMessage * const q)
  : FitDataMessagePrivate(q)
  , stressLevelValue(0x7FFF)
  , stressLevelTime(static_cast<DateTime>(-1))
{
    globalMessageNumber = MesgNum::StressLevel;
}

StressLevelMessagePrivate::~StressLevelMessagePrivate()
{

}

bool StressLevelMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:stress_level.stressLevelValue
        if (baseType != FitBaseType::Sint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "stress_level.stressLevelValue has base type" << static_cast<int>(baseType) << "but should be Sint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "stress_level.stressLevelValue size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->stressLevelValue = static_cast<qint16>(bigEndian ? qFromBigEndian< qint16>(data) : qFromLittleEndian< qint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:stress_level.stressLevelTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "stress_level.stressLevelTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "stress_level.stressLevelTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->stressLevelTime = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown stress_level message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
