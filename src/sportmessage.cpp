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

SportMessage::SportMessage() : FitDataMessage(new SportMessagePrivate(this))
{

}

Sport SportMessage::sport() const
{
    Q_D(const SportMessage);
    return d->sport;
}

SubSport SportMessage::subSport() const
{
    Q_D(const SportMessage);
    return d->subSport;
}

QString SportMessage::name() const
{
    Q_D(const SportMessage);
    return d->name;
}

void SportMessage::setSport(const Sport sport)
{
    Q_D(SportMessage);
    d->sport = sport;
}
void SportMessage::setSubSport(const SubSport subSport)
{
    Q_D(SportMessage);
    d->subSport = subSport;
}
void SportMessage::setName(const QString name)
{
    Q_D(SportMessage);
    d->name = name;
}

SportMessagePrivate::SportMessagePrivate(SportMessage * const q)
  : FitDataMessagePrivate(q)
  , sport(static_cast<Sport>(-1))
  , subSport(static_cast<SubSport>(-1))
{
    globalMessageNumber = MesgNum::Sport;
}

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
        qWarning() << "unknown sport message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
