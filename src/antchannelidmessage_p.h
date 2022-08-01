// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the AntChannelIdMessagePrivate class.
 */
#ifndef QTFIT_ANTCHANNELIDMESSAGE_P_H
#define QTFIT_ANTCHANNELIDMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class AntChannelIdMessage;

class AntChannelIdMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The AntChannelIdMessage FIT message's channelNumber field.
     */
    quint8 channelNumber;

    /*!
     * The AntChannelIdMessage FIT message's deviceType field.
     */
    quint8z deviceType;

    /*!
     * The AntChannelIdMessage FIT message's deviceNumber field.
     */
    quint16z deviceNumber;

    /*!
     * The AntChannelIdMessage FIT message's transmissionType field.
     */
    quint8z transmissionType;

    /*!
     * The AntChannelIdMessage FIT message's deviceIndex field.
     */
    DeviceIndex deviceIndex;

    AntChannelIdMessagePrivate() = delete;
    explicit AntChannelIdMessagePrivate(AntChannelIdMessage * const q);
    virtual ~AntChannelIdMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(AntChannelIdMessage)
    Q_DISABLE_COPY(AntChannelIdMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_ANTCHANNELIDMESSAGE_P_H
