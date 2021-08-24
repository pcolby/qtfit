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

#ifndef QTFIT_DIVESETTINGSMESSAGE_P_H
#define QTFIT_DIVESETTINGSMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class DiveSettingsMessage;

class DiveSettingsMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The DiveSettingsMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The DiveSettingsMessage FIT message's name field.
     */
    QString name;

    /*!
     * The DiveSettingsMessage FIT message's model field.
     */
    TissueModelType model;

    /*!
     * The DiveSettingsMessage FIT message's gfLow field.
     */
    quint8 gfLow;

    /*!
     * The DiveSettingsMessage FIT message's gfHigh field.
     */
    quint8 gfHigh;

    /*!
     * The DiveSettingsMessage FIT message's waterType field.
     */
    WaterType waterType;

    /*!
     * The DiveSettingsMessage FIT message's waterDensity field.
     *
     * Fresh water is usually 1000; salt water is usually 1025
     */
    float waterDensity;

    /*!
     * The DiveSettingsMessage FIT message's po2Warn field.
     *
     * Typically 1.40
     */
    quint8 po2Warn;

    /*!
     * The DiveSettingsMessage FIT message's po2Critical field.
     *
     * Typically 1.60
     */
    quint8 po2Critical;

    /*!
     * The DiveSettingsMessage FIT message's po2Deco field.
     */
    quint8 po2Deco;

    /*!
     * The DiveSettingsMessage FIT message's safetyStopEnabled field.
     */
    bool safetyStopEnabled;

    /*!
     * The DiveSettingsMessage FIT message's bottomDepth field.
     */
    float bottomDepth;

    /*!
     * The DiveSettingsMessage FIT message's bottomTime field.
     */
    quint32 bottomTime;

    /*!
     * The DiveSettingsMessage FIT message's apneaCountdownEnabled field.
     */
    bool apneaCountdownEnabled;

    /*!
     * The DiveSettingsMessage FIT message's apneaCountdownTime field.
     */
    quint32 apneaCountdownTime;

    /*!
     * The DiveSettingsMessage FIT message's backlightMode field.
     */
    DiveBacklightMode backlightMode;

    /*!
     * The DiveSettingsMessage FIT message's backlightBrightness field.
     */
    quint8 backlightBrightness;

    /*!
     * The DiveSettingsMessage FIT message's backlightTimeout field.
     */
    BacklightTimeout backlightTimeout;

    /*!
     * The DiveSettingsMessage FIT message's repeatDiveInterval field.
     *
     * Time between surfacing and ending the activity
     */
    quint16 repeatDiveInterval;

    /*!
     * The DiveSettingsMessage FIT message's safetyStopTime field.
     *
     * Time at safety stop (if enabled)
     */
    quint16 safetyStopTime;

    /*!
     * The DiveSettingsMessage FIT message's heartRateSourceType field.
     */
    SourceType heartRateSourceType;

    /*!
     * The DiveSettingsMessage FIT message's heartRateSource field.
     */
    quint8 heartRateSource;

    DiveSettingsMessagePrivate() = delete;
    explicit DiveSettingsMessagePrivate(DiveSettingsMessage * const q);
    virtual ~DiveSettingsMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(DiveSettingsMessage)
    Q_DISABLE_COPY(DiveSettingsMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DIVESETTINGSMESSAGE_P_H
