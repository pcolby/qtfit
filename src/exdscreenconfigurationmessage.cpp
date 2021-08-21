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

bool ExdScreenConfigurationMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:exd_screen_configuration.screenIndex
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_screen_configuration.screenIndex has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_screen_configuration.screenIndex size is" << data.size() << "but should be" << 1;
            return false;
        }
        screenIndex = static_cast<quint8>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:exd_screen_configuration.fieldCount
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_screen_configuration.fieldCount has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_screen_configuration.fieldCount size is" << data.size() << "but should be" << 1;
            return false;
        }
        fieldCount = static_cast<quint8>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:exd_screen_configuration.layout
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_screen_configuration.layout has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "exd_screen_configuration.layout size is" << data.size() << "but should be" << 1;
            return false;
        }
        layout = static_cast<ExdLayout>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:exd_screen_configuration.screenEnabled
        if (baseType != FitBaseType::Bool) {
            /// \todo Add toString function for baseType.
            qWarning() << "exd_screen_configuration.screenEnabled has base type" << static_cast<int>(baseType) << "but should be Bool";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "exd_screen_configuration.screenEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        screenEnabled = static_cast<bool>(bigEndian ? qFromBigEndian<bool>(data) : qFromLittleEndian<bool>(data));
        break;
    default:
        qWarning() << "unknown exd_screen_configuration message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
