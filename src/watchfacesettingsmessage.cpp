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
 * Defines the WatchfaceSettingsMessage, and WatchfaceSettingsMessagePrivate classes.
 */

#include "watchfacesettingsmessage.h"
#include "watchfacesettingsmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class WatchfaceSettingsMessage
 *
 * The WatchfaceSettingsMessage class represents a FIT WatchfaceSettingsMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a WatchfaceSettingsMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
WatchfaceSettingsMessage::WatchfaceSettingsMessage() : AbstractDataMessage(new WatchfaceSettingsMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a WatchfaceSettingsMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
WatchfaceSettingsMessage::WatchfaceSettingsMessage(WatchfaceSettingsMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the WatchfaceSettingsMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex WatchfaceSettingsMessage::messageIndex() const
{
    Q_D(const WatchfaceSettingsMessage);
    return d->messageIndex;
}

/*!
 * Returns the WatchfaceSettingsMessage data message's \c mode field's current value.
 *
 * \return the \c mode field value.
 */
WatchfaceMode WatchfaceSettingsMessage::mode() const
{
    Q_D(const WatchfaceSettingsMessage);
    return d->mode;
}

/*!
 * Returns the WatchfaceSettingsMessage data message's \c layout field's current value.
 *
 * \return the \c layout field value.
 */
quint8 WatchfaceSettingsMessage::layout() const
{
    Q_D(const WatchfaceSettingsMessage);
    return d->layout;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void WatchfaceSettingsMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(WatchfaceSettingsMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c mode field to \a mode.
 *
 * \param mode The field value to set.
 */
void WatchfaceSettingsMessage::setMode(const WatchfaceMode mode)
{
    Q_D(WatchfaceSettingsMessage);
    d->mode = mode;
}
/*!
 * Sets the \c layout field to \a layout.
 *
 * \param layout The field value to set.
 */
void WatchfaceSettingsMessage::setLayout(const quint8 layout)
{
    Q_D(WatchfaceSettingsMessage);
    d->layout = layout;
}

/// \cond internal

/*!
 * \internal
 *
 * \class WatchfaceSettingsMessagePrivate
 *
 * The WatchfaceSettingsMessagePrivate class provides private implementation for the WatchfaceSettingsMessage.
 *
 * \sa WatchfaceSettingsMessage
 */

/*!
 * \internal
 *
 * Constructs a WatchfaceSettingsMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
WatchfaceSettingsMessagePrivate::WatchfaceSettingsMessagePrivate(WatchfaceSettingsMessage * const q)
  : AbstractDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , mode(static_cast<WatchfaceMode>(-1))
  , layout(0xFF)
{
    globalMessageNumber = MesgNum::WatchfaceSettings;
}

/*!
 * \internal
 *
 * Destroys the WatchfaceSettingsMessagePrivate object.
 */
WatchfaceSettingsMessagePrivate::~WatchfaceSettingsMessagePrivate()
{

}

bool WatchfaceSettingsMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:watchface_settings.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "watchface_settings.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:watchface_settings.mode
        if (!verify(data, baseType, 1, FitBaseType::Enum, "watchface_settings.mode")) return false;
        this->mode = static_cast<WatchfaceMode>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:watchface_settings.layout
        if (!verify(data, baseType, 1, FitBaseType::Byte, "watchface_settings.layout")) return false;
        this->layout = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown watchface_settings message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
