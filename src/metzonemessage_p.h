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
 * Declares the MetZoneMessagePrivate class.
 */
#ifndef QTFIT_METZONEMESSAGE_P_H
#define QTFIT_METZONEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class MetZoneMessage;

class MetZoneMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The MetZoneMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The MetZoneMessage FIT message's highBpm field.
     */
    quint8 highBpm;

    /*!
     * The MetZoneMessage FIT message's calories field.
     */
    quint16 calories;

    /*!
     * The MetZoneMessage FIT message's fatCalories field.
     */
    quint8 fatCalories;

    MetZoneMessagePrivate() = delete;
    explicit MetZoneMessagePrivate(MetZoneMessage * const q);
    virtual ~MetZoneMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(MetZoneMessage)
    Q_DISABLE_COPY(MetZoneMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_METZONEMESSAGE_P_H
