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

#include "exdscreenconfigurationmessage.h"
#include "exdscreenconfigurationmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

ExdScreenConfigurationMessage::ExdScreenConfigurationMessage() : FitDataMessage(new ExdScreenConfigurationMessagePrivate(this))
{

}

quint8 ExdScreenConfigurationMessage::screenIndex() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->screenIndex;
}

quint8 ExdScreenConfigurationMessage::fieldCount() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->fieldCount;
}

ExdLayout ExdScreenConfigurationMessage::layout() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->layout;
}

bool ExdScreenConfigurationMessage::screenEnabled() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->screenEnabled;
}

void ExdScreenConfigurationMessage::setScreenIndex(const quint8 screenIndex)
{
    Q_D(ExdScreenConfigurationMessage);
    d->screenIndex = screenIndex;
}
void ExdScreenConfigurationMessage::setFieldCount(const quint8 fieldCount)
{
    Q_D(ExdScreenConfigurationMessage);
    d->fieldCount = fieldCount;
}
void ExdScreenConfigurationMessage::setLayout(const ExdLayout layout)
{
    Q_D(ExdScreenConfigurationMessage);
    d->layout = layout;
}
void ExdScreenConfigurationMessage::setScreenEnabled(const bool screenEnabled)
{
    Q_D(ExdScreenConfigurationMessage);
    d->screenEnabled = screenEnabled;
}

ExdScreenConfigurationMessagePrivate::ExdScreenConfigurationMessagePrivate(ExdScreenConfigurationMessage * const q)
  : FitDataMessagePrivate(q)
  , screenIndex(0xFF)
  , fieldCount(0xFF)
  , layout(static_cast<ExdLayout>(-1))
  , screenEnabled(static_cast<bool>(-1))
{
    globalMessageNumber = MesgNum::ExdScreenConfiguration;
}

ExdScreenConfigurationMessagePrivate::~ExdScreenConfigurationMessagePrivate()
{

}

bool ExdScreenConfigurationMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:exd_screen_configuration.screenIndex
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_screen_configuration.screenIndex")) return false;
        this->screenIndex = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:exd_screen_configuration.fieldCount
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "exd_screen_configuration.fieldCount")) return false;
        this->fieldCount = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:exd_screen_configuration.layout
        if (!verify(data, baseType, 1, FitBaseType::Enum, "exd_screen_configuration.layout")) return false;
        this->layout = static_cast<ExdLayout>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:exd_screen_configuration.screenEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "exd_screen_configuration.screenEnabled")) return false;
        this->screenEnabled = static_cast<bool>(data.at(0));
        break;
    default:
        qWarning() << "unknown exd_screen_configuration message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
