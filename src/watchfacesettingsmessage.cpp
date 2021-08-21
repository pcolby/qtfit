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

#include "watchfacesettingsmessage.h"
#include "watchfacesettingsmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

WatchfaceSettingsMessage::WatchfaceSettingsMessage() : FitDataMessage(new WatchfaceSettingsMessagePrivate(this))
{

}

MessageIndex WatchfaceSettingsMessage::messageIndex() const
{
    Q_D(const WatchfaceSettingsMessage);
    return d->messageIndex;
}

WatchfaceMode WatchfaceSettingsMessage::mode() const
{
    Q_D(const WatchfaceSettingsMessage);
    return d->mode;
}

quint8 WatchfaceSettingsMessage::layout() const
{
    Q_D(const WatchfaceSettingsMessage);
    return d->layout;
}

void WatchfaceSettingsMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(WatchfaceSettingsMessage);
    d->messageIndex = messageIndex;
}
void WatchfaceSettingsMessage::setMode(const WatchfaceMode mode)
{
    Q_D(WatchfaceSettingsMessage);
    d->mode = mode;
}
void WatchfaceSettingsMessage::setLayout(const quint8 layout)
{
    Q_D(WatchfaceSettingsMessage);
    d->layout = layout;
}

WatchfaceSettingsMessagePrivate::WatchfaceSettingsMessagePrivate(WatchfaceSettingsMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , mode(static_cast<WatchfaceMode>(-1))
  , layout(0xFF)
{
    globalMessageNumber = MesgNum::WatchfaceSettings;
}

WatchfaceSettingsMessagePrivate::~WatchfaceSettingsMessagePrivate()
{

}

bool WatchfaceSettingsMessagePrivate::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:watchface_settings.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "watchface_settings.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "watchface_settings.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:watchface_settings.mode
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "watchface_settings.mode has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "watchface_settings.mode size is" << data.size() << "but should be" << 1;
            return false;
        }
        mode = static_cast<WatchfaceMode>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:watchface_settings.layout
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "watchface_settings.layout has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "watchface_settings.layout size is" << data.size() << "but should be" << 1;
            return false;
        }
        layout = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown watchface_settings message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
