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
 * Declares the SpeedZoneMessage class.
 */

#ifndef QTFIT_SPEEDZONEMESSAGE_H
#define QTFIT_SPEEDZONEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SpeedZoneMessagePrivate;

class QTFIT_EXPORT SpeedZoneMessage : public AbstractDataMessage {

public:
    SpeedZoneMessage();
    ~SpeedZoneMessage();

    MessageIndex messageIndex() const;
    quint16 highValue() const;
    QString name() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setHighValue(const quint16 highValue);
    void setName(const QString name);

protected:
    /// \cond internal
    explicit SpeedZoneMessage(SpeedZoneMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SpeedZoneMessage)
  //Q_DISABLE_COPY(SpeedZoneMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SPEEDZONEMESSAGE_H
