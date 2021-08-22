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

#include "divesettingsmessage.h"
#include "divesettingsmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

DiveSettingsMessage::DiveSettingsMessage() : FitDataMessage(new DiveSettingsMessagePrivate(this))
{

}

MessageIndex DiveSettingsMessage::messageIndex() const
{
    Q_D(const DiveSettingsMessage);
    return d->messageIndex;
}

QString DiveSettingsMessage::name() const
{
    Q_D(const DiveSettingsMessage);
    return d->name;
}

TissueModelType DiveSettingsMessage::model() const
{
    Q_D(const DiveSettingsMessage);
    return d->model;
}

quint8 DiveSettingsMessage::gfLow() const
{
    Q_D(const DiveSettingsMessage);
    return d->gfLow;
}

quint8 DiveSettingsMessage::gfHigh() const
{
    Q_D(const DiveSettingsMessage);
    return d->gfHigh;
}

WaterType DiveSettingsMessage::waterType() const
{
    Q_D(const DiveSettingsMessage);
    return d->waterType;
}

float DiveSettingsMessage::waterDensity() const
{
    Q_D(const DiveSettingsMessage);
    return d->waterDensity;
}

quint8 DiveSettingsMessage::po2Warn() const
{
    Q_D(const DiveSettingsMessage);
    return d->po2Warn;
}

quint8 DiveSettingsMessage::po2Critical() const
{
    Q_D(const DiveSettingsMessage);
    return d->po2Critical;
}

quint8 DiveSettingsMessage::po2Deco() const
{
    Q_D(const DiveSettingsMessage);
    return d->po2Deco;
}

bool DiveSettingsMessage::safetyStopEnabled() const
{
    Q_D(const DiveSettingsMessage);
    return d->safetyStopEnabled;
}

float DiveSettingsMessage::bottomDepth() const
{
    Q_D(const DiveSettingsMessage);
    return d->bottomDepth;
}

quint32 DiveSettingsMessage::bottomTime() const
{
    Q_D(const DiveSettingsMessage);
    return d->bottomTime;
}

bool DiveSettingsMessage::apneaCountdownEnabled() const
{
    Q_D(const DiveSettingsMessage);
    return d->apneaCountdownEnabled;
}

quint32 DiveSettingsMessage::apneaCountdownTime() const
{
    Q_D(const DiveSettingsMessage);
    return d->apneaCountdownTime;
}

DiveBacklightMode DiveSettingsMessage::backlightMode() const
{
    Q_D(const DiveSettingsMessage);
    return d->backlightMode;
}

quint8 DiveSettingsMessage::backlightBrightness() const
{
    Q_D(const DiveSettingsMessage);
    return d->backlightBrightness;
}

BacklightTimeout DiveSettingsMessage::backlightTimeout() const
{
    Q_D(const DiveSettingsMessage);
    return d->backlightTimeout;
}

quint16 DiveSettingsMessage::repeatDiveInterval() const
{
    Q_D(const DiveSettingsMessage);
    return d->repeatDiveInterval;
}

quint16 DiveSettingsMessage::safetyStopTime() const
{
    Q_D(const DiveSettingsMessage);
    return d->safetyStopTime;
}

SourceType DiveSettingsMessage::heartRateSourceType() const
{
    Q_D(const DiveSettingsMessage);
    return d->heartRateSourceType;
}

quint8 DiveSettingsMessage::heartRateSource() const
{
    Q_D(const DiveSettingsMessage);
    return d->heartRateSource;
}

void DiveSettingsMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(DiveSettingsMessage);
    d->messageIndex = messageIndex;
}
void DiveSettingsMessage::setName(const QString name)
{
    Q_D(DiveSettingsMessage);
    d->name = name;
}
void DiveSettingsMessage::setModel(const TissueModelType model)
{
    Q_D(DiveSettingsMessage);
    d->model = model;
}
void DiveSettingsMessage::setGfLow(const quint8 gfLow)
{
    Q_D(DiveSettingsMessage);
    d->gfLow = gfLow;
}
void DiveSettingsMessage::setGfHigh(const quint8 gfHigh)
{
    Q_D(DiveSettingsMessage);
    d->gfHigh = gfHigh;
}
void DiveSettingsMessage::setWaterType(const WaterType waterType)
{
    Q_D(DiveSettingsMessage);
    d->waterType = waterType;
}
void DiveSettingsMessage::setWaterDensity(const float waterDensity)
{
    Q_D(DiveSettingsMessage);
    d->waterDensity = waterDensity;
}
void DiveSettingsMessage::setPo2Warn(const quint8 po2Warn)
{
    Q_D(DiveSettingsMessage);
    d->po2Warn = po2Warn;
}
void DiveSettingsMessage::setPo2Critical(const quint8 po2Critical)
{
    Q_D(DiveSettingsMessage);
    d->po2Critical = po2Critical;
}
void DiveSettingsMessage::setPo2Deco(const quint8 po2Deco)
{
    Q_D(DiveSettingsMessage);
    d->po2Deco = po2Deco;
}
void DiveSettingsMessage::setSafetyStopEnabled(const bool safetyStopEnabled)
{
    Q_D(DiveSettingsMessage);
    d->safetyStopEnabled = safetyStopEnabled;
}
void DiveSettingsMessage::setBottomDepth(const float bottomDepth)
{
    Q_D(DiveSettingsMessage);
    d->bottomDepth = bottomDepth;
}
void DiveSettingsMessage::setBottomTime(const quint32 bottomTime)
{
    Q_D(DiveSettingsMessage);
    d->bottomTime = bottomTime;
}
void DiveSettingsMessage::setApneaCountdownEnabled(const bool apneaCountdownEnabled)
{
    Q_D(DiveSettingsMessage);
    d->apneaCountdownEnabled = apneaCountdownEnabled;
}
void DiveSettingsMessage::setApneaCountdownTime(const quint32 apneaCountdownTime)
{
    Q_D(DiveSettingsMessage);
    d->apneaCountdownTime = apneaCountdownTime;
}
void DiveSettingsMessage::setBacklightMode(const DiveBacklightMode backlightMode)
{
    Q_D(DiveSettingsMessage);
    d->backlightMode = backlightMode;
}
void DiveSettingsMessage::setBacklightBrightness(const quint8 backlightBrightness)
{
    Q_D(DiveSettingsMessage);
    d->backlightBrightness = backlightBrightness;
}
void DiveSettingsMessage::setBacklightTimeout(const BacklightTimeout backlightTimeout)
{
    Q_D(DiveSettingsMessage);
    d->backlightTimeout = backlightTimeout;
}
void DiveSettingsMessage::setRepeatDiveInterval(const quint16 repeatDiveInterval)
{
    Q_D(DiveSettingsMessage);
    d->repeatDiveInterval = repeatDiveInterval;
}
void DiveSettingsMessage::setSafetyStopTime(const quint16 safetyStopTime)
{
    Q_D(DiveSettingsMessage);
    d->safetyStopTime = safetyStopTime;
}
void DiveSettingsMessage::setHeartRateSourceType(const SourceType heartRateSourceType)
{
    Q_D(DiveSettingsMessage);
    d->heartRateSourceType = heartRateSourceType;
}
void DiveSettingsMessage::setHeartRateSource(const quint8 heartRateSource)
{
    Q_D(DiveSettingsMessage);
    d->heartRateSource = heartRateSource;
}

