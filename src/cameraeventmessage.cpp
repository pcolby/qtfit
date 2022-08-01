// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the CameraEventMessage, and CameraEventMessagePrivate classes.
 */

#include <qtfit/cameraeventmessage.h>
#include "cameraeventmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class CameraEventMessage
 *
 * The CameraEventMessage class represents a FIT CameraEventMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a CameraEventMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
CameraEventMessage::CameraEventMessage() : AbstractDataMessage(new CameraEventMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a CameraEventMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
CameraEventMessage::CameraEventMessage(CameraEventMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the CameraEventMessage data message's \c timestamp field's current value.
 *
 * Whole second part of the timestamp.
 *
 * \return the \c timestamp field value.
 */
DateTime CameraEventMessage::timestamp() const
{
    Q_D(const CameraEventMessage);
    return d->timestamp;
}

/*!
 * Returns the CameraEventMessage data message's \c timestampMs field's current value.
 *
 * Millisecond part of the timestamp.
 *
 * \return the \c timestampMs field value.
 */
quint16 CameraEventMessage::timestampMs() const
{
    Q_D(const CameraEventMessage);
    return d->timestampMs;
}

/*!
 * Returns the CameraEventMessage data message's \c cameraEventType field's current value.
 *
 * \return the \c cameraEventType field value.
 */
CameraEventType CameraEventMessage::cameraEventType() const
{
    Q_D(const CameraEventMessage);
    return d->cameraEventType;
}

/*!
 * Returns the CameraEventMessage data message's \c cameraFileUuid field's current value.
 *
 * \return the \c cameraFileUuid field value.
 */
QString CameraEventMessage::cameraFileUuid() const
{
    Q_D(const CameraEventMessage);
    return d->cameraFileUuid;
}

/*!
 * Returns the CameraEventMessage data message's \c cameraOrientation field's current value.
 *
 * \return the \c cameraOrientation field value.
 */
CameraOrientationType CameraEventMessage::cameraOrientation() const
{
    Q_D(const CameraEventMessage);
    return d->cameraOrientation;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void CameraEventMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(CameraEventMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c timestampMs field to \a timestampMs.
 *
 * \param timestampMs The field value to set.
 */
void CameraEventMessage::setTimestampMs(const quint16 timestampMs)
{
    Q_D(CameraEventMessage);
    d->timestampMs = timestampMs;
}
/*!
 * Sets the \c cameraEventType field to \a cameraEventType.
 *
 * \param cameraEventType The field value to set.
 */
void CameraEventMessage::setCameraEventType(const CameraEventType cameraEventType)
{
    Q_D(CameraEventMessage);
    d->cameraEventType = cameraEventType;
}
/*!
 * Sets the \c cameraFileUuid field to \a cameraFileUuid.
 *
 * \param cameraFileUuid The field value to set.
 */
void CameraEventMessage::setCameraFileUuid(const QString cameraFileUuid)
{
    Q_D(CameraEventMessage);
    d->cameraFileUuid = cameraFileUuid;
}
/*!
 * Sets the \c cameraOrientation field to \a cameraOrientation.
 *
 * \param cameraOrientation The field value to set.
 */
void CameraEventMessage::setCameraOrientation(const CameraOrientationType cameraOrientation)
{
    Q_D(CameraEventMessage);
    d->cameraOrientation = cameraOrientation;
}

/// \cond internal

/*!
 * \internal
 *
 * \class CameraEventMessagePrivate
 *
 * The CameraEventMessagePrivate class provides private implementation for the CameraEventMessage.
 *
 * \sa CameraEventMessage
 */

/*!
 * \internal
 *
 * Constructs a CameraEventMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
CameraEventMessagePrivate::CameraEventMessagePrivate(CameraEventMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , timestampMs(0xFFFF)
  , cameraEventType(static_cast<CameraEventType>(-1))
  , cameraOrientation(static_cast<CameraOrientationType>(-1))
{
    globalMessageNumber = MesgNum::CameraEvent;
}

/*!
 * \internal
 *
 * Destroys the CameraEventMessagePrivate object.
 */
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
        qWarning() << "ignoring unknown camera_event message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
