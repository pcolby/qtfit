// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the StressLevelMessagePrivate class.
 */
#ifndef QTFIT_STRESSLEVELMESSAGE_P_H
#define QTFIT_STRESSLEVELMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class StressLevelMessage;

class StressLevelMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The StressLevelMessage FIT message's stressLevelValue field.
     */
    qint16 stressLevelValue;

    /*!
     * The StressLevelMessage FIT message's stressLevelTime field.
     *
     * Time stress score was calculated
     */
    DateTime stressLevelTime;

    StressLevelMessagePrivate() = delete;
    explicit StressLevelMessagePrivate(StressLevelMessage * const q);
    virtual ~StressLevelMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(StressLevelMessage)
    Q_DISABLE_COPY(StressLevelMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_STRESSLEVELMESSAGE_P_H
