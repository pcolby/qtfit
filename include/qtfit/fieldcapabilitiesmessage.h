// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the FieldCapabilitiesMessage class.
 */

#ifndef QTFIT_FIELDCAPABILITIESMESSAGE_H
#define QTFIT_FIELDCAPABILITIESMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class FieldCapabilitiesMessagePrivate;

class QTFIT_EXPORT FieldCapabilitiesMessage : public AbstractDataMessage {

public:
    FieldCapabilitiesMessage();
    ~FieldCapabilitiesMessage();

    MessageIndex messageIndex() const;
    File file() const;
    MesgNum mesgNum() const;
    quint8 fieldNum() const;
    quint16 count() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setFile(const File file);
    void setMesgNum(const MesgNum mesgNum);
    void setFieldNum(const quint8 fieldNum);
    void setCount(const quint16 count);

protected:
    /// \cond internal
    explicit FieldCapabilitiesMessage(FieldCapabilitiesMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(FieldCapabilitiesMessage)
  //Q_DISABLE_COPY(FieldCapabilitiesMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FIELDCAPABILITIESMESSAGE_H
