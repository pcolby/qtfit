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

/*!
 * \class CourseMessage
 *
 * The CourseMessage class represents a FIT CourseMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid CourseMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
CourseMessage::CourseMessage() : AbstractDataMessage(new CourseMessagePrivate(this))
{

}

/*!
 * Returns the CourseMessage data message's \c sport field's current value.
 *
 * \return the \c sport field value.
 */
Sport CourseMessage::sport() const
{
    Q_D(const CourseMessage);
    return d->sport;
}

/*!
 * Returns the CourseMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString CourseMessage::name() const
{
    Q_D(const CourseMessage);
    return d->name;
}

/*!
 * Returns the CourseMessage data message's \c capabilities field's current value.
 *
 * \return the \c capabilities field value.
 */
CourseCapabilities CourseMessage::capabilities() const
{
    Q_D(const CourseMessage);
    return d->capabilities;
}

/*!
 * Returns the CourseMessage data message's \c subSport field's current value.
 *
 * \return the \c subSport field value.
 */
SubSport CourseMessage::subSport() const
{
    Q_D(const CourseMessage);
    return d->subSport;
}

/*!
 * Sets the \c sport field to \a sport.
 *
 * \param sport The field value to set.
 */
void CourseMessage::setSport(const Sport sport)
{
    Q_D(CourseMessage);
    d->sport = sport;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void CourseMessage::setName(const QString name)
{
    Q_D(CourseMessage);
    d->name = name;
}
/*!
 * Sets the \c capabilities field to \a capabilities.
 *
 * \param capabilities The field value to set.
 */
void CourseMessage::setCapabilities(const CourseCapabilities capabilities)
{
    Q_D(CourseMessage);
    d->capabilities = capabilities;
}
/*!
 * Sets the \c subSport field to \a subSport.
 *
 * \param subSport The field value to set.
 */
void CourseMessage::setSubSport(const SubSport subSport)
{
    Q_D(CourseMessage);
    d->subSport = subSport;
}

/*!
 * \internal
 *
 * \class CourseMessagePrivate
 *
 * The CourseMessagePrivate class provides private implementation for the CourseMessage.
 *
 * \sa CourseMessage
 */

/*!
 * \internal
 *
 * Constructs a CourseMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
CourseMessagePrivate::CourseMessagePrivate(CourseMessage * const q)
  : AbstractDataMessagePrivate(q)
  , sport(static_cast<Sport>(-1))
  , capabilities(static_cast<CourseCapabilities>(-1))
  , subSport(static_cast<SubSport>(-1))
{
    globalMessageNumber = MesgNum::Course;
}

/*!
 * \internal
 *
 * Destroys the CourseMessagePrivate object.
 */
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
        return AbstractDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
