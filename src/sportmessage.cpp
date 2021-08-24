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

#include "sportmessage.h"
#include "sportmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class SportMessage
 *
 * The SportMessage class represents a FIT SportMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a SportMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SportMessage::SportMessage() : AbstractDataMessage(new SportMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a SportMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
SportMessage::SportMessage(SportMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the SportMessage data message's \c sport field's current value.
 *
 * \return the \c sport field value.
 */
Sport SportMessage::sport() const
{
    Q_D(const SportMessage);
    return d->sport;
}

/*!
 * Returns the SportMessage data message's \c subSport field's current value.
 *
 * \return the \c subSport field value.
 */
SubSport SportMessage::subSport() const
{
    Q_D(const SportMessage);
    return d->subSport;
}

/*!
 * Returns the SportMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString SportMessage::name() const
{
    Q_D(const SportMessage);
    return d->name;
}

/*!
 * Sets the \c sport field to \a sport.
 *
 * \param sport The field value to set.
 */
void SportMessage::setSport(const Sport sport)
{
    Q_D(SportMessage);
    d->sport = sport;
}
/*!
 * Sets the \c subSport field to \a subSport.
 *
 * \param subSport The field value to set.
 */
void SportMessage::setSubSport(const SubSport subSport)
{
    Q_D(SportMessage);
    d->subSport = subSport;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void SportMessage::setName(const QString name)
{
    Q_D(SportMessage);
    d->name = name;
}

/// \cond internal

/*!
 * \internal
 *
 * \class SportMessagePrivate
 *
 * The SportMessagePrivate class provides private implementation for the SportMessage.
 *
 * \sa SportMessage
 */

/*!
 * \internal
 *
 * Constructs a SportMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SportMessagePrivate::SportMessagePrivate(SportMessage * const q)
  : AbstractDataMessagePrivate(q)
  , sport(static_cast<Sport>(-1))
  , subSport(static_cast<SubSport>(-1))
{
    globalMessageNumber = MesgNum::Sport;
}

/*!
 * \internal
 *
 * Destroys the SportMessagePrivate object.
 */
SportMessagePrivate::~SportMessagePrivate()
{

}

bool SportMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:sport.sport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "sport.sport")) return false;
        this->sport = static_cast<Sport>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:sport.subSport
        if (!verify(data, baseType, 1, FitBaseType::Enum, "sport.subSport")) return false;
        this->subSport = static_cast<SubSport>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:sport.name
        if (!verify(data, baseType, 1, FitBaseType::String, "sport.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown sport message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
