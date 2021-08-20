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

#ifndef QTFIT_HRZONEMESSAGE_H
#define QTFIT_HRZONEMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class HrZoneMessagePrivate;

class QTFIT_EXPORT HrZoneMessage : public FitDataMessage {

public:
    HrZoneMessage();
    ~HrZoneMessage();

    MessageIndex messageIndex() const;
    quint8 highBpm() const;
    QString name() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setHighBpm(const quint8 highBpm);
    void setName(const QString name);

protected:
    /// @cond internal
    explicit HrZoneMessage(HrZoneMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(HrZoneMessage)
  //Q_DISABLE_COPY(HrZoneMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_HRZONEMESSAGE_H