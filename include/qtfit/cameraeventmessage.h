// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the CameraEventMessage class.
 */

#ifndef QTFIT_CAMERAEVENTMESSAGE_H
#define QTFIT_CAMERAEVENTMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class CameraEventMessagePrivate;

class QTFIT_EXPORT CameraEventMessage : public AbstractDataMessage {

public:
    CameraEventMessage();
    ~CameraEventMessage();

    DateTime timestamp() const;
    quint16 timestampMs() const;
    CameraEventType cameraEventType() const;
    QString cameraFileUuid() const;
    CameraOrientationType cameraOrientation() const;

    void setTimestamp(const DateTime timestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setCameraEventType(const CameraEventType cameraEventType);
    void setCameraFileUuid(const QString cameraFileUuid);
    void setCameraOrientation(const CameraOrientationType cameraOrientation);

protected:
    /// \cond internal
    explicit CameraEventMessage(CameraEventMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(CameraEventMessage)
  //Q_DISABLE_COPY(CameraEventMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CAMERAEVENTMESSAGE_H
