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

bool CourseMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 4: // See Profile.xlsx::Messages:course.sport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "course.sport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "course.sport size is" << data.size() << "but should be" << 1;
            return false;
        }
        sport = static_cast<Sport>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:course.name
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "course.name has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "course.name size is" << data.size() << "but should be" << 1;
            return false;
        }
        name = QString::fromUtf8(data);
        break;
    case 6: // See Profile.xlsx::Messages:course.capabilities
        if (baseType != FitBaseType::Uint32z) {
            /// \todo Add toString function for baseType.
            qWarning() << "course.capabilities has base type" << static_cast<int>(baseType) << "but should be Uint32z";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "course.capabilities size is" << data.size() << "but should be" << 4;
            return false;
        }
        capabilities = static_cast<CourseCapabilities>(bigEndian ? qFromBigEndian<CourseCapabilities>(data) : qFromLittleEndian<CourseCapabilities>(data));
        break;
    case 7: // See Profile.xlsx::Messages:course.subSport
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "course.subSport has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "course.subSport size is" << data.size() << "but should be" << 1;
            return false;
        }
        subSport = static_cast<SubSport>(data.at(0));
        break;
    default:
        qWarning() << "unknown course message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
