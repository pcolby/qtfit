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

#ifndef QTFIT_COURSEPOINTMESSAGE_H
#define QTFIT_COURSEPOINTMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class CoursePointMessagePrivate;

class QTFIT_EXPORT CoursePointMessage : public AbstractDataMessage {

public:
    CoursePointMessage();
    ~CoursePointMessage();

    MessageIndex messageIndex() const;
    DateTime timestamp() const;
    qint32 positionLat() const;
    qint32 positionLong() const;
    quint32 distance() const;
    CoursePoint type() const;
    QString name() const;
    bool favorite() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setTimestamp(const DateTime timestamp);
    void setPositionLat(const qint32 positionLat);
    void setPositionLong(const qint32 positionLong);
    void setDistance(const quint32 distance);
    void setType(const CoursePoint type);
    void setName(const QString name);
    void setFavorite(const bool favorite);

protected:
    /// \cond internal
    explicit CoursePointMessage(CoursePointMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(CoursePointMessage)
  //Q_DISABLE_COPY(CoursePointMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_COURSEPOINTMESSAGE_H
