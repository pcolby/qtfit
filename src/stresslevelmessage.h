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

#ifndef QTFIT_STRESSLEVELMESSAGE_H
#define QTFIT_STRESSLEVELMESSAGE_H

#include "fitdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class StressLevelMessagePrivate;

class QTFIT_EXPORT StressLevelMessage : public FitDataMessage {

public:
    StressLevelMessage();
    ~StressLevelMessage();

    qint16 stressLevelValue() const;
    DateTime stressLevelTime() const;

    void setStressLevelValue(const qint16 stressLevelValue);
    void setStressLevelTime(const DateTime stressLevelTime);

protected:
    /// @cond internal
    explicit StressLevelMessage(StressLevelMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(StressLevelMessage)
  //Q_DISABLE_COPY(StressLevelMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_STRESSLEVELMESSAGE_H
