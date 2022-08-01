// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ConnectivityMessagePrivate class.
 */
#ifndef QTFIT_CONNECTIVITYMESSAGE_P_H
#define QTFIT_CONNECTIVITYMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ConnectivityMessage;

class ConnectivityMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ConnectivityMessage FIT message's bluetoothEnabled field.
     *
     * Use Bluetooth for connectivity features
     */
    bool bluetoothEnabled;

    /*!
     * The ConnectivityMessage FIT message's bluetoothLeEnabled field.
     *
     * Use Bluetooth Low Energy for connectivity features
     */
    bool bluetoothLeEnabled;

    /*!
     * The ConnectivityMessage FIT message's antEnabled field.
     *
     * Use ANT for connectivity features
     */
    bool antEnabled;

    /*!
     * The ConnectivityMessage FIT message's name field.
     */
    QString name;

    /*!
     * The ConnectivityMessage FIT message's liveTrackingEnabled field.
     */
    bool liveTrackingEnabled;

    /*!
     * The ConnectivityMessage FIT message's weatherConditionsEnabled field.
     */
    bool weatherConditionsEnabled;

    /*!
     * The ConnectivityMessage FIT message's weatherAlertsEnabled field.
     */
    bool weatherAlertsEnabled;

    /*!
     * The ConnectivityMessage FIT message's autoActivityUploadEnabled field.
     */
    bool autoActivityUploadEnabled;

    /*!
     * The ConnectivityMessage FIT message's courseDownloadEnabled field.
     */
    bool courseDownloadEnabled;

    /*!
     * The ConnectivityMessage FIT message's workoutDownloadEnabled field.
     */
    bool workoutDownloadEnabled;

    /*!
     * The ConnectivityMessage FIT message's gpsEphemerisDownloadEnabled field.
     */
    bool gpsEphemerisDownloadEnabled;

    /*!
     * The ConnectivityMessage FIT message's incidentDetectionEnabled field.
     */
    bool incidentDetectionEnabled;

    /*!
     * The ConnectivityMessage FIT message's grouptrackEnabled field.
     */
    bool grouptrackEnabled;

    ConnectivityMessagePrivate() = delete;
    explicit ConnectivityMessagePrivate(ConnectivityMessage * const q);
    virtual ~ConnectivityMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ConnectivityMessage)
    Q_DISABLE_COPY(ConnectivityMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CONNECTIVITYMESSAGE_P_H
