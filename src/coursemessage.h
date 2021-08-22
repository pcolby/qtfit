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
    /// @cond internal
    explicit CourseMessage(CourseMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(CourseMessage)
  //Q_DISABLE_COPY(CourseMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_COURSEMESSAGE_H
