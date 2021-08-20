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

#include "cameraeventmessage.h"
#include "cameraeventmessage_p.h"

QTFIT_BEGIN_NAMESPACE

CameraEventMessage::CameraEventMessage() : FitDataMessage(new CameraEventMessagePrivate(this))
{

}

DateTime CameraEventMessage::timestamp() const
{
    Q_D(const CameraEventMessage);
    return d->timestamp;
}

quint16 CameraEventMessage::timestampMs() const
{
    Q_D(const CameraEventMessage);
    return d->timestampMs;
}

CameraEventType CameraEventMessage::cameraEventType() const
{
    Q_D(const CameraEventMessage);
    return d->cameraEventType;
}

QString CameraEventMessage::cameraFileUuid() const
{
    Q_D(const CameraEventMessage);
    return d->cameraFileUuid;
}

CameraOrientationType CameraEventMessage::cameraOrientation() const
{
    Q_D(const CameraEventMessage);
    return d->cameraOrientation;
}

void CameraEventMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(CameraEventMessage);
    d->timestamp = timestamp;
}
void CameraEventMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(CameraEventMessage);
    d->timestampMs = timestampMs;
}
void CameraEventMessage::setCameraEventType(const CameraEventType cameraEventType)
{
    Q_D(CameraEventMessage);
    d->cameraEventType = cameraEventType;
}
void CameraEventMessage::setCameraFileUuid(const QString cameraFileUuid)
{
    Q_D(CameraEventMessage);
    d->cameraFileUuid = cameraFileUuid;
}
void CameraEventMessage::setCameraOrientation(const CameraOrientationType cameraOrientation)
{
    Q_D(CameraEventMessage);
    d->cameraOrientation = cameraOrientation;
}

CameraEventMessagePrivate::CameraEventMessagePrivate(CameraEventMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , cameraEventType(static_cast<CameraEventType>(-1))
  , cameraOrientation(static_cast<CameraOrientationType>(-1))
{
    globalMessageNumber = MesgNum::CameraEvent;
}

CameraEventMessagePrivate::~CameraEventMessagePrivate()
{

}

/// @todo Generate implementation.
bool CameraEventMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
