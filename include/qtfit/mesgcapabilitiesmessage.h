// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the MesgCapabilitiesMessage class.
 */

#ifndef QTFIT_MESGCAPABILITIESMESSAGE_H
#define QTFIT_MESGCAPABILITIESMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class MesgCapabilitiesMessagePrivate;

class QTFIT_EXPORT MesgCapabilitiesMessage : public AbstractDataMessage {

public:
    MesgCapabilitiesMessage();
    ~MesgCapabilitiesMessage();

    MessageIndex messageIndex() const;
    File file() const;
    MesgNum mesgNum() const;
    MesgCount countType() const;
    quint16 count() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setFile(const File file);
    void setMesgNum(const MesgNum mesgNum);
    void setCountType(const MesgCount countType);
    void setCount(const quint16 count);

protected:
    /// \cond internal
    explicit MesgCapabilitiesMessage(MesgCapabilitiesMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(MesgCapabilitiesMessage)
  //Q_DISABLE_COPY(MesgCapabilitiesMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MESGCAPABILITIESMESSAGE_H
