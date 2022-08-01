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

/*!
 * \file
 * Defines the ExdScreenConfigurationMessage, and ExdScreenConfigurationMessagePrivate classes.
 */

#include <qtfit/exdscreenconfigurationmessage.h>
#include "exdscreenconfigurationmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class ExdScreenConfigurationMessage
 *
 * The ExdScreenConfigurationMessage class represents a FIT ExdScreenConfigurationMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a ExdScreenConfigurationMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
ExdScreenConfigurationMessage::ExdScreenConfigurationMessage() : AbstractDataMessage(new ExdScreenConfigurationMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a ExdScreenConfigurationMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
ExdScreenConfigurationMessage::ExdScreenConfigurationMessage(ExdScreenConfigurationMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the ExdScreenConfigurationMessage data message's \c screenIndex field's current value.
 *
 * \return the \c screenIndex field value.
 */
quint8 ExdScreenConfigurationMessage::screenIndex() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->screenIndex;
}

/*!
 * Returns the ExdScreenConfigurationMessage data message's \c fieldCount field's current value.
 *
 * number of fields in screen
 *
 * \return the \c fieldCount field value.
 */
quint8 ExdScreenConfigurationMessage::fieldCount() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->fieldCount;
}

/*!
 * Returns the ExdScreenConfigurationMessage data message's \c layout field's current value.
 *
 * \return the \c layout field value.
 */
ExdLayout ExdScreenConfigurationMessage::layout() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->layout;
}

/*!
 * Returns the ExdScreenConfigurationMessage data message's \c screenEnabled field's current value.
 *
 * \return the \c screenEnabled field value.
 */
bool ExdScreenConfigurationMessage::screenEnabled() const
{
    Q_D(const ExdScreenConfigurationMessage);
    return d->screenEnabled;
}

/*!
 * Sets the \c screenIndex field to \a screenIndex.
 *
 * \param screenIndex The field value to set.
 */
void ExdScreenConfigurationMessage::setScreenIndex(const quint8 screenIndex)
{
    Q_D(ExdScreenConfigurationMessage);
    d->screenIndex = screenIndex;
}
/*!
 * Sets the \c fieldCount field to \a fieldCount.
 *
 * \param fieldCount The field value to set.
 */
void ExdScreenConfigurationMessage::setFieldCount(const quint8 fieldCount)
{
    Q_D(ExdScreenConfigurationMessage);
    d->fieldCount = fieldCount;
}
/*!
 * Sets the \c layout field to \a layout.
 *
 * \param layout The field value to set.
 */
void ExdScreenConfigurationMessage::setLayout(const ExdLayout layout)
{
    Q_D(ExdScreenConfigurationMessage);
    d->layout = layout;
}
/*!
 * Sets the \c screenEnabled field to \a screenEnabled.
 *
 * \param screenEnabled The field value to set.
 */
void ExdScreenConfigurationMessage::setScreenEnabled(const bool screenEnabled)
{
    Q_D(ExdScreenConfigurationMessage);
    d->screenEnabled = screenEnabled;
}

/// \cond internal

/*!
 * \internal
 *
 * \class ExdScreenConfigurationMessagePrivate
 *
 * The ExdScreenConfigurationMessagePrivate class provides private implementation for the ExdScreenConfigurationMessage.
 *
 * \sa ExdScreenConfigurationMessage
 */

/*!
 * \internal
 *
 * Constructs a ExdScreenConfigurationMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
ExdScreenConfigurationMessagePrivate::ExdScreenConfigurationMessagePrivate(ExdScreenConfigurationMessage * const q)
  : AbstractDataMessagePrivate(q)
  , screenIndex(0xFF)
  , fieldCount(0xFF)
  , layout(static_cast<ExdLayout>(-1))
  , screenEnabled(static_cast<bool>(-1))
{
    globalMessageNumber = MesgNum::ExdScreenConfiguration;
}

/*!
 * \internal
 *
 * Destroys the ExdScreenConfigurationMessagePrivate object.
 */
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
        qWarning() << "ignoring unknown exd_screen_configuration message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
