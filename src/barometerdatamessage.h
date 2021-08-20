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

#ifndef QTFIT_BAROMETERDATAMESSAGE_H
#define QTFIT_BAROMETERDATAMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class BarometerDataMessagePrivate;

class QTFIT_EXPORT BarometerDataMessage : public FitDataMessage {

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
    /// @cond internal
    explicit BarometerDataMessage(BarometerDataMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(BarometerDataMessage)
  //Q_DISABLE_COPY(BarometerDataMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_BAROMETERDATAMESSAGE_H
