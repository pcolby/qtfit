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

#include <QDebug>
#include <QtEndian>

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

bool CameraEventMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:camera_event.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "camera_event.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:camera_event.timestampMs
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "camera_event.timestampMs")) return false;
        this->timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:camera_event.cameraEventType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "camera_event.cameraEventType")) return false;
        this->cameraEventType = static_cast<CameraEventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:camera_event.cameraFileUuid
        if (!verify(data, baseType, 1, FitBaseType::String, "camera_event.cameraFileUuid")) return false;
        this->cameraFileUuid = QString::fromUtf8(data);
        break;
    case 3: // See Profile.xlsx::Messages:camera_event.cameraOrientation
        if (!verify(data, baseType, 1, FitBaseType::Enum, "camera_event.cameraOrientation")) return false;
        this->cameraOrientation = static_cast<CameraOrientationType>(data.at(0));
        break;
    default:
        qWarning() << "unknown camera_event message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
