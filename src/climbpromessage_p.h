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

#ifndef QTFIT_CLIMBPROMESSAGE_P_H
#define QTFIT_CLIMBPROMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class ClimbProMessage;

class ClimbProMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The ClimbProMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The ClimbProMessage FIT message's positionLat field.
     */
    qint32 positionLat;

    /*!
     * The ClimbProMessage FIT message's positionLong field.
     */
    qint32 positionLong;

    /*!
     * The ClimbProMessage FIT message's climbProEvent field.
     */
    ClimbProEvent climbProEvent;

    /*!
     * The ClimbProMessage FIT message's climbNumber field.
     */
    quint16 climbNumber;

    /*!
     * The ClimbProMessage FIT message's climbCategory field.
     */
    quint8 climbCategory;

    /*!
     * The ClimbProMessage FIT message's currentDist field.
     */
    float currentDist;

    ClimbProMessagePrivate() = delete;
    explicit ClimbProMessagePrivate(ClimbProMessage * const q);
    virtual ~ClimbProMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(ClimbProMessage)
    Q_DISABLE_COPY(ClimbProMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_CLIMBPROMESSAGE_P_H
