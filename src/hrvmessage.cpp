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

#include "hrvmessage.h"
#include "hrvmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

HrvMessage::HrvMessage() : FitDataMessage(new HrvMessagePrivate(this))
{

}

quint16 HrvMessage::time() const
{
    Q_D(const HrvMessage);
    return d->time;
}

void HrvMessage::setTime(const quint16 time)
{
    Q_D(HrvMessage);
    d->time = time;
}

HrvMessagePrivate::HrvMessagePrivate(HrvMessage * const q)
  : FitDataMessagePrivate(q)
  , time(0xFFFF)
{
    globalMessageNumber = MesgNum::Hrv;
}

HrvMessagePrivate::~HrvMessagePrivate()
{

}

bool HrvMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:hrv.time
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "hrv.time")) return false;
        this->time = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown hrv message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
