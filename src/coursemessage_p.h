// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the CourseMessagePrivate class.
 */
#ifndef QTFIT_COURSEMESSAGE_P_H
#define QTFIT_COURSEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class CourseMessage;

class CourseMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The CourseMessage FIT message's sport field.
     */
    Sport sport;

    /*!
     * The CourseMessage FIT message's name field.
     */
    QString name;

    /*!
     * The CourseMessage FIT message's capabilities field.
     */
    CourseCapabilities capabilities;

    /*!
     * The CourseMessage FIT message's subSport field.
     */
    SubSport subSport;

    CourseMessagePrivate() = delete;
    explicit CourseMessagePrivate(CourseMessage * const q);
    virtual ~CourseMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(CourseMessage)
    Q_DISABLE_COPY(CourseMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_COURSEMESSAGE_P_H
