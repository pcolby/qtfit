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
