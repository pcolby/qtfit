// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the CourseMessage class.
 */

#ifndef QTFIT_COURSEMESSAGE_H
#define QTFIT_COURSEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class CourseMessagePrivate;

class QTFIT_EXPORT CourseMessage : public AbstractDataMessage {

public:
    CourseMessage();
    ~CourseMessage();

    Sport sport() const;
    QString name() const;
    CourseCapabilities capabilities() const;
    SubSport subSport() const;

    void setSport(const Sport sport);
    void setName(const QString name);
    void setCapabilities(const CourseCapabilities capabilities);
    void setSubSport(const SubSport subSport);

protected:
    /// \cond internal
    explicit CourseMessage(CourseMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(CourseMessage)
  //Q_DISABLE_COPY(CourseMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_COURSEMESSAGE_H
