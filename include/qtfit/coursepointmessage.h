// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the CoursePointMessage class.
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
