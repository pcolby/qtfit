// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the DiveAlarmMessage class.
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
    /// \cond internal
    explicit DiveAlarmMessage(DiveAlarmMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(DiveAlarmMessage)
  //Q_DISABLE_COPY(DiveAlarmMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DIVEALARMMESSAGE_H
