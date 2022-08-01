// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
