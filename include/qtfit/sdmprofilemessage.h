// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SdmProfileMessage class.
 */

#ifndef QTFIT_SDMPROFILEMESSAGE_H
#define QTFIT_SDMPROFILEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SdmProfileMessagePrivate;

class QTFIT_EXPORT SdmProfileMessage : public AbstractDataMessage {

public:
    SdmProfileMessage();
    ~SdmProfileMessage();

    MessageIndex messageIndex() const;
    bool enabled() const;
    quint16z sdmAntId() const;
    quint16 sdmCalFactor() const;
    quint32 odometer() const;
    bool speedSource() const;
    quint8z sdmAntIdTransType() const;
    quint8 odometerRollover() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setEnabled(const bool enabled);
    void setSdmAntId(const quint16z sdmAntId);
    void setSdmCalFactor(const quint16 sdmCalFactor);
    void setOdometer(const quint32 odometer);
    void setSpeedSource(const bool speedSource);
    void setSdmAntIdTransType(const quint8z sdmAntIdTransType);
    void setOdometerRollover(const quint8 odometerRollover);

protected:
    /// \cond internal
    explicit SdmProfileMessage(SdmProfileMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SdmProfileMessage)
  //Q_DISABLE_COPY(SdmProfileMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SDMPROFILEMESSAGE_H
