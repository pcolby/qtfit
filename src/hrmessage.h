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

/*!
 * \file
 * Declares the HrMessage class.
 */

#ifndef QTFIT_HRMESSAGE_H
#define QTFIT_HRMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class HrMessagePrivate;

class QTFIT_EXPORT HrMessage : public AbstractDataMessage {

public:
    HrMessage();
    ~HrMessage();

    DateTime timestamp() const;
    quint16 fractionalTimestamp() const;
    quint8 time256() const;
    quint8 filteredBpm() const;
    quint32 eventTimestamp() const;
    quint8 eventTimestamp12() const;

    void setTimestamp(const DateTime timestamp);
    void setFractionalTimestamp(const quint16 fractionalTimestamp);
    void setTime256(const quint8 time256);
    void setFilteredBpm(const quint8 filteredBpm);
    void setEventTimestamp(const quint32 eventTimestamp);
    void setEventTimestamp12(const quint8 eventTimestamp12);

protected:
    /// \cond internal
    explicit HrMessage(HrMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(HrMessage)
  //Q_DISABLE_COPY(HrMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_HRMESSAGE_H
