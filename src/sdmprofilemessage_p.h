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
 * Declares the SdmProfileMessagePrivate class.
 */
#ifndef QTFIT_SDMPROFILEMESSAGE_P_H
#define QTFIT_SDMPROFILEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class SdmProfileMessage;

class SdmProfileMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The SdmProfileMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The SdmProfileMessage FIT message's enabled field.
     */
    bool enabled;

    /*!
     * The SdmProfileMessage FIT message's sdmAntId field.
     */
    quint16z sdmAntId;

    /*!
     * The SdmProfileMessage FIT message's sdmCalFactor field.
     */
    quint16 sdmCalFactor;

    /*!
     * The SdmProfileMessage FIT message's odometer field.
     */
    quint32 odometer;

    /*!
     * The SdmProfileMessage FIT message's speedSource field.
     *
     * Use footpod for speed source instead of GPS
     */
    bool speedSource;

    /*!
     * The SdmProfileMessage FIT message's sdmAntIdTransType field.
     */
    quint8z sdmAntIdTransType;

    /*!
     * The SdmProfileMessage FIT message's odometerRollover field.
     *
     * Rollover counter that can be used to extend the odometer
     */
    quint8 odometerRollover;

    SdmProfileMessagePrivate() = delete;
    explicit SdmProfileMessagePrivate(SdmProfileMessage * const q);
    virtual ~SdmProfileMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(SdmProfileMessage)
    Q_DISABLE_COPY(SdmProfileMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SDMPROFILEMESSAGE_P_H
