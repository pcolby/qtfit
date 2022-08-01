// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the DiveSettingsMessage class.
 */

#ifndef QTFIT_DIVESETTINGSMESSAGE_H
#define QTFIT_DIVESETTINGSMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class DiveSettingsMessagePrivate;

class QTFIT_EXPORT DiveSettingsMessage : public AbstractDataMessage {

public:
    DiveSettingsMessage();
    ~DiveSettingsMessage();

    MessageIndex messageIndex() const;
    QString name() const;
    TissueModelType model() const;
    quint8 gfLow() const;
    quint8 gfHigh() const;
    WaterType waterType() const;
    float waterDensity() const;
    quint8 po2Warn() const;
    quint8 po2Critical() const;
    quint8 po2Deco() const;
    bool safetyStopEnabled() const;
    float bottomDepth() const;
    quint32 bottomTime() const;
    bool apneaCountdownEnabled() const;
    quint32 apneaCountdownTime() const;
    DiveBacklightMode backlightMode() const;
    quint8 backlightBrightness() const;
    BacklightTimeout backlightTimeout() const;
    quint16 repeatDiveInterval() const;
    quint16 safetyStopTime() const;
    SourceType heartRateSourceType() const;
    quint8 heartRateSource() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setName(const QString name);
    void setModel(const TissueModelType model);
    void setGfLow(const quint8 gfLow);
    void setGfHigh(const quint8 gfHigh);
    void setWaterType(const WaterType waterType);
    void setWaterDensity(const float waterDensity);
    void setPo2Warn(const quint8 po2Warn);
    void setPo2Critical(const quint8 po2Critical);
    void setPo2Deco(const quint8 po2Deco);
    void setSafetyStopEnabled(const bool safetyStopEnabled);
    void setBottomDepth(const float bottomDepth);
    void setBottomTime(const quint32 bottomTime);
    void setApneaCountdownEnabled(const bool apneaCountdownEnabled);
    void setApneaCountdownTime(const quint32 apneaCountdownTime);
    void setBacklightMode(const DiveBacklightMode backlightMode);
    void setBacklightBrightness(const quint8 backlightBrightness);
    void setBacklightTimeout(const BacklightTimeout backlightTimeout);
    void setRepeatDiveInterval(const quint16 repeatDiveInterval);
    void setSafetyStopTime(const quint16 safetyStopTime);
    void setHeartRateSourceType(const SourceType heartRateSourceType);
    void setHeartRateSource(const quint8 heartRateSource);

protected:
    /// \cond internal
    explicit DiveSettingsMessage(DiveSettingsMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(DiveSettingsMessage)
  //Q_DISABLE_COPY(DiveSettingsMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DIVESETTINGSMESSAGE_H
