// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ObdiiDataMessage class.
 */

#ifndef QTFIT_OBDIIDATAMESSAGE_H
#define QTFIT_OBDIIDATAMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ObdiiDataMessagePrivate;

class QTFIT_EXPORT ObdiiDataMessage : public AbstractDataMessage {

public:
    ObdiiDataMessage();
    ~ObdiiDataMessage();

    DateTime timestamp() const;
    quint16 timestampMs() const;
    quint16 timeOffset() const;
    quint8 pid() const;
    quint8 rawData() const;
    quint8 pidDataSize() const;
    quint32 systemTime() const;
    DateTime startTimestamp() const;
    quint16 startTimestampMs() const;

    void setTimestamp(const DateTime timestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setTimeOffset(const quint16 timeOffset);
    void setPid(const quint8 pid);
    void setRawData(const quint8 rawData);
    void setPidDataSize(const quint8 pidDataSize);
    void setSystemTime(const quint32 systemTime);
    void setStartTimestamp(const DateTime startTimestamp);
    void setStartTimestampMs(const quint16 startTimestampMs);

protected:
    /// \cond internal
    explicit ObdiiDataMessage(ObdiiDataMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ObdiiDataMessage)
  //Q_DISABLE_COPY(ObdiiDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_OBDIIDATAMESSAGE_H
