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

#include "coursemessage.h"
#include "coursemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

CourseMessage::CourseMessage() : FitDataMessage(new CourseMessagePrivate(this))
{

}

Sport CourseMessage::sport() const
{
    Q_D(const CourseMessage);
    return d->sport;
}

QString CourseMessage::name() const
{
    Q_D(const CourseMessage);
    return d->name;
}

CourseCapabilities CourseMessage::capabilities() const
{
    Q_D(const CourseMessage);
    return d->capabilities;
}

SubSport CourseMessage::subSport() const
{
    Q_D(const CourseMessage);
    return d->subSport;
}

void CourseMessage::setSport(const Sport sport)
{
    Q_D(CourseMessage);
    d->sport = sport;
}
void CourseMessage::setName(const QString name)
{
    Q_D(CourseMessage);
    d->name = name;
}
void CourseMessage::setCapabilities(const CourseCapabilities capabilities)
{
    Q_D(CourseMessage);
    d->capabilities = capabilities;
}
void CourseMessage::setSubSport(const SubSport subSport)
{
    Q_D(CourseMessage);
    d->subSport = subSport;
}

CourseMessagePrivate::CourseMessagePrivate(CourseMessage * const q)
  : FitDataMessagePrivate(q)
  , sport(static_cast<Sport>(-1))
  , capabilities(static_cast<CourseCapabilities>(-1))
  , subSport(static_cast<SubSport>(-1))
{
    globalMessageNumber = MesgNum::Course;
}

CourseMessagePrivate::~CourseMessagePrivate()
{

}

bool CourseMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 4: // See Profile.xlsx::Messages:course.sport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "course.sport")) return false;
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:course.name
        if (!verify(data, baseType, 1, FitBaseType::String, "course.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    case 6: // See Profile.xlsx::Messages:course.capabilities
        if (!verify(data, baseType, 4, FitBaseType::Uint32z, "course.capabilities")) return false;
        this->capabilities = static_cast<CourseCapabilities>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 7: // See Profile.xlsx::Messages:course.subSport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "course.subSport")) return false;
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    default:
        qWarning() << "unknown course message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
