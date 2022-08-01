// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the BarometerDataMessage class.
 */

#ifndef QTFIT_BAROMETERDATAMESSAGE_H
#define QTFIT_BAROMETERDATAMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class BarometerDataMessagePrivate;

class QTFIT_EXPORT BarometerDataMessage : public AbstractDataMessage {

public:
    BarometerDataMessage();
    ~BarometerDataMessage();

    DateTime timestamp() const;
    quint16 timestampMs() const;
    quint16 sampleTimeOffset() const;
    quint32 baroPres() const;

    void setTimestamp(const DateTime timestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setSampleTimeOffset(const quint16 sampleTimeOffset);
    void setBaroPres(const quint32 baroPres);

protected:
    /// \cond internal
    explicit BarometerDataMessage(BarometerDataMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(BarometerDataMessage)
  //Q_DISABLE_COPY(BarometerDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_BAROMETERDATAMESSAGE_H
