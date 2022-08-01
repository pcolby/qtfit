// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the ExdScreenConfigurationMessage class.
 */

#ifndef QTFIT_EXDSCREENCONFIGURATIONMESSAGE_H
#define QTFIT_EXDSCREENCONFIGURATIONMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class ExdScreenConfigurationMessagePrivate;

class QTFIT_EXPORT ExdScreenConfigurationMessage : public AbstractDataMessage {

public:
    ExdScreenConfigurationMessage();
    ~ExdScreenConfigurationMessage();

    quint8 screenIndex() const;
    quint8 fieldCount() const;
    ExdLayout layout() const;
    bool screenEnabled() const;

    void setScreenIndex(const quint8 screenIndex);
    void setFieldCount(const quint8 fieldCount);
    void setLayout(const ExdLayout layout);
    void setScreenEnabled(const bool screenEnabled);

protected:
    /// \cond internal
    explicit ExdScreenConfigurationMessage(ExdScreenConfigurationMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(ExdScreenConfigurationMessage)
  //Q_DISABLE_COPY(ExdScreenConfigurationMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_EXDSCREENCONFIGURATIONMESSAGE_H
