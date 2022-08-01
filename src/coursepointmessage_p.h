// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the CoursePointMessagePrivate class.
 */
#ifndef QTFIT_COURSEPOINTMESSAGE_P_H
#define QTFIT_COURSEPOINTMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class CoursePointMessage;

class CoursePointMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The CoursePointMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The CoursePointMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The CoursePointMessage FIT message's positionLat field.
     */
    qint32 positionLat;

    /*!
     * The CoursePointMessage FIT message's positionLong field.
     */
    qint32 positionLong;

    /*!
     * The CoursePointMessage FIT message's distance field.
     */
    quint32 distance;

    /*!
     * The CoursePointMessage FIT message's type field.
     */
    CoursePoint type;

    /*!
     * The CoursePointMessage FIT message's name field.
     */
    QString name;

    /*!
     * The CoursePointMessage FIT message's favorite field.
     */
    bool favorite;

    CoursePointMessagePrivate() = delete;
    explicit CoursePointMessagePrivate(CoursePointMessage * const q);
    virtual ~CoursePointMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(CoursePointMessage)
    Q_DISABLE_COPY(CoursePointMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_COURSEPOINTMESSAGE_P_H
