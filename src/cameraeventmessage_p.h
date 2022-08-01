// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the CameraEventMessagePrivate class.
 */
#ifndef QTFIT_CAMERAEVENTMESSAGE_P_H
#define QTFIT_CAMERAEVENTMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class CameraEventMessage;

class CameraEventMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The CameraEventMessage FIT message's timestamp field.
     *
     * Whole second part of the timestamp.
     */
    DateTime timestamp;

    /*!
     * The CameraEventMessage FIT message's timestampMs field.
     *
     * Millisecond part of the timestamp.
     */
    quint16 timestampMs;

    /*!
     * The CameraEventMessage FIT message's cameraEventType field.
     */
    CameraEventType cameraEventType;

    /*!
     * The CameraEventMessage FIT message's cameraFileUuid field.
     */
    QString cameraFileUuid;

    /*!
     * The CameraEventMessage FIT message's cameraOrientation field.
     */
    CameraOrientationType cameraOrientation;

    CameraEventMessagePrivate() = delete;
    explicit CameraEventMessagePrivate(CameraEventMessage * const q);
    virtual ~CameraEventMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(CameraEventMessage)
    Q_DISABLE_COPY(CameraEventMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CAMERAEVENTMESSAGE_P_H
