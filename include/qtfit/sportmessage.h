// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the SportMessage class.
 */

#ifndef QTFIT_SPORTMESSAGE_H
#define QTFIT_SPORTMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class SportMessagePrivate;

class QTFIT_EXPORT SportMessage : public AbstractDataMessage {

public:
    SportMessage();
    ~SportMessage();

    Sport sport() const;
    SubSport subSport() const;
    QString name() const;

    void setSport(const Sport sport);
    void setSubSport(const SubSport subSport);
    void setName(const QString name);

protected:
    /// \cond internal
    explicit SportMessage(SportMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(SportMessage)
  //Q_DISABLE_COPY(SportMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_SPORTMESSAGE_H
