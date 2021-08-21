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

bool CameraEventMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:camera_event.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "camera_event.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "camera_event.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:camera_event.timestampMs
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "camera_event.timestampMs has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "camera_event.timestampMs size is" << data.size() << "but should be" << 2;
            return false;
        }
        timestampMs = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:camera_event.cameraEventType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "camera_event.cameraEventType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "camera_event.cameraEventType size is" << data.size() << "but should be" << 1;
            return false;
        }
        cameraEventType = static_cast<CameraEventType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:camera_event.cameraFileUuid
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "camera_event.cameraFileUuid has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "camera_event.cameraFileUuid size is" << data.size() << "but should be" << 1;
            return false;
        }
        cameraFileUuid = QString::fromUtf8(data);
        break;
    case 3: // See Profile.xlsx::Messages:camera_event.cameraOrientation
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "camera_event.cameraOrientation has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "camera_event.cameraOrientation size is" << data.size() << "but should be" << 1;
            return false;
        }
        cameraOrientation = static_cast<CameraOrientationType>(data.at(0));
        break;
    default:
        qWarning() << "unknown camera_event message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