DiveSettingsMessagePrivate::DiveSettingsMessagePrivate(DiveSettingsMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , model(static_cast<TissueModelType>(-1))
  , gfLow(0xFF)
  , gfHigh(0xFF)
  , waterType(static_cast<WaterType>(-1))
  , waterDensity(static_cast<float>(-1))
  , po2Warn(0xFF)
  , po2Critical(0xFF)
  , po2Deco(0xFF)
  , safetyStopEnabled(static_cast<bool>(-1))
  , bottomDepth(static_cast<float>(-1))
  , bottomTime(0xFFFFFFFF)
  , apneaCountdownEnabled(static_cast<bool>(-1))
  , apneaCountdownTime(0xFFFFFFFF)
  , backlightMode(static_cast<DiveBacklightMode>(-1))
  , backlightBrightness(0xFF)
  , backlightTimeout(static_cast<BacklightTimeout>(-1))
  , repeatDiveInterval(0xFFFF)
  , safetyStopTime(0xFFFF)
  , heartRateSourceType(static_cast<SourceType>(-1))
  , heartRateSource(0xFF)
{
    globalMessageNumber = MesgNum::DiveSettings;
}

DiveSettingsMessagePrivate::~DiveSettingsMessagePrivate()
{

}

bool DiveSettingsMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:dive_settings.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_settings.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:dive_settings.name
        if (!verify(data, baseType, 1, FitBaseType::String, "dive_settings.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:dive_settings.model
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_settings.model")) return false;
        this->model = static_cast<TissueModelType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:dive_settings.gfLow
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.gfLow")) return false;
        this->gfLow = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:dive_settings.gfHigh
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.gfHigh")) return false;
        this->gfHigh = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:dive_settings.waterType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_settings.waterType")) return false;
        this->waterType = static_cast<WaterType>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:dive_settings.waterDensity
        if (!verify(data, baseType, 4, FitBaseType::Float32, "dive_settings.waterDensity")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->waterDensity) == 4, "src and dst not the same size");
            memcpy(&this->waterDensity, &localEndian, data.size());
        }
        #else
        this->waterDensity = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 6: // See Profile.xlsx::Messages:dive_settings.po2Warn
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.po2Warn")) return false;
        this->po2Warn = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:dive_settings.po2Critical
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.po2Critical")) return false;
        this->po2Critical = static_cast<quint8>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:dive_settings.po2Deco
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.po2Deco")) return false;
        this->po2Deco = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:dive_settings.safetyStopEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "dive_settings.safetyStopEnabled")) return false;
        this->safetyStopEnabled = static_cast<bool>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:dive_settings.bottomDepth
        if (!verify(data, baseType, 4, FitBaseType::Float32, "dive_settings.bottomDepth")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->bottomDepth) == 4, "src and dst not the same size");
            memcpy(&this->bottomDepth, &localEndian, data.size());
        }
        #else
        this->bottomDepth = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 11: // See Profile.xlsx::Messages:dive_settings.bottomTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_settings.bottomTime")) return false;
        this->bottomTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 12: // See Profile.xlsx::Messages:dive_settings.apneaCountdownEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "dive_settings.apneaCountdownEnabled")) return false;
        this->apneaCountdownEnabled = static_cast<bool>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:dive_settings.apneaCountdownTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_settings.apneaCountdownTime")) return false;
        this->apneaCountdownTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 14: // See Profile.xlsx::Messages:dive_settings.backlightMode
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_settings.backlightMode")) return false;
        this->backlightMode = static_cast<DiveBacklightMode>(data.at(0));
        break;
    case 15: // See Profile.xlsx::Messages:dive_settings.backlightBrightness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.backlightBrightness")) return false;
        this->backlightBrightness = static_cast<quint8>(data.at(0));
        break;
    case 16: // See Profile.xlsx::Messages:dive_settings.backlightTimeout
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.backlightTimeout")) return false;
        this->backlightTimeout = static_cast<BacklightTimeout>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:dive_settings.repeatDiveInterval
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_settings.repeatDiveInterval")) return false;
        this->repeatDiveInterval = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 18: // See Profile.xlsx::Messages:dive_settings.safetyStopTime
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_settings.safetyStopTime")) return false;
        this->safetyStopTime = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 19: // See Profile.xlsx::Messages:dive_settings.heartRateSourceType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_settings.heartRateSourceType")) return false;
        this->heartRateSourceType = static_cast<SourceType>(data.at(0));
        break;
    case 20: // See Profile.xlsx::Messages:dive_settings.heartRateSource
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.heartRateSource")) return false;
        this->heartRateSource = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown dive_settings message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
