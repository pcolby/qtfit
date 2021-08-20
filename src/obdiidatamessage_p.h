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

#ifndef QTFIT_OBDIIDATAMESSAGE_P_H
#define QTFIT_OBDIIDATAMESSAGE_P_H

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ObdiiDataMessage;

class ObdiiDataMessagePrivate : public FitDataMessagePrivate {

public:
    DateTime timestamp;
    quint16 timestampMs;
    quint16 timeOffset;
    quint8 pid;
    quint8 rawData;
    quint8 pidDataSize;
    quint32 systemTime;
    DateTime startTimestamp;
    quint16 startTimestampMs;

    ObdiiDataMessagePrivate() = delete;
    explicit ObdiiDataMessagePrivate(ObdiiDataMessage * const q);
    virtual ~ObdiiDataMessagePrivate();

protected:
    /// @todo Make base type enum.
    bool setField(const int fieldId, const QByteArray data, int baseType) override;

private:
    Q_DECLARE_PUBLIC(ObdiiDataMessage)
    Q_DISABLE_COPY(ObdiiDataMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_OBDIIDATAMESSAGE_P_H
