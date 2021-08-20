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

#ifndef QTFIT_HRMPROFILEMESSAGE_H
#define QTFIT_HRMPROFILEMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class HrmProfileMessagePrivate;

class QTFIT_EXPORT HrmProfileMessage : public FitDataMessage {

public:
    HrmProfileMessage();
    ~HrmProfileMessage();

    MessageIndex messageIndex() const;
    bool enabled() const;
    quint16z hrmAntId() const;
    bool logHrv() const;
    quint8z hrmAntIdTransType() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setEnabled(const bool enabled);
    void setHrmAntId(const quint16z hrmAntId);
    void setLogHrv(const bool logHrv);
    void setHrmAntIdTransType(const quint8z hrmAntIdTransType);

protected:
    /// @cond internal
    explicit HrmProfileMessage(HrmProfileMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(HrmProfileMessage)
  //Q_DISABLE_COPY(HrmProfileMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_HRMPROFILEMESSAGE_H
