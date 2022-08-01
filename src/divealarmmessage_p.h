// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the DiveAlarmMessagePrivate class.
 */
#ifndef QTFIT_DIVEALARMMESSAGE_P_H
#define QTFIT_DIVEALARMMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class DiveAlarmMessage;

class DiveAlarmMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The DiveAlarmMessage FIT message's messageIndex field.
     *
     * Index of the alarm
     */
    MessageIndex messageIndex;

    /*!
     * The DiveAlarmMessage FIT message's depth field.
     */
    quint32 depth;

    /*!
     * The DiveAlarmMessage FIT message's time field.
     */
    qint32 time;

    /*!
     * The DiveAlarmMessage FIT message's enabled field.
     */
    bool enabled;

    /*!
     * The DiveAlarmMessage FIT message's alarmType field.
     */
    DiveAlarmType alarmType;

    /*!
     * The DiveAlarmMessage FIT message's sound field.
     */
    Tone sound;

    /*!
     * The DiveAlarmMessage FIT message's diveTypes field.
     */
    SubSport diveTypes;

    DiveAlarmMessagePrivate() = delete;
    explicit DiveAlarmMessagePrivate(DiveAlarmMessage * const q);
    virtual ~DiveAlarmMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(DiveAlarmMessage)
    Q_DISABLE_COPY(DiveAlarmMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DIVEALARMMESSAGE_P_H
