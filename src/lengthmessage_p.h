// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the LengthMessagePrivate class.
 */
#ifndef QTFIT_LENGTHMESSAGE_P_H
#define QTFIT_LENGTHMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class LengthMessage;

class LengthMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The LengthMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The LengthMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The LengthMessage FIT message's event field.
     */
    Event event;

    /*!
     * The LengthMessage FIT message's eventType field.
     */
    EventType eventType;

    /*!
     * The LengthMessage FIT message's startTime field.
     */
    DateTime startTime;

    /*!
     * The LengthMessage FIT message's totalElapsedTime field.
     */
    quint32 totalElapsedTime;

    /*!
     * The LengthMessage FIT message's totalTimerTime field.
     */
    quint32 totalTimerTime;

    /*!
     * The LengthMessage FIT message's totalStrokes field.
     */
    quint16 totalStrokes;

    /*!
     * The LengthMessage FIT message's avgSpeed field.
     */
    quint16 avgSpeed;

    /*!
     * The LengthMessage FIT message's swimStroke field.
     */
    SwimStroke swimStroke;

    /*!
     * The LengthMessage FIT message's avgSwimmingCadence field.
     */
    quint8 avgSwimmingCadence;

    /*!
     * The LengthMessage FIT message's eventGroup field.
     */
    quint8 eventGroup;

    /*!
     * The LengthMessage FIT message's totalCalories field.
     */
    quint16 totalCalories;

    /*!
     * The LengthMessage FIT message's lengthType field.
     */
    LengthType lengthType;

    /*!
     * The LengthMessage FIT message's playerScore field.
     */
    quint16 playerScore;

    /*!
     * The LengthMessage FIT message's opponentScore field.
     */
    quint16 opponentScore;

    /*!
     * The LengthMessage FIT message's strokeCount field.
     *
     * stroke_type enum used as the index
     */
    quint16 strokeCount;

    /*!
     * The LengthMessage FIT message's zoneCount field.
     *
     * zone number used as the index
     */
    quint16 zoneCount;

    LengthMessagePrivate() = delete;
    explicit LengthMessagePrivate(LengthMessage * const q);
    virtual ~LengthMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(LengthMessage)
    Q_DISABLE_COPY(LengthMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_LENGTHMESSAGE_P_H
