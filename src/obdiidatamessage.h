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
    /// @cond internal
    explicit ObdiiDataMessage(ObdiiDataMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ObdiiDataMessage)
  //Q_DISABLE_COPY(ObdiiDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_OBDIIDATAMESSAGE_H
