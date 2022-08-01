// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the StressLevelMessage class.
 */

#ifndef QTFIT_STRESSLEVELMESSAGE_H
#define QTFIT_STRESSLEVELMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class StressLevelMessagePrivate;

class QTFIT_EXPORT StressLevelMessage : public AbstractDataMessage {

public:
    StressLevelMessage();
    ~StressLevelMessage();

    qint16 stressLevelValue() const;
    DateTime stressLevelTime() const;

    void setStressLevelValue(const qint16 stressLevelValue);
    void setStressLevelTime(const DateTime stressLevelTime);

protected:
    /// \cond internal
    explicit StressLevelMessage(StressLevelMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(StressLevelMessage)
  //Q_DISABLE_COPY(StressLevelMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_STRESSLEVELMESSAGE_H
