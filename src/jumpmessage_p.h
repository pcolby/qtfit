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
 * Declares the JumpMessagePrivate class.
 */
#ifndef QTFIT_JUMPMESSAGE_P_H
#define QTFIT_JUMPMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class JumpMessage;

class JumpMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The JumpMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The JumpMessage FIT message's distance field.
     */
    float distance;

    /*!
     * The JumpMessage FIT message's height field.
     */
    float height;

    /*!
     * The JumpMessage FIT message's rotations field.
     */
    quint8 rotations;

    /*!
     * The JumpMessage FIT message's hangTime field.
     */
    float hangTime;

    /*!
     * The JumpMessage FIT message's score field.
     *
     * A score for a jump calculated based on hang time, rotations, and distance.
     */
    float score;

    /*!
     * The JumpMessage FIT message's positionLat field.
     */
    qint32 positionLat;

    /*!
     * The JumpMessage FIT message's positionLong field.
     */
    qint32 positionLong;

    /*!
     * The JumpMessage FIT message's speed field.
     */
    quint16 speed;

    /*!
     * The JumpMessage FIT message's enhancedSpeed field.
     */
    quint32 enhancedSpeed;

    JumpMessagePrivate() = delete;
    explicit JumpMessagePrivate(JumpMessage * const q);
    virtual ~JumpMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(JumpMessage)
    Q_DISABLE_COPY(JumpMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_JUMPMESSAGE_P_H
