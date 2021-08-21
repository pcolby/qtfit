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

#include "climbpromessage.h"
#include "climbpromessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

ClimbProMessage::ClimbProMessage() : FitDataMessage(new ClimbProMessagePrivate(this))
{

}

DateTime ClimbProMessage::timestamp() const
{
    Q_D(const ClimbProMessage);
    return d->timestamp;
}

qint32 ClimbProMessage::positionLat() const
{
    Q_D(const ClimbProMessage);
    return d->positionLat;
}

qint32 ClimbProMessage::positionLong() const
{
    Q_D(const ClimbProMessage);
    return d->positionLong;
}

ClimbProEvent ClimbProMessage::climbProEvent() const
{
    Q_D(const ClimbProMessage);
    return d->climbProEvent;
}

quint16 ClimbProMessage::climbNumber() const
{
    Q_D(const ClimbProMessage);
    return d->climbNumber;
}

quint8 ClimbProMessage::climbCategory() const
{
    Q_D(const ClimbProMessage);
    return d->climbCategory;
}

float ClimbProMessage::currentDist() const
{
    Q_D(const ClimbProMessage);
    return d->currentDist;
}

void ClimbProMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(ClimbProMessage);
    d->timestamp = timestamp;
}
void ClimbProMessage::setPositionLat(const qint32 positionLat)
{
    Q_D(ClimbProMessage);
    d->positionLat = positionLat;
}
void ClimbProMessage::setPositionLong(const qint32 positionLong)
{
    Q_D(ClimbProMessage);
    d->positionLong = positionLong;
}
void ClimbProMessage::setClimbProEvent(const ClimbProEvent climbProEvent)
{
    Q_D(ClimbProMessage);
    d->climbProEvent = climbProEvent;
}
void ClimbProMessage::setClimbNumber(const quint16 climbNumber)
{
    Q_D(ClimbProMessage);
    d->climbNumber = climbNumber;
}
void ClimbProMessage::setClimbCategory(const quint8 climbCategory)
{
    Q_D(ClimbProMessage);
    d->climbCategory = climbCategory;
}
void ClimbProMessage::setCurrentDist(const float currentDist)
{
    Q_D(ClimbProMessage);
    d->currentDist = currentDist;
}

ClimbProMessagePrivate::ClimbProMessagePrivate(ClimbProMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , positionLat(0x7FFFFFFF)
  , positionLong(0x7FFFFFFF)
  , climbProEvent(static_cast<ClimbProEvent>(-1))
  , climbNumber(0xFFFF)
  , climbCategory(0xFF)
  , currentDist(static_cast<float>(-1))
{
    globalMessageNumber = MesgNum::ClimbPro;
}

ClimbProMessagePrivate::~ClimbProMessagePrivate()
{

}

bool ClimbProMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:climb_pro.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "climb_pro.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "climb_pro.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:climb_pro.positionLat
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "climb_pro.positionLat has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "climb_pro.positionLat size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->positionLat = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 1: // See Profile.xlsx::Messages:climb_pro.positionLong
        if (baseType != FitBaseType::Sint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "climb_pro.positionLong has base type" << static_cast<int>(baseType) << "but should be Sint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "climb_pro.positionLong size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->positionLong = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 2: // See Profile.xlsx::Messages:climb_pro.climbProEvent
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "climb_pro.climbProEvent has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "climb_pro.climbProEvent size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->climbProEvent = static_cast<ClimbProEvent>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:climb_pro.climbNumber
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "climb_pro.climbNumber has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "climb_pro.climbNumber size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->climbNumber = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 4: // See Profile.xlsx::Messages:climb_pro.climbCategory
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "climb_pro.climbCategory has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "climb_pro.climbCategory size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->climbCategory = static_cast<quint8>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:climb_pro.currentDist
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "climb_pro.currentDist has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "climb_pro.currentDist size is" << data.size() << "but should be" << 4;
            return false;
        }
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->currentDist) == 4, "src and dst not the same size");
            memcpy(&this->currentDist, &localEndian, data.size());
        }
        #else
        this->currentDist = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    default:
        qWarning() << "unknown climb_pro message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
