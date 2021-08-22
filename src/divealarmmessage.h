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

#ifndef QTFIT_DIVEALARMMESSAGE_H
#define QTFIT_DIVEALARMMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class DiveAlarmMessagePrivate;

class QTFIT_EXPORT DiveAlarmMessage : public AbstractDataMessage {

public:
    DiveAlarmMessage();
    ~DiveAlarmMessage();

    MessageIndex messageIndex() const;
    quint32 depth() const;
    qint32 time() const;
    bool enabled() const;
    DiveAlarmType alarmType() const;
    Tone sound() const;
    SubSport diveTypes() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setDepth(const quint32 depth);
    void setTime(const qint32 time);
    void setEnabled(const bool enabled);
    void setAlarmType(const DiveAlarmType alarmType);
    void setSound(const Tone sound);
    void setDiveTypes(const SubSport diveTypes);

protected:
    /// @cond internal
    explicit DiveAlarmMessage(DiveAlarmMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(DiveAlarmMessage)
  //Q_DISABLE_COPY(DiveAlarmMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DIVEALARMMESSAGE_H
