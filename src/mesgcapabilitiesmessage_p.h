// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the MesgCapabilitiesMessagePrivate class.
 */
#ifndef QTFIT_MESGCAPABILITIESMESSAGE_P_H
#define QTFIT_MESGCAPABILITIESMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class MesgCapabilitiesMessage;

class MesgCapabilitiesMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The MesgCapabilitiesMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The MesgCapabilitiesMessage FIT message's file field.
     */
    File file;

    /*!
     * The MesgCapabilitiesMessage FIT message's mesgNum field.
     */
    MesgNum mesgNum;

    /*!
     * The MesgCapabilitiesMessage FIT message's countType field.
     */
    MesgCount countType;

    /*!
     * The MesgCapabilitiesMessage FIT message's count field.
     */
    quint16 count;

    MesgCapabilitiesMessagePrivate() = delete;
    explicit MesgCapabilitiesMessagePrivate(MesgCapabilitiesMessage * const q);
    virtual ~MesgCapabilitiesMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(MesgCapabilitiesMessage)
    Q_DISABLE_COPY(MesgCapabilitiesMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MESGCAPABILITIESMESSAGE_P_H
