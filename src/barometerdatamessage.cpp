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

#include "barometerdatamessage.h"
#include "barometerdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

BarometerDataMessage::BarometerDataMessage() : FitDataMessage(new BarometerDataMessagePrivate(this))
{

}

DateTime BarometerDataMessage::timestamp() const
{
    Q_D(const BarometerDataMessage);
    return d->timestamp;
}

quint16 BarometerDataMessage::timestampMs() const
{
    Q_D(const BarometerDataMessage);
    return d->timestampMs;
}

quint16 BarometerDataMessage::sampleTimeOffset() const
{
    Q_D(const BarometerDataMessage);
    return d->sampleTimeOffset;
}

quint32 BarometerDataMessage::baroPres() const
{
    Q_D(const BarometerDataMessage);
    return d->baroPres;
}

void BarometerDataMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(BarometerDataMessage);
    d->timestamp = timestamp;
}
void BarometerDataMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(BarometerDataMessage);
    d->timestampMs = timestampMs;
}
void BarometerDataMessage::setSampleTimeOffset(const quint16 sampleTimeOffset)
{
    Q_D(BarometerDataMessage);
    d->sampleTimeOffset = sampleTimeOffset;
}
void BarometerDataMessage::setBaroPres(const quint32 baroPres)
{
    Q_D(BarometerDataMessage);
    d->baroPres = baroPres;
}

BarometerDataMessagePrivate::BarometerDataMessagePrivate(BarometerDataMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::BarometerData;
}

BarometerDataMessagePrivate::~BarometerDataMessagePrivate()
{

}

/// @todo Generate implementation.
bool BarometerDataMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
