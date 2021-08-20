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

#ifndef QTFIT_MEMOGLOBMESSAGE_H
#define QTFIT_MEMOGLOBMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class MemoGlobMessagePrivate;

class QTFIT_EXPORT MemoGlobMessage : public FitDataMessage {

public:
    MemoGlobMessage();
    ~MemoGlobMessage();

    quint32 partIndex() const;
    quint8 memo() const;
    quint16 messageNumber() const;
    MessageIndex messageIndex() const;

    void setPartIndex(const quint32 partIndex);
    void setMemo(const quint8 memo);
    void setMessageNumber(const quint16 messageNumber);
    void setMessageIndex(const MessageIndex messageIndex);

protected:
    /// @cond internal
    explicit MemoGlobMessage(MemoGlobMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MemoGlobMessage)
  //Q_DISABLE_COPY(MemoGlobMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MEMOGLOBMESSAGE_H
